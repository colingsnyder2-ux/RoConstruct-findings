// roc 2009-12 0080f530  unit: CXTPImageManagerIcon  size: 358 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080f530
//
// 0080f530  83ec38               sub esp, 0x38
// 0080f533  53                   push ebx
// 0080f534  55                   push ebp
// 0080f535  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0080f539  56                   push esi
// 0080f53a  57                   push edi
// 0080f53b  894c2410             mov dword ptr [esp + 0x10], ecx
// 0080f53f  85ed                 test ebp, ebp
// 0080f541  7407                 je 0x80f54a
// 0080f543  8b4504               mov eax, dword ptr [ebp + 4]
// 0080f546  85c0                 test eax, eax
// 0080f548  750c                 jne 0x80f556
// 0080f54a  33c0                 xor eax, eax
// 0080f54c  5f                   pop edi
// 0080f54d  5e                   pop esi
// 0080f54e  5d                   pop ebp
// 0080f54f  5b                   pop ebx
// 0080f550  83c438               add esp, 0x38
// 0080f553  c21800               ret 0x18
// 0080f556  8b742454             mov esi, dword ptr [esp + 0x54]
// 0080f55a  85f6                 test esi, esi
// 0080f55c  751f                 jne 0x80f57d
// 0080f55e  39742450             cmp dword ptr [esp + 0x50], esi
// 0080f562  7519                 jne 0x80f57d
// 0080f564  50                   push eax
// 0080f565  e8b445feff           call 0x7f3b1e
// 0080f56a  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 0080f570  8b08                 mov ecx, dword ptr [eax]
// 0080f572  e8293cc4ff           call 0x4531a0
// 0080f577  89442454             mov dword ptr [esp + 0x54], eax
// 0080f57b  8bf0                 mov esi, eax
// 0080f57d  837c245800           cmp dword ptr [esp + 0x58], 0
// 0080f582  7550                 jne 0x80f5d4
// 0080f584  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 0080f589  7549                 jne 0x80f5d4
// 0080f58b  85f6                 test esi, esi
// 0080f58d  7e45                 jle 0x80f5d4
// 0080f58f  8b4504               mov eax, dword ptr [ebp + 4]
// 0080f592  8d4c2428             lea ecx, [esp + 0x28]
// 0080f596  51                   push ecx
// 0080f597  6a00                 push 0
// 0080f599  50                   push eax
// 0080f59a  e87f45feff           call 0x7f3b1e
// 0080f59f  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0080f5a5  8b0a                 mov ecx, dword ptr [edx]
// 0080f5a7  e894a5ffff           call 0x809b40
// 0080f5ac  8d442438             lea eax, [esp + 0x38]
// 0080f5b0  50                   push eax
// 0080f5b1  8d4c241c             lea ecx, [esp + 0x1c]
// 0080f5b5  51                   push ecx
// 0080f5b6  ff1564cc9800         call dword ptr [0x98cc64]
// 0080f5bc  8b442424             mov eax, dword ptr [esp + 0x24]
// 0080f5c0  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 0080f5c4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080f5c8  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 0080f5cc  8944245c             mov dword ptr [esp + 0x5c], eax
// 0080f5d0  894c2458             mov dword ptr [esp + 0x58], ecx
// 0080f5d4  8b4504               mov eax, dword ptr [ebp + 4]
// 0080f5d7  50                   push eax
// 0080f5d8  e84145feff           call 0x7f3b1e
// 0080f5dd  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0080f5e3  8b0a                 mov ecx, dword ptr [edx]
// 0080f5e5  e8b63bc4ff           call 0x4531a0
// 0080f5ea  33c9                 xor ecx, ecx
// 0080f5ec  3bc6                 cmp eax, esi
// 0080f5ee  0f94c1               sete cl
// 0080f5f1  33db                 xor ebx, ebx
// 0080f5f3  33ff                 xor edi, edi
// 0080f5f5  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0080f5f9  85f6                 test esi, esi
// 0080f5fb  0f8e86000000         jle 0x80f687
// 0080f601  8b442450             mov eax, dword ptr [esp + 0x50]
// 0080f605  85c0                 test eax, eax
// 0080f607  740d                 je 0x80f616
// 0080f609  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 0080f60e  7506                 jne 0x80f616
// 0080f610  833cb800             cmp dword ptr [eax + edi*4], 0
// 0080f614  7468                 je 0x80f67e
// 0080f616  8b4504               mov eax, dword ptr [ebp + 4]
// 0080f619  6a00                 push 0
// 0080f61b  53                   push ebx
// 0080f61c  50                   push eax
// 0080f61d  e8fc44feff           call 0x7f3b1e
// 0080f622  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0080f628  8b0a                 mov ecx, dword ptr [edx]
// 0080f62a  e8d1a3ffff           call 0x809a00
// 0080f62f  8bf0                 mov esi, eax
// 0080f631  85f6                 test esi, esi
// 0080f633  0f8411ffffff         je 0x80f54a
// 0080f639  8b442450             mov eax, dword ptr [esp + 0x50]
// 0080f63d  85c0                 test eax, eax
// 0080f63f  7405                 je 0x80f646
// 0080f641  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0080f644  eb02                 jmp 0x80f648
// 0080f646  8bc7                 mov eax, edi
// 0080f648  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0080f64c  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0080f650  51                   push ecx
// 0080f651  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0080f655  52                   push edx
// 0080f656  51                   push ecx
// 0080f657  50                   push eax
// 0080f658  83ec24               sub esp, 0x24
// 0080f65b  8bcc                 mov ecx, esp
// 0080f65d  89642448             mov dword ptr [esp + 0x48], esp
// 0080f661  6a01                 push 1
// 0080f663  56                   push esi
// 0080f664  e827d6ffff           call 0x80cc90
// 0080f669  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0080f66d  e87efcffff           call 0x80f2f0
// 0080f672  56                   push esi
// 0080f673  ff15f8c99800         call dword ptr [0x98c9f8]
// 0080f679  8b742454             mov esi, dword ptr [esp + 0x54]
// 0080f67d  43                   inc ebx
// 0080f67e  47                   inc edi
// 0080f67f  3bfe                 cmp edi, esi
// 0080f681  0f8c7affffff         jl 0x80f601
// 0080f687  5f                   pop edi
// 0080f688  5e                   pop esi
// 0080f689  5d                   pop ebp
// 0080f68a  b801000000           mov eax, 1
// 0080f68f  5b                   pop ebx
// 0080f690  83c438               add esp, 0x38
// 0080f693  c21800               ret 0x18
// copied from an identical function in another client (function ?SetIcons@CXTPImageManager@@QAEHAAVCImageList@@PAIHVCSize@@W4XTPImageState@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp