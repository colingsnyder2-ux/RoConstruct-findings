// from server: 100% by auto
// roc 2008-06 006f21c0  unit: CXTPControls  size: 494 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f21c0
//
// 006f21c0  83ec14               sub esp, 0x14
// 006f21c3  8b442420             mov eax, dword ptr [esp + 0x20]
// 006f21c7  8b00                 mov eax, dword ptr [eax]
// 006f21c9  53                   push ebx
// 006f21ca  55                   push ebp
// 006f21cb  56                   push esi
// 006f21cc  33f6                 xor esi, esi
// 006f21ce  83e010               and eax, 0x10
// 006f21d1  ba01000000           mov edx, 1
// 006f21d6  57                   push edi
// 006f21d7  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 006f21db  894c2420             mov dword ptr [esp + 0x20], ecx
// 006f21df  89742414             mov dword ptr [esp + 0x14], esi
// 006f21e3  89742410             mov dword ptr [esp + 0x10], esi
// 006f21e7  89442418             mov dword ptr [esp + 0x18], eax
// 006f21eb  8954241c             mov dword ptr [esp + 0x1c], edx
// 006f21ef  7405                 je 0x6f21f6
// 006f21f1  8b7f04               mov edi, dword ptr [edi + 4]
// 006f21f4  eb02                 jmp 0x6f21f8
// 006f21f6  8b3f                 mov edi, dword ptr [edi]
// 006f21f8  33ed                 xor ebp, ebp
// 006f21fa  39712c               cmp dword ptr [ecx + 0x2c], esi
// 006f21fd  897c2434             mov dword ptr [esp + 0x34], edi
// 006f2201  7f17                 jg 0x6f221a
// 006f2203  8b442414             mov eax, dword ptr [esp + 0x14]
// 006f2207  5f                   pop edi
// 006f2208  5e                   pop esi
// 006f2209  5d                   pop ebp
// 006f220a  40                   inc eax
// 006f220b  5b                   pop ebx
// 006f220c  83c414               add esp, 0x14
// 006f220f  c21000               ret 0x10
// 006f2212  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006f2216  8b442418             mov eax, dword ptr [esp + 0x18]
// 006f221a  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006f221e  8bcd                 mov ecx, ebp
// 006f2220  c1e106               shl ecx, 6
// 006f2223  03f9                 add edi, ecx
// 006f2225  897730               mov dword ptr [edi + 0x30], esi
// 006f2228  89772c               mov dword ptr [edi + 0x2c], esi
// 006f222b  397728               cmp dword ptr [edi + 0x28], esi
// 006f222e  0f845d010000         je 0x6f2391
// 006f2234  3bc6                 cmp eax, esi
// 006f2236  7405                 je 0x6f223d
// 006f2238  8b4724               mov eax, dword ptr [edi + 0x24]
// 006f223b  eb03                 jmp 0x6f2240
// 006f223d  8b4720               mov eax, dword ptr [edi + 0x20]
// 006f2240  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006f2243  3bce                 cmp ecx, esi
// 006f2245  7408                 je 0x6f224f
// 006f2247  3bd6                 cmp edx, esi
// 006f2249  7504                 jne 0x6f224f
// 006f224b  03442434             add eax, dword ptr [esp + 0x34]
// 006f224f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006f2253  03d8                 add ebx, eax
// 006f2255  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 006f2259  7f14                 jg 0x6f226f
// 006f225b  8b442430             mov eax, dword ptr [esp + 0x30]
// 006f225f  f70000010000         test dword ptr [eax], 0x100
// 006f2265  740d                 je 0x6f2274
// 006f2267  3bce                 cmp ecx, esi
// 006f2269  7409                 je 0x6f2274
// 006f226b  3bd6                 cmp edx, esi
// 006f226d  7505                 jne 0x6f2274
// 006f226f  be01000000           mov esi, 1
// 006f2274  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 006f2277  e8f490fbff           call 0x6ab370
// 006f227c  84c0                 test al, al
// 006f227e  7937                 jns 0x6f22b7
// 006f2280  837c241800           cmp dword ptr [esp + 0x18], 0
// 006f2285  7418                 je 0x6f229f
// 006f2287  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 006f228a  b801000000           mov eax, 1
// 006f228f  01442414             add dword ptr [esp + 0x14], eax
// 006f2293  894c2410             mov dword ptr [esp + 0x10], ecx
// 006f2297  89472c               mov dword ptr [edi + 0x2c], eax
// 006f229a  e9e8000000           jmp 0x6f2387
// 006f229f  8b5720               mov edx, dword ptr [edi + 0x20]
// 006f22a2  b801000000           mov eax, 1
// 006f22a7  01442414             add dword ptr [esp + 0x14], eax
// 006f22ab  89542410             mov dword ptr [esp + 0x10], edx
// 006f22af  89472c               mov dword ptr [edi + 0x2c], eax
// 006f22b2  e9d0000000           jmp 0x6f2387
// 006f22b7  85f6                 test esi, esi
// 006f22b9  0f84c4000000         je 0x6f2383
// 006f22bf  8b542430             mov edx, dword ptr [esp + 0x30]
// 006f22c3  f60280               test byte ptr [edx], 0x80
// 006f22c6  745a                 je 0x6f2322
// 006f22c8  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 006f22cd  7553                 jne 0x6f2322
// 006f22cf  8b442420             mov eax, dword ptr [esp + 0x20]
// 006f22d3  33db                 xor ebx, ebx
// 006f22d5  3b682c               cmp ebp, dword ptr [eax + 0x2c]
// 006f22d8  8bf5                 mov esi, ebp
// 006f22da  7d31                 jge 0x6f230d
// 006f22dc  83c730               add edi, 0x30
// 006f22df  90                   nop 
// 006f22e0  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 006f22e3  e88890fbff           call 0x6ab370
// 006f22e8  84c0                 test al, al
// 006f22ea  7815                 js 0x6f2301
// 006f22ec  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006f22f0  c70701000000         mov dword ptr [edi], 1
// 006f22f6  46                   inc esi
// 006f22f7  83c740               add edi, 0x40
// 006f22fa  3b712c               cmp esi, dword ptr [ecx + 0x2c]
// 006f22fd  7ce1                 jl 0x6f22e0
// 006f22ff  eb08                 jmp 0x6f2309
// 006f2301  bb01000000           mov ebx, 1
// 006f2306  8d6eff               lea ebp, [esi - 1]
// 006f2309  8b542430             mov edx, dword ptr [esp + 0x30]
// 006f230d  830a01               or dword ptr [edx], 1
// 006f2310  85db                 test ebx, ebx
// 006f2312  757b                 jne 0x6f238f
// 006f2314  8b442414             mov eax, dword ptr [esp + 0x14]
// 006f2318  5f                   pop edi
// 006f2319  5e                   pop esi
// 006f231a  5d                   pop ebp
// 006f231b  5b                   pop ebx
// 006f231c  83c414               add esp, 0x14
// 006f231f  c21000               ret 0x10
// 006f2322  8bcd                 mov ecx, ebp
// 006f2324  85ed                 test ebp, ebp
// 006f2326  7c25                 jl 0x6f234d
// 006f2328  8d4734               lea eax, [edi + 0x34]
// 006f232b  eb03                 jmp 0x6f2330
// 006f232d  8d4900               lea ecx, [ecx]
// 006f2330  8378f800             cmp dword ptr [eax - 8], 0
// 006f2334  7517                 jne 0x6f234d
// 006f2336  833800               cmp dword ptr [eax], 0
// 006f2339  7406                 je 0x6f2341
// 006f233b  8378f400             cmp dword ptr [eax - 0xc], 0
// 006f233f  750a                 jne 0x6f234b
// 006f2341  49                   dec ecx
// 006f2342  83e840               sub eax, 0x40
// 006f2345  85c9                 test ecx, ecx
// 006f2347  7de7                 jge 0x6f2330
// 006f2349  eb02                 jmp 0x6f234d
// 006f234b  8be9                 mov ebp, ecx
// 006f234d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006f2351  8bc5                 mov eax, ebp
// 006f2353  c1e006               shl eax, 6
// 006f2356  03c1                 add eax, ecx
// 006f2358  837c241800           cmp dword ptr [esp + 0x18], 0
// 006f235d  7405                 je 0x6f2364
// 006f235f  8b4824               mov ecx, dword ptr [eax + 0x24]
// 006f2362  eb03                 jmp 0x6f2367
// 006f2364  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006f2367  894c2410             mov dword ptr [esp + 0x10], ecx
// 006f236b  b901000000           mov ecx, 1
// 006f2370  89482c               mov dword ptr [eax + 0x2c], ecx
// 006f2373  8b02                 mov eax, dword ptr [edx]
// 006f2375  84c0                 test al, al
// 006f2377  7804                 js 0x6f237d
// 006f2379  0bc1                 or eax, ecx
// 006f237b  8902                 mov dword ptr [edx], eax
// 006f237d  014c2414             add dword ptr [esp + 0x14], ecx
// 006f2381  eb04                 jmp 0x6f2387
// 006f2383  895c2410             mov dword ptr [esp + 0x10], ebx
// 006f2387  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 006f238f  33f6                 xor esi, esi
// 006f2391  8b542420             mov edx, dword ptr [esp + 0x20]
// 006f2395  45                   inc ebp
// 006f2396  3b6a2c               cmp ebp, dword ptr [edx + 0x2c]
// 006f2399  0f8c73feffff         jl 0x6f2212
// 006f239f  8b442414             mov eax, dword ptr [esp + 0x14]
// 006f23a3  5f                   pop edi
// 006f23a4  5e                   pop esi
// 006f23a5  5d                   pop ebp
// 006f23a6  40                   inc eax
// 006f23a7  5b                   pop ebx
// 006f23a8  83c414               add esp, 0x14
// 006f23ab  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_WrapToolBar@CXTPControls@@IAEHPAUXTPBUTTONINFO@1@HAAKABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
