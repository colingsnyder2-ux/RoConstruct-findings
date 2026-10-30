// roc 2011-06 008faa80  unit: PAVCXTPRibbonGroup::?$CArray  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008faa80
//
// 008faa80  55                   push ebp
// 008faa81  57                   push edi
// 008faa82  8be9                 mov ebp, ecx
// 008faa84  e847ffffff           call 0x8fa9d0
// 008faa89  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008faa8d  8b4128               mov eax, dword ptr [ecx + 0x28]
// 008faa90  33ff                 xor edi, edi
// 008faa92  85c0                 test eax, eax
// 008faa94  7e4e                 jle 0x8faae4
// 008faa96  53                   push ebx
// 008faa97  56                   push esi
// 008faa98  85ff                 test edi, edi
// 008faa9a  7c11                 jl 0x8faaad
// 008faa9c  3bf8                 cmp edi, eax
// 008faa9e  7d0d                 jge 0x8faaad
// 008faaa0  3b7928               cmp edi, dword ptr [ecx + 0x28]
// 008faaa3  7d44                 jge 0x8faae9
// 008faaa5  8b4124               mov eax, dword ptr [ecx + 0x24]
// 008faaa8  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 008faaab  eb02                 jmp 0x8faaaf
// 008faaad  33db                 xor ebx, ebx
// 008faaaf  8b13                 mov edx, dword ptr [ebx]
// 008faab1  8b02                 mov eax, dword ptr [edx]
// 008faab3  8bcb                 mov ecx, ebx
// 008faab5  ffd0                 call eax
// 008faab7  8bc8                 mov ecx, eax
// 008faab9  e8a8fff0ff           call 0x80aa66
// 008faabe  8bf0                 mov esi, eax
// 008faac0  56                   push esi
// 008faac1  57                   push edi
// 008faac2  8bcd                 mov ecx, ebp
// 008faac4  e867ffffff           call 0x8faa30
// 008faac9  8b16                 mov edx, dword ptr [esi]
// 008faacb  8b425c               mov eax, dword ptr [edx + 0x5c]
// 008faace  53                   push ebx
// 008faacf  8bce                 mov ecx, esi
// 008faad1  ffd0                 call eax
// 008faad3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008faad7  896e30               mov dword ptr [esi + 0x30], ebp
// 008faada  8b4128               mov eax, dword ptr [ecx + 0x28]
// 008faadd  47                   inc edi
// 008faade  3bf8                 cmp edi, eax
// 008faae0  7cb6                 jl 0x8faa98
// 008faae2  5e                   pop esi
// 008faae3  5b                   pop ebx
// 008faae4  5f                   pop edi
// 008faae5  5d                   pop ebp
// 008faae6  c20400               ret 4
// 008faae9  e81cf8f0ff           call 0x80a30a
// copied from an identical function in another client (function ?Copy@CXTPRibbonGroups@@QAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroups.cpp