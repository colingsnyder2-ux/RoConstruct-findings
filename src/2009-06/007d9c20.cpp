// roc 2009-06 007d9c20  unit: CXTPDockingPaneSplitterContainer  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d9c20
//
// 007d9c20  83ec0c               sub esp, 0xc
// 007d9c23  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007d9c27  53                   push ebx
// 007d9c28  55                   push ebp
// 007d9c29  56                   push esi
// 007d9c2a  57                   push edi
// 007d9c2b  e8d0c0ffff           call 0x7d5d00
// 007d9c30  8b88d4000000         mov ecx, dword ptr [eax + 0xd4]
// 007d9c36  8b5128               mov edx, dword ptr [ecx + 0x28]
// 007d9c39  8b742428             mov esi, dword ptr [esp + 0x28]
// 007d9c3d  89542418             mov dword ptr [esp + 0x18], edx
// 007d9c41  8d4c2414             lea ecx, [esp + 0x14]
// 007d9c45  51                   push ecx
// 007d9c46  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007d9c4a  8d542414             lea edx, [esp + 0x14]
// 007d9c4e  52                   push edx
// 007d9c4f  8b542434             mov edx, dword ptr [esp + 0x34]
// 007d9c53  33ff                 xor edi, edi
// 007d9c55  57                   push edi
// 007d9c56  51                   push ecx
// 007d9c57  83ec10               sub esp, 0x10
// 007d9c5a  8bcc                 mov ecx, esp
// 007d9c5c  8911                 mov dword ptr [ecx], edx
// 007d9c5e  8b542450             mov edx, dword ptr [esp + 0x50]
// 007d9c62  895104               mov dword ptr [ecx + 4], edx
// 007d9c65  8b542454             mov edx, dword ptr [esp + 0x54]
// 007d9c69  895108               mov dword ptr [ecx + 8], edx
// 007d9c6c  8b542458             mov edx, dword ptr [esp + 0x58]
// 007d9c70  56                   push esi
// 007d9c71  50                   push eax
// 007d9c72  897c2438             mov dword ptr [esp + 0x38], edi
// 007d9c76  897c243c             mov dword ptr [esp + 0x3c], edi
// 007d9c7a  89510c               mov dword ptr [ecx + 0xc], edx
// 007d9c7d  e85efdffff           call 0x7d99e0
// 007d9c82  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007d9c86  8b442454             mov eax, dword ptr [esp + 0x54]
// 007d9c8a  8b542458             mov edx, dword ptr [esp + 0x58]
// 007d9c8e  8b6e04               mov ebp, dword ptr [esi + 4]
// 007d9c91  8901                 mov dword ptr [ecx], eax
// 007d9c93  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 007d9c97  895104               mov dword ptr [ecx + 4], edx
// 007d9c9a  8b542460             mov edx, dword ptr [esp + 0x60]
// 007d9c9e  83c428               add esp, 0x28
// 007d9ca1  894108               mov dword ptr [ecx + 8], eax
// 007d9ca4  89510c               mov dword ptr [ecx + 0xc], edx
// 007d9ca7  3bef                 cmp ebp, edi
// 007d9ca9  0f8487000000         je 0x7d9d36
// 007d9caf  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007d9cb3  8b742414             mov esi, dword ptr [esp + 0x14]
// 007d9cb7  8bc5                 mov eax, ebp
// 007d9cb9  8b7808               mov edi, dword ptr [eax + 8]
// 007d9cbc  8b5730               mov edx, dword ptr [edi + 0x30]
// 007d9cbf  8b6d00               mov ebp, dword ptr [ebp]
// 007d9cc2  8bc2                 mov eax, edx
// 007d9cc4  f7d8                 neg eax
// 007d9cc6  85d2                 test edx, edx
// 007d9cc8  7e1f                 jle 0x7d9ce9
// 007d9cca  85db                 test ebx, ebx
// 007d9ccc  7504                 jne 0x7d9cd2
// 007d9cce  33c0                 xor eax, eax
// 007d9cd0  eb08                 jmp 0x7d9cda
// 007d9cd2  8bc2                 mov eax, edx
// 007d9cd4  0fafc6               imul eax, esi
// 007d9cd7  99                   cdq 
// 007d9cd8  f7fb                 idiv ebx
// 007d9cda  2b5f30               sub ebx, dword ptr [edi + 0x30]
// 007d9cdd  2bf0                 sub esi, eax
// 007d9cdf  33d2                 xor edx, edx
// 007d9ce1  85f6                 test esi, esi
// 007d9ce3  0f9ec2               setle dl
// 007d9ce6  4a                   dec edx
// 007d9ce7  23f2                 and esi, edx
// 007d9ce9  837c242400           cmp dword ptr [esp + 0x24], 0
// 007d9cee  7421                 je 0x7d9d11
// 007d9cf0  85ed                 test ebp, ebp
// 007d9cf2  7506                 jne 0x7d9cfa
// 007d9cf4  8b542434             mov edx, dword ptr [esp + 0x34]
// 007d9cf8  eb04                 jmp 0x7d9cfe
// 007d9cfa  8b11                 mov edx, dword ptr [ecx]
// 007d9cfc  03d0                 add edx, eax
// 007d9cfe  895108               mov dword ptr [ecx + 8], edx
// 007d9d01  397c243c             cmp dword ptr [esp + 0x3c], edi
// 007d9d05  742f                 je 0x7d9d36
// 007d9d07  8b442418             mov eax, dword ptr [esp + 0x18]
// 007d9d0b  03d0                 add edx, eax
// 007d9d0d  8911                 mov dword ptr [ecx], edx
// 007d9d0f  eb21                 jmp 0x7d9d32
// 007d9d11  85ed                 test ebp, ebp
// 007d9d13  7506                 jne 0x7d9d1b
// 007d9d15  8b542438             mov edx, dword ptr [esp + 0x38]
// 007d9d19  eb05                 jmp 0x7d9d20
// 007d9d1b  8b5104               mov edx, dword ptr [ecx + 4]
// 007d9d1e  03d0                 add edx, eax
// 007d9d20  89510c               mov dword ptr [ecx + 0xc], edx
// 007d9d23  397c243c             cmp dword ptr [esp + 0x3c], edi
// 007d9d27  740d                 je 0x7d9d36
// 007d9d29  8b442418             mov eax, dword ptr [esp + 0x18]
// 007d9d2d  03d0                 add edx, eax
// 007d9d2f  895104               mov dword ptr [ecx + 4], edx
// 007d9d32  85ed                 test ebp, ebp
// 007d9d34  7581                 jne 0x7d9cb7
// 007d9d36  5f                   pop edi
// 007d9d37  5e                   pop esi
// 007d9d38  5d                   pop ebp
// 007d9d39  8bc1                 mov eax, ecx
// 007d9d3b  5b                   pop ebx
// 007d9d3c  83c40c               add esp, 0xc
// 007d9d3f  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?_CalculateResultDockingRect@CXTPDockingPaneSplitterContainer@@CA?AVCRect@@HAAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@V2@PAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
