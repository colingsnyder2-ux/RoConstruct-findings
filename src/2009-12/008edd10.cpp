// roc 2009-12 008edd10  unit: PAVCXTPRibbonGroup::?$CArray  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008edd10
//
// 008edd10  55                   push ebp
// 008edd11  57                   push edi
// 008edd12  8be9                 mov ebp, ecx
// 008edd14  e847ffffff           call 0x8edc60
// 008edd19  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008edd1d  8b4128               mov eax, dword ptr [ecx + 0x28]
// 008edd20  33ff                 xor edi, edi
// 008edd22  85c0                 test eax, eax
// 008edd24  7e4e                 jle 0x8edd74
// 008edd26  53                   push ebx
// 008edd27  56                   push esi
// 008edd28  85ff                 test edi, edi
// 008edd2a  7c11                 jl 0x8edd3d
// 008edd2c  3bf8                 cmp edi, eax
// 008edd2e  7d0d                 jge 0x8edd3d
// 008edd30  3b7928               cmp edi, dword ptr [ecx + 0x28]
// 008edd33  7d44                 jge 0x8edd79
// 008edd35  8b4124               mov eax, dword ptr [ecx + 0x24]
// 008edd38  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 008edd3b  eb02                 jmp 0x8edd3f
// 008edd3d  33db                 xor ebx, ebx
// 008edd3f  8b13                 mov edx, dword ptr [ebx]
// 008edd41  8b02                 mov eax, dword ptr [edx]
// 008edd43  8bcb                 mov ecx, ebx
// 008edd45  ffd0                 call eax
// 008edd47  8bc8                 mov ecx, eax
// 008edd49  e81465f0ff           call 0x7f4262
// 008edd4e  8bf0                 mov esi, eax
// 008edd50  56                   push esi
// 008edd51  57                   push edi
// 008edd52  8bcd                 mov ecx, ebp
// 008edd54  e867ffffff           call 0x8edcc0
// 008edd59  8b16                 mov edx, dword ptr [esi]
// 008edd5b  8b425c               mov eax, dword ptr [edx + 0x5c]
// 008edd5e  53                   push ebx
// 008edd5f  8bce                 mov ecx, esi
// 008edd61  ffd0                 call eax
// 008edd63  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008edd67  896e30               mov dword ptr [esi + 0x30], ebp
// 008edd6a  8b4128               mov eax, dword ptr [ecx + 0x28]
// 008edd6d  47                   inc edi
// 008edd6e  3bf8                 cmp edi, eax
// 008edd70  7cb6                 jl 0x8edd28
// 008edd72  5e                   pop esi
// 008edd73  5b                   pop ebx
// 008edd74  5f                   pop edi
// 008edd75  5d                   pop ebp
// 008edd76  c20400               ret 4
// 008edd79  e88e5df0ff           call 0x7f3b0c
// copied from an identical function in another client (function ?Copy@CXTPRibbonGroups@@QAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroups.cpp