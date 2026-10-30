// roc 2009-12 008b4750  unit: CXTPDockingPaneSplitterContainer  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b4750
//
// 008b4750  83ec0c               sub esp, 0xc
// 008b4753  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008b4757  53                   push ebx
// 008b4758  55                   push ebp
// 008b4759  56                   push esi
// 008b475a  57                   push edi
// 008b475b  e8e0c0ffff           call 0x8b0840
// 008b4760  8b88d4000000         mov ecx, dword ptr [eax + 0xd4]
// 008b4766  8b5128               mov edx, dword ptr [ecx + 0x28]
// 008b4769  8b742428             mov esi, dword ptr [esp + 0x28]
// 008b476d  89542418             mov dword ptr [esp + 0x18], edx
// 008b4771  8d4c2414             lea ecx, [esp + 0x14]
// 008b4775  51                   push ecx
// 008b4776  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008b477a  8d542414             lea edx, [esp + 0x14]
// 008b477e  52                   push edx
// 008b477f  8b542434             mov edx, dword ptr [esp + 0x34]
// 008b4783  33ff                 xor edi, edi
// 008b4785  57                   push edi
// 008b4786  51                   push ecx
// 008b4787  83ec10               sub esp, 0x10
// 008b478a  8bcc                 mov ecx, esp
// 008b478c  8911                 mov dword ptr [ecx], edx
// 008b478e  8b542450             mov edx, dword ptr [esp + 0x50]
// 008b4792  895104               mov dword ptr [ecx + 4], edx
// 008b4795  8b542454             mov edx, dword ptr [esp + 0x54]
// 008b4799  895108               mov dword ptr [ecx + 8], edx
// 008b479c  8b542458             mov edx, dword ptr [esp + 0x58]
// 008b47a0  56                   push esi
// 008b47a1  50                   push eax
// 008b47a2  897c2438             mov dword ptr [esp + 0x38], edi
// 008b47a6  897c243c             mov dword ptr [esp + 0x3c], edi
// 008b47aa  89510c               mov dword ptr [ecx + 0xc], edx
// 008b47ad  e85efdffff           call 0x8b4510
// 008b47b2  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008b47b6  8b442454             mov eax, dword ptr [esp + 0x54]
// 008b47ba  8b542458             mov edx, dword ptr [esp + 0x58]
// 008b47be  8b6e04               mov ebp, dword ptr [esi + 4]
// 008b47c1  8901                 mov dword ptr [ecx], eax
// 008b47c3  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008b47c7  895104               mov dword ptr [ecx + 4], edx
// 008b47ca  8b542460             mov edx, dword ptr [esp + 0x60]
// 008b47ce  83c428               add esp, 0x28
// 008b47d1  894108               mov dword ptr [ecx + 8], eax
// 008b47d4  89510c               mov dword ptr [ecx + 0xc], edx
// 008b47d7  3bef                 cmp ebp, edi
// 008b47d9  0f8487000000         je 0x8b4866
// 008b47df  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008b47e3  8b742414             mov esi, dword ptr [esp + 0x14]
// 008b47e7  8bc5                 mov eax, ebp
// 008b47e9  8b7808               mov edi, dword ptr [eax + 8]
// 008b47ec  8b5730               mov edx, dword ptr [edi + 0x30]
// 008b47ef  8b6d00               mov ebp, dword ptr [ebp]
// 008b47f2  8bc2                 mov eax, edx
// 008b47f4  f7d8                 neg eax
// 008b47f6  85d2                 test edx, edx
// 008b47f8  7e1f                 jle 0x8b4819
// 008b47fa  85db                 test ebx, ebx
// 008b47fc  7504                 jne 0x8b4802
// 008b47fe  33c0                 xor eax, eax
// 008b4800  eb08                 jmp 0x8b480a
// 008b4802  8bc2                 mov eax, edx
// 008b4804  0fafc6               imul eax, esi
// 008b4807  99                   cdq 
// 008b4808  f7fb                 idiv ebx
// 008b480a  2b5f30               sub ebx, dword ptr [edi + 0x30]
// 008b480d  2bf0                 sub esi, eax
// 008b480f  33d2                 xor edx, edx
// 008b4811  85f6                 test esi, esi
// 008b4813  0f9ec2               setle dl
// 008b4816  4a                   dec edx
// 008b4817  23f2                 and esi, edx
// 008b4819  837c242400           cmp dword ptr [esp + 0x24], 0
// 008b481e  7421                 je 0x8b4841
// 008b4820  85ed                 test ebp, ebp
// 008b4822  7506                 jne 0x8b482a
// 008b4824  8b542434             mov edx, dword ptr [esp + 0x34]
// 008b4828  eb04                 jmp 0x8b482e
// 008b482a  8b11                 mov edx, dword ptr [ecx]
// 008b482c  03d0                 add edx, eax
// 008b482e  895108               mov dword ptr [ecx + 8], edx
// 008b4831  397c243c             cmp dword ptr [esp + 0x3c], edi
// 008b4835  742f                 je 0x8b4866
// 008b4837  8b442418             mov eax, dword ptr [esp + 0x18]
// 008b483b  03d0                 add edx, eax
// 008b483d  8911                 mov dword ptr [ecx], edx
// 008b483f  eb21                 jmp 0x8b4862
// 008b4841  85ed                 test ebp, ebp
// 008b4843  7506                 jne 0x8b484b
// 008b4845  8b542438             mov edx, dword ptr [esp + 0x38]
// 008b4849  eb05                 jmp 0x8b4850
// 008b484b  8b5104               mov edx, dword ptr [ecx + 4]
// 008b484e  03d0                 add edx, eax
// 008b4850  89510c               mov dword ptr [ecx + 0xc], edx
// 008b4853  397c243c             cmp dword ptr [esp + 0x3c], edi
// 008b4857  740d                 je 0x8b4866
// 008b4859  8b442418             mov eax, dword ptr [esp + 0x18]
// 008b485d  03d0                 add edx, eax
// 008b485f  895104               mov dword ptr [ecx + 4], edx
// 008b4862  85ed                 test ebp, ebp
// 008b4864  7581                 jne 0x8b47e7
// 008b4866  5f                   pop edi
// 008b4867  5e                   pop esi
// 008b4868  5d                   pop ebp
// 008b4869  8bc1                 mov eax, ecx
// 008b486b  5b                   pop ebx
// 008b486c  83c40c               add esp, 0xc
// 008b486f  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?_CalculateResultDockingRect@CXTPDockingPaneSplitterContainer@@CA?AVCRect@@HAAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@V2@PAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
