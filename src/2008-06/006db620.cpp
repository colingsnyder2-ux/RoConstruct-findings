// roc 2008-06 006db620  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006db620
//
// 006db620  53                   push ebx
// 006db621  56                   push esi
// 006db622  8bd1                 mov edx, ecx
// 006db624  57                   push edi
// 006db625  8b7a34               mov edi, dword ptr [edx + 0x34]
// 006db628  33c0                 xor eax, eax
// 006db62a  85ff                 test edi, edi
// 006db62c  7e23                 jle 0x6db651
// 006db62e  8b742410             mov esi, dword ptr [esp + 0x10]
// 006db632  85c0                 test eax, eax
// 006db634  7c54                 jl 0x6db68a
// 006db636  3bc7                 cmp eax, edi
// 006db638  7d50                 jge 0x6db68a
// 006db63a  8b5a30               mov ebx, dword ptr [edx + 0x30]
// 006db63d  8bcb                 mov ecx, ebx
// 006db63f  8b4cc104             mov ecx, dword ptr [ecx + eax*8 + 4]
// 006db643  2b0cc3               sub ecx, dword ptr [ebx + eax*8]
// 006db646  3bce                 cmp ecx, esi
// 006db648  7f0f                 jg 0x6db659
// 006db64a  40                   inc eax
// 006db64b  2bf1                 sub esi, ecx
// 006db64d  3bc7                 cmp eax, edi
// 006db64f  7ce1                 jl 0x6db632
// 006db651  5f                   pop edi
// 006db652  5e                   pop esi
// 006db653  33c0                 xor eax, eax
// 006db655  5b                   pop ebx
// 006db656  c20400               ret 4
// 006db659  8b4a44               mov ecx, dword ptr [edx + 0x44]
// 006db65c  83e901               sub ecx, 1
// 006db65f  744f                 je 0x6db6b0
// 006db661  83e901               sub ecx, 1
// 006db664  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 006db667  7426                 je 0x6db68f
// 006db669  3bc7                 cmp eax, edi
// 006db66b  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 006db671  7d17                 jge 0x6db68a
// 006db673  8bd3                 mov edx, ebx
// 006db675  8d04c2               lea eax, [edx + eax*8]
// 006db678  8b00                 mov eax, dword ptr [eax]
// 006db67a  8b11                 mov edx, dword ptr [ecx]
// 006db67c  5f                   pop edi
// 006db67d  03c6                 add eax, esi
// 006db67f  5e                   pop esi
// 006db680  5b                   pop ebx
// 006db681  89442404             mov dword ptr [esp + 4], eax
// 006db685  8b525c               mov edx, dword ptr [edx + 0x5c]
// 006db688  ffe2                 jmp edx
// 006db68a  e8b552fcff           call 0x6a0944
// 006db68f  3bc7                 cmp eax, edi
// 006db691  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 006db697  7df1                 jge 0x6db68a
// 006db699  8bd3                 mov edx, ebx
// 006db69b  8d04c2               lea eax, [edx + eax*8]
// 006db69e  8b00                 mov eax, dword ptr [eax]
// 006db6a0  8b11                 mov edx, dword ptr [ecx]
// 006db6a2  5f                   pop edi
// 006db6a3  03c6                 add eax, esi
// 006db6a5  5e                   pop esi
// 006db6a6  5b                   pop ebx
// 006db6a7  89442404             mov dword ptr [esp + 4], eax
// 006db6ab  8b525c               mov edx, dword ptr [edx + 0x5c]
// 006db6ae  ffe2                 jmp edx
// 006db6b0  3bc7                 cmp eax, edi
// 006db6b2  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 006db6b5  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 006db6bb  7dcd                 jge 0x6db68a
// 006db6bd  8bd3                 mov edx, ebx
// 006db6bf  8d04c2               lea eax, [edx + eax*8]
// 006db6c2  8b00                 mov eax, dword ptr [eax]
// 006db6c4  8b11                 mov edx, dword ptr [ecx]
// 006db6c6  8b525c               mov edx, dword ptr [edx + 0x5c]
// 006db6c9  5f                   pop edi
// 006db6ca  03c6                 add eax, esi
// 006db6cc  5e                   pop esi
// 006db6cd  5b                   pop ebx
// 006db6ce  89442404             mov dword ptr [esp + 4], eax
// 006db6d2  ffe2                 jmp edx
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRows.cpp (function ?GetAt@CXTPReportSelectedRows@@QAEPAVCXTPReportRow@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRows.cpp
