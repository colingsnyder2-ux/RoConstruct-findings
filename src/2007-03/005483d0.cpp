// roc 2007-03 005483d0  unit: seg_00540000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005483d0
//
// 005483d0  6aff                 push -1
// 005483d2  68482c7500           push 0x752c48
// 005483d7  64a100000000         mov eax, dword ptr fs:[0]
// 005483dd  50                   push eax
// 005483de  64892500000000       mov dword ptr fs:[0], esp
// 005483e5  51                   push ecx
// 005483e6  56                   push esi
// 005483e7  8bf1                 mov esi, ecx
// 005483e9  89742404             mov dword ptr [esp + 4], esi
// 005483ed  e83ee61d00           call 0x726a30
// 005483f2  8d4e08               lea ecx, [esi + 8]
// 005483f5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005483fd  e8aeec1d00           call 0x7270b0
// 00548402  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00548406  c6462000             mov byte ptr [esi + 0x20], 0
// 0054840a  8bc6                 mov eax, esi
// 0054840c  5e                   pop esi
// 0054840d  64890d00000000       mov dword ptr fs:[0], ecx
// 00548414  83c410               add esp, 0x10
// 00548417  c3                   ret 
// library rbxgs/util\boost.cpp (function ??0data@worker_thread@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
