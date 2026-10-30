// roc 2010-06 007e1820  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e1820
//
// 007e1820  53                   push ebx
// 007e1821  56                   push esi
// 007e1822  57                   push edi
// 007e1823  8bf9                 mov edi, ecx
// 007e1825  33f6                 xor esi, esi
// 007e1827  397728               cmp dword ptr [edi + 0x28], esi
// 007e182a  7e63                 jle 0x7e188f
// 007e182c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007e1830  85f6                 test esi, esi
// 007e1832  7c74                 jl 0x7e18a8
// 007e1834  3b7728               cmp esi, dword ptr [edi + 0x28]
// 007e1837  7d6f                 jge 0x7e18a8
// 007e1839  8b4724               mov eax, dword ptr [edi + 0x24]
// 007e183c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007e183f  8b11                 mov edx, dword ptr [ecx]
// 007e1841  8b4260               mov eax, dword ptr [edx + 0x60]
// 007e1844  ffd0                 call eax
// 007e1846  3bc3                 cmp eax, ebx
// 007e1848  744d                 je 0x7e1897
// 007e184a  3b7728               cmp esi, dword ptr [edi + 0x28]
// 007e184d  7d59                 jge 0x7e18a8
// 007e184f  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 007e1852  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 007e1855  8b11                 mov edx, dword ptr [ecx]
// 007e1857  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 007e185d  ffd0                 call eax
// 007e185f  85c0                 test eax, eax
// 007e1861  7426                 je 0x7e1889
// 007e1863  3b7728               cmp esi, dword ptr [edi + 0x28]
// 007e1866  7d40                 jge 0x7e18a8
// 007e1868  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 007e186b  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 007e186e  8b11                 mov edx, dword ptr [ecx]
// 007e1870  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 007e1876  ffd0                 call eax
// 007e1878  8b10                 mov edx, dword ptr [eax]
// 007e187a  8bc8                 mov ecx, eax
// 007e187c  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 007e1882  53                   push ebx
// 007e1883  ffd0                 call eax
// 007e1885  85c0                 test eax, eax
// 007e1887  7508                 jne 0x7e1891
// 007e1889  46                   inc esi
// 007e188a  3b7728               cmp esi, dword ptr [edi + 0x28]
// 007e188d  7ca1                 jl 0x7e1830
// 007e188f  33c0                 xor eax, eax
// 007e1891  5f                   pop edi
// 007e1892  5e                   pop esi
// 007e1893  5b                   pop ebx
// 007e1894  c20400               ret 4
// 007e1897  3b7728               cmp esi, dword ptr [edi + 0x28]
// 007e189a  7d0c                 jge 0x7e18a8
// 007e189c  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 007e189f  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 007e18a2  5f                   pop edi
// 007e18a3  5e                   pop esi
// 007e18a4  5b                   pop ebx
// 007e18a5  c20400               ret 4
// 007e18a8  e89f63fcff           call 0x7a7c4c
// copied from an identical function in another client (function ?FindInTree@CXTPReportRows@@UAEPAVCXTPReportRow@@PAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp