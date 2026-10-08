// roc 2012-06 00a008f0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 473 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a008f0
//
// 00a008f0  83ec30               sub esp, 0x30
// 00a008f3  837c244400           cmp dword ptr [esp + 0x44], 0
// 00a008f8  53                   push ebx
// 00a008f9  55                   push ebp
// 00a008fa  56                   push esi
// 00a008fb  57                   push edi
// 00a008fc  8bf1                 mov esi, ecx
// 00a008fe  753f                 jne 0xa0093f
// 00a00900  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00a00904  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 00a0090b  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a0090f  7517                 jne 0xa00928
// 00a00911  c70008000000         mov dword ptr [eax], 8
// 00a00917  c7400408000000       mov dword ptr [eax + 4], 8
// 00a0091e  5f                   pop edi
// 00a0091f  5e                   pop esi
// 00a00920  5d                   pop ebp
// 00a00921  5b                   pop ebx
// 00a00922  83c430               add esp, 0x30
// 00a00925  c21400               ret 0x14
// 00a00928  c70006000000         mov dword ptr [eax], 6
// 00a0092e  c7400406000000       mov dword ptr [eax + 4], 6
// 00a00935  5f                   pop edi
// 00a00936  5e                   pop esi
// 00a00937  5d                   pop ebp
// 00a00938  5b                   pop ebx
// 00a00939  83c430               add esp, 0x30
// 00a0093c  c21400               ret 0x14
// 00a0093f  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00a00943  8b4220               mov eax, dword ptr [edx + 0x20]
// 00a00946  8d4c2430             lea ecx, [esp + 0x30]
// 00a0094a  51                   push ecx
// 00a0094b  50                   push eax
// 00a0094c  ff15d83ab200         call dword ptr [0xb23ad8]
// 00a00952  8b442450             mov eax, dword ptr [esp + 0x50]
// 00a00956  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 00a0095c  8ba8bc000000         mov ebp, dword ptr [eax + 0xbc]
// 00a00962  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 00a00968  8bb8c4000000         mov edi, dword ptr [eax + 0xc4]
// 00a0096e  8b98b8000000         mov ebx, dword ptr [eax + 0xb8]
// 00a00974  89542428             mov dword ptr [esp + 0x28], edx
// 00a00978  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 00a0097e  8954242c             mov dword ptr [esp + 0x2c], edx
// 00a00982  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 00a00988  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00a0098c  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 00a00990  83bdf800000002       cmp dword ptr [ebp + 0xf8], 2
// 00a00997  89542410             mov dword ptr [esp + 0x10], edx
// 00a0099b  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 00a009a1  7557                 jne 0xa009fa
// 00a009a3  6a14                 push 0x14
// 00a009a5  6a10                 push 0x10
// 00a009a7  83ec10               sub esp, 0x10
// 00a009aa  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 00a009b1  8bc4                 mov eax, esp
// 00a009b3  7520                 jne 0xa009d5
// 00a009b5  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00a009b9  83c10b               add ecx, 0xb
// 00a009bc  8d57fb               lea edx, [edi - 5]
// 00a009bf  8908                 mov dword ptr [eax], ecx
// 00a009c1  83c3f5               add ebx, -0xb
// 00a009c4  895004               mov dword ptr [eax + 4], edx
// 00a009c7  83c7fd               add edi, -3
// 00a009ca  895808               mov dword ptr [eax + 8], ebx
// 00a009cd  89780c               mov dword ptr [eax + 0xc], edi
// 00a009d0  e9cd000000           jmp 0xa00aa2
// 00a009d5  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00a009d9  8d79fb               lea edi, [ecx - 5]
// 00a009dc  83c203               add edx, 3
// 00a009df  83c1fd               add ecx, -3
// 00a009e2  8938                 mov dword ptr [eax], edi
// 00a009e4  895004               mov dword ptr [eax + 4], edx
// 00a009e7  894808               mov dword ptr [eax + 8], ecx
// 00a009ea  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00a009ee  83c3fd               add ebx, -3
// 00a009f1  89580c               mov dword ptr [eax + 0xc], ebx
// 00a009f4  51                   push ecx
// 00a009f5  e9ad000000           jmp 0xa00aa7
// 00a009fa  8bad00010000         mov ebp, dword ptr [ebp + 0x100]
// 00a00a00  83fd05               cmp ebp, 5
// 00a00a03  7452                 je 0xa00a57
// 00a00a05  83fd02               cmp ebp, 2
// 00a00a08  7405                 je 0xa00a0f
// 00a00a0a  83fd03               cmp ebp, 3
// 00a00a0d  7548                 jne 0xa00a57
// 00a00a0f  6a14                 push 0x14
// 00a00a11  6a10                 push 0x10
// 00a00a13  83ec10               sub esp, 0x10
// 00a00a16  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 00a00a1d  8bc4                 mov eax, esp
// 00a00a1f  7517                 jne 0xa00a38
// 00a00a21  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a00a25  8d4ffc               lea ecx, [edi - 4]
// 00a00a28  8910                 mov dword ptr [eax], edx
// 00a00a2a  894804               mov dword ptr [eax + 4], ecx
// 00a00a2d  83c7fe               add edi, -2
// 00a00a30  895808               mov dword ptr [eax + 8], ebx
// 00a00a33  89780c               mov dword ptr [eax + 0xc], edi
// 00a00a36  eb6a                 jmp 0xa00aa2
// 00a00a38  8d4b02               lea ecx, [ebx + 2]
// 00a00a3b  83c204               add edx, 4
// 00a00a3e  8908                 mov dword ptr [eax], ecx
// 00a00a40  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a00a44  895004               mov dword ptr [eax + 4], edx
// 00a00a47  8b542460             mov edx, dword ptr [esp + 0x60]
// 00a00a4b  83c304               add ebx, 4
// 00a00a4e  895808               mov dword ptr [eax + 8], ebx
// 00a00a51  89480c               mov dword ptr [eax + 0xc], ecx
// 00a00a54  52                   push edx
// 00a00a55  eb50                 jmp 0xa00aa7
// 00a00a57  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 00a00a5e  6a14                 push 0x14
// 00a00a60  6a10                 push 0x10
// 00a00a62  7521                 jne 0xa00a85
// 00a00a64  8d79fc               lea edi, [ecx - 4]
// 00a00a67  83c1fe               add ecx, -2
// 00a00a6a  83ec10               sub esp, 0x10
// 00a00a6d  8bc4                 mov eax, esp
// 00a00a6f  8938                 mov dword ptr [eax], edi
// 00a00a71  895004               mov dword ptr [eax + 4], edx
// 00a00a74  8b542460             mov edx, dword ptr [esp + 0x60]
// 00a00a78  894808               mov dword ptr [eax + 8], ecx
// 00a00a7b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a00a7f  89480c               mov dword ptr [eax + 0xc], ecx
// 00a00a82  52                   push edx
// 00a00a83  eb22                 jmp 0xa00aa7
// 00a00a85  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a00a89  8d7afc               lea edi, [edx - 4]
// 00a00a8c  83c104               add ecx, 4
// 00a00a8f  83c2fe               add edx, -2
// 00a00a92  83ec10               sub esp, 0x10
// 00a00a95  8bc4                 mov eax, esp
// 00a00a97  8908                 mov dword ptr [eax], ecx
// 00a00a99  897804               mov dword ptr [eax + 4], edi
// 00a00a9c  895808               mov dword ptr [eax + 8], ebx
// 00a00a9f  89500c               mov dword ptr [eax + 0xc], edx
// 00a00aa2  8b442460             mov eax, dword ptr [esp + 0x60]
// 00a00aa6  50                   push eax
// 00a00aa7  8bce                 mov ecx, esi
// 00a00aa9  e8e26ff8ff           call 0x987a90
// 00a00aae  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a00ab2  5f                   pop edi
// 00a00ab3  5e                   pop esi
// 00a00ab4  5d                   pop ebp
// 00a00ab5  c70000000000         mov dword ptr [eax], 0
// 00a00abb  c7400400000000       mov dword ptr [eax + 4], 0
// 00a00ac2  5b                   pop ebx
// 00a00ac3  83c430               add esp, 0x30
// 00a00ac6  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawCommandBarSeparator@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@PAVCXTPCommandBar@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
