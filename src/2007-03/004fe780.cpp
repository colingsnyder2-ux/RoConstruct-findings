// roc 2007-03 004fe780  unit: seg_004f0000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fe780
//
// 004fe780  8b442404             mov eax, dword ptr [esp + 4]
// 004fe784  83781400             cmp dword ptr [eax + 0x14], 0
// 004fe788  762d                 jbe 0x4fe7b7
// 004fe78a  83781810             cmp dword ptr [eax + 0x18], 0x10
// 004fe78e  7215                 jb 0x4fe7a5
// 004fe790  8b4004               mov eax, dword ptr [eax + 4]
// 004fe793  50                   push eax
// 004fe794  6840037a00           push 0x7a0340
// 004fe799  51                   push ecx
// 004fe79a  e811ffffff           call 0x4fe6b0
// 004fe79f  83c40c               add esp, 0xc
// 004fe7a2  c20400               ret 4
// 004fe7a5  83c004               add eax, 4
// 004fe7a8  50                   push eax
// 004fe7a9  6840037a00           push 0x7a0340
// 004fe7ae  51                   push ecx
// 004fe7af  e8fcfeffff           call 0x4fe6b0
// 004fe7b4  83c40c               add esp, 0xc
// 004fe7b7  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\TextOutput.cpp (function ?writeSymbol@TextOutput@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/TextOutput.cpp
