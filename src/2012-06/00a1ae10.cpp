// roc 2012-06 00a1ae10  unit: CXTPDockBar::UDOCK_INFO::?$CArray  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1ae10
//
// 00a1ae10  8b5160               mov edx, dword ptr [ecx + 0x60]
// 00a1ae13  53                   push ebx
// 00a1ae14  56                   push esi
// 00a1ae15  33c0                 xor eax, eax
// 00a1ae17  57                   push edi
// 00a1ae18  85d2                 test edx, edx
// 00a1ae1a  7e21                 jle 0xa1ae3d
// 00a1ae1c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a1ae20  8b742410             mov esi, dword ptr [esp + 0x10]
// 00a1ae24  3bc7                 cmp eax, edi
// 00a1ae26  7410                 je 0xa1ae38
// 00a1ae28  85c0                 test eax, eax
// 00a1ae2a  7c1a                 jl 0xa1ae46
// 00a1ae2c  3bc2                 cmp eax, edx
// 00a1ae2e  7d16                 jge 0xa1ae46
// 00a1ae30  8b595c               mov ebx, dword ptr [ecx + 0x5c]
// 00a1ae33  393483               cmp dword ptr [ebx + eax*4], esi
// 00a1ae36  7408                 je 0xa1ae40
// 00a1ae38  40                   inc eax
// 00a1ae39  3bc2                 cmp eax, edx
// 00a1ae3b  7ce7                 jl 0xa1ae24
// 00a1ae3d  83c8ff               or eax, 0xffffffff
// 00a1ae40  5f                   pop edi
// 00a1ae41  5e                   pop esi
// 00a1ae42  5b                   pop ebx
// 00a1ae43  c20800               ret 8
// 00a1ae46  e87575f6ff           call 0x9823c0
// copied from an identical function in another client (function ?FindBar@CXTPDockBar@@IAEHPAVCXTPToolBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockBar.cpp