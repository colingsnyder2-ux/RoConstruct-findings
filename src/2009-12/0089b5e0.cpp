// roc 2009-12 0089b5e0  unit: CXTPReportPaintManager  size: 1038 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089b5e0
//
// 0089b5e0  56                   push esi
// 0089b5e1  8bf1                 mov esi, ecx
// 0089b5e3  8b86bc020000         mov eax, dword ptr [esi + 0x2bc]
// 0089b5e9  57                   push edi
// 0089b5ea  83f804               cmp eax, 4
// 0089b5ed  0f8559010000         jne 0x89b74c
// 0089b5f3  8b8660010000         mov eax, dword ptr [esi + 0x160]
// 0089b5f9  83f8ff               cmp eax, -1
// 0089b5fc  7508                 jne 0x89b606
// 0089b5fe  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0089b604  eb02                 jmp 0x89b608
// 0089b606  8bc8                 mov ecx, eax
// 0089b608  8b866c010000         mov eax, dword ptr [esi + 0x16c]
// 0089b60e  83f8ff               cmp eax, -1
// 0089b611  7506                 jne 0x89b619
// 0089b613  8b8668010000         mov eax, dword ptr [esi + 0x168]
// 0089b619  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0089b61d  6a00                 push 0
// 0089b61f  51                   push ecx
// 0089b620  50                   push eax
// 0089b621  8d44241c             lea eax, [esp + 0x1c]
// 0089b625  50                   push eax
// 0089b626  57                   push edi
// 0089b627  e8741cfbff           call 0x84d2a0
// 0089b62c  8bc8                 mov ecx, eax
// 0089b62e  e89d1cfbff           call 0x84d2d0
// 0089b633  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0089b639  83f8ff               cmp eax, -1
// 0089b63c  7506                 jne 0x89b644
// 0089b63e  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0089b644  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089b648  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089b64c  50                   push eax
// 0089b64d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089b651  2bc8                 sub ecx, eax
// 0089b653  51                   push ecx
// 0089b654  52                   push edx
// 0089b655  50                   push eax
// 0089b656  57                   push edi
// 0089b657  8bce                 mov ecx, esi
// 0089b659  e8e2f0ffff           call 0x89a740
// 0089b65e  8b86bc010000         mov eax, dword ptr [esi + 0x1bc]
// 0089b664  83f8ff               cmp eax, -1
// 0089b667  7506                 jne 0x89b66f
// 0089b669  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 0089b66f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089b673  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089b677  50                   push eax
// 0089b678  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089b67c  2bc8                 sub ecx, eax
// 0089b67e  51                   push ecx
// 0089b67f  42                   inc edx
// 0089b680  52                   push edx
// 0089b681  50                   push eax
// 0089b682  57                   push edi
// 0089b683  8bce                 mov ecx, esi
// 0089b685  e8b6f0ffff           call 0x89a740
// 0089b68a  8b86bc010000         mov eax, dword ptr [esi + 0x1bc]
// 0089b690  83f8ff               cmp eax, -1
// 0089b693  7506                 jne 0x89b69b
// 0089b695  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 0089b69b  8b8e6c010000         mov ecx, dword ptr [esi + 0x16c]
// 0089b6a1  83f9ff               cmp ecx, -1
// 0089b6a4  7506                 jne 0x89b6ac
// 0089b6a6  8b8e68010000         mov ecx, dword ptr [esi + 0x168]
// 0089b6ac  dd0530e39b00         fld qword ptr [0x9be330]
// 0089b6b2  83ec08               sub esp, 8
// 0089b6b5  dd1c24               fstp qword ptr [esp]
// 0089b6b8  50                   push eax
// 0089b6b9  51                   push ecx
// 0089b6ba  8bce                 mov ecx, esi
// 0089b6bc  e80fedffff           call 0x89a3d0
// 0089b6c1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089b6c5  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089b6c9  50                   push eax
// 0089b6ca  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089b6ce  2bc8                 sub ecx, eax
// 0089b6d0  51                   push ecx
// 0089b6d1  83c202               add edx, 2
// 0089b6d4  52                   push edx
// 0089b6d5  50                   push eax
// 0089b6d6  57                   push edi
// 0089b6d7  8bce                 mov ecx, esi
// 0089b6d9  e862f0ffff           call 0x89a740
// 0089b6de  8b86bc010000         mov eax, dword ptr [esi + 0x1bc]
// 0089b6e4  83f8ff               cmp eax, -1
// 0089b6e7  7506                 jne 0x89b6ef
// 0089b6e9  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 0089b6ef  8b8e6c010000         mov ecx, dword ptr [esi + 0x16c]
// 0089b6f5  83f9ff               cmp ecx, -1
// 0089b6f8  7506                 jne 0x89b700
// 0089b6fa  8b8e68010000         mov ecx, dword ptr [esi + 0x168]
// 0089b700  dd05c0449a00         fld qword ptr [0x9a44c0]
// 0089b706  83ec08               sub esp, 8
// 0089b709  dd1c24               fstp qword ptr [esp]
// 0089b70c  50                   push eax
// 0089b70d  51                   push ecx
// 0089b70e  8bce                 mov ecx, esi
// 0089b710  e8bbecffff           call 0x89a3d0
// 0089b715  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089b719  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089b71d  50                   push eax
// 0089b71e  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089b722  2bc8                 sub ecx, eax
// 0089b724  51                   push ecx
// 0089b725  83c203               add edx, 3
// 0089b728  52                   push edx
// 0089b729  50                   push eax
// 0089b72a  57                   push edi
// 0089b72b  8bce                 mov ecx, esi
// 0089b72d  e80ef0ffff           call 0x89a740
// 0089b732  8b86bc010000         mov eax, dword ptr [esi + 0x1bc]
// 0089b738  83f8ff               cmp eax, -1
// 0089b73b  0f858d020000         jne 0x89b9ce
// 0089b741  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 0089b747  e982020000           jmp 0x89b9ce
// 0089b74c  83f803               cmp eax, 3
// 0089b74f  0f8559010000         jne 0x89b8ae
// 0089b755  8b8660010000         mov eax, dword ptr [esi + 0x160]
// 0089b75b  83f8ff               cmp eax, -1
// 0089b75e  7508                 jne 0x89b768
// 0089b760  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0089b766  eb02                 jmp 0x89b76a
// 0089b768  8bc8                 mov ecx, eax
// 0089b76a  8b866c010000         mov eax, dword ptr [esi + 0x16c]
// 0089b770  83f8ff               cmp eax, -1
// 0089b773  7506                 jne 0x89b77b
// 0089b775  8b8668010000         mov eax, dword ptr [esi + 0x168]
// 0089b77b  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0089b77f  6a00                 push 0
// 0089b781  51                   push ecx
// 0089b782  50                   push eax
// 0089b783  8d44241c             lea eax, [esp + 0x1c]
// 0089b787  50                   push eax
// 0089b788  57                   push edi
// 0089b789  e8121bfbff           call 0x84d2a0
// 0089b78e  8bc8                 mov ecx, eax
// 0089b790  e83b1bfbff           call 0x84d2d0
// 0089b795  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 0089b79b  83f8ff               cmp eax, -1
// 0089b79e  7506                 jne 0x89b7a6
// 0089b7a0  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0089b7a6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089b7aa  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089b7ae  50                   push eax
// 0089b7af  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089b7b3  2bc8                 sub ecx, eax
// 0089b7b5  51                   push ecx
// 0089b7b6  52                   push edx
// 0089b7b7  50                   push eax
// 0089b7b8  57                   push edi
// 0089b7b9  8bce                 mov ecx, esi
// 0089b7bb  e880efffff           call 0x89a740
// 0089b7c0  8b86bc010000         mov eax, dword ptr [esi + 0x1bc]
// 0089b7c6  83f8ff               cmp eax, -1
// 0089b7c9  7506                 jne 0x89b7d1
// 0089b7cb  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 0089b7d1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089b7d5  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089b7d9  50                   push eax
// 0089b7da  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089b7de  2bc8                 sub ecx, eax
// 0089b7e0  51                   push ecx
// 0089b7e1  42                   inc edx
// 0089b7e2  52                   push edx
// 0089b7e3  50                   push eax
// 0089b7e4  57                   push edi
// 0089b7e5  8bce                 mov ecx, esi
// 0089b7e7  e854efffff           call 0x89a740
// 0089b7ec  8b86bc010000         mov eax, dword ptr [esi + 0x1bc]
// 0089b7f2  83f8ff               cmp eax, -1
// 0089b7f5  7506                 jne 0x89b7fd
// 0089b7f7  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 0089b7fd  8b8e6c010000         mov ecx, dword ptr [esi + 0x16c]
// 0089b803  83f9ff               cmp ecx, -1
// 0089b806  7506                 jne 0x89b80e
// 0089b808  8b8e68010000         mov ecx, dword ptr [esi + 0x168]
// 0089b80e  dd0530e39b00         fld qword ptr [0x9be330]
// 0089b814  83ec08               sub esp, 8
// 0089b817  dd1c24               fstp qword ptr [esp]
// 0089b81a  50                   push eax
// 0089b81b  51                   push ecx
// 0089b81c  8bce                 mov ecx, esi
// 0089b81e  e8adebffff           call 0x89a3d0
// 0089b823  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089b827  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089b82b  50                   push eax
// 0089b82c  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089b830  2bc8                 sub ecx, eax
// 0089b832  51                   push ecx
// 0089b833  83c202               add edx, 2
// 0089b836  52                   push edx
// 0089b837  50                   push eax
// 0089b838  57                   push edi
// 0089b839  8bce                 mov ecx, esi
// 0089b83b  e800efffff           call 0x89a740
// 0089b840  8b86bc010000         mov eax, dword ptr [esi + 0x1bc]
// 0089b846  83f8ff               cmp eax, -1
// 0089b849  7506                 jne 0x89b851
// 0089b84b  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 0089b851  8b8e6c010000         mov ecx, dword ptr [esi + 0x16c]
// 0089b857  83f9ff               cmp ecx, -1
// 0089b85a  7506                 jne 0x89b862
// 0089b85c  8b8e68010000         mov ecx, dword ptr [esi + 0x168]
// 0089b862  dd05c0449a00         fld qword ptr [0x9a44c0]
// 0089b868  83ec08               sub esp, 8
// 0089b86b  dd1c24               fstp qword ptr [esp]
// 0089b86e  50                   push eax
// 0089b86f  51                   push ecx
// 0089b870  8bce                 mov ecx, esi
// 0089b872  e859ebffff           call 0x89a3d0
// 0089b877  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089b87b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089b87f  50                   push eax
// 0089b880  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089b884  2bc8                 sub ecx, eax
// 0089b886  51                   push ecx
// 0089b887  83c203               add edx, 3
// 0089b88a  52                   push edx
// 0089b88b  50                   push eax
// 0089b88c  57                   push edi
// 0089b88d  8bce                 mov ecx, esi
// 0089b88f  e8aceeffff           call 0x89a740
// 0089b894  8b86bc010000         mov eax, dword ptr [esi + 0x1bc]
// 0089b89a  83f8ff               cmp eax, -1
// 0089b89d  0f852b010000         jne 0x89b9ce
// 0089b8a3  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 0089b8a9  e920010000           jmp 0x89b9ce
// 0089b8ae  8b4678               mov eax, dword ptr [esi + 0x78]
// 0089b8b1  83f8ff               cmp eax, -1
// 0089b8b4  7503                 jne 0x89b8b9
// 0089b8b6  8b4674               mov eax, dword ptr [esi + 0x74]
// 0089b8b9  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0089b8bd  50                   push eax
// 0089b8be  8d442414             lea eax, [esp + 0x14]
// 0089b8c2  50                   push eax
// 0089b8c3  8bcf                 mov ecx, edi
// 0089b8c5  e8348df5ff           call 0x7f45fe
// 0089b8ca  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 0089b8d0  83f8ff               cmp eax, -1
// 0089b8d3  7506                 jne 0x89b8db
// 0089b8d5  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0089b8db  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089b8df  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089b8e3  50                   push eax
// 0089b8e4  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089b8e8  2bc8                 sub ecx, eax
// 0089b8ea  51                   push ecx
// 0089b8eb  52                   push edx
// 0089b8ec  50                   push eax
// 0089b8ed  57                   push edi
// 0089b8ee  8bce                 mov ecx, esi
// 0089b8f0  e84beeffff           call 0x89a740
// 0089b8f5  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0089b8fb  83f8ff               cmp eax, -1
// 0089b8fe  7506                 jne 0x89b906
// 0089b900  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 0089b906  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089b90a  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089b90e  50                   push eax
// 0089b90f  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089b913  2bc8                 sub ecx, eax
// 0089b915  51                   push ecx
// 0089b916  42                   inc edx
// 0089b917  52                   push edx
// 0089b918  50                   push eax
// 0089b919  57                   push edi
// 0089b91a  8bce                 mov ecx, esi
// 0089b91c  e81feeffff           call 0x89a740
// 0089b921  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0089b927  83f8ff               cmp eax, -1
// 0089b92a  7506                 jne 0x89b932
// 0089b92c  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 0089b932  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 0089b935  83f9ff               cmp ecx, -1
// 0089b938  7503                 jne 0x89b93d
// 0089b93a  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0089b93d  dd05204b9b00         fld qword ptr [0x9b4b20]
// 0089b943  83ec08               sub esp, 8
// 0089b946  dd1c24               fstp qword ptr [esp]
// 0089b949  50                   push eax
// 0089b94a  51                   push ecx
// 0089b94b  8bce                 mov ecx, esi
// 0089b94d  e87eeaffff           call 0x89a3d0
// 0089b952  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089b956  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089b95a  50                   push eax
// 0089b95b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089b95f  2bc8                 sub ecx, eax
// 0089b961  51                   push ecx
// 0089b962  83c202               add edx, 2
// 0089b965  52                   push edx
// 0089b966  50                   push eax
// 0089b967  57                   push edi
// 0089b968  8bce                 mov ecx, esi
// 0089b96a  e8d1edffff           call 0x89a740
// 0089b96f  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0089b975  83f8ff               cmp eax, -1
// 0089b978  7506                 jne 0x89b980
// 0089b97a  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 0089b980  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 0089b983  83f9ff               cmp ecx, -1
// 0089b986  7503                 jne 0x89b98b
// 0089b988  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0089b98b  dd0530e39b00         fld qword ptr [0x9be330]
// 0089b991  83ec08               sub esp, 8
// 0089b994  dd1c24               fstp qword ptr [esp]
// 0089b997  50                   push eax
// 0089b998  51                   push ecx
// 0089b999  8bce                 mov ecx, esi
// 0089b99b  e830eaffff           call 0x89a3d0
// 0089b9a0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089b9a4  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089b9a8  50                   push eax
// 0089b9a9  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089b9ad  2bc8                 sub ecx, eax
// 0089b9af  51                   push ecx
// 0089b9b0  83c203               add edx, 3
// 0089b9b3  52                   push edx
// 0089b9b4  50                   push eax
// 0089b9b5  57                   push edi
// 0089b9b6  8bce                 mov ecx, esi
// 0089b9b8  e883edffff           call 0x89a740
// 0089b9bd  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0089b9c3  83f8ff               cmp eax, -1
// 0089b9c6  7506                 jne 0x89b9ce
// 0089b9c8  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 0089b9ce  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089b9d2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0089b9d6  50                   push eax
// 0089b9d7  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089b9db  2bc8                 sub ecx, eax
// 0089b9dd  51                   push ecx
// 0089b9de  4a                   dec edx
// 0089b9df  52                   push edx
// 0089b9e0  50                   push eax
// 0089b9e1  57                   push edi
// 0089b9e2  8bce                 mov ecx, esi
// 0089b9e4  e857edffff           call 0x89a740
// 0089b9e9  5f                   pop edi
// 0089b9ea  5e                   pop esi
// 0089b9eb  c21400               ret 0x14
// copied from an identical function in another client (function ?FillFooter@CXTPReportPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp