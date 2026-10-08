// from server: 100% by auto
// roc 2008-06 00761420  unit: CXTPDockingPaneSplitterContainer  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00761420
//
// 00761420  83ec0c               sub esp, 0xc
// 00761423  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00761427  53                   push ebx
// 00761428  55                   push ebp
// 00761429  56                   push esi
// 0076142a  57                   push edi
// 0076142b  e870c0ffff           call 0x75d4a0
// 00761430  8b88d4000000         mov ecx, dword ptr [eax + 0xd4]
// 00761436  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00761439  8b742428             mov esi, dword ptr [esp + 0x28]
// 0076143d  89542418             mov dword ptr [esp + 0x18], edx
// 00761441  8d4c2414             lea ecx, [esp + 0x14]
// 00761445  51                   push ecx
// 00761446  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0076144a  8d542414             lea edx, [esp + 0x14]
// 0076144e  52                   push edx
// 0076144f  8b542434             mov edx, dword ptr [esp + 0x34]
// 00761453  33ff                 xor edi, edi
// 00761455  57                   push edi
// 00761456  51                   push ecx
// 00761457  83ec10               sub esp, 0x10
// 0076145a  8bcc                 mov ecx, esp
// 0076145c  8911                 mov dword ptr [ecx], edx
// 0076145e  8b542450             mov edx, dword ptr [esp + 0x50]
// 00761462  895104               mov dword ptr [ecx + 4], edx
// 00761465  8b542454             mov edx, dword ptr [esp + 0x54]
// 00761469  895108               mov dword ptr [ecx + 8], edx
// 0076146c  8b542458             mov edx, dword ptr [esp + 0x58]
// 00761470  56                   push esi
// 00761471  50                   push eax
// 00761472  897c2438             mov dword ptr [esp + 0x38], edi
// 00761476  897c243c             mov dword ptr [esp + 0x3c], edi
// 0076147a  89510c               mov dword ptr [ecx + 0xc], edx
// 0076147d  e85efdffff           call 0x7611e0
// 00761482  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00761486  8b442454             mov eax, dword ptr [esp + 0x54]
// 0076148a  8b542458             mov edx, dword ptr [esp + 0x58]
// 0076148e  8b6e04               mov ebp, dword ptr [esi + 4]
// 00761491  8901                 mov dword ptr [ecx], eax
// 00761493  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00761497  895104               mov dword ptr [ecx + 4], edx
// 0076149a  8b542460             mov edx, dword ptr [esp + 0x60]
// 0076149e  83c428               add esp, 0x28
// 007614a1  894108               mov dword ptr [ecx + 8], eax
// 007614a4  89510c               mov dword ptr [ecx + 0xc], edx
// 007614a7  3bef                 cmp ebp, edi
// 007614a9  0f8487000000         je 0x761536
// 007614af  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007614b3  8b742414             mov esi, dword ptr [esp + 0x14]
// 007614b7  8bc5                 mov eax, ebp
// 007614b9  8b7808               mov edi, dword ptr [eax + 8]
// 007614bc  8b5730               mov edx, dword ptr [edi + 0x30]
// 007614bf  8b6d00               mov ebp, dword ptr [ebp]
// 007614c2  8bc2                 mov eax, edx
// 007614c4  f7d8                 neg eax
// 007614c6  85d2                 test edx, edx
// 007614c8  7e1f                 jle 0x7614e9
// 007614ca  85db                 test ebx, ebx
// 007614cc  7504                 jne 0x7614d2
// 007614ce  33c0                 xor eax, eax
// 007614d0  eb08                 jmp 0x7614da
// 007614d2  8bc2                 mov eax, edx
// 007614d4  0fafc6               imul eax, esi
// 007614d7  99                   cdq 
// 007614d8  f7fb                 idiv ebx
// 007614da  2b5f30               sub ebx, dword ptr [edi + 0x30]
// 007614dd  2bf0                 sub esi, eax
// 007614df  33d2                 xor edx, edx
// 007614e1  85f6                 test esi, esi
// 007614e3  0f9ec2               setle dl
// 007614e6  4a                   dec edx
// 007614e7  23f2                 and esi, edx
// 007614e9  837c242400           cmp dword ptr [esp + 0x24], 0
// 007614ee  7421                 je 0x761511
// 007614f0  85ed                 test ebp, ebp
// 007614f2  7506                 jne 0x7614fa
// 007614f4  8b542434             mov edx, dword ptr [esp + 0x34]
// 007614f8  eb04                 jmp 0x7614fe
// 007614fa  8b11                 mov edx, dword ptr [ecx]
// 007614fc  03d0                 add edx, eax
// 007614fe  895108               mov dword ptr [ecx + 8], edx
// 00761501  397c243c             cmp dword ptr [esp + 0x3c], edi
// 00761505  742f                 je 0x761536
// 00761507  8b442418             mov eax, dword ptr [esp + 0x18]
// 0076150b  03d0                 add edx, eax
// 0076150d  8911                 mov dword ptr [ecx], edx
// 0076150f  eb21                 jmp 0x761532
// 00761511  85ed                 test ebp, ebp
// 00761513  7506                 jne 0x76151b
// 00761515  8b542438             mov edx, dword ptr [esp + 0x38]
// 00761519  eb05                 jmp 0x761520
// 0076151b  8b5104               mov edx, dword ptr [ecx + 4]
// 0076151e  03d0                 add edx, eax
// 00761520  89510c               mov dword ptr [ecx + 0xc], edx
// 00761523  397c243c             cmp dword ptr [esp + 0x3c], edi
// 00761527  740d                 je 0x761536
// 00761529  8b442418             mov eax, dword ptr [esp + 0x18]
// 0076152d  03d0                 add edx, eax
// 0076152f  895104               mov dword ptr [ecx + 4], edx
// 00761532  85ed                 test ebp, ebp
// 00761534  7581                 jne 0x7614b7
// 00761536  5f                   pop edi
// 00761537  5e                   pop esi
// 00761538  5d                   pop ebp
// 00761539  8bc1                 mov eax, ecx
// 0076153b  5b                   pop ebx
// 0076153c  83c40c               add esp, 0xc
// 0076153f  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?_CalculateResultDockingRect@CXTPDockingPaneSplitterContainer@@CA?AVCRect@@HAAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@V2@PAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
