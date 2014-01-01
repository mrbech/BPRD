compile:
	fsyacc.exe --module CPar CPar.fsy 
	fslex.exe --unicode CLex.fsl
	fsi.exe -r /opt/FSharpPowerPack-4.0.0.0/bin/FSharp.PowerPack.dll Absyn.fs CPar.fs CLex.fs Parse.fs Interp.fs ParseAndRun.fs 
