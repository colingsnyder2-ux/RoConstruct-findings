// roc 2009-12 00861f10  unit: CXTPPropertyGridToolTip  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00861f10
//
// 00861f10  53                   push ebx
// 00861f11  56                   push esi
// 00861f12  8bd1                 mov edx, ecx
// 00861f14  57                   push edi
// 00861f15  8b7a5c               mov edi, dword ptr [edx + 0x5c]
// 00861f18  33c0                 xor eax, eax
// 00861f1a  85ff                 test edi, edi
// 00861f1c  7e27                 jle 0x861f45
// 00861f1e  8b742414             mov esi, dword ptr [esp + 0x14]
// 00861f22  85c0                 test eax, eax
// 00861f24  7c5d                 jl 0x861f83
// 00861f26  3bc7                 cmp eax, edi
// 00861f28  7d59                 jge 0x861f83
// 00861f2a  8b4a58               mov ecx, dword ptr [edx + 0x58]
// 00861f2d  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00861f30  8b5924               mov ebx, dword ptr [ecx + 0x24]
// 00861f33  3b5e0c               cmp ebx, dword ptr [esi + 0xc]
// 00861f36  7508                 jne 0x861f40
// 00861f38  8b5920               mov ebx, dword ptr [ecx + 0x20]
// 00861f3b  3b5e08               cmp ebx, dword ptr [esi + 8]
// 00861f3e  740d                 je 0x861f4d
// 00861f40  40                   inc eax
// 00861f41  3bc7                 cmp eax, edi
// 00861f43  7cdd                 jl 0x861f22
// 00861f45  5f                   pop edi
// 00861f46  5e                   pop esi
// 00861f47  33c0                 xor eax, eax
// 00861f49  5b                   pop ebx
// 00861f4a  c20800               ret 8
// 00861f4d  33c0                 xor eax, eax
// 00861f4f  837e24ff             cmp dword ptr [esi + 0x24], -1
// 00861f53  0f94c0               sete al
// 00861f56  894104               mov dword ptr [ecx + 4], eax
// 00861f59  85c0                 test eax, eax
// 00861f5b  7414                 je 0x861f71
// 00861f5d  be56fd9900           mov esi, 0x99fd56
// 00861f62  56                   push esi
// 00861f63  ff155cde9800         call dword ptr [0x98de5c]
// 00861f69  5f                   pop edi
// 00861f6a  5e                   pop esi
// 00861f6b  33c0                 xor eax, eax
// 00861f6d  5b                   pop ebx
// 00861f6e  c20800               ret 8
// 00861f71  8b7624               mov esi, dword ptr [esi + 0x24]
// 00861f74  56                   push esi
// 00861f75  ff155cde9800         call dword ptr [0x98de5c]
// 00861f7b  5f                   pop edi
// 00861f7c  5e                   pop esi
// 00861f7d  33c0                 xor eax, eax
// 00861f7f  5b                   pop ebx
// 00861f80  c20800               ret 8
// 00861f83  e8841bf9ff           call 0x7f3b0c
// copied from an identical function in another client (function ?OnUpdateTipText@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp