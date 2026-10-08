// roc 2007-03 004f3360  unit: seg_004f0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f3360
//
// 004f3360  8b442404             mov eax, dword ptr [esp + 4]
// 004f3364  8b0d7cad8b00         mov ecx, dword ptr [0x8bad7c]
// 004f336a  50                   push eax
// 004f336b  e8f0feffff           call 0x4f3260
// 004f3370  c3                   ret 
// library rbxgs-g3d/G3Dcpp\System.cpp (function ?free@System@G3D@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/System.cpp
