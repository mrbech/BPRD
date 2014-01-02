compile: CPar.fsy CLex.fsl Absyn.fs CPar.fs CLex.fs Parse.fs Machine.fs Comp.fs ParseAndComp.fs mcc.fs
	fsyacc.exe --module CPar CPar.fsy 
	fslex.exe --unicode CLex.fsl
	fsc.exe  Absyn.fs CPar.fs CLex.fs Parse.fs Machine.fs Comp.fs ParseAndComp.fs  mcc.fs -r /opt/FSharpPowerPack-4.0.0.0/bin/FSharp.PowerPack.dll
