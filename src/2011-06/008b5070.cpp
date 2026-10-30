// roc 2011-06 008b5070  unit: CXTPReportTip  size: 455 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b5070
//
// 008b5070  6aff                 push -1
// 008b5072  68e9b4a000           push 0xa0b4e9
// 008b5077  64a100000000         mov eax, dword ptr fs:[0]
// 008b507d  50                   push eax
// 008b507e  83ec4c               sub esp, 0x4c
// 008b5081  55                   push ebp
// 008b5082  56                   push esi
// 008b5083  57                   push edi
// 008b5084  a12058c900           mov eax, dword ptr [0xc95820]
// 008b5089  33c4                 xor eax, esp
// 008b508b  50                   push eax
// 008b508c  8d44245c             lea eax, [esp + 0x5c]
// 008b5090  64a300000000         mov dword ptr fs:[0], eax
// 008b5096  8bf1                 mov esi, ecx
// 008b5098  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 008b509c  85ed                 test ebp, ebp
// 008b509e  0f8454010000         je 0x8b51f8
// 008b50a4  8d4668               lea eax, [esi + 0x68]
// 008b50a7  50                   push eax
// 008b50a8  8d4c2470             lea ecx, [esp + 0x70]
// 008b50ac  ff15e42da400         call dword ptr [0xa42de4]
// 008b50b2  56                   push esi
// 008b50b3  8d4c244c             lea ecx, [esp + 0x4c]
// 008b50b7  c744246800000000     mov dword ptr [esp + 0x68], 0
// 008b50bf  e81e751100           call 0x9cc5e2
// 008b50c4  8d4e74               lea ecx, [esi + 0x74]
// 008b50c7  51                   push ecx
// 008b50c8  8d54244c             lea edx, [esp + 0x4c]
// 008b50cc  52                   push edx
// 008b50cd  8d4c2440             lea ecx, [esp + 0x40]
// 008b50d1  c644246c01           mov byte ptr [esp + 0x6c], 1
// 008b50d6  e84580faff           call 0x85d120
// 008b50db  56                   push esi
// 008b50dc  8d4c241c             lea ecx, [esp + 0x1c]
// 008b50e0  c644246802           mov byte ptr [esp + 0x68], 2
// 008b50e5  e8467cfaff           call 0x85cd30
// 008b50ea  8d442410             lea eax, [esp + 0x10]
// 008b50ee  50                   push eax
// 008b50ef  8d4c2470             lea ecx, [esp + 0x70]
// 008b50f3  ff15a826a400         call dword ptr [0xa426a8]
// 008b50f9  50                   push eax
// 008b50fa  8d4c2474             lea ecx, [esp + 0x74]
// 008b50fe  ff15c82da400         call dword ptr [0xa42dc8]
// 008b5104  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008b5108  50                   push eax
// 008b5109  51                   push ecx
// 008b510a  ff153801a400         call dword ptr [0xa40138]
// 008b5110  8b542418             mov edx, dword ptr [esp + 0x18]
// 008b5114  8b442410             mov eax, dword ptr [esp + 0x10]
// 008b5118  8d4c1006             lea ecx, [eax + edx + 6]
// 008b511c  894c2420             mov dword ptr [esp + 0x20], ecx
// 008b5120  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008b5123  e8f6741100           call 0x9cc61e
// 008b5128  8b3d601ca400         mov edi, dword ptr [0xa41c60]
// 008b512e  a900200000           test eax, 0x2000
// 008b5133  750f                 jne 0x8b5144
// 008b5135  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008b5138  e8e1741100           call 0x9cc61e
// 008b513d  a900004000           test eax, 0x400000
// 008b5142  7412                 je 0x8b5156
// 008b5144  8b465c               mov eax, dword ptr [esi + 0x5c]
// 008b5147  2b442420             sub eax, dword ptr [esp + 0x20]
// 008b514b  6a00                 push 0
// 008b514d  40                   inc eax
// 008b514e  50                   push eax
// 008b514f  8d542420             lea edx, [esp + 0x20]
// 008b5153  52                   push edx
// 008b5154  ffd7                 call edi
// 008b5156  8d442428             lea eax, [esp + 0x28]
// 008b515a  50                   push eax
// 008b515b  e8b0cff9ff           call 0x852110
// 008b5160  8bc8                 mov ecx, eax
// 008b5162  e879cbf9ff           call 0x851ce0
// 008b5167  8b442420             mov eax, dword ptr [esp + 0x20]
// 008b516b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008b516f  3bc1                 cmp eax, ecx
// 008b5171  7e10                 jle 0x8b5183
// 008b5173  2bc8                 sub ecx, eax
// 008b5175  6a00                 push 0
// 008b5177  51                   push ecx
// 008b5178  8d4c2420             lea ecx, [esp + 0x20]
// 008b517c  51                   push ecx
// 008b517d  ffd7                 call edi
// 008b517f  8b442420             mov eax, dword ptr [esp + 0x20]
// 008b5183  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008b5187  8b542428             mov edx, dword ptr [esp + 0x28]
// 008b518b  3bca                 cmp ecx, edx
// 008b518d  7d14                 jge 0x8b51a3
// 008b518f  2bd1                 sub edx, ecx
// 008b5191  6a00                 push 0
// 008b5193  52                   push edx
// 008b5194  8d542420             lea edx, [esp + 0x20]
// 008b5198  52                   push edx
// 008b5199  ffd7                 call edi
// 008b519b  8b442420             mov eax, dword ptr [esp + 0x20]
// 008b519f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008b51a3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008b51a7  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008b51ab  6a01                 push 1
// 008b51ad  2bfa                 sub edi, edx
// 008b51af  57                   push edi
// 008b51b0  2bc1                 sub eax, ecx
// 008b51b2  50                   push eax
// 008b51b3  52                   push edx
// 008b51b4  51                   push ecx
// 008b51b5  8bce                 mov ecx, esi
// 008b51b7  e87452f5ff           call 0x80a430
// 008b51bc  8b4620               mov eax, dword ptr [esi + 0x20]
// 008b51bf  6a00                 push 0
// 008b51c1  6a00                 push 0
// 008b51c3  50                   push eax
// 008b51c4  ff15ec19a400         call dword ptr [0xa419ec]
// 008b51ca  8d4c2438             lea ecx, [esp + 0x38]
// 008b51ce  c644246401           mov byte ptr [esp + 0x64], 1
// 008b51d3  e8c87ffaff           call 0x85d1a0
// 008b51d8  8d4c2448             lea ecx, [esp + 0x48]
// 008b51dc  c644246400           mov byte ptr [esp + 0x64], 0
// 008b51e1  e8f6731100           call 0x9cc5dc
// 008b51e6  8d4c246c             lea ecx, [esp + 0x6c]
// 008b51ea  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 008b51f2  ff15082ea400         call dword ptr [0xa42e08]
// 008b51f8  8b0df821a400         mov ecx, dword ptr [0xa421f8]
// 008b51fe  f7dd                 neg ebp
// 008b5200  1bed                 sbb ebp, ebp
// 008b5202  83e5bc               and ebp, 0xffffffbc
// 008b5205  81c584000000         add ebp, 0x84
// 008b520b  81cd13020000         or ebp, 0x213
// 008b5211  55                   push ebp
// 008b5212  6a00                 push 0
// 008b5214  6a00                 push 0
// 008b5216  6a00                 push 0
// 008b5218  6a00                 push 0
// 008b521a  51                   push ecx
// 008b521b  8bce                 mov ecx, esi
// 008b521d  e80852f5ff           call 0x80a42a
// 008b5222  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008b5226  64890d00000000       mov dword ptr fs:[0], ecx
// 008b522d  59                   pop ecx
// 008b522e  5f                   pop edi
// 008b522f  5e                   pop esi
// 008b5230  5d                   pop ebp
// 008b5231  83c458               add esp, 0x58
// 008b5234  c20400               ret 4
// copied from an identical function in another client (function ?Activate@CXTPReportTip@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportTip.cpp