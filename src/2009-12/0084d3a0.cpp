// roc 2009-12 0084d3a0  unit: CXTPCompatibleDC  size: 540 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084d3a0
//
// 0084d3a0  83ec10               sub esp, 0x10
// 0084d3a3  55                   push ebp
// 0084d3a4  56                   push esi
// 0084d3a5  8b742420             mov esi, dword ptr [esp + 0x20]
// 0084d3a9  57                   push edi
// 0084d3aa  56                   push esi
// 0084d3ab  8d442410             lea eax, [esp + 0x10]
// 0084d3af  50                   push eax
// 0084d3b0  8be9                 mov ebp, ecx
// 0084d3b2  ff1564cc9800         call dword ptr [0x98cc64]
// 0084d3b8  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0084d3bc  85ff                 test edi, edi
// 0084d3be  7525                 jne 0x84d3e5
// 0084d3c0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0084d3c4  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0084d3c8  8b442428             mov eax, dword ptr [esp + 0x28]
// 0084d3cc  51                   push ecx
// 0084d3cd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0084d3d1  52                   push edx
// 0084d3d2  50                   push eax
// 0084d3d3  56                   push esi
// 0084d3d4  51                   push ecx
// 0084d3d5  8bcd                 mov ecx, ebp
// 0084d3d7  e8f4feffff           call 0x84d2d0
// 0084d3dc  5f                   pop edi
// 0084d3dd  5e                   pop esi
// 0084d3de  5d                   pop ebp
// 0084d3df  83c410               add esp, 0x10
// 0084d3e2  c21800               ret 0x18
// 0084d3e5  837c243000           cmp dword ptr [esp + 0x30], 0
// 0084d3ea  8b542428             mov edx, dword ptr [esp + 0x28]
// 0084d3ee  53                   push ebx
// 0084d3ef  89542428             mov dword ptr [esp + 0x28], edx
// 0084d3f3  0f84e1000000         je 0x84d4da
// 0084d3f9  8b4704               mov eax, dword ptr [edi + 4]
// 0084d3fc  39442414             cmp dword ptr [esp + 0x14], eax
// 0084d400  7d04                 jge 0x84d406
// 0084d402  89442414             mov dword ptr [esp + 0x14], eax
// 0084d406  8b470c               mov eax, dword ptr [edi + 0xc]
// 0084d409  3944241c             cmp dword ptr [esp + 0x1c], eax
// 0084d40d  7e04                 jle 0x84d413
// 0084d40f  8944241c             mov dword ptr [esp + 0x1c], eax
// 0084d413  8b4708               mov eax, dword ptr [edi + 8]
// 0084d416  8b542410             mov edx, dword ptr [esp + 0x10]
// 0084d41a  3bd0                 cmp edx, eax
// 0084d41c  0f8f90010000         jg 0x84d5b2
// 0084d422  8b0f                 mov ecx, dword ptr [edi]
// 0084d424  394c2418             cmp dword ptr [esp + 0x18], ecx
// 0084d428  0f8c84010000         jl 0x84d5b2
// 0084d42e  3bd1                 cmp edx, ecx
// 0084d430  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0084d434  7d3a                 jge 0x84d470
// 0084d436  8b4608               mov eax, dword ptr [esi + 8]
// 0084d439  8bd0                 mov edx, eax
// 0084d43b  2b06                 sub eax, dword ptr [esi]
// 0084d43d  2bd1                 sub edx, ecx
// 0084d43f  89542430             mov dword ptr [esp + 0x30], edx
// 0084d443  db442430             fild dword ptr [esp + 0x30]
// 0084d447  89442430             mov dword ptr [esp + 0x30], eax
// 0084d44b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0084d44f  51                   push ecx
// 0084d450  da742434             fidiv dword ptr [esp + 0x34]
// 0084d454  894c2414             mov dword ptr [esp + 0x14], ecx
// 0084d458  8bcd                 mov ecx, ebp
// 0084d45a  d95c2434             fstp dword ptr [esp + 0x34]
// 0084d45e  d9442434             fld dword ptr [esp + 0x34]
// 0084d462  d91c24               fstp dword ptr [esp]
// 0084d465  53                   push ebx
// 0084d466  50                   push eax
// 0084d467  e854cfffff           call 0x84a3c0
// 0084d46c  8944242c             mov dword ptr [esp + 0x2c], eax
// 0084d470  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0084d474  3b4f08               cmp ecx, dword ptr [edi + 8]
// 0084d477  7e3b                 jle 0x84d4b4
// 0084d479  8b4608               mov eax, dword ptr [esi + 8]
// 0084d47c  8b7f08               mov edi, dword ptr [edi + 8]
// 0084d47f  8bd0                 mov edx, eax
// 0084d481  2b06                 sub eax, dword ptr [esi]
// 0084d483  2bd7                 sub edx, edi
// 0084d485  89542430             mov dword ptr [esp + 0x30], edx
// 0084d489  db442430             fild dword ptr [esp + 0x30]
// 0084d48d  89442430             mov dword ptr [esp + 0x30], eax
// 0084d491  8b442428             mov eax, dword ptr [esp + 0x28]
// 0084d495  51                   push ecx
// 0084d496  da742434             fidiv dword ptr [esp + 0x34]
// 0084d49a  8bcd                 mov ecx, ebp
// 0084d49c  897c241c             mov dword ptr [esp + 0x1c], edi
// 0084d4a0  d95c2434             fstp dword ptr [esp + 0x34]
// 0084d4a4  d9442434             fld dword ptr [esp + 0x34]
// 0084d4a8  d91c24               fstp dword ptr [esp]
// 0084d4ab  53                   push ebx
// 0084d4ac  50                   push eax
// 0084d4ad  e80ecfffff           call 0x84a3c0
// 0084d4b2  8bd8                 mov ebx, eax
// 0084d4b4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0084d4b8  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0084d4bc  51                   push ecx
// 0084d4bd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0084d4c1  53                   push ebx
// 0084d4c2  52                   push edx
// 0084d4c3  8d44241c             lea eax, [esp + 0x1c]
// 0084d4c7  50                   push eax
// 0084d4c8  51                   push ecx
// 0084d4c9  8bcd                 mov ecx, ebp
// 0084d4cb  e800feffff           call 0x84d2d0
// 0084d4d0  5b                   pop ebx
// 0084d4d1  5f                   pop edi
// 0084d4d2  5e                   pop esi
// 0084d4d3  5d                   pop ebp
// 0084d4d4  83c410               add esp, 0x10
// 0084d4d7  c21800               ret 0x18
// 0084d4da  8b07                 mov eax, dword ptr [edi]
// 0084d4dc  39442410             cmp dword ptr [esp + 0x10], eax
// 0084d4e0  7d04                 jge 0x84d4e6
// 0084d4e2  89442410             mov dword ptr [esp + 0x10], eax
// 0084d4e6  8b4708               mov eax, dword ptr [edi + 8]
// 0084d4e9  39442418             cmp dword ptr [esp + 0x18], eax
// 0084d4ed  7e04                 jle 0x84d4f3
// 0084d4ef  89442418             mov dword ptr [esp + 0x18], eax
// 0084d4f3  8b470c               mov eax, dword ptr [edi + 0xc]
// 0084d4f6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0084d4fa  3bc8                 cmp ecx, eax
// 0084d4fc  0f8fb0000000         jg 0x84d5b2
// 0084d502  8b4704               mov eax, dword ptr [edi + 4]
// 0084d505  3944241c             cmp dword ptr [esp + 0x1c], eax
// 0084d509  0f8ca3000000         jl 0x84d5b2
// 0084d50f  3bc8                 cmp ecx, eax
// 0084d511  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0084d515  7d3d                 jge 0x84d554
// 0084d517  8bc8                 mov ecx, eax
// 0084d519  8b460c               mov eax, dword ptr [esi + 0xc]
// 0084d51c  8bd0                 mov edx, eax
// 0084d51e  2b4604               sub eax, dword ptr [esi + 4]
// 0084d521  2bd1                 sub edx, ecx
// 0084d523  89542434             mov dword ptr [esp + 0x34], edx
// 0084d527  db442434             fild dword ptr [esp + 0x34]
// 0084d52b  89442434             mov dword ptr [esp + 0x34], eax
// 0084d52f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0084d533  51                   push ecx
// 0084d534  da742438             fidiv dword ptr [esp + 0x38]
// 0084d538  894c2418             mov dword ptr [esp + 0x18], ecx
// 0084d53c  8bcd                 mov ecx, ebp
// 0084d53e  d95c2438             fstp dword ptr [esp + 0x38]
// 0084d542  d9442438             fld dword ptr [esp + 0x38]
// 0084d546  d91c24               fstp dword ptr [esp]
// 0084d549  53                   push ebx
// 0084d54a  50                   push eax
// 0084d54b  e870ceffff           call 0x84a3c0
// 0084d550  8944242c             mov dword ptr [esp + 0x2c], eax
// 0084d554  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0084d558  3b4f0c               cmp ecx, dword ptr [edi + 0xc]
// 0084d55b  7e3c                 jle 0x84d599
// 0084d55d  8b460c               mov eax, dword ptr [esi + 0xc]
// 0084d560  8b7f0c               mov edi, dword ptr [edi + 0xc]
// 0084d563  8bd0                 mov edx, eax
// 0084d565  2b4604               sub eax, dword ptr [esi + 4]
// 0084d568  2bd7                 sub edx, edi
// 0084d56a  89542434             mov dword ptr [esp + 0x34], edx
// 0084d56e  db442434             fild dword ptr [esp + 0x34]
// 0084d572  89442434             mov dword ptr [esp + 0x34], eax
// 0084d576  8b442428             mov eax, dword ptr [esp + 0x28]
// 0084d57a  51                   push ecx
// 0084d57b  da742438             fidiv dword ptr [esp + 0x38]
// 0084d57f  8bcd                 mov ecx, ebp
// 0084d581  897c2420             mov dword ptr [esp + 0x20], edi
// 0084d585  d95c2438             fstp dword ptr [esp + 0x38]
// 0084d589  d9442438             fld dword ptr [esp + 0x38]
// 0084d58d  d91c24               fstp dword ptr [esp]
// 0084d590  53                   push ebx
// 0084d591  50                   push eax
// 0084d592  e829ceffff           call 0x84a3c0
// 0084d597  8bd8                 mov ebx, eax
// 0084d599  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0084d59d  8b442424             mov eax, dword ptr [esp + 0x24]
// 0084d5a1  6a00                 push 0
// 0084d5a3  53                   push ebx
// 0084d5a4  51                   push ecx
// 0084d5a5  8d54241c             lea edx, [esp + 0x1c]
// 0084d5a9  52                   push edx
// 0084d5aa  50                   push eax
// 0084d5ab  8bcd                 mov ecx, ebp
// 0084d5ad  e81efdffff           call 0x84d2d0
// 0084d5b2  5b                   pop ebx
// 0084d5b3  5f                   pop edi
// 0084d5b4  5e                   pop esi
// 0084d5b5  5d                   pop ebp
// 0084d5b6  83c410               add esp, 0x10
// 0084d5b9  c21800               ret 0x18
// copied from an identical function in another client (function ?GradientFill@CXTPDrawHelpers@@QAEXPAVCDC@@PBUtagRECT@@KKH1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\Common\XTPDrawHelpers.cpp