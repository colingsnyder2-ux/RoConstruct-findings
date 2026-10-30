// roc 2010-06 0088f1b0  unit: CXTColorPageStandard  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0088f1b0
//
// 0088f1b0  6aff                 push -1
// 0088f1b2  6856b49b00           push 0x9bb456
// 0088f1b7  64a100000000         mov eax, dword ptr fs:[0]
// 0088f1bd  50                   push eax
// 0088f1be  51                   push ecx
// 0088f1bf  56                   push esi
// 0088f1c0  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0088f1c5  33c4                 xor eax, esp
// 0088f1c7  50                   push eax
// 0088f1c8  8d44240c             lea eax, [esp + 0xc]
// 0088f1cc  64a300000000         mov dword ptr fs:[0], eax
// 0088f1d2  8bf1                 mov esi, ecx
// 0088f1d4  89742408             mov dword ptr [esp + 8], esi
// 0088f1d8  6a30                 push 0x30
// 0088f1da  6a00                 push 0
// 0088f1dc  6862240000           push 0x2462
// 0088f1e1  e842e00e00           call 0x97d228
// 0088f1e6  8d8e88000000         lea ecx, [esi + 0x88]
// 0088f1ec  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0088f1f4  c7068cf3a600         mov dword ptr [esi], 0xa6f38c
// 0088f1fa  e8e1f9ffff           call 0x88ebe0
// 0088f1ff  8bce                 mov ecx, esi
// 0088f201  c644241401           mov byte ptr [esp + 0x14], 1
// 0088f206  e82ddf0e00           call 0x97d138
// 0088f20b  83c004               add eax, 4
// 0088f20e  8320df               and dword ptr [eax], 0xffffffdf
// 0088f211  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088f215  898618010000         mov dword ptr [esi + 0x118], eax
// 0088f21b  8bc6                 mov eax, esi
// 0088f21d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0088f221  64890d00000000       mov dword ptr fs:[0], ecx
// 0088f228  59                   pop ecx
// 0088f229  5e                   pop esi
// 0088f22a  83c410               add esp, 0x10
// 0088f22d  c20400               ret 4
// copied from an identical function in another client (function ??0CXTColorPageStandard@@QAE@PAVCXTColorDialog@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageStandard.cpp