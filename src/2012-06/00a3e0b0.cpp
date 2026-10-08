// roc 2012-06 00a3e0b0  unit: CXTPDockingPaneSplitterContainer  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3e0b0
//
// 00a3e0b0  83ec0c               sub esp, 0xc
// 00a3e0b3  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a3e0b7  53                   push ebx
// 00a3e0b8  55                   push ebp
// 00a3e0b9  56                   push esi
// 00a3e0ba  57                   push edi
// 00a3e0bb  e8b0c0ffff           call 0xa3a170
// 00a3e0c0  8b88d4000000         mov ecx, dword ptr [eax + 0xd4]
// 00a3e0c6  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00a3e0c9  8b742428             mov esi, dword ptr [esp + 0x28]
// 00a3e0cd  89542418             mov dword ptr [esp + 0x18], edx
// 00a3e0d1  8d4c2414             lea ecx, [esp + 0x14]
// 00a3e0d5  51                   push ecx
// 00a3e0d6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a3e0da  8d542414             lea edx, [esp + 0x14]
// 00a3e0de  52                   push edx
// 00a3e0df  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a3e0e3  33ff                 xor edi, edi
// 00a3e0e5  57                   push edi
// 00a3e0e6  51                   push ecx
// 00a3e0e7  83ec10               sub esp, 0x10
// 00a3e0ea  8bcc                 mov ecx, esp
// 00a3e0ec  8911                 mov dword ptr [ecx], edx
// 00a3e0ee  8b542450             mov edx, dword ptr [esp + 0x50]
// 00a3e0f2  895104               mov dword ptr [ecx + 4], edx
// 00a3e0f5  8b542454             mov edx, dword ptr [esp + 0x54]
// 00a3e0f9  895108               mov dword ptr [ecx + 8], edx
// 00a3e0fc  8b542458             mov edx, dword ptr [esp + 0x58]
// 00a3e100  56                   push esi
// 00a3e101  50                   push eax
// 00a3e102  897c2438             mov dword ptr [esp + 0x38], edi
// 00a3e106  897c243c             mov dword ptr [esp + 0x3c], edi
// 00a3e10a  89510c               mov dword ptr [ecx + 0xc], edx
// 00a3e10d  e85efdffff           call 0xa3de70
// 00a3e112  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a3e116  8b442454             mov eax, dword ptr [esp + 0x54]
// 00a3e11a  8b542458             mov edx, dword ptr [esp + 0x58]
// 00a3e11e  8b6e04               mov ebp, dword ptr [esi + 4]
// 00a3e121  8901                 mov dword ptr [ecx], eax
// 00a3e123  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00a3e127  895104               mov dword ptr [ecx + 4], edx
// 00a3e12a  8b542460             mov edx, dword ptr [esp + 0x60]
// 00a3e12e  83c428               add esp, 0x28
// 00a3e131  894108               mov dword ptr [ecx + 8], eax
// 00a3e134  89510c               mov dword ptr [ecx + 0xc], edx
// 00a3e137  3bef                 cmp ebp, edi
// 00a3e139  0f8487000000         je 0xa3e1c6
// 00a3e13f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00a3e143  8b742414             mov esi, dword ptr [esp + 0x14]
// 00a3e147  8bc5                 mov eax, ebp
// 00a3e149  8b7808               mov edi, dword ptr [eax + 8]
// 00a3e14c  8b5730               mov edx, dword ptr [edi + 0x30]
// 00a3e14f  8b6d00               mov ebp, dword ptr [ebp]
// 00a3e152  8bc2                 mov eax, edx
// 00a3e154  f7d8                 neg eax
// 00a3e156  85d2                 test edx, edx
// 00a3e158  7e1f                 jle 0xa3e179
// 00a3e15a  85db                 test ebx, ebx
// 00a3e15c  7504                 jne 0xa3e162
// 00a3e15e  33c0                 xor eax, eax
// 00a3e160  eb08                 jmp 0xa3e16a
// 00a3e162  8bc2                 mov eax, edx
// 00a3e164  0fafc6               imul eax, esi
// 00a3e167  99                   cdq 
// 00a3e168  f7fb                 idiv ebx
// 00a3e16a  2b5f30               sub ebx, dword ptr [edi + 0x30]
// 00a3e16d  2bf0                 sub esi, eax
// 00a3e16f  33d2                 xor edx, edx
// 00a3e171  85f6                 test esi, esi
// 00a3e173  0f9ec2               setle dl
// 00a3e176  4a                   dec edx
// 00a3e177  23f2                 and esi, edx
// 00a3e179  837c242400           cmp dword ptr [esp + 0x24], 0
// 00a3e17e  7421                 je 0xa3e1a1
// 00a3e180  85ed                 test ebp, ebp
// 00a3e182  7506                 jne 0xa3e18a
// 00a3e184  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a3e188  eb04                 jmp 0xa3e18e
// 00a3e18a  8b11                 mov edx, dword ptr [ecx]
// 00a3e18c  03d0                 add edx, eax
// 00a3e18e  895108               mov dword ptr [ecx + 8], edx
// 00a3e191  397c243c             cmp dword ptr [esp + 0x3c], edi
// 00a3e195  742f                 je 0xa3e1c6
// 00a3e197  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a3e19b  03d0                 add edx, eax
// 00a3e19d  8911                 mov dword ptr [ecx], edx
// 00a3e19f  eb21                 jmp 0xa3e1c2
// 00a3e1a1  85ed                 test ebp, ebp
// 00a3e1a3  7506                 jne 0xa3e1ab
// 00a3e1a5  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a3e1a9  eb05                 jmp 0xa3e1b0
// 00a3e1ab  8b5104               mov edx, dword ptr [ecx + 4]
// 00a3e1ae  03d0                 add edx, eax
// 00a3e1b0  89510c               mov dword ptr [ecx + 0xc], edx
// 00a3e1b3  397c243c             cmp dword ptr [esp + 0x3c], edi
// 00a3e1b7  740d                 je 0xa3e1c6
// 00a3e1b9  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a3e1bd  03d0                 add edx, eax
// 00a3e1bf  895104               mov dword ptr [ecx + 4], edx
// 00a3e1c2  85ed                 test ebp, ebp
// 00a3e1c4  7581                 jne 0xa3e147
// 00a3e1c6  5f                   pop edi
// 00a3e1c7  5e                   pop esi
// 00a3e1c8  5d                   pop ebp
// 00a3e1c9  8bc1                 mov eax, ecx
// 00a3e1cb  5b                   pop ebx
// 00a3e1cc  83c40c               add esp, 0xc
// 00a3e1cf  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?_CalculateResultDockingRect@CXTPDockingPaneSplitterContainer@@CA?AVCRect@@HAAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@V2@PAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
