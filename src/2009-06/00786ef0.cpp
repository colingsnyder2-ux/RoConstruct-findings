// roc 2009-06 00786ef0  unit: CXTPToolTipContextToolTip::PAUTOOLITEM::?$CArray  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00786ef0
//
// 00786ef0  53                   push ebx
// 00786ef1  56                   push esi
// 00786ef2  8bd1                 mov edx, ecx
// 00786ef4  57                   push edi
// 00786ef5  8b7a5c               mov edi, dword ptr [edx + 0x5c]
// 00786ef8  33c0                 xor eax, eax
// 00786efa  85ff                 test edi, edi
// 00786efc  7e27                 jle 0x786f25
// 00786efe  8b742414             mov esi, dword ptr [esp + 0x14]
// 00786f02  85c0                 test eax, eax
// 00786f04  7c5d                 jl 0x786f63
// 00786f06  3bc7                 cmp eax, edi
// 00786f08  7d59                 jge 0x786f63
// 00786f0a  8b4a58               mov ecx, dword ptr [edx + 0x58]
// 00786f0d  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00786f10  8b5924               mov ebx, dword ptr [ecx + 0x24]
// 00786f13  3b5e0c               cmp ebx, dword ptr [esi + 0xc]
// 00786f16  7508                 jne 0x786f20
// 00786f18  8b5920               mov ebx, dword ptr [ecx + 0x20]
// 00786f1b  3b5e08               cmp ebx, dword ptr [esi + 8]
// 00786f1e  740d                 je 0x786f2d
// 00786f20  40                   inc eax
// 00786f21  3bc7                 cmp eax, edi
// 00786f23  7cdd                 jl 0x786f02
// 00786f25  5f                   pop edi
// 00786f26  5e                   pop esi
// 00786f27  33c0                 xor eax, eax
// 00786f29  5b                   pop ebx
// 00786f2a  c20800               ret 8
// 00786f2d  33c0                 xor eax, eax
// 00786f2f  837e24ff             cmp dword ptr [esi + 0x24], -1
// 00786f33  0f94c0               sete al
// 00786f36  894104               mov dword ptr [ecx + 4], eax
// 00786f39  85c0                 test eax, eax
// 00786f3b  7414                 je 0x786f51
// 00786f3d  be16d28a00           mov esi, 0x8ad216
// 00786f42  56                   push esi
// 00786f43  ff15acfc8900         call dword ptr [0x89fcac]
// 00786f49  5f                   pop edi
// 00786f4a  5e                   pop esi
// 00786f4b  33c0                 xor eax, eax
// 00786f4d  5b                   pop ebx
// 00786f4e  c20800               ret 8
// 00786f51  8b7624               mov esi, dword ptr [esi + 0x24]
// 00786f54  56                   push esi
// 00786f55  ff15acfc8900         call dword ptr [0x89fcac]
// 00786f5b  5f                   pop edi
// 00786f5c  5e                   pop esi
// 00786f5d  33c0                 xor eax, eax
// 00786f5f  5b                   pop ebx
// 00786f60  c20800               ret 8
// 00786f63  e87c1df9ff           call 0x718ce4
// copied from an identical function in another client (function ?OnUpdateTipText@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp