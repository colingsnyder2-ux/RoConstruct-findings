// roc 2008-06 004d3f20  unit: seg_004d0000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d3f20
//
// 004d3f20  6aff                 push -1
// 004d3f22  68289c7c00           push 0x7c9c28
// 004d3f27  64a100000000         mov eax, dword ptr fs:[0]
// 004d3f2d  50                   push eax
// 004d3f2e  64892500000000       mov dword ptr fs:[0], esp
// 004d3f35  51                   push ecx
// 004d3f36  56                   push esi
// 004d3f37  8bf1                 mov esi, ecx
// 004d3f39  89742404             mov dword ptr [esp + 4], esi
// 004d3f3d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004d3f45  e856fdffff           call 0x4d3ca0
// 004d3f4a  837e0800             cmp dword ptr [esi + 8], 0
// 004d3f4e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004d3f56  760b                 jbe 0x4d3f63
// 004d3f58  8b06                 mov eax, dword ptr [esi]
// 004d3f5a  50                   push eax
// 004d3f5b  e81ac71c00           call 0x6a067a
// 004d3f60  83c404               add esp, 4
// 004d3f63  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d3f67  5e                   pop esi
// 004d3f68  64890d00000000       mov dword ptr fs:[0], ecx
// 004d3f6f  83c410               add esp, 0x10
// 004d3f72  c3                   ret 
// library rbxgs-raknet/FileList.cpp (function ??1FileList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet FileList.cpp
