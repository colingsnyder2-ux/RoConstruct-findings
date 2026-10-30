// roc 2009-12 00828470  unit: CXTPReportHeader  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00828470
//
// 00828470  6aff                 push -1
// 00828472  6808b89500           push 0x95b808
// 00828477  64a100000000         mov eax, dword ptr fs:[0]
// 0082847d  50                   push eax
// 0082847e  51                   push ecx
// 0082847f  53                   push ebx
// 00828480  56                   push esi
// 00828481  57                   push edi
// 00828482  a10052b600           mov eax, dword ptr [0xb65200]
// 00828487  33c4                 xor eax, esp
// 00828489  50                   push eax
// 0082848a  8d442414             lea eax, [esp + 0x14]
// 0082848e  64a300000000         mov dword ptr fs:[0], eax
// 00828494  8bf1                 mov esi, ecx
// 00828496  89742410             mov dword ptr [esp + 0x10], esi
// 0082849a  e8a3df0f00           call 0x926442
// 0082849f  8b442428             mov eax, dword ptr [esp + 0x28]
// 008284a3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008284a7  33ff                 xor edi, edi
// 008284a9  57                   push edi
// 008284aa  57                   push edi
// 008284ab  57                   push edi
// 008284ac  57                   push edi
// 008284ad  8d5660               lea edx, [esi + 0x60]
// 008284b0  52                   push edx
// 008284b1  897c2430             mov dword ptr [esp + 0x30], edi
// 008284b5  c706c4589f00         mov dword ptr [esi], 0x9f58c4
// 008284bb  894620               mov dword ptr [esi + 0x20], eax
// 008284be  894e24               mov dword ptr [esi + 0x24], ecx
// 008284c1  c7869000000003000000 mov dword ptr [esi + 0x90], 3
// 008284cb  897e48               mov dword ptr [esi + 0x48], edi
// 008284ce  897e4c               mov dword ptr [esi + 0x4c], edi
// 008284d1  89bea0000000         mov dword ptr [esi + 0xa0], edi
// 008284d7  c74628ffffffff       mov dword ptr [esi + 0x28], 0xffffffff
// 008284de  ff1538ca9800         call dword ptr [0x98ca38]
// 008284e4  bb01000000           mov ebx, 1
// 008284e9  897e2c               mov dword ptr [esi + 0x2c], edi
// 008284ec  897e30               mov dword ptr [esi + 0x30], edi
// 008284ef  897e3c               mov dword ptr [esi + 0x3c], edi
// 008284f2  899e80000000         mov dword ptr [esi + 0x80], ebx
// 008284f8  895e7c               mov dword ptr [esi + 0x7c], ebx
// 008284fb  899e84000000         mov dword ptr [esi + 0x84], ebx
// 00828501  899e88000000         mov dword ptr [esi + 0x88], ebx
// 00828507  897e38               mov dword ptr [esi + 0x38], edi
// 0082850a  e891630400           call 0x86e8a0
// 0082850f  8b10                 mov edx, dword ptr [eax]
// 00828511  8bc8                 mov ecx, eax
// 00828513  8b4218               mov eax, dword ptr [edx + 0x18]
// 00828516  68f4260000           push 0x26f4
// 0082851b  ffd0                 call eax
// 0082851d  894678               mov dword ptr [esi + 0x78], eax
// 00828520  e87b630400           call 0x86e8a0
// 00828525  8b10                 mov edx, dword ptr [eax]
// 00828527  8bc8                 mov ecx, eax
// 00828529  8b4218               mov eax, dword ptr [edx + 0x18]
// 0082852c  684f250000           push 0x254f
// 00828531  ffd0                 call eax
// 00828533  894634               mov dword ptr [esi + 0x34], eax
// 00828536  89be98000000         mov dword ptr [esi + 0x98], edi
// 0082853c  897e44               mov dword ptr [esi + 0x44], edi
// 0082853f  897e40               mov dword ptr [esi + 0x40], edi
// 00828542  89be94000000         mov dword ptr [esi + 0x94], edi
// 00828548  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 0082854e  89be9c000000         mov dword ptr [esi + 0x9c], edi
// 00828554  8bc6                 mov eax, esi
// 00828556  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0082855a  64890d00000000       mov dword ptr fs:[0], ecx
// 00828561  59                   pop ecx
// 00828562  5f                   pop edi
// 00828563  5e                   pop esi
// 00828564  5b                   pop ebx
// 00828565  83c410               add esp, 0x10
// 00828568  c20800               ret 8
// copied from an identical function in another client (function ??0CXTPReportHeader@@QAE@PAVCXTPReportControl@@PAVCXTPReportColumns@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportHeader.cpp