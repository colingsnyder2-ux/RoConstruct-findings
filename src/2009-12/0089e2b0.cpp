// roc 2009-12 0089e2b0  unit: CXTPReportPaintManager  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089e2b0
//
// 0089e2b0  83ec18               sub esp, 0x18
// 0089e2b3  a10052b600           mov eax, dword ptr [0xb65200]
// 0089e2b8  33c4                 xor eax, esp
// 0089e2ba  89442414             mov dword ptr [esp + 0x14], eax
// 0089e2be  83b93c02000002       cmp dword ptr [ecx + 0x23c], 2
// 0089e2c5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0089e2c9  53                   push ebx
// 0089e2ca  55                   push ebp
// 0089e2cb  56                   push esi
// 0089e2cc  57                   push edi
// 0089e2cd  89442410             mov dword ptr [esp + 0x10], eax
// 0089e2d1  0f8598000000         jne 0x89e36f
// 0089e2d7  b8aa000000           mov eax, 0xaa
// 0089e2dc  ba55000000           mov edx, 0x55
// 0089e2e1  6689442414           mov word ptr [esp + 0x14], ax
// 0089e2e6  6689442418           mov word ptr [esp + 0x18], ax
// 0089e2eb  668944241c           mov word ptr [esp + 0x1c], ax
// 0089e2f0  6689442420           mov word ptr [esp + 0x20], ax
// 0089e2f5  8b81d8000000         mov eax, dword ptr [ecx + 0xd8]
// 0089e2fb  6689542416           mov word ptr [esp + 0x16], dx
// 0089e300  668954241a           mov word ptr [esp + 0x1a], dx
// 0089e305  668954241e           mov word ptr [esp + 0x1e], dx
// 0089e30a  6689542422           mov word ptr [esp + 0x22], dx
// 0089e30f  83f8ff               cmp eax, -1
// 0089e312  7506                 jne 0x89e31a
// 0089e314  8b81d4000000         mov eax, dword ptr [ecx + 0xd4]
// 0089e31a  8b542430             mov edx, dword ptr [esp + 0x30]
// 0089e31e  8b742434             mov esi, dword ptr [esp + 0x34]
// 0089e322  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0089e326  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0089e32a  8b29                 mov ebp, dword ptr [ecx]
// 0089e32c  50                   push eax
// 0089e32d  8d442418             lea eax, [esp + 0x18]
// 0089e331  50                   push eax
// 0089e332  83ec10               sub esp, 0x10
// 0089e335  8bc4                 mov eax, esp
// 0089e337  8910                 mov dword ptr [eax], edx
// 0089e339  03fa                 add edi, edx
// 0089e33b  897004               mov dword ptr [eax + 4], esi
// 0089e33e  03de                 add ebx, esi
// 0089e340  897808               mov dword ptr [eax + 8], edi
// 0089e343  8d919c020000         lea edx, [ecx + 0x29c]
// 0089e349  89580c               mov dword ptr [eax + 0xc], ebx
// 0089e34c  8b442428             mov eax, dword ptr [esp + 0x28]
// 0089e350  52                   push edx
// 0089e351  8b95dc000000         mov edx, dword ptr [ebp + 0xdc]
// 0089e357  50                   push eax
// 0089e358  ffd2                 call edx
// 0089e35a  5f                   pop edi
// 0089e35b  5e                   pop esi
// 0089e35c  5d                   pop ebp
// 0089e35d  5b                   pop ebx
// 0089e35e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089e362  33cc                 xor ecx, esp
// 0089e364  e83170f5ff           call 0x7f539a
// 0089e369  83c418               add esp, 0x18
// 0089e36c  c21800               ret 0x18
// 0089e36f  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0089e373  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0089e377  51                   push ecx
// 0089e378  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0089e37c  52                   push edx
// 0089e37d  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0089e381  51                   push ecx
// 0089e382  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0089e386  52                   push edx
// 0089e387  51                   push ecx
// 0089e388  8bc8                 mov ecx, eax
// 0089e38a  e807810800           call 0x926496
// 0089e38f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0089e393  5f                   pop edi
// 0089e394  5e                   pop esi
// 0089e395  5d                   pop ebp
// 0089e396  5b                   pop ebx
// 0089e397  33cc                 xor ecx, esp
// 0089e399  e8fc6ff5ff           call 0x7f539a
// 0089e39e  83c418               add esp, 0x18
// 0089e3a1  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawTreeStructureLine@CXTPReportPaintManager@@UAEXPAVCDC@@HHHHK@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp