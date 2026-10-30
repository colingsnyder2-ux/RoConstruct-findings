// roc 2010-06 00815ee0  unit: CXTPToolTipContextToolTip::PAUTOOLITEM::?$CArray  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00815ee0
//
// 00815ee0  53                   push ebx
// 00815ee1  56                   push esi
// 00815ee2  8bd1                 mov edx, ecx
// 00815ee4  57                   push edi
// 00815ee5  8b7a5c               mov edi, dword ptr [edx + 0x5c]
// 00815ee8  33c0                 xor eax, eax
// 00815eea  85ff                 test edi, edi
// 00815eec  7e27                 jle 0x815f15
// 00815eee  8b742414             mov esi, dword ptr [esp + 0x14]
// 00815ef2  85c0                 test eax, eax
// 00815ef4  7c5d                 jl 0x815f53
// 00815ef6  3bc7                 cmp eax, edi
// 00815ef8  7d59                 jge 0x815f53
// 00815efa  8b4a58               mov ecx, dword ptr [edx + 0x58]
// 00815efd  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00815f00  8b5924               mov ebx, dword ptr [ecx + 0x24]
// 00815f03  3b5e0c               cmp ebx, dword ptr [esi + 0xc]
// 00815f06  7508                 jne 0x815f10
// 00815f08  8b5920               mov ebx, dword ptr [ecx + 0x20]
// 00815f0b  3b5e08               cmp ebx, dword ptr [esi + 8]
// 00815f0e  740d                 je 0x815f1d
// 00815f10  40                   inc eax
// 00815f11  3bc7                 cmp eax, edi
// 00815f13  7cdd                 jl 0x815ef2
// 00815f15  5f                   pop edi
// 00815f16  5e                   pop esi
// 00815f17  33c0                 xor eax, eax
// 00815f19  5b                   pop ebx
// 00815f1a  c20800               ret 8
// 00815f1d  33c0                 xor eax, eax
// 00815f1f  837e24ff             cmp dword ptr [esi + 0x24], -1
// 00815f23  0f94c0               sete al
// 00815f26  894104               mov dword ptr [ecx + 4], eax
// 00815f29  85c0                 test eax, eax
// 00815f2b  7414                 je 0x815f41
// 00815f2d  befe08a000           mov esi, 0xa008fe
// 00815f32  56                   push esi
// 00815f33  ff158cce9e00         call dword ptr [0x9ece8c]
// 00815f39  5f                   pop edi
// 00815f3a  5e                   pop esi
// 00815f3b  33c0                 xor eax, eax
// 00815f3d  5b                   pop ebx
// 00815f3e  c20800               ret 8
// 00815f41  8b7624               mov esi, dword ptr [esi + 0x24]
// 00815f44  56                   push esi
// 00815f45  ff158cce9e00         call dword ptr [0x9ece8c]
// 00815f4b  5f                   pop edi
// 00815f4c  5e                   pop esi
// 00815f4d  33c0                 xor eax, eax
// 00815f4f  5b                   pop ebx
// 00815f50  c20800               ret 8
// 00815f53  e8f41cf9ff           call 0x7a7c4c
// copied from an identical function in another client (function ?OnUpdateTipText@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp