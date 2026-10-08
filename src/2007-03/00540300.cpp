// roc 2007-03 00540300  unit: seg_00540000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00540300
//
// 00540300  6aff                 push -1
// 00540302  68a8417500           push 0x7541a8
// 00540307  64a100000000         mov eax, dword ptr fs:[0]
// 0054030d  50                   push eax
// 0054030e  64892500000000       mov dword ptr fs:[0], esp
// 00540315  51                   push ecx
// 00540316  8b442414             mov eax, dword ptr [esp + 0x14]
// 0054031a  56                   push esi
// 0054031b  8bf1                 mov esi, ecx
// 0054031d  50                   push eax
// 0054031e  56                   push esi
// 0054031f  8974240c             mov dword ptr [esp + 0xc], esi
// 00540323  e8789befff           call 0x439ea0
// 00540328  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054032c  51                   push ecx
// 0054032d  8d5608               lea edx, [esi + 8]
// 00540330  52                   push edx
// 00540331  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00540339  e8629befff           call 0x439ea0
// 0054033e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00540342  83c410               add esp, 0x10
// 00540345  8bc6                 mov eax, esi
// 00540347  5e                   pop esi
// 00540348  64890d00000000       mov dword ptr fs:[0], ecx
// 0054034f  83c410               add esp, 0x10
// 00540352  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ??0DescendentAdded@RBX@@AAE@PAVInstance@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
