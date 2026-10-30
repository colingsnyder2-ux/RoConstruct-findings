// roc 2009-12 0081f790  unit: CXTPReportControl  size: 245 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081f790
//
// 0081f790  6aff                 push -1
// 0081f792  6868ae9500           push 0x95ae68
// 0081f797  64a100000000         mov eax, dword ptr fs:[0]
// 0081f79d  50                   push eax
// 0081f79e  53                   push ebx
// 0081f79f  55                   push ebp
// 0081f7a0  56                   push esi
// 0081f7a1  57                   push edi
// 0081f7a2  a10052b600           mov eax, dword ptr [0xb65200]
// 0081f7a7  33c4                 xor eax, esp
// 0081f7a9  50                   push eax
// 0081f7aa  8d442414             lea eax, [esp + 0x14]
// 0081f7ae  64a300000000         mov dword ptr fs:[0], eax
// 0081f7b4  8bd9                 mov ebx, ecx
// 0081f7b6  8b742424             mov esi, dword ptr [esp + 0x24]
// 0081f7ba  85f6                 test esi, esi
// 0081f7bc  7507                 jne 0x81f7c5
// 0081f7be  33c0                 xor eax, eax
// 0081f7c0  e9aa000000           jmp 0x81f86f
// 0081f7c5  8b06                 mov eax, dword ptr [esi]
// 0081f7c7  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 0081f7cd  8bce                 mov ecx, esi
// 0081f7cf  ffd2                 call edx
// 0081f7d1  85c0                 test eax, eax
// 0081f7d3  7521                 jne 0x81f7f6
// 0081f7d5  8b442428             mov eax, dword ptr [esp + 0x28]
// 0081f7d9  8b16                 mov edx, dword ptr [esi]
// 0081f7db  8b3b                 mov edi, dword ptr [ebx]
// 0081f7dd  6a01                 push 1
// 0081f7df  50                   push eax
// 0081f7e0  8b4260               mov eax, dword ptr [edx + 0x60]
// 0081f7e3  8bce                 mov ecx, esi
// 0081f7e5  81c754010000         add edi, 0x154
// 0081f7eb  ffd0                 call eax
// 0081f7ed  8b17                 mov edx, dword ptr [edi]
// 0081f7ef  50                   push eax
// 0081f7f0  8bcb                 mov ecx, ebx
// 0081f7f2  ffd2                 call edx
// 0081f7f4  eb79                 jmp 0x81f86f
// 0081f7f6  e82343fdff           call 0x7f3b1e
// 0081f7fb  8b4804               mov ecx, dword ptr [eax + 4]
// 0081f7fe  e8fd4bfdff           call 0x7f4400
// 0081f803  8b06                 mov eax, dword ptr [esi]
// 0081f805  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 0081f80b  8bce                 mov ecx, esi
// 0081f80d  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0081f815  ffd2                 call edx
// 0081f817  8bc8                 mov ecx, eax
// 0081f819  e802d40000           call 0x82cc20
// 0081f81e  8d78ff               lea edi, [eax - 1]
// 0081f821  85ff                 test edi, edi
// 0081f823  7c34                 jl 0x81f859
// 0081f825  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0081f829  8da42400000000       lea esp, [esp]
// 0081f830  8b06                 mov eax, dword ptr [esi]
// 0081f832  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 0081f838  8bce                 mov ecx, esi
// 0081f83a  ffd2                 call edx
// 0081f83c  8b10                 mov edx, dword ptr [eax]
// 0081f83e  8bc8                 mov ecx, eax
// 0081f840  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0081f843  57                   push edi
// 0081f844  ffd0                 call eax
// 0081f846  8b13                 mov edx, dword ptr [ebx]
// 0081f848  55                   push ebp
// 0081f849  50                   push eax
// 0081f84a  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 0081f850  8bcb                 mov ecx, ebx
// 0081f852  ffd0                 call eax
// 0081f854  83ef01               sub edi, 1
// 0081f857  79d7                 jns 0x81f830
// 0081f859  8d4c2428             lea ecx, [esp + 0x28]
// 0081f85d  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0081f865  e846b6c2ff           call 0x44aeb0
// 0081f86a  b801000000           mov eax, 1
// 0081f86f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081f873  64890d00000000       mov dword ptr fs:[0], ecx
// 0081f87a  59                   pop ecx
// 0081f87b  5f                   pop edi
// 0081f87c  5e                   pop esi
// 0081f87d  5d                   pop ebp
// 0081f87e  5b                   pop ebx
// 0081f87f  83c40c               add esp, 0xc
// 0081f882  c20800               ret 8
// copied from an identical function in another client (function ?RemoveRowEx@CXTPReportControl@@UAEHPAVCXTPReportRow@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp