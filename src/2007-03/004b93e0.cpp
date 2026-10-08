// roc 2007-03 004b93e0  unit: seg_004b0000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b93e0
//
// 004b93e0  6aff                 push -1
// 004b93e2  6878cc7400           push 0x74cc78
// 004b93e7  64a100000000         mov eax, dword ptr fs:[0]
// 004b93ed  50                   push eax
// 004b93ee  64892500000000       mov dword ptr fs:[0], esp
// 004b93f5  51                   push ecx
// 004b93f6  56                   push esi
// 004b93f7  8bf1                 mov esi, ecx
// 004b93f9  89742404             mov dword ptr [esp + 4], esi
// 004b93fd  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b9405  e836fdffff           call 0x4b9140
// 004b940a  837e0800             cmp dword ptr [esi + 8], 0
// 004b940e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004b9416  760b                 jbe 0x4b9423
// 004b9418  8b06                 mov eax, dword ptr [esi]
// 004b941a  50                   push eax
// 004b941b  e8d04c1600           call 0x61e0f0
// 004b9420  83c404               add esp, 4
// 004b9423  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b9427  5e                   pop esi
// 004b9428  64890d00000000       mov dword ptr fs:[0], ecx
// 004b942f  83c410               add esp, 0x10
// 004b9432  c3                   ret 
// library rbxgs-raknet/FileList.cpp (function ??1FileList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet FileList.cpp
