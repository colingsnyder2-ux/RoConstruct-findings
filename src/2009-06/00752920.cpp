// roc 2009-06 00752920  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00752920
//
// 00752920  53                   push ebx
// 00752921  56                   push esi
// 00752922  57                   push edi
// 00752923  8bf9                 mov edi, ecx
// 00752925  33f6                 xor esi, esi
// 00752927  397728               cmp dword ptr [edi + 0x28], esi
// 0075292a  7e63                 jle 0x75298f
// 0075292c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00752930  85f6                 test esi, esi
// 00752932  7c74                 jl 0x7529a8
// 00752934  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00752937  7d6f                 jge 0x7529a8
// 00752939  8b4724               mov eax, dword ptr [edi + 0x24]
// 0075293c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0075293f  8b11                 mov edx, dword ptr [ecx]
// 00752941  8b4260               mov eax, dword ptr [edx + 0x60]
// 00752944  ffd0                 call eax
// 00752946  3bc3                 cmp eax, ebx
// 00752948  744d                 je 0x752997
// 0075294a  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0075294d  7d59                 jge 0x7529a8
// 0075294f  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 00752952  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00752955  8b11                 mov edx, dword ptr [ecx]
// 00752957  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 0075295d  ffd0                 call eax
// 0075295f  85c0                 test eax, eax
// 00752961  7426                 je 0x752989
// 00752963  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00752966  7d40                 jge 0x7529a8
// 00752968  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0075296b  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0075296e  8b11                 mov edx, dword ptr [ecx]
// 00752970  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 00752976  ffd0                 call eax
// 00752978  8b10                 mov edx, dword ptr [eax]
// 0075297a  8bc8                 mov ecx, eax
// 0075297c  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00752982  53                   push ebx
// 00752983  ffd0                 call eax
// 00752985  85c0                 test eax, eax
// 00752987  7508                 jne 0x752991
// 00752989  46                   inc esi
// 0075298a  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0075298d  7ca1                 jl 0x752930
// 0075298f  33c0                 xor eax, eax
// 00752991  5f                   pop edi
// 00752992  5e                   pop esi
// 00752993  5b                   pop ebx
// 00752994  c20400               ret 4
// 00752997  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0075299a  7d0c                 jge 0x7529a8
// 0075299c  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0075299f  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 007529a2  5f                   pop edi
// 007529a3  5e                   pop esi
// 007529a4  5b                   pop ebx
// 007529a5  c20400               ret 4
// 007529a8  e83763fcff           call 0x718ce4
// copied from an identical function in another client (function ?FindInTree@CXTPReportRows@@UAEPAVCXTPReportRow@@PAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp