// roc 2009-12 0087e030  unit: XTPPaintThemes::CXTPDefaultTheme  size: 473 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087e030
//
// 0087e030  83ec30               sub esp, 0x30
// 0087e033  837c244400           cmp dword ptr [esp + 0x44], 0
// 0087e038  53                   push ebx
// 0087e039  55                   push ebp
// 0087e03a  56                   push esi
// 0087e03b  57                   push edi
// 0087e03c  8bf1                 mov esi, ecx
// 0087e03e  753f                 jne 0x87e07f
// 0087e040  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0087e044  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0087e04b  8b442444             mov eax, dword ptr [esp + 0x44]
// 0087e04f  7517                 jne 0x87e068
// 0087e051  c70008000000         mov dword ptr [eax], 8
// 0087e057  c7400408000000       mov dword ptr [eax + 4], 8
// 0087e05e  5f                   pop edi
// 0087e05f  5e                   pop esi
// 0087e060  5d                   pop ebp
// 0087e061  5b                   pop ebx
// 0087e062  83c430               add esp, 0x30
// 0087e065  c21400               ret 0x14
// 0087e068  c70006000000         mov dword ptr [eax], 6
// 0087e06e  c7400406000000       mov dword ptr [eax + 4], 6
// 0087e075  5f                   pop edi
// 0087e076  5e                   pop esi
// 0087e077  5d                   pop ebp
// 0087e078  5b                   pop ebx
// 0087e079  83c430               add esp, 0x30
// 0087e07c  c21400               ret 0x14
// 0087e07f  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0087e083  8b4220               mov eax, dword ptr [edx + 0x20]
// 0087e086  8d4c2430             lea ecx, [esp + 0x30]
// 0087e08a  51                   push ecx
// 0087e08b  50                   push eax
// 0087e08c  ff1550cc9800         call dword ptr [0x98cc50]
// 0087e092  8b442450             mov eax, dword ptr [esp + 0x50]
// 0087e096  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 0087e09c  8ba8bc000000         mov ebp, dword ptr [eax + 0xbc]
// 0087e0a2  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 0087e0a8  8bb8c4000000         mov edi, dword ptr [eax + 0xc4]
// 0087e0ae  8b98b8000000         mov ebx, dword ptr [eax + 0xb8]
// 0087e0b4  89542428             mov dword ptr [esp + 0x28], edx
// 0087e0b8  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 0087e0be  8954242c             mov dword ptr [esp + 0x2c], edx
// 0087e0c2  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 0087e0c8  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0087e0cc  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 0087e0d0  83bdf800000002       cmp dword ptr [ebp + 0xf8], 2
// 0087e0d7  89542410             mov dword ptr [esp + 0x10], edx
// 0087e0db  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 0087e0e1  7557                 jne 0x87e13a
// 0087e0e3  6a14                 push 0x14
// 0087e0e5  6a10                 push 0x10
// 0087e0e7  83ec10               sub esp, 0x10
// 0087e0ea  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 0087e0f1  8bc4                 mov eax, esp
// 0087e0f3  7520                 jne 0x87e115
// 0087e0f5  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0087e0f9  83c10b               add ecx, 0xb
// 0087e0fc  8d57fb               lea edx, [edi - 5]
// 0087e0ff  8908                 mov dword ptr [eax], ecx
// 0087e101  83c3f5               add ebx, -0xb
// 0087e104  895004               mov dword ptr [eax + 4], edx
// 0087e107  83c7fd               add edi, -3
// 0087e10a  895808               mov dword ptr [eax + 8], ebx
// 0087e10d  89780c               mov dword ptr [eax + 0xc], edi
// 0087e110  e9cd000000           jmp 0x87e1e2
// 0087e115  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0087e119  8d79fb               lea edi, [ecx - 5]
// 0087e11c  83c203               add edx, 3
// 0087e11f  83c1fd               add ecx, -3
// 0087e122  8938                 mov dword ptr [eax], edi
// 0087e124  895004               mov dword ptr [eax + 4], edx
// 0087e127  894808               mov dword ptr [eax + 8], ecx
// 0087e12a  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0087e12e  83c3fd               add ebx, -3
// 0087e131  89580c               mov dword ptr [eax + 0xc], ebx
// 0087e134  51                   push ecx
// 0087e135  e9ad000000           jmp 0x87e1e7
// 0087e13a  8bad00010000         mov ebp, dword ptr [ebp + 0x100]
// 0087e140  83fd05               cmp ebp, 5
// 0087e143  7452                 je 0x87e197
// 0087e145  83fd02               cmp ebp, 2
// 0087e148  7405                 je 0x87e14f
// 0087e14a  83fd03               cmp ebp, 3
// 0087e14d  7548                 jne 0x87e197
// 0087e14f  6a14                 push 0x14
// 0087e151  6a10                 push 0x10
// 0087e153  83ec10               sub esp, 0x10
// 0087e156  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 0087e15d  8bc4                 mov eax, esp
// 0087e15f  7517                 jne 0x87e178
// 0087e161  8b542428             mov edx, dword ptr [esp + 0x28]
// 0087e165  8d4ffc               lea ecx, [edi - 4]
// 0087e168  8910                 mov dword ptr [eax], edx
// 0087e16a  894804               mov dword ptr [eax + 4], ecx
// 0087e16d  83c7fe               add edi, -2
// 0087e170  895808               mov dword ptr [eax + 8], ebx
// 0087e173  89780c               mov dword ptr [eax + 0xc], edi
// 0087e176  eb6a                 jmp 0x87e1e2
// 0087e178  8d4b02               lea ecx, [ebx + 2]
// 0087e17b  83c204               add edx, 4
// 0087e17e  8908                 mov dword ptr [eax], ecx
// 0087e180  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0087e184  895004               mov dword ptr [eax + 4], edx
// 0087e187  8b542460             mov edx, dword ptr [esp + 0x60]
// 0087e18b  83c304               add ebx, 4
// 0087e18e  895808               mov dword ptr [eax + 8], ebx
// 0087e191  89480c               mov dword ptr [eax + 0xc], ecx
// 0087e194  52                   push edx
// 0087e195  eb50                 jmp 0x87e1e7
// 0087e197  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 0087e19e  6a14                 push 0x14
// 0087e1a0  6a10                 push 0x10
// 0087e1a2  7521                 jne 0x87e1c5
// 0087e1a4  8d79fc               lea edi, [ecx - 4]
// 0087e1a7  83c1fe               add ecx, -2
// 0087e1aa  83ec10               sub esp, 0x10
// 0087e1ad  8bc4                 mov eax, esp
// 0087e1af  8938                 mov dword ptr [eax], edi
// 0087e1b1  895004               mov dword ptr [eax + 4], edx
// 0087e1b4  8b542460             mov edx, dword ptr [esp + 0x60]
// 0087e1b8  894808               mov dword ptr [eax + 8], ecx
// 0087e1bb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0087e1bf  89480c               mov dword ptr [eax + 0xc], ecx
// 0087e1c2  52                   push edx
// 0087e1c3  eb22                 jmp 0x87e1e7
// 0087e1c5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0087e1c9  8d7afc               lea edi, [edx - 4]
// 0087e1cc  83c104               add ecx, 4
// 0087e1cf  83c2fe               add edx, -2
// 0087e1d2  83ec10               sub esp, 0x10
// 0087e1d5  8bc4                 mov eax, esp
// 0087e1d7  8908                 mov dword ptr [eax], ecx
// 0087e1d9  897804               mov dword ptr [eax + 4], edi
// 0087e1dc  895808               mov dword ptr [eax + 8], ebx
// 0087e1df  89500c               mov dword ptr [eax + 0xc], edx
// 0087e1e2  8b442460             mov eax, dword ptr [esp + 0x60]
// 0087e1e6  50                   push eax
// 0087e1e7  8bce                 mov ecx, esi
// 0087e1e9  e852f6f7ff           call 0x7fd840
// 0087e1ee  8b442444             mov eax, dword ptr [esp + 0x44]
// 0087e1f2  5f                   pop edi
// 0087e1f3  5e                   pop esi
// 0087e1f4  5d                   pop ebp
// 0087e1f5  c70000000000         mov dword ptr [eax], 0
// 0087e1fb  c7400400000000       mov dword ptr [eax + 4], 0
// 0087e202  5b                   pop ebx
// 0087e203  83c430               add esp, 0x30
// 0087e206  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawCommandBarSeparator@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@PAVCXTPCommandBar@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDefaultTheme.cpp