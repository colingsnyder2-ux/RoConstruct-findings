// roc 2010-06 00837b60  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 639 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00837b60
//
// 00837b60  837c242800           cmp dword ptr [esp + 0x28], 0
// 00837b65  53                   push ebx
// 00837b66  55                   push ebp
// 00837b67  56                   push esi
// 00837b68  57                   push edi
// 00837b69  8bf1                 mov esi, ecx
// 00837b6b  7454                 je 0x837bc1
// 00837b6d  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00837b71  6a00                 push 0
// 00837b73  6a00                 push 0
// 00837b75  8d86fc040000         lea eax, [esi + 0x4fc]
// 00837b7b  50                   push eax
// 00837b7c  8d4c2424             lea ecx, [esp + 0x24]
// 00837b80  51                   push ecx
// 00837b81  57                   push edi
// 00837b82  e87997fcff           call 0x801300
// 00837b87  8bc8                 mov ecx, eax
// 00837b89  e8929afcff           call 0x801620
// 00837b8e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00837b92  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00837b96  6a2b                 push 0x2b
// 00837b98  6a2b                 push 0x2b
// 00837b9a  83ec10               sub esp, 0x10
// 00837b9d  8bc4                 mov eax, esp
// 00837b9f  8910                 mov dword ptr [eax], edx
// 00837ba1  8b542438             mov edx, dword ptr [esp + 0x38]
// 00837ba5  894804               mov dword ptr [eax + 4], ecx
// 00837ba8  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00837bac  895008               mov dword ptr [eax + 8], edx
// 00837baf  89480c               mov dword ptr [eax + 0xc], ecx
// 00837bb2  57                   push edi
// 00837bb3  8bce                 mov ecx, esi
// 00837bb5  e85657f7ff           call 0x7ad310
// 00837bba  5f                   pop edi
// 00837bbb  5e                   pop esi
// 00837bbc  5d                   pop ebp
// 00837bbd  5b                   pop ebx
// 00837bbe  c23000               ret 0x30
// 00837bc1  83be4005000000       cmp dword ptr [esi + 0x540], 0
// 00837bc8  8b442440             mov eax, dword ptr [esp + 0x40]
// 00837bcc  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00837bd0  0f84be010000         je 0x837d94
// 00837bd6  83f902               cmp ecx, 2
// 00837bd9  0f84b5010000         je 0x837d94
// 00837bdf  83f802               cmp eax, 2
// 00837be2  7425                 je 0x837c09
// 00837be4  85c0                 test eax, eax
// 00837be6  7413                 je 0x837bfb
// 00837be8  83f803               cmp eax, 3
// 00837beb  741c                 je 0x837c09
// 00837bed  83f801               cmp eax, 1
// 00837bf0  7409                 je 0x837bfb
// 00837bf2  83f804               cmp eax, 4
// 00837bf5  0f8599010000         jne 0x837d94
// 00837bfb  83f803               cmp eax, 3
// 00837bfe  7409                 je 0x837c09
// 00837c00  83f805               cmp eax, 5
// 00837c03  7404                 je 0x837c09
// 00837c05  33ff                 xor edi, edi
// 00837c07  eb05                 jmp 0x837c0e
// 00837c09  bf01000000           mov edi, 1
// 00837c0e  837c243000           cmp dword ptr [esp + 0x30], 0
// 00837c13  7575                 jne 0x837c8a
// 00837c15  8b542428             mov edx, dword ptr [esp + 0x28]
// 00837c19  52                   push edx
// 00837c1a  e8511ff7ff           call 0x7a9b70
// 00837c1f  83c404               add esp, 4
// 00837c22  85c0                 test eax, eax
// 00837c24  741c                 je 0x837c42
// 00837c26  837c243400           cmp dword ptr [esp + 0x34], 0
// 00837c2b  8d8670050000         lea eax, [esi + 0x570]
// 00837c31  0f8513010000         jne 0x837d4a
// 00837c37  8d8690050000         lea eax, [esi + 0x590]
// 00837c3d  e908010000           jmp 0x837d4a
// 00837c42  837c243400           cmp dword ptr [esp + 0x34], 0
// 00837c47  0f848b010000         je 0x837dd8
// 00837c4d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00837c51  8d8e50050000         lea ecx, [esi + 0x550]
// 00837c57  51                   push ecx
// 00837c58  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00837c5c  57                   push edi
// 00837c5d  6a3a                 push 0x3a
// 00837c5f  83ec10               sub esp, 0x10
// 00837c62  8bc4                 mov eax, esp
// 00837c64  8910                 mov dword ptr [eax], edx
// 00837c66  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00837c6a  894804               mov dword ptr [eax + 4], ecx
// 00837c6d  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00837c71  895008               mov dword ptr [eax + 8], edx
// 00837c74  8b542430             mov edx, dword ptr [esp + 0x30]
// 00837c78  89480c               mov dword ptr [eax + 0xc], ecx
// 00837c7b  52                   push edx
// 00837c7c  8bce                 mov ecx, esi
// 00837c7e  e86dfeffff           call 0x837af0
// 00837c83  5f                   pop edi
// 00837c84  5e                   pop esi
// 00837c85  5d                   pop ebp
// 00837c86  5b                   pop ebx
// 00837c87  c23000               ret 0x30
// 00837c8a  8b442434             mov eax, dword ptr [esp + 0x34]
// 00837c8e  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00837c92  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00837c96  83f802               cmp eax, 2
// 00837c99  7547                 jne 0x837ce2
// 00837c9b  85ed                 test ebp, ebp
// 00837c9d  0f8588000000         jne 0x837d2b
// 00837ca3  85db                 test ebx, ebx
// 00837ca5  0f8584000000         jne 0x837d2f
// 00837cab  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00837caf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00837cb3  6a33                 push 0x33
// 00837cb5  6a32                 push 0x32
// 00837cb7  83ec10               sub esp, 0x10
// 00837cba  8bc4                 mov eax, esp
// 00837cbc  8908                 mov dword ptr [eax], ecx
// 00837cbe  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00837cc2  895004               mov dword ptr [eax + 4], edx
// 00837cc5  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00837cc9  894808               mov dword ptr [eax + 8], ecx
// 00837ccc  89500c               mov dword ptr [eax + 0xc], edx
// 00837ccf  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00837cd3  50                   push eax
// 00837cd4  8bce                 mov ecx, esi
// 00837cd6  e89565f7ff           call 0x7ae270
// 00837cdb  5f                   pop edi
// 00837cdc  5e                   pop esi
// 00837cdd  5d                   pop ebp
// 00837cde  5b                   pop ebx
// 00837cdf  c23000               ret 0x30
// 00837ce2  85c0                 test eax, eax
// 00837ce4  7449                 je 0x837d2f
// 00837ce6  85ed                 test ebp, ebp
// 00837ce8  7541                 jne 0x837d2b
// 00837cea  85db                 test ebx, ebx
// 00837cec  7541                 jne 0x837d2f
// 00837cee  8d8e50050000         lea ecx, [esi + 0x550]
// 00837cf4  51                   push ecx
// 00837cf5  57                   push edi
// 00837cf6  6a25                 push 0x25
// 00837cf8  8b542424             mov edx, dword ptr [esp + 0x24]
// 00837cfc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00837d00  83ec10               sub esp, 0x10
// 00837d03  8bc4                 mov eax, esp
// 00837d05  8910                 mov dword ptr [eax], edx
// 00837d07  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00837d0b  894804               mov dword ptr [eax + 4], ecx
// 00837d0e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00837d12  895008               mov dword ptr [eax + 8], edx
// 00837d15  8b542430             mov edx, dword ptr [esp + 0x30]
// 00837d19  89480c               mov dword ptr [eax + 0xc], ecx
// 00837d1c  52                   push edx
// 00837d1d  8bce                 mov ecx, esi
// 00837d1f  e8ccfdffff           call 0x837af0
// 00837d24  5f                   pop edi
// 00837d25  5e                   pop esi
// 00837d26  5d                   pop ebp
// 00837d27  5b                   pop ebx
// 00837d28  c23000               ret 0x30
// 00837d2b  85db                 test ebx, ebx
// 00837d2d  7415                 je 0x837d44
// 00837d2f  53                   push ebx
// 00837d30  e83b1ef7ff           call 0x7a9b70
// 00837d35  83c404               add esp, 4
// 00837d38  85c0                 test eax, eax
// 00837d3a  7508                 jne 0x837d44
// 00837d3c  85ed                 test ebp, ebp
// 00837d3e  7441                 je 0x837d81
// 00837d40  85db                 test ebx, ebx
// 00837d42  7441                 je 0x837d85
// 00837d44  8d8670050000         lea eax, [esi + 0x570]
// 00837d4a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00837d4e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00837d52  50                   push eax
// 00837d53  57                   push edi
// 00837d54  6a32                 push 0x32
// 00837d56  83ec10               sub esp, 0x10
// 00837d59  8bc4                 mov eax, esp
// 00837d5b  8908                 mov dword ptr [eax], ecx
// 00837d5d  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00837d61  895004               mov dword ptr [eax + 4], edx
// 00837d64  8b542440             mov edx, dword ptr [esp + 0x40]
// 00837d68  894808               mov dword ptr [eax + 8], ecx
// 00837d6b  89500c               mov dword ptr [eax + 0xc], edx
// 00837d6e  8b442430             mov eax, dword ptr [esp + 0x30]
// 00837d72  50                   push eax
// 00837d73  8bce                 mov ecx, esi
// 00837d75  e876fdffff           call 0x837af0
// 00837d7a  5f                   pop edi
// 00837d7b  5e                   pop esi
// 00837d7c  5d                   pop ebp
// 00837d7d  5b                   pop ebx
// 00837d7e  c23000               ret 0x30
// 00837d81  85db                 test ebx, ebx
// 00837d83  7453                 je 0x837dd8
// 00837d85  8d8e90050000         lea ecx, [esi + 0x590]
// 00837d8b  51                   push ecx
// 00837d8c  57                   push edi
// 00837d8d  6a20                 push 0x20
// 00837d8f  e964ffffff           jmp 0x837cf8
// 00837d94  8b542430             mov edx, dword ptr [esp + 0x30]
// 00837d98  50                   push eax
// 00837d99  8b442430             mov eax, dword ptr [esp + 0x30]
// 00837d9d  51                   push ecx
// 00837d9e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00837da2  6a00                 push 0
// 00837da4  51                   push ecx
// 00837da5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00837da9  52                   push edx
// 00837daa  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00837dae  50                   push eax
// 00837daf  51                   push ecx
// 00837db0  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00837db4  83ec10               sub esp, 0x10
// 00837db7  8bc4                 mov eax, esp
// 00837db9  8910                 mov dword ptr [eax], edx
// 00837dbb  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00837dbf  894804               mov dword ptr [eax + 4], ecx
// 00837dc2  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00837dc6  895008               mov dword ptr [eax + 8], edx
// 00837dc9  8b542440             mov edx, dword ptr [esp + 0x40]
// 00837dcd  89480c               mov dword ptr [eax + 0xc], ecx
// 00837dd0  52                   push edx
// 00837dd1  8bce                 mov ecx, esi
// 00837dd3  e848380000           call 0x83b620
// 00837dd8  5f                   pop edi
// 00837dd9  5e                   pop esi
// 00837dda  5d                   pop ebp
// 00837ddb  5b                   pop ebx
// 00837ddc  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawRectangle@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
