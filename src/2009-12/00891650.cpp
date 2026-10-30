// roc 2009-12 00891650  unit: CXTPDockBar::UDOCK_INFO::?$CArray  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00891650
//
// 00891650  8b5160               mov edx, dword ptr [ecx + 0x60]
// 00891653  53                   push ebx
// 00891654  56                   push esi
// 00891655  33c0                 xor eax, eax
// 00891657  57                   push edi
// 00891658  85d2                 test edx, edx
// 0089165a  7e21                 jle 0x89167d
// 0089165c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00891660  8b742410             mov esi, dword ptr [esp + 0x10]
// 00891664  3bc7                 cmp eax, edi
// 00891666  7410                 je 0x891678
// 00891668  85c0                 test eax, eax
// 0089166a  7c1a                 jl 0x891686
// 0089166c  3bc2                 cmp eax, edx
// 0089166e  7d16                 jge 0x891686
// 00891670  8b595c               mov ebx, dword ptr [ecx + 0x5c]
// 00891673  393483               cmp dword ptr [ebx + eax*4], esi
// 00891676  7408                 je 0x891680
// 00891678  40                   inc eax
// 00891679  3bc2                 cmp eax, edx
// 0089167b  7ce7                 jl 0x891664
// 0089167d  83c8ff               or eax, 0xffffffff
// 00891680  5f                   pop edi
// 00891681  5e                   pop esi
// 00891682  5b                   pop ebx
// 00891683  c20800               ret 8
// 00891686  e88124f6ff           call 0x7f3b0c
// copied from an identical function in another client (function ?FindBar@CXTPDockBar@@IAEHPAVCXTPToolBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockBar.cpp