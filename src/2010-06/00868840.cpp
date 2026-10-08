// roc 2010-06 00868840  unit: CXTPDockingPaneSplitterContainer  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00868840
//
// 00868840  83ec0c               sub esp, 0xc
// 00868843  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00868847  53                   push ebx
// 00868848  55                   push ebp
// 00868849  56                   push esi
// 0086884a  57                   push edi
// 0086884b  e8c0c0ffff           call 0x864910
// 00868850  8b88d4000000         mov ecx, dword ptr [eax + 0xd4]
// 00868856  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00868859  8b742428             mov esi, dword ptr [esp + 0x28]
// 0086885d  89542418             mov dword ptr [esp + 0x18], edx
// 00868861  8d4c2414             lea ecx, [esp + 0x14]
// 00868865  51                   push ecx
// 00868866  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0086886a  8d542414             lea edx, [esp + 0x14]
// 0086886e  52                   push edx
// 0086886f  8b542434             mov edx, dword ptr [esp + 0x34]
// 00868873  33ff                 xor edi, edi
// 00868875  57                   push edi
// 00868876  51                   push ecx
// 00868877  83ec10               sub esp, 0x10
// 0086887a  8bcc                 mov ecx, esp
// 0086887c  8911                 mov dword ptr [ecx], edx
// 0086887e  8b542450             mov edx, dword ptr [esp + 0x50]
// 00868882  895104               mov dword ptr [ecx + 4], edx
// 00868885  8b542454             mov edx, dword ptr [esp + 0x54]
// 00868889  895108               mov dword ptr [ecx + 8], edx
// 0086888c  8b542458             mov edx, dword ptr [esp + 0x58]
// 00868890  56                   push esi
// 00868891  50                   push eax
// 00868892  897c2438             mov dword ptr [esp + 0x38], edi
// 00868896  897c243c             mov dword ptr [esp + 0x3c], edi
// 0086889a  89510c               mov dword ptr [ecx + 0xc], edx
// 0086889d  e85efdffff           call 0x868600
// 008688a2  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008688a6  8b442454             mov eax, dword ptr [esp + 0x54]
// 008688aa  8b542458             mov edx, dword ptr [esp + 0x58]
// 008688ae  8b6e04               mov ebp, dword ptr [esi + 4]
// 008688b1  8901                 mov dword ptr [ecx], eax
// 008688b3  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008688b7  895104               mov dword ptr [ecx + 4], edx
// 008688ba  8b542460             mov edx, dword ptr [esp + 0x60]
// 008688be  83c428               add esp, 0x28
// 008688c1  894108               mov dword ptr [ecx + 8], eax
// 008688c4  89510c               mov dword ptr [ecx + 0xc], edx
// 008688c7  3bef                 cmp ebp, edi
// 008688c9  0f8487000000         je 0x868956
// 008688cf  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008688d3  8b742414             mov esi, dword ptr [esp + 0x14]
// 008688d7  8bc5                 mov eax, ebp
// 008688d9  8b7808               mov edi, dword ptr [eax + 8]
// 008688dc  8b5730               mov edx, dword ptr [edi + 0x30]
// 008688df  8b6d00               mov ebp, dword ptr [ebp]
// 008688e2  8bc2                 mov eax, edx
// 008688e4  f7d8                 neg eax
// 008688e6  85d2                 test edx, edx
// 008688e8  7e1f                 jle 0x868909
// 008688ea  85db                 test ebx, ebx
// 008688ec  7504                 jne 0x8688f2
// 008688ee  33c0                 xor eax, eax
// 008688f0  eb08                 jmp 0x8688fa
// 008688f2  8bc2                 mov eax, edx
// 008688f4  0fafc6               imul eax, esi
// 008688f7  99                   cdq 
// 008688f8  f7fb                 idiv ebx
// 008688fa  2b5f30               sub ebx, dword ptr [edi + 0x30]
// 008688fd  2bf0                 sub esi, eax
// 008688ff  33d2                 xor edx, edx
// 00868901  85f6                 test esi, esi
// 00868903  0f9ec2               setle dl
// 00868906  4a                   dec edx
// 00868907  23f2                 and esi, edx
// 00868909  837c242400           cmp dword ptr [esp + 0x24], 0
// 0086890e  7421                 je 0x868931
// 00868910  85ed                 test ebp, ebp
// 00868912  7506                 jne 0x86891a
// 00868914  8b542434             mov edx, dword ptr [esp + 0x34]
// 00868918  eb04                 jmp 0x86891e
// 0086891a  8b11                 mov edx, dword ptr [ecx]
// 0086891c  03d0                 add edx, eax
// 0086891e  895108               mov dword ptr [ecx + 8], edx
// 00868921  397c243c             cmp dword ptr [esp + 0x3c], edi
// 00868925  742f                 je 0x868956
// 00868927  8b442418             mov eax, dword ptr [esp + 0x18]
// 0086892b  03d0                 add edx, eax
// 0086892d  8911                 mov dword ptr [ecx], edx
// 0086892f  eb21                 jmp 0x868952
// 00868931  85ed                 test ebp, ebp
// 00868933  7506                 jne 0x86893b
// 00868935  8b542438             mov edx, dword ptr [esp + 0x38]
// 00868939  eb05                 jmp 0x868940
// 0086893b  8b5104               mov edx, dword ptr [ecx + 4]
// 0086893e  03d0                 add edx, eax
// 00868940  89510c               mov dword ptr [ecx + 0xc], edx
// 00868943  397c243c             cmp dword ptr [esp + 0x3c], edi
// 00868947  740d                 je 0x868956
// 00868949  8b442418             mov eax, dword ptr [esp + 0x18]
// 0086894d  03d0                 add edx, eax
// 0086894f  895104               mov dword ptr [ecx + 4], edx
// 00868952  85ed                 test ebp, ebp
// 00868954  7581                 jne 0x8688d7
// 00868956  5f                   pop edi
// 00868957  5e                   pop esi
// 00868958  5d                   pop ebp
// 00868959  8bc1                 mov eax, ecx
// 0086895b  5b                   pop ebx
// 0086895c  83c40c               add esp, 0xc
// 0086895f  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?_CalculateResultDockingRect@CXTPDockingPaneSplitterContainer@@CA?AVCRect@@HAAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@V2@PAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
