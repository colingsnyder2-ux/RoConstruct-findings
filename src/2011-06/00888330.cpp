// roc 2011-06 00888330  unit: XTPPaintThemes::CXTPDefaultTheme  size: 473 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00888330
//
// 00888330  83ec30               sub esp, 0x30
// 00888333  837c244400           cmp dword ptr [esp + 0x44], 0
// 00888338  53                   push ebx
// 00888339  55                   push ebp
// 0088833a  56                   push esi
// 0088833b  57                   push edi
// 0088833c  8bf1                 mov esi, ecx
// 0088833e  753f                 jne 0x88837f
// 00888340  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00888344  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0088834b  8b442444             mov eax, dword ptr [esp + 0x44]
// 0088834f  7517                 jne 0x888368
// 00888351  c70008000000         mov dword ptr [eax], 8
// 00888357  c7400408000000       mov dword ptr [eax + 4], 8
// 0088835e  5f                   pop edi
// 0088835f  5e                   pop esi
// 00888360  5d                   pop ebp
// 00888361  5b                   pop ebx
// 00888362  83c430               add esp, 0x30
// 00888365  c21400               ret 0x14
// 00888368  c70006000000         mov dword ptr [eax], 6
// 0088836e  c7400406000000       mov dword ptr [eax + 4], 6
// 00888375  5f                   pop edi
// 00888376  5e                   pop esi
// 00888377  5d                   pop ebp
// 00888378  5b                   pop ebx
// 00888379  83c430               add esp, 0x30
// 0088837c  c21400               ret 0x14
// 0088837f  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00888383  8b4220               mov eax, dword ptr [edx + 0x20]
// 00888386  8d4c2430             lea ecx, [esp + 0x30]
// 0088838a  51                   push ecx
// 0088838b  50                   push eax
// 0088838c  ff157c1ca400         call dword ptr [0xa41c7c]
// 00888392  8b442450             mov eax, dword ptr [esp + 0x50]
// 00888396  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 0088839c  8ba8bc000000         mov ebp, dword ptr [eax + 0xbc]
// 008883a2  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 008883a8  8bb8c4000000         mov edi, dword ptr [eax + 0xc4]
// 008883ae  8b98b8000000         mov ebx, dword ptr [eax + 0xb8]
// 008883b4  89542428             mov dword ptr [esp + 0x28], edx
// 008883b8  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 008883be  8954242c             mov dword ptr [esp + 0x2c], edx
// 008883c2  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 008883c8  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008883cc  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 008883d0  83bdf800000002       cmp dword ptr [ebp + 0xf8], 2
// 008883d7  89542410             mov dword ptr [esp + 0x10], edx
// 008883db  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 008883e1  7557                 jne 0x88843a
// 008883e3  6a14                 push 0x14
// 008883e5  6a10                 push 0x10
// 008883e7  83ec10               sub esp, 0x10
// 008883ea  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 008883f1  8bc4                 mov eax, esp
// 008883f3  7520                 jne 0x888415
// 008883f5  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 008883f9  83c10b               add ecx, 0xb
// 008883fc  8d57fb               lea edx, [edi - 5]
// 008883ff  8908                 mov dword ptr [eax], ecx
// 00888401  83c3f5               add ebx, -0xb
// 00888404  895004               mov dword ptr [eax + 4], edx
// 00888407  83c7fd               add edi, -3
// 0088840a  895808               mov dword ptr [eax + 8], ebx
// 0088840d  89780c               mov dword ptr [eax + 0xc], edi
// 00888410  e9cd000000           jmp 0x8884e2
// 00888415  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00888419  8d79fb               lea edi, [ecx - 5]
// 0088841c  83c203               add edx, 3
// 0088841f  83c1fd               add ecx, -3
// 00888422  8938                 mov dword ptr [eax], edi
// 00888424  895004               mov dword ptr [eax + 4], edx
// 00888427  894808               mov dword ptr [eax + 8], ecx
// 0088842a  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0088842e  83c3fd               add ebx, -3
// 00888431  89580c               mov dword ptr [eax + 0xc], ebx
// 00888434  51                   push ecx
// 00888435  e9ad000000           jmp 0x8884e7
// 0088843a  8bad00010000         mov ebp, dword ptr [ebp + 0x100]
// 00888440  83fd05               cmp ebp, 5
// 00888443  7452                 je 0x888497
// 00888445  83fd02               cmp ebp, 2
// 00888448  7405                 je 0x88844f
// 0088844a  83fd03               cmp ebp, 3
// 0088844d  7548                 jne 0x888497
// 0088844f  6a14                 push 0x14
// 00888451  6a10                 push 0x10
// 00888453  83ec10               sub esp, 0x10
// 00888456  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 0088845d  8bc4                 mov eax, esp
// 0088845f  7517                 jne 0x888478
// 00888461  8b542428             mov edx, dword ptr [esp + 0x28]
// 00888465  8d4ffc               lea ecx, [edi - 4]
// 00888468  8910                 mov dword ptr [eax], edx
// 0088846a  894804               mov dword ptr [eax + 4], ecx
// 0088846d  83c7fe               add edi, -2
// 00888470  895808               mov dword ptr [eax + 8], ebx
// 00888473  89780c               mov dword ptr [eax + 0xc], edi
// 00888476  eb6a                 jmp 0x8884e2
// 00888478  8d4b02               lea ecx, [ebx + 2]
// 0088847b  83c204               add edx, 4
// 0088847e  8908                 mov dword ptr [eax], ecx
// 00888480  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00888484  895004               mov dword ptr [eax + 4], edx
// 00888487  8b542460             mov edx, dword ptr [esp + 0x60]
// 0088848b  83c304               add ebx, 4
// 0088848e  895808               mov dword ptr [eax + 8], ebx
// 00888491  89480c               mov dword ptr [eax + 0xc], ecx
// 00888494  52                   push edx
// 00888495  eb50                 jmp 0x8884e7
// 00888497  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 0088849e  6a14                 push 0x14
// 008884a0  6a10                 push 0x10
// 008884a2  7521                 jne 0x8884c5
// 008884a4  8d79fc               lea edi, [ecx - 4]
// 008884a7  83c1fe               add ecx, -2
// 008884aa  83ec10               sub esp, 0x10
// 008884ad  8bc4                 mov eax, esp
// 008884af  8938                 mov dword ptr [eax], edi
// 008884b1  895004               mov dword ptr [eax + 4], edx
// 008884b4  8b542460             mov edx, dword ptr [esp + 0x60]
// 008884b8  894808               mov dword ptr [eax + 8], ecx
// 008884bb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008884bf  89480c               mov dword ptr [eax + 0xc], ecx
// 008884c2  52                   push edx
// 008884c3  eb22                 jmp 0x8884e7
// 008884c5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008884c9  8d7afc               lea edi, [edx - 4]
// 008884cc  83c104               add ecx, 4
// 008884cf  83c2fe               add edx, -2
// 008884d2  83ec10               sub esp, 0x10
// 008884d5  8bc4                 mov eax, esp
// 008884d7  8908                 mov dword ptr [eax], ecx
// 008884d9  897804               mov dword ptr [eax + 4], edi
// 008884dc  895808               mov dword ptr [eax + 8], ebx
// 008884df  89500c               mov dword ptr [eax + 0xc], edx
// 008884e2  8b442460             mov eax, dword ptr [esp + 0x60]
// 008884e6  50                   push eax
// 008884e7  8bce                 mov ecx, esi
// 008884e9  e8c272f8ff           call 0x80f7b0
// 008884ee  8b442444             mov eax, dword ptr [esp + 0x44]
// 008884f2  5f                   pop edi
// 008884f3  5e                   pop esi
// 008884f4  5d                   pop ebp
// 008884f5  c70000000000         mov dword ptr [eax], 0
// 008884fb  c7400400000000       mov dword ptr [eax + 4], 0
// 00888502  5b                   pop ebx
// 00888503  83c430               add esp, 0x30
// 00888506  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawCommandBarSeparator@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@PAVCXTPCommandBar@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
