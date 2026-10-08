// roc 2007-03 004fe760  unit: seg_004f0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fe760
//
// 004fe760  8b442404             mov eax, dword ptr [esp + 4]
// 004fe764  50                   push eax
// 004fe765  683c037a00           push 0x7a033c
// 004fe76a  51                   push ecx
// 004fe76b  e840ffffff           call 0x4fe6b0
// 004fe770  83c40c               add esp, 0xc
// 004fe773  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\TextOutput.cpp (function ?writeNumber@TextOutput@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/TextOutput.cpp
