// roc 2008-06 00734a20  unit: XTPPaintThemes::CXTPDefaultTheme  size: 473 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00734a20
//
// 00734a20  83ec30               sub esp, 0x30
// 00734a23  837c244400           cmp dword ptr [esp + 0x44], 0
// 00734a28  53                   push ebx
// 00734a29  55                   push ebp
// 00734a2a  56                   push esi
// 00734a2b  57                   push edi
// 00734a2c  8bf1                 mov esi, ecx
// 00734a2e  753f                 jne 0x734a6f
// 00734a30  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00734a34  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 00734a3b  8b442444             mov eax, dword ptr [esp + 0x44]
// 00734a3f  7517                 jne 0x734a58
// 00734a41  c70008000000         mov dword ptr [eax], 8
// 00734a47  c7400408000000       mov dword ptr [eax + 4], 8
// 00734a4e  5f                   pop edi
// 00734a4f  5e                   pop esi
// 00734a50  5d                   pop ebp
// 00734a51  5b                   pop ebx
// 00734a52  83c430               add esp, 0x30
// 00734a55  c21400               ret 0x14
// 00734a58  c70006000000         mov dword ptr [eax], 6
// 00734a5e  c7400406000000       mov dword ptr [eax + 4], 6
// 00734a65  5f                   pop edi
// 00734a66  5e                   pop esi
// 00734a67  5d                   pop ebp
// 00734a68  5b                   pop ebx
// 00734a69  83c430               add esp, 0x30
// 00734a6c  c21400               ret 0x14
// 00734a6f  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00734a73  8b4220               mov eax, dword ptr [edx + 0x20]
// 00734a76  8d4c2430             lea ecx, [esp + 0x30]
// 00734a7a  51                   push ecx
// 00734a7b  50                   push eax
// 00734a7c  ff15842d8000         call dword ptr [0x802d84]
// 00734a82  8b442450             mov eax, dword ptr [esp + 0x50]
// 00734a86  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 00734a8c  8ba8bc000000         mov ebp, dword ptr [eax + 0xbc]
// 00734a92  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 00734a98  8bb8c4000000         mov edi, dword ptr [eax + 0xc4]
// 00734a9e  8b98b8000000         mov ebx, dword ptr [eax + 0xb8]
// 00734aa4  89542428             mov dword ptr [esp + 0x28], edx
// 00734aa8  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 00734aae  8954242c             mov dword ptr [esp + 0x2c], edx
// 00734ab2  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 00734ab8  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00734abc  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 00734ac0  83bdf800000002       cmp dword ptr [ebp + 0xf8], 2
// 00734ac7  89542410             mov dword ptr [esp + 0x10], edx
// 00734acb  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 00734ad1  7557                 jne 0x734b2a
// 00734ad3  6a14                 push 0x14
// 00734ad5  6a10                 push 0x10
// 00734ad7  83ec10               sub esp, 0x10
// 00734ada  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 00734ae1  8bc4                 mov eax, esp
// 00734ae3  7520                 jne 0x734b05
// 00734ae5  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00734ae9  83c10b               add ecx, 0xb
// 00734aec  8d57fb               lea edx, [edi - 5]
// 00734aef  8908                 mov dword ptr [eax], ecx
// 00734af1  83c3f5               add ebx, -0xb
// 00734af4  895004               mov dword ptr [eax + 4], edx
// 00734af7  83c7fd               add edi, -3
// 00734afa  895808               mov dword ptr [eax + 8], ebx
// 00734afd  89780c               mov dword ptr [eax + 0xc], edi
// 00734b00  e9cd000000           jmp 0x734bd2
// 00734b05  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00734b09  8d79fb               lea edi, [ecx - 5]
// 00734b0c  83c203               add edx, 3
// 00734b0f  83c1fd               add ecx, -3
// 00734b12  8938                 mov dword ptr [eax], edi
// 00734b14  895004               mov dword ptr [eax + 4], edx
// 00734b17  894808               mov dword ptr [eax + 8], ecx
// 00734b1a  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00734b1e  83c3fd               add ebx, -3
// 00734b21  89580c               mov dword ptr [eax + 0xc], ebx
// 00734b24  51                   push ecx
// 00734b25  e9ad000000           jmp 0x734bd7
// 00734b2a  8bad00010000         mov ebp, dword ptr [ebp + 0x100]
// 00734b30  83fd05               cmp ebp, 5
// 00734b33  7452                 je 0x734b87
// 00734b35  83fd02               cmp ebp, 2
// 00734b38  7405                 je 0x734b3f
// 00734b3a  83fd03               cmp ebp, 3
// 00734b3d  7548                 jne 0x734b87
// 00734b3f  6a14                 push 0x14
// 00734b41  6a10                 push 0x10
// 00734b43  83ec10               sub esp, 0x10
// 00734b46  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 00734b4d  8bc4                 mov eax, esp
// 00734b4f  7517                 jne 0x734b68
// 00734b51  8b542428             mov edx, dword ptr [esp + 0x28]
// 00734b55  8d4ffc               lea ecx, [edi - 4]
// 00734b58  8910                 mov dword ptr [eax], edx
// 00734b5a  894804               mov dword ptr [eax + 4], ecx
// 00734b5d  83c7fe               add edi, -2
// 00734b60  895808               mov dword ptr [eax + 8], ebx
// 00734b63  89780c               mov dword ptr [eax + 0xc], edi
// 00734b66  eb6a                 jmp 0x734bd2
// 00734b68  8d4b02               lea ecx, [ebx + 2]
// 00734b6b  83c204               add edx, 4
// 00734b6e  8908                 mov dword ptr [eax], ecx
// 00734b70  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00734b74  895004               mov dword ptr [eax + 4], edx
// 00734b77  8b542460             mov edx, dword ptr [esp + 0x60]
// 00734b7b  83c304               add ebx, 4
// 00734b7e  895808               mov dword ptr [eax + 8], ebx
// 00734b81  89480c               mov dword ptr [eax + 0xc], ecx
// 00734b84  52                   push edx
// 00734b85  eb50                 jmp 0x734bd7
// 00734b87  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 00734b8e  6a14                 push 0x14
// 00734b90  6a10                 push 0x10
// 00734b92  7521                 jne 0x734bb5
// 00734b94  8d79fc               lea edi, [ecx - 4]
// 00734b97  83c1fe               add ecx, -2
// 00734b9a  83ec10               sub esp, 0x10
// 00734b9d  8bc4                 mov eax, esp
// 00734b9f  8938                 mov dword ptr [eax], edi
// 00734ba1  895004               mov dword ptr [eax + 4], edx
// 00734ba4  8b542460             mov edx, dword ptr [esp + 0x60]
// 00734ba8  894808               mov dword ptr [eax + 8], ecx
// 00734bab  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00734baf  89480c               mov dword ptr [eax + 0xc], ecx
// 00734bb2  52                   push edx
// 00734bb3  eb22                 jmp 0x734bd7
// 00734bb5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00734bb9  8d7afc               lea edi, [edx - 4]
// 00734bbc  83c104               add ecx, 4
// 00734bbf  83c2fe               add edx, -2
// 00734bc2  83ec10               sub esp, 0x10
// 00734bc5  8bc4                 mov eax, esp
// 00734bc7  8908                 mov dword ptr [eax], ecx
// 00734bc9  897804               mov dword ptr [eax + 4], edi
// 00734bcc  895808               mov dword ptr [eax + 8], ebx
// 00734bcf  89500c               mov dword ptr [eax + 0xc], edx
// 00734bd2  8b442460             mov eax, dword ptr [esp + 0x60]
// 00734bd6  50                   push eax
// 00734bd7  8bce                 mov ecx, esi
// 00734bd9  e89296f7ff           call 0x6ae270
// 00734bde  8b442444             mov eax, dword ptr [esp + 0x44]
// 00734be2  5f                   pop edi
// 00734be3  5e                   pop esi
// 00734be4  5d                   pop ebp
// 00734be5  c70000000000         mov dword ptr [eax], 0
// 00734beb  c7400400000000       mov dword ptr [eax + 4], 0
// 00734bf2  5b                   pop ebx
// 00734bf3  83c430               add esp, 0x30
// 00734bf6  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawCommandBarSeparator@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@PAVCXTPCommandBar@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
