// roc 2012-06 00a6ab30  unit: CXTColorSelectorCtrl  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6ab30
//
// 00a6ab30  6aff                 push -1
// 00a6ab32  68d386ae00           push 0xae86d3
// 00a6ab37  64a100000000         mov eax, dword ptr fs:[0]
// 00a6ab3d  50                   push eax
// 00a6ab3e  51                   push ecx
// 00a6ab3f  56                   push esi
// 00a6ab40  57                   push edi
// 00a6ab41  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a6ab46  33c4                 xor eax, esp
// 00a6ab48  50                   push eax
// 00a6ab49  8d442410             lea eax, [esp + 0x10]
// 00a6ab4d  64a300000000         mov dword ptr fs:[0], eax
// 00a6ab53  8bf1                 mov esi, ecx
// 00a6ab55  8974240c             mov dword ptr [esp + 0xc], esi
// 00a6ab59  8d7e54               lea edi, [esi + 0x54]
// 00a6ab5c  c706d45ac200         mov dword ptr [esi], 0xc25ad4
// 00a6ab62  c707c05ac200         mov dword ptr [edi], 0xc25ac0
// 00a6ab68  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00a6ab70  e8cbfbffff           call 0xa6a740
// 00a6ab75  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 00a6ab7b  85c9                 test ecx, ecx
// 00a6ab7d  740f                 je 0xa6ab8e
// 00a6ab7f  e8067bf1ff           call 0x98268a
// 00a6ab84  c7869c00000000000000 mov dword ptr [esi + 0x9c], 0
// 00a6ab8e  8bcf                 mov ecx, edi
// 00a6ab90  c644241800           mov byte ptr [esp + 0x18], 0
// 00a6ab95  e8f6bcf7ff           call 0x9e6890
// 00a6ab9a  8bce                 mov ecx, esi
// 00a6ab9c  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00a6aba4  e89deb0200           call 0xa99746
// 00a6aba9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a6abad  64890d00000000       mov dword ptr fs:[0], ecx
// 00a6abb4  59                   pop ecx
// 00a6abb5  5f                   pop edi
// 00a6abb6  5e                   pop esi
// 00a6abb7  83c410               add esp, 0x10
// 00a6abba  c3                   ret 
// copied from an identical function in another client (function ??1CXTButton@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp