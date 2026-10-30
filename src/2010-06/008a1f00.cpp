// roc 2010-06 008a1f00  unit: PAVCXTPRibbonGroup::?$CArray  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a1f00
//
// 008a1f00  55                   push ebp
// 008a1f01  57                   push edi
// 008a1f02  8be9                 mov ebp, ecx
// 008a1f04  e847ffffff           call 0x8a1e50
// 008a1f09  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a1f0d  8b4128               mov eax, dword ptr [ecx + 0x28]
// 008a1f10  33ff                 xor edi, edi
// 008a1f12  85c0                 test eax, eax
// 008a1f14  7e4e                 jle 0x8a1f64
// 008a1f16  53                   push ebx
// 008a1f17  56                   push esi
// 008a1f18  85ff                 test edi, edi
// 008a1f1a  7c11                 jl 0x8a1f2d
// 008a1f1c  3bf8                 cmp edi, eax
// 008a1f1e  7d0d                 jge 0x8a1f2d
// 008a1f20  3b7928               cmp edi, dword ptr [ecx + 0x28]
// 008a1f23  7d44                 jge 0x8a1f69
// 008a1f25  8b4124               mov eax, dword ptr [ecx + 0x24]
// 008a1f28  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 008a1f2b  eb02                 jmp 0x8a1f2f
// 008a1f2d  33db                 xor ebx, ebx
// 008a1f2f  8b13                 mov edx, dword ptr [ebx]
// 008a1f31  8b02                 mov eax, dword ptr [edx]
// 008a1f33  8bcb                 mov ecx, ebx
// 008a1f35  ffd0                 call eax
// 008a1f37  8bc8                 mov ecx, eax
// 008a1f39  e86464f0ff           call 0x7a83a2
// 008a1f3e  8bf0                 mov esi, eax
// 008a1f40  56                   push esi
// 008a1f41  57                   push edi
// 008a1f42  8bcd                 mov ecx, ebp
// 008a1f44  e867ffffff           call 0x8a1eb0
// 008a1f49  8b16                 mov edx, dword ptr [esi]
// 008a1f4b  8b425c               mov eax, dword ptr [edx + 0x5c]
// 008a1f4e  53                   push ebx
// 008a1f4f  8bce                 mov ecx, esi
// 008a1f51  ffd0                 call eax
// 008a1f53  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008a1f57  896e30               mov dword ptr [esi + 0x30], ebp
// 008a1f5a  8b4128               mov eax, dword ptr [ecx + 0x28]
// 008a1f5d  47                   inc edi
// 008a1f5e  3bf8                 cmp edi, eax
// 008a1f60  7cb6                 jl 0x8a1f18
// 008a1f62  5e                   pop esi
// 008a1f63  5b                   pop ebx
// 008a1f64  5f                   pop edi
// 008a1f65  5d                   pop ebp
// 008a1f66  c20400               ret 4
// 008a1f69  e8de5cf0ff           call 0x7a7c4c
// copied from an identical function in another client (function ?Copy@CXTPRibbonGroups@@QAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroups.cpp