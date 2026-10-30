// roc 2007-03 006f2010  unit: seg_006f0000  size: 347 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f2010
//
// 006f2010  83ec30               sub esp, 0x30
// 006f2013  53                   push ebx
// 006f2014  8bd9                 mov ebx, ecx
// 006f2016  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 006f2019  55                   push ebp
// 006f201a  33ed                 xor ebp, ebp
// 006f201c  3bcd                 cmp ecx, ebp
// 006f201e  7511                 jne 0x6f2031
// 006f2020  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 006f2024  8928                 mov dword ptr [eax], ebp
// 006f2026  896804               mov dword ptr [eax + 4], ebp
// 006f2029  5d                   pop ebp
// 006f202a  5b                   pop ebx
// 006f202b  83c430               add esp, 0x30
// 006f202e  c20c00               ret 0xc
// 006f2031  56                   push esi
// 006f2032  8d542414             lea edx, [esp + 0x14]
// 006f2036  52                   push edx
// 006f2037  6800000400           push 0x40000
// 006f203c  896c241c             mov dword ptr [esp + 0x1c], ebp
// 006f2040  8b01                 mov eax, dword ptr [ecx]
// 006f2042  8b400c               mov eax, dword ptr [eax + 0xc]
// 006f2045  55                   push ebp
// 006f2046  6845040000           push 0x445
// 006f204b  ffd0                 call eax
// 006f204d  8b442448             mov eax, dword ptr [esp + 0x48]
// 006f2051  33f6                 xor esi, esi
// 006f2053  03c0                 add eax, eax
// 006f2055  89ab28010000         mov dword ptr [ebx + 0x128], ebp
// 006f205b  89ab24010000         mov dword ptr [ebx + 0x124], ebp
// 006f2061  89742410             mov dword ptr [esp + 0x10], esi
// 006f2065  896c240c             mov dword ptr [esp + 0xc], ebp
// 006f2069  89442448             mov dword ptr [esp + 0x48], eax
// 006f206d  896c241c             mov dword ptr [esp + 0x1c], ebp
// 006f2071  896c2420             mov dword ptr [esp + 0x20], ebp
// 006f2075  896c2424             mov dword ptr [esp + 0x24], ebp
// 006f2079  896c2428             mov dword ptr [esp + 0x28], ebp
// 006f207d  57                   push edi
// 006f207e  8bff                 mov edi, edi
// 006f2080  8b7b24               mov edi, dword ptr [ebx + 0x24]
// 006f2083  55                   push ebp
// 006f2084  55                   push ebp
// 006f2085  03c6                 add eax, esi
// 006f2087  55                   push ebp
// 006f2088  99                   cdq 
// 006f2089  8d4c242c             lea ecx, [esp + 0x2c]
// 006f208d  51                   push ecx
// 006f208e  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 006f2092  2bc2                 sub eax, edx
// 006f2094  55                   push ebp
// 006f2095  8d542444             lea edx, [esp + 0x44]
// 006f2099  8bf0                 mov esi, eax
// 006f209b  52                   push edx
// 006f209c  d1fe                 sar esi, 1
// 006f209e  55                   push ebp
// 006f209f  896c244c             mov dword ptr [esp + 0x4c], ebp
// 006f20a3  896c2450             mov dword ptr [esp + 0x50], ebp
// 006f20a7  89742454             mov dword ptr [esp + 0x54], esi
// 006f20ab  c744245801000000     mov dword ptr [esp + 0x58], 1
// 006f20b3  e8283af3ff           call 0x625ae0
// 006f20b8  50                   push eax
// 006f20b9  8b07                 mov eax, dword ptr [edi]
// 006f20bb  8b4010               mov eax, dword ptr [eax + 0x10]
// 006f20be  33ed                 xor ebp, ebp
// 006f20c0  55                   push ebp
// 006f20c1  55                   push ebp
// 006f20c2  55                   push ebp
// 006f20c3  6a01                 push 1
// 006f20c5  8bcf                 mov ecx, edi
// 006f20c7  ffd0                 call eax
// 006f20c9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f20cd  3bcd                 cmp ecx, ebp
// 006f20cf  750a                 jne 0x6f20db
// 006f20d1  8b8b28010000         mov ecx, dword ptr [ebx + 0x128]
// 006f20d7  894c2410             mov dword ptr [esp + 0x10], ecx
// 006f20db  398b28010000         cmp dword ptr [ebx + 0x128], ecx
// 006f20e1  7e0d                 jle 0x6f20f0
// 006f20e3  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 006f20e7  83c601               add esi, 1
// 006f20ea  89742414             mov dword ptr [esp + 0x14], esi
// 006f20ee  eb0b                 jmp 0x6f20fb
// 006f20f0  8d46ff               lea eax, [esi - 1]
// 006f20f3  8b742414             mov esi, dword ptr [esp + 0x14]
// 006f20f7  8944244c             mov dword ptr [esp + 0x4c], eax
// 006f20fb  3bf0                 cmp esi, eax
// 006f20fd  7c81                 jl 0x6f2080
// 006f20ff  398b28010000         cmp dword ptr [ebx + 0x128], ecx
// 006f2105  5f                   pop edi
// 006f2106  7e45                 jle 0x6f214d
// 006f2108  83c001               add eax, 1
// 006f210b  89442434             mov dword ptr [esp + 0x34], eax
// 006f210f  8b442444             mov eax, dword ptr [esp + 0x44]
// 006f2113  3bc5                 cmp eax, ebp
// 006f2115  896c242c             mov dword ptr [esp + 0x2c], ebp
// 006f2119  896c2430             mov dword ptr [esp + 0x30], ebp
// 006f211d  c744243801000000     mov dword ptr [esp + 0x38], 1
// 006f2125  7504                 jne 0x6f212b
// 006f2127  33c0                 xor eax, eax
// 006f2129  eb03                 jmp 0x6f212e
// 006f212b  8b4004               mov eax, dword ptr [eax + 4]
// 006f212e  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 006f2131  8b11                 mov edx, dword ptr [ecx]
// 006f2133  55                   push ebp
// 006f2134  55                   push ebp
// 006f2135  55                   push ebp
// 006f2136  8d742428             lea esi, [esp + 0x28]
// 006f213a  56                   push esi
// 006f213b  55                   push ebp
// 006f213c  8d742440             lea esi, [esp + 0x40]
// 006f2140  56                   push esi
// 006f2141  55                   push ebp
// 006f2142  50                   push eax
// 006f2143  8b4210               mov eax, dword ptr [edx + 0x10]
// 006f2146  55                   push ebp
// 006f2147  55                   push ebp
// 006f2148  55                   push ebp
// 006f2149  6a01                 push 1
// 006f214b  ffd0                 call eax
// 006f214d  8b8b24010000         mov ecx, dword ptr [ebx + 0x124]
// 006f2153  8b442440             mov eax, dword ptr [esp + 0x40]
// 006f2157  8b9328010000         mov edx, dword ptr [ebx + 0x128]
// 006f215d  5e                   pop esi
// 006f215e  5d                   pop ebp
// 006f215f  8908                 mov dword ptr [eax], ecx
// 006f2161  895004               mov dword ptr [eax + 4], edx
// 006f2164  5b                   pop ebx
// 006f2165  83c430               add esp, 0x30
// 006f2168  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Common\XTPRichRender.cpp (function ?GetTextExtent@CXTPRichRender@@QAE?AVCSize@@PAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPRichRender.cpp
