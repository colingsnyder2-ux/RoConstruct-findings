// roc 2011-06 005b2df0  unit: RBX::VStandardOut::?$sp_counted_impl_p  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005b2df0
//
// 005b2df0  53                   push ebx
// 005b2df1  56                   push esi
// 005b2df2  8b742410             mov esi, dword ptr [esp + 0x10]
// 005b2df6  8bc6                 mov eax, esi
// 005b2df8  c1e804               shr eax, 4
// 005b2dfb  57                   push edi
// 005b2dfc  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005b2e00  40                   inc eax
// 005b2e01  8bd9                 mov ebx, ecx
// 005b2e03  0fb7c8               movzx ecx, ax
// 005b2e06  6a06                 push 6
// 005b2e08  51                   push ecx
// 005b2e09  57                   push edi
// 005b2e0a  ff153803a400         call dword ptr [0xa40338]
// 005b2e10  85c0                 test eax, eax
// 005b2e12  7411                 je 0x5b2e25
// 005b2e14  56                   push esi
// 005b2e15  50                   push eax
// 005b2e16  57                   push edi
// 005b2e17  e834f2ffff           call 0x5b2050
// 005b2e1c  8bf8                 mov edi, eax
// 005b2e1e  83c40c               add esp, 0xc
// 005b2e21  85ff                 test edi, edi
// 005b2e23  7508                 jne 0x5b2e2d
// 005b2e25  5f                   pop edi
// 005b2e26  5e                   pop esi
// 005b2e27  33c0                 xor eax, eax
// 005b2e29  5b                   pop ebx
// 005b2e2a  c20800               ret 8
// 005b2e2d  0fb707               movzx eax, word ptr [edi]
// 005b2e30  55                   push ebp
// 005b2e31  6a00                 push 0
// 005b2e33  6a00                 push 0
// 005b2e35  6a00                 push 0
// 005b2e37  6a00                 push 0
// 005b2e39  50                   push eax
// 005b2e3a  8d6f02               lea ebp, [edi + 2]
// 005b2e3d  55                   push ebp
// 005b2e3e  6a00                 push 0
// 005b2e40  6a03                 push 3
// 005b2e42  ff158c03a400         call dword ptr [0xa4038c]
// 005b2e48  8bf0                 mov esi, eax
// 005b2e4a  8b03                 mov eax, dword ptr [ebx]
// 005b2e4c  83e810               sub eax, 0x10
// 005b2e4f  ba01000000           mov edx, 1
// 005b2e54  2b500c               sub edx, dword ptr [eax + 0xc]
// 005b2e57  8b4008               mov eax, dword ptr [eax + 8]
// 005b2e5a  2bc6                 sub eax, esi
// 005b2e5c  0bd0                 or edx, eax
// 005b2e5e  7d08                 jge 0x5b2e68
// 005b2e60  56                   push esi
// 005b2e61  8bcb                 mov ecx, ebx
// 005b2e63  e89829e5ff           call 0x405800
// 005b2e68  8b0b                 mov ecx, dword ptr [ebx]
// 005b2e6a  0fb717               movzx edx, word ptr [edi]
// 005b2e6d  6a00                 push 0
// 005b2e6f  6a00                 push 0
// 005b2e71  56                   push esi
// 005b2e72  51                   push ecx
// 005b2e73  52                   push edx
// 005b2e74  55                   push ebp
// 005b2e75  6a00                 push 0
// 005b2e77  6a03                 push 3
// 005b2e79  ff158c03a400         call dword ptr [0xa4038c]
// 005b2e7f  5d                   pop ebp
// 005b2e80  85f6                 test esi, esi
// 005b2e82  7c1b                 jl 0x5b2e9f
// 005b2e84  8b03                 mov eax, dword ptr [ebx]
// 005b2e86  3b70f8               cmp esi, dword ptr [eax - 8]
// 005b2e89  7f14                 jg 0x5b2e9f
// 005b2e8b  8970f4               mov dword ptr [eax - 0xc], esi
// 005b2e8e  8b03                 mov eax, dword ptr [ebx]
// 005b2e90  5f                   pop edi
// 005b2e91  c6040600             mov byte ptr [esi + eax], 0
// 005b2e95  5e                   pop esi
// 005b2e96  b801000000           mov eax, 1
// 005b2e9b  5b                   pop ebx
// 005b2e9c  c20800               ret 8
// 005b2e9f  6857000780           push 0x80070057
// 005b2ea4  e8f706e5ff           call 0x4035a0
// copied from an identical function in another client (function ?LoadStringA@?$CStringT@DV?$StrTraitMFC@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@QAEHPAUHINSTANCE__@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-9.0 atlmfc/src/mfc/afxsettingsstore.cpp