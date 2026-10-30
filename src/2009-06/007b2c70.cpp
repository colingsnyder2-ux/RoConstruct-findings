// roc 2009-06 007b2c70  unit: CXTPDockBar::UDOCK_INFO::?$CArray  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b2c70
//
// 007b2c70  8b5160               mov edx, dword ptr [ecx + 0x60]
// 007b2c73  53                   push ebx
// 007b2c74  56                   push esi
// 007b2c75  33c0                 xor eax, eax
// 007b2c77  57                   push edi
// 007b2c78  85d2                 test edx, edx
// 007b2c7a  7e21                 jle 0x7b2c9d
// 007b2c7c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007b2c80  8b742410             mov esi, dword ptr [esp + 0x10]
// 007b2c84  3bc7                 cmp eax, edi
// 007b2c86  7410                 je 0x7b2c98
// 007b2c88  85c0                 test eax, eax
// 007b2c8a  7c1a                 jl 0x7b2ca6
// 007b2c8c  3bc2                 cmp eax, edx
// 007b2c8e  7d16                 jge 0x7b2ca6
// 007b2c90  8b595c               mov ebx, dword ptr [ecx + 0x5c]
// 007b2c93  393483               cmp dword ptr [ebx + eax*4], esi
// 007b2c96  7408                 je 0x7b2ca0
// 007b2c98  40                   inc eax
// 007b2c99  3bc2                 cmp eax, edx
// 007b2c9b  7ce7                 jl 0x7b2c84
// 007b2c9d  83c8ff               or eax, 0xffffffff
// 007b2ca0  5f                   pop edi
// 007b2ca1  5e                   pop esi
// 007b2ca2  5b                   pop ebx
// 007b2ca3  c20800               ret 8
// 007b2ca6  e83960f6ff           call 0x718ce4
// copied from an identical function in another client (function ?FindBar@CXTPDockBar@@IAEHPAVCXTPToolBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockBar.cpp