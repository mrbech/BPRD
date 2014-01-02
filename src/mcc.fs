module mcc

open ParseAndComp
open Absyn
open Comp

[<EntryPoint>]
let main(args) =
    printf "%A" (tAccess (AccVar("x")) (((("x", ((Glovar 2),TypI) )::[], 2))) ([]))
    printf "%A" (compileToFile (fromFile args.[0]) args.[1])
    0;;

