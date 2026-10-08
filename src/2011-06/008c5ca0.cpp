// roc 2011-06 008c5ca0  unit: CXTPDockingPaneSplitterContainer  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c5ca0
//
// 008c5ca0  83ec0c               sub esp, 0xc
// 008c5ca3  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008c5ca7  53                   push ebx
// 008c5ca8  55                   push ebp
// 008c5ca9  56                   push esi
// 008c5caa  57                   push edi
// 008c5cab  e8b0c0ffff           call 0x8c1d60
// 008c5cb0  8b88d4000000         mov ecx, dword ptr [eax + 0xd4]
// 008c5cb6  8b5128               mov edx, dword ptr [ecx + 0x28]
// 008c5cb9  8b742428             mov esi, dword ptr [esp + 0x28]
// 008c5cbd  89542418             mov dword ptr [esp + 0x18], edx
// 008c5cc1  8d4c2414             lea ecx, [esp + 0x14]
// 008c5cc5  51                   push ecx
// 008c5cc6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008c5cca  8d542414             lea edx, [esp + 0x14]
// 008c5cce  52                   push edx
// 008c5ccf  8b542434             mov edx, dword ptr [esp + 0x34]
// 008c5cd3  33ff                 xor edi, edi
// 008c5cd5  57                   push edi
// 008c5cd6  51                   push ecx
// 008c5cd7  83ec10               sub esp, 0x10
// 008c5cda  8bcc                 mov ecx, esp
// 008c5cdc  8911                 mov dword ptr [ecx], edx
// 008c5cde  8b542450             mov edx, dword ptr [esp + 0x50]
// 008c5ce2  895104               mov dword ptr [ecx + 4], edx
// 008c5ce5  8b542454             mov edx, dword ptr [esp + 0x54]
// 008c5ce9  895108               mov dword ptr [ecx + 8], edx
// 008c5cec  8b542458             mov edx, dword ptr [esp + 0x58]
// 008c5cf0  56                   push esi
// 008c5cf1  50                   push eax
// 008c5cf2  897c2438             mov dword ptr [esp + 0x38], edi
// 008c5cf6  897c243c             mov dword ptr [esp + 0x3c], edi
// 008c5cfa  89510c               mov dword ptr [ecx + 0xc], edx
// 008c5cfd  e85efdffff           call 0x8c5a60
// 008c5d02  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008c5d06  8b442454             mov eax, dword ptr [esp + 0x54]
// 008c5d0a  8b542458             mov edx, dword ptr [esp + 0x58]
// 008c5d0e  8b6e04               mov ebp, dword ptr [esi + 4]
// 008c5d11  8901                 mov dword ptr [ecx], eax
// 008c5d13  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008c5d17  895104               mov dword ptr [ecx + 4], edx
// 008c5d1a  8b542460             mov edx, dword ptr [esp + 0x60]
// 008c5d1e  83c428               add esp, 0x28
// 008c5d21  894108               mov dword ptr [ecx + 8], eax
// 008c5d24  89510c               mov dword ptr [ecx + 0xc], edx
// 008c5d27  3bef                 cmp ebp, edi
// 008c5d29  0f8487000000         je 0x8c5db6
// 008c5d2f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008c5d33  8b742414             mov esi, dword ptr [esp + 0x14]
// 008c5d37  8bc5                 mov eax, ebp
// 008c5d39  8b7808               mov edi, dword ptr [eax + 8]
// 008c5d3c  8b5730               mov edx, dword ptr [edi + 0x30]
// 008c5d3f  8b6d00               mov ebp, dword ptr [ebp]
// 008c5d42  8bc2                 mov eax, edx
// 008c5d44  f7d8                 neg eax
// 008c5d46  85d2                 test edx, edx
// 008c5d48  7e1f                 jle 0x8c5d69
// 008c5d4a  85db                 test ebx, ebx
// 008c5d4c  7504                 jne 0x8c5d52
// 008c5d4e  33c0                 xor eax, eax
// 008c5d50  eb08                 jmp 0x8c5d5a
// 008c5d52  8bc2                 mov eax, edx
// 008c5d54  0fafc6               imul eax, esi
// 008c5d57  99                   cdq 
// 008c5d58  f7fb                 idiv ebx
// 008c5d5a  2b5f30               sub ebx, dword ptr [edi + 0x30]
// 008c5d5d  2bf0                 sub esi, eax
// 008c5d5f  33d2                 xor edx, edx
// 008c5d61  85f6                 test esi, esi
// 008c5d63  0f9ec2               setle dl
// 008c5d66  4a                   dec edx
// 008c5d67  23f2                 and esi, edx
// 008c5d69  837c242400           cmp dword ptr [esp + 0x24], 0
// 008c5d6e  7421                 je 0x8c5d91
// 008c5d70  85ed                 test ebp, ebp
// 008c5d72  7506                 jne 0x8c5d7a
// 008c5d74  8b542434             mov edx, dword ptr [esp + 0x34]
// 008c5d78  eb04                 jmp 0x8c5d7e
// 008c5d7a  8b11                 mov edx, dword ptr [ecx]
// 008c5d7c  03d0                 add edx, eax
// 008c5d7e  895108               mov dword ptr [ecx + 8], edx
// 008c5d81  397c243c             cmp dword ptr [esp + 0x3c], edi
// 008c5d85  742f                 je 0x8c5db6
// 008c5d87  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c5d8b  03d0                 add edx, eax
// 008c5d8d  8911                 mov dword ptr [ecx], edx
// 008c5d8f  eb21                 jmp 0x8c5db2
// 008c5d91  85ed                 test ebp, ebp
// 008c5d93  7506                 jne 0x8c5d9b
// 008c5d95  8b542438             mov edx, dword ptr [esp + 0x38]
// 008c5d99  eb05                 jmp 0x8c5da0
// 008c5d9b  8b5104               mov edx, dword ptr [ecx + 4]
// 008c5d9e  03d0                 add edx, eax
// 008c5da0  89510c               mov dword ptr [ecx + 0xc], edx
// 008c5da3  397c243c             cmp dword ptr [esp + 0x3c], edi
// 008c5da7  740d                 je 0x8c5db6
// 008c5da9  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c5dad  03d0                 add edx, eax
// 008c5daf  895104               mov dword ptr [ecx + 4], edx
// 008c5db2  85ed                 test ebp, ebp
// 008c5db4  7581                 jne 0x8c5d37
// 008c5db6  5f                   pop edi
// 008c5db7  5e                   pop esi
// 008c5db8  5d                   pop ebp
// 008c5db9  8bc1                 mov eax, ecx
// 008c5dbb  5b                   pop ebx
// 008c5dbc  83c40c               add esp, 0xc
// 008c5dbf  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?_CalculateResultDockingRect@CXTPDockingPaneSplitterContainer@@CA?AVCRect@@HAAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@V2@PAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
