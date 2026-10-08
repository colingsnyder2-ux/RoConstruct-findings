// roc 2007-03 005f8840  unit: seg_005f0000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f8840
//
// 005f8840  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f8844  8b542404             mov edx, dword ptr [esp + 4]
// 005f8848  8d44240c             lea eax, [esp + 0xc]
// 005f884c  50                   push eax
// 005f884d  51                   push ecx
// 005f884e  52                   push edx
// 005f884f  e83cfdffff           call 0x5f8590
// 005f8854  83c40c               add esp, 0xc
// 005f8857  c3                   ret 
// library rbxgs-g3d/G3Dcpp\TextOutput.cpp (function ?printf@TextOutput@G3D@@QAAXPBDZZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/TextOutput.cpp
