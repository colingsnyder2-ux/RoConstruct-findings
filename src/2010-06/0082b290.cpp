// roc 2010-06 0082b290  unit: XTPPaintThemes::CXTPDefaultTheme  size: 473 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0082b290
//
// 0082b290  83ec30               sub esp, 0x30
// 0082b293  837c244400           cmp dword ptr [esp + 0x44], 0
// 0082b298  53                   push ebx
// 0082b299  55                   push ebp
// 0082b29a  56                   push esi
// 0082b29b  57                   push edi
// 0082b29c  8bf1                 mov esi, ecx
// 0082b29e  753f                 jne 0x82b2df
// 0082b2a0  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0082b2a4  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0082b2ab  8b442444             mov eax, dword ptr [esp + 0x44]
// 0082b2af  7517                 jne 0x82b2c8
// 0082b2b1  c70008000000         mov dword ptr [eax], 8
// 0082b2b7  c7400408000000       mov dword ptr [eax + 4], 8
// 0082b2be  5f                   pop edi
// 0082b2bf  5e                   pop esi
// 0082b2c0  5d                   pop ebp
// 0082b2c1  5b                   pop ebx
// 0082b2c2  83c430               add esp, 0x30
// 0082b2c5  c21400               ret 0x14
// 0082b2c8  c70006000000         mov dword ptr [eax], 6
// 0082b2ce  c7400406000000       mov dword ptr [eax + 4], 6
// 0082b2d5  5f                   pop edi
// 0082b2d6  5e                   pop esi
// 0082b2d7  5d                   pop ebp
// 0082b2d8  5b                   pop ebx
// 0082b2d9  83c430               add esp, 0x30
// 0082b2dc  c21400               ret 0x14
// 0082b2df  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0082b2e3  8b4220               mov eax, dword ptr [edx + 0x20]
// 0082b2e6  8d4c2430             lea ecx, [esp + 0x30]
// 0082b2ea  51                   push ecx
// 0082b2eb  50                   push eax
// 0082b2ec  ff155cbc9e00         call dword ptr [0x9ebc5c]
// 0082b2f2  8b442450             mov eax, dword ptr [esp + 0x50]
// 0082b2f6  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 0082b2fc  8ba8bc000000         mov ebp, dword ptr [eax + 0xbc]
// 0082b302  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 0082b308  8bb8c4000000         mov edi, dword ptr [eax + 0xc4]
// 0082b30e  8b98b8000000         mov ebx, dword ptr [eax + 0xb8]
// 0082b314  89542428             mov dword ptr [esp + 0x28], edx
// 0082b318  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 0082b31e  8954242c             mov dword ptr [esp + 0x2c], edx
// 0082b322  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 0082b328  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0082b32c  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 0082b330  83bdf800000002       cmp dword ptr [ebp + 0xf8], 2
// 0082b337  89542410             mov dword ptr [esp + 0x10], edx
// 0082b33b  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 0082b341  7557                 jne 0x82b39a
// 0082b343  6a14                 push 0x14
// 0082b345  6a10                 push 0x10
// 0082b347  83ec10               sub esp, 0x10
// 0082b34a  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 0082b351  8bc4                 mov eax, esp
// 0082b353  7520                 jne 0x82b375
// 0082b355  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0082b359  83c10b               add ecx, 0xb
// 0082b35c  8d57fb               lea edx, [edi - 5]
// 0082b35f  8908                 mov dword ptr [eax], ecx
// 0082b361  83c3f5               add ebx, -0xb
// 0082b364  895004               mov dword ptr [eax + 4], edx
// 0082b367  83c7fd               add edi, -3
// 0082b36a  895808               mov dword ptr [eax + 8], ebx
// 0082b36d  89780c               mov dword ptr [eax + 0xc], edi
// 0082b370  e9cd000000           jmp 0x82b442
// 0082b375  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0082b379  8d79fb               lea edi, [ecx - 5]
// 0082b37c  83c203               add edx, 3
// 0082b37f  83c1fd               add ecx, -3
// 0082b382  8938                 mov dword ptr [eax], edi
// 0082b384  895004               mov dword ptr [eax + 4], edx
// 0082b387  894808               mov dword ptr [eax + 8], ecx
// 0082b38a  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0082b38e  83c3fd               add ebx, -3
// 0082b391  89580c               mov dword ptr [eax + 0xc], ebx
// 0082b394  51                   push ecx
// 0082b395  e9ad000000           jmp 0x82b447
// 0082b39a  8bad00010000         mov ebp, dword ptr [ebp + 0x100]
// 0082b3a0  83fd05               cmp ebp, 5
// 0082b3a3  7452                 je 0x82b3f7
// 0082b3a5  83fd02               cmp ebp, 2
// 0082b3a8  7405                 je 0x82b3af
// 0082b3aa  83fd03               cmp ebp, 3
// 0082b3ad  7548                 jne 0x82b3f7
// 0082b3af  6a14                 push 0x14
// 0082b3b1  6a10                 push 0x10
// 0082b3b3  83ec10               sub esp, 0x10
// 0082b3b6  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 0082b3bd  8bc4                 mov eax, esp
// 0082b3bf  7517                 jne 0x82b3d8
// 0082b3c1  8b542428             mov edx, dword ptr [esp + 0x28]
// 0082b3c5  8d4ffc               lea ecx, [edi - 4]
// 0082b3c8  8910                 mov dword ptr [eax], edx
// 0082b3ca  894804               mov dword ptr [eax + 4], ecx
// 0082b3cd  83c7fe               add edi, -2
// 0082b3d0  895808               mov dword ptr [eax + 8], ebx
// 0082b3d3  89780c               mov dword ptr [eax + 0xc], edi
// 0082b3d6  eb6a                 jmp 0x82b442
// 0082b3d8  8d4b02               lea ecx, [ebx + 2]
// 0082b3db  83c204               add edx, 4
// 0082b3de  8908                 mov dword ptr [eax], ecx
// 0082b3e0  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0082b3e4  895004               mov dword ptr [eax + 4], edx
// 0082b3e7  8b542460             mov edx, dword ptr [esp + 0x60]
// 0082b3eb  83c304               add ebx, 4
// 0082b3ee  895808               mov dword ptr [eax + 8], ebx
// 0082b3f1  89480c               mov dword ptr [eax + 0xc], ecx
// 0082b3f4  52                   push edx
// 0082b3f5  eb50                 jmp 0x82b447
// 0082b3f7  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 0082b3fe  6a14                 push 0x14
// 0082b400  6a10                 push 0x10
// 0082b402  7521                 jne 0x82b425
// 0082b404  8d79fc               lea edi, [ecx - 4]
// 0082b407  83c1fe               add ecx, -2
// 0082b40a  83ec10               sub esp, 0x10
// 0082b40d  8bc4                 mov eax, esp
// 0082b40f  8938                 mov dword ptr [eax], edi
// 0082b411  895004               mov dword ptr [eax + 4], edx
// 0082b414  8b542460             mov edx, dword ptr [esp + 0x60]
// 0082b418  894808               mov dword ptr [eax + 8], ecx
// 0082b41b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0082b41f  89480c               mov dword ptr [eax + 0xc], ecx
// 0082b422  52                   push edx
// 0082b423  eb22                 jmp 0x82b447
// 0082b425  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0082b429  8d7afc               lea edi, [edx - 4]
// 0082b42c  83c104               add ecx, 4
// 0082b42f  83c2fe               add edx, -2
// 0082b432  83ec10               sub esp, 0x10
// 0082b435  8bc4                 mov eax, esp
// 0082b437  8908                 mov dword ptr [eax], ecx
// 0082b439  897804               mov dword ptr [eax + 4], edi
// 0082b43c  895808               mov dword ptr [eax + 8], ebx
// 0082b43f  89500c               mov dword ptr [eax + 0xc], edx
// 0082b442  8b442460             mov eax, dword ptr [esp + 0x60]
// 0082b446  50                   push eax
// 0082b447  8bce                 mov ecx, esi
// 0082b449  e8c21ef8ff           call 0x7ad310
// 0082b44e  8b442444             mov eax, dword ptr [esp + 0x44]
// 0082b452  5f                   pop edi
// 0082b453  5e                   pop esi
// 0082b454  5d                   pop ebp
// 0082b455  c70000000000         mov dword ptr [eax], 0
// 0082b45b  c7400400000000       mov dword ptr [eax + 4], 0
// 0082b462  5b                   pop ebx
// 0082b463  83c430               add esp, 0x30
// 0082b466  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawCommandBarSeparator@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@PAVCXTPCommandBar@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
