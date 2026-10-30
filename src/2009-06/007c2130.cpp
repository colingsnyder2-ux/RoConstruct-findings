// roc 2009-06 007c2130  unit: CXTPReportPaintManager  size: 1759 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c2130
//
// 007c2130  6aff                 push -1
// 007c2132  6891db8700           push 0x87db91
// 007c2137  64a100000000         mov eax, dword ptr fs:[0]
// 007c213d  50                   push eax
// 007c213e  83ec64               sub esp, 0x64
// 007c2141  53                   push ebx
// 007c2142  55                   push ebp
// 007c2143  56                   push esi
// 007c2144  57                   push edi
// 007c2145  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007c214a  33c4                 xor eax, esp
// 007c214c  50                   push eax
// 007c214d  8d442478             lea eax, [esp + 0x78]
// 007c2151  64a300000000         mov dword ptr fs:[0], eax
// 007c2157  8bf9                 mov edi, ecx
// 007c2159  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 007c2160  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 007c2167  85f6                 test esi, esi
// 007c2169  7431                 je 0x7c219c
// 007c216b  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007c2172  e8d9acf8ff           call 0x74ce50
// 007c2177  85c0                 test eax, eax
// 007c2179  7421                 je 0x7c219c
// 007c217b  83bc249400000000     cmp dword ptr [esp + 0x94], 0
// 007c2183  7517                 jne 0x7c219c
// 007c2185  83bc249800000000     cmp dword ptr [esp + 0x98], 0
// 007c218d  750d                 jne 0x7c219c
// 007c218f  837d4000             cmp dword ptr [ebp + 0x40], 0
// 007c2193  7407                 je 0x7c219c
// 007c2195  b801000000           mov eax, 1
// 007c219a  eb02                 jmp 0x7c219e
// 007c219c  33c0                 xor eax, eax
// 007c219e  85f6                 test esi, esi
// 007c21a0  7412                 je 0x7c21b4
// 007c21a2  85c0                 test eax, eax
// 007c21a4  750e                 jne 0x7c21b4
// 007c21a6  bb01000000           mov ebx, 1
// 007c21ab  899c2490000000       mov dword ptr [esp + 0x90], ebx
// 007c21b2  eb12                 jmp 0x7c21c6
// 007c21b4  c784249000000000000000 mov dword ptr [esp + 0x90], 0
// 007c21bf  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 007c21c6  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007c21cd  e87eacf8ff           call 0x74ce50
// 007c21d2  85c0                 test eax, eax
// 007c21d4  7411                 je 0x7c21e7
// 007c21d6  85f6                 test esi, esi
// 007c21d8  750d                 jne 0x7c21e7
// 007c21da  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 007c21e2  397540               cmp dword ptr [ebp + 0x40], esi
// 007c21e5  7508                 jne 0x7c21ef
// 007c21e7  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 007c21ef  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 007c21f6  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 007c21fd  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 007c2204  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 007c220b  894c244c             mov dword ptr [esp + 0x4c], ecx
// 007c220f  8b4d5c               mov ecx, dword ptr [ebp + 0x5c]
// 007c2212  89542450             mov dword ptr [esp + 0x50], edx
// 007c2216  89442448             mov dword ptr [esp + 0x48], eax
// 007c221a  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 007c2221  8d9424a4000000       lea edx, [esp + 0xa4]
// 007c2228  894c2414             mov dword ptr [esp + 0x14], ecx
// 007c222c  52                   push edx
// 007c222d  8bcd                 mov ecx, ebp
// 007c222f  89442458             mov dword ptr [esp + 0x58], eax
// 007c2233  e818cff7ff           call 0x73f150
// 007c2238  33c0                 xor eax, eax
// 007c223a  89842480000000       mov dword ptr [esp + 0x80], eax
// 007c2241  3bd8                 cmp ebx, eax
// 007c2243  0f8511020000         jne 0x7c245a
// 007c2249  3987bc020000         cmp dword ptr [edi + 0x2bc], eax
// 007c224f  0f8505020000         jne 0x7c245a
// 007c2255  c744241804000000     mov dword ptr [esp + 0x18], 4
// 007c225d  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 007c2264  8b17                 mov edx, dword ptr [edi]
// 007c2266  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 007c226d  8b92d8000000         mov edx, dword ptr [edx + 0xd8]
// 007c2273  8d44241c             lea eax, [esp + 0x1c]
// 007c2277  50                   push eax
// 007c2278  83ec10               sub esp, 0x10
// 007c227b  8bc4                 mov eax, esp
// 007c227d  8908                 mov dword ptr [eax], ecx
// 007c227f  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 007c2286  894804               mov dword ptr [eax + 4], ecx
// 007c2289  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 007c2290  894808               mov dword ptr [eax + 8], ecx
// 007c2293  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 007c229a  55                   push ebp
// 007c229b  89480c               mov dword ptr [eax + 0xc], ecx
// 007c229e  56                   push esi
// 007c229f  8bcf                 mov ecx, edi
// 007c22a1  ffd2                 call edx
// 007c22a3  8b4778               mov eax, dword ptr [edi + 0x78]
// 007c22a6  83f8ff               cmp eax, -1
// 007c22a9  7503                 jne 0x7c22ae
// 007c22ab  8b4774               mov eax, dword ptr [edi + 0x74]
// 007c22ae  8b16                 mov edx, dword ptr [esi]
// 007c22b0  50                   push eax
// 007c22b1  8b4234               mov eax, dword ptr [edx + 0x34]
// 007c22b4  8bce                 mov ecx, esi
// 007c22b6  ffd0                 call eax
// 007c22b8  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 007c22bf  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 007c22c6  83c9ff               or ecx, 0xffffffff
// 007c22c9  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 007c22cd  89542438             mov dword ptr [esp + 0x38], edx
// 007c22d1  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 007c22d8  03c1                 add eax, ecx
// 007c22da  83bda800000000       cmp dword ptr [ebp + 0xa8], 0
// 007c22e1  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 007c22e8  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 007c22ef  894c243c             mov dword ptr [esp + 0x3c], ecx
// 007c22f3  89542440             mov dword ptr [esp + 0x40], edx
// 007c22f7  89442444             mov dword ptr [esp + 0x44], eax
// 007c22fb  750f                 jne 0x7c230c
// 007c22fd  85db                 test ebx, ebx
// 007c22ff  750b                 jne 0x7c230c
// 007c2301  8bcd                 mov ecx, ebp
// 007c2303  e858aef8ff           call 0x74d160
// 007c2308  01442438             add dword ptr [esp + 0x38], eax
// 007c230c  8bcd                 mov ecx, ebp
// 007c230e  e8fdaaf8ff           call 0x74ce10
// 007c2313  85c0                 test eax, eax
// 007c2315  7411                 je 0x7c2328
// 007c2317  837e0c00             cmp dword ptr [esi + 0xc], 0
// 007c231b  c784248800000001000000 mov dword ptr [esp + 0x88], 1
// 007c2326  740b                 je 0x7c2333
// 007c2328  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 007c2333  8d4730               lea eax, [edi + 0x30]
// 007c2336  50                   push eax
// 007c2337  56                   push esi
// 007c2338  8d4c2470             lea ecx, [esp + 0x70]
// 007c233c  e81fe5faff           call 0x770860
// 007c2341  8d4c2428             lea ecx, [esp + 0x28]
// 007c2345  51                   push ecx
// 007c2346  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 007c234d  c684248400000001     mov byte ptr [esp + 0x84], 1
// 007c2355  ff1554fb8900         call dword ptr [0x89fb54]
// 007c235b  50                   push eax
// 007c235c  8d8c24ac000000       lea ecx, [esp + 0xac]
// 007c2363  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c2369  8b5608               mov edx, dword ptr [esi + 8]
// 007c236c  50                   push eax
// 007c236d  52                   push edx
// 007c236e  ff1550e18900         call dword ptr [0x89e150]
// 007c2374  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007c2378  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 007c237c  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007c2383  896c2420             mov dword ptr [esp + 0x20], ebp
// 007c2387  89442424             mov dword ptr [esp + 0x24], eax
// 007c238b  e8d0a8f8ff           call 0x74cc60
// 007c2390  85c0                 test eax, eax
// 007c2392  0f84c2010000         je 0x7c255a
// 007c2398  85db                 test ebx, ebx
// 007c239a  0f85ba010000         jne 0x7c255a
// 007c23a0  83c506               add ebp, 6
// 007c23a3  837c2414ff           cmp dword ptr [esp + 0x14], -1
// 007c23a8  744b                 je 0x7c23f5
// 007c23aa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007c23ae  8b542438             mov edx, dword ptr [esp + 0x38]
// 007c23b2  8b1f                 mov ebx, dword ptr [edi]
// 007c23b4  51                   push ecx
// 007c23b5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007c23b9  83ec10               sub esp, 0x10
// 007c23bc  8bc4                 mov eax, esp
// 007c23be  8910                 mov dword ptr [eax], edx
// 007c23c0  8b542454             mov edx, dword ptr [esp + 0x54]
// 007c23c4  894804               mov dword ptr [eax + 4], ecx
// 007c23c7  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007c23cb  895008               mov dword ptr [eax + 8], edx
// 007c23ce  89480c               mov dword ptr [eax + 0xc], ecx
// 007c23d1  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 007c23d8  e8f3aaf8ff           call 0x74ced0
// 007c23dd  8b93a8000000         mov edx, dword ptr [ebx + 0xa8]
// 007c23e3  50                   push eax
// 007c23e4  6a00                 push 0
// 007c23e6  8bcf                 mov ecx, edi
// 007c23e8  ffd2                 call edx
// 007c23ea  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 007c23f1  8d6c2802             lea ebp, [eax + ebp + 2]
// 007c23f5  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 007c23fd  7403                 je 0x7c2402
// 007c23ff  83c51b               add ebp, 0x1b
// 007c2402  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007c2406  8b442438             mov eax, dword ptr [esp + 0x38]
// 007c240a  2bc8                 sub ecx, eax
// 007c240c  3bcd                 cmp ecx, ebp
// 007c240e  0f8e4a010000         jle 0x7c255e
// 007c2414  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007c241b  e840a8f8ff           call 0x74cc60
// 007c2420  a802                 test al, 2
// 007c2422  740a                 je 0x7c242e
// 007c2424  8b542440             mov edx, dword ptr [esp + 0x40]
// 007c2428  2bd5                 sub edx, ebp
// 007c242a  89542438             mov dword ptr [esp + 0x38], edx
// 007c242e  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007c2435  e826a8f8ff           call 0x74cc60
// 007c243a  a801                 test al, 1
// 007c243c  0f8418010000         je 0x7c255a
// 007c2442  8b442440             mov eax, dword ptr [esp + 0x40]
// 007c2446  2bc5                 sub eax, ebp
// 007c2448  03442438             add eax, dword ptr [esp + 0x38]
// 007c244c  99                   cdq 
// 007c244d  2bc2                 sub eax, edx
// 007c244f  d1f8                 sar eax, 1
// 007c2451  89442438             mov dword ptr [esp + 0x38], eax
// 007c2455  e904010000           jmp 0x7c255e
// 007c245a  89442418             mov dword ptr [esp + 0x18], eax
// 007c245e  3bd8                 cmp ebx, eax
// 007c2460  0f84f7fdffff         je 0x7c225d
// 007c2466  83bfbc02000004       cmp dword ptr [edi + 0x2bc], 4
// 007c246d  755d                 jne 0x7c24cc
// 007c246f  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 007c2476  50                   push eax
// 007c2477  50                   push eax
// 007c2478  8d8754010000         lea eax, [edi + 0x154]
// 007c247e  50                   push eax
// 007c247f  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 007c2486  51                   push ecx
// 007c2487  56                   push esi
// 007c2488  e8e300fbff           call 0x772570
// 007c248d  8bc8                 mov ecx, eax
// 007c248f  e8fc03fbff           call 0x772890
// 007c2494  8b87bc010000         mov eax, dword ptr [edi + 0x1bc]
// 007c249a  83f8ff               cmp eax, -1
// 007c249d  7506                 jne 0x7c24a5
// 007c249f  8b87b8010000         mov eax, dword ptr [edi + 0x1b8]
// 007c24a5  8b8fbc010000         mov ecx, dword ptr [edi + 0x1bc]
// 007c24ab  83f9ff               cmp ecx, -1
// 007c24ae  7506                 jne 0x7c24b6
// 007c24b0  8b8fb8010000         mov ecx, dword ptr [edi + 0x1b8]
// 007c24b6  50                   push eax
// 007c24b7  51                   push ecx
// 007c24b8  8d94249c000000       lea edx, [esp + 0x9c]
// 007c24bf  52                   push edx
// 007c24c0  8bce                 mov ecx, esi
// 007c24c2  e80373f5ff           call 0x7197ca
// 007c24c7  e9d7fdffff           jmp 0x7c22a3
// 007c24cc  8b87d8000000         mov eax, dword ptr [edi + 0xd8]
// 007c24d2  83f8ff               cmp eax, -1
// 007c24d5  7508                 jne 0x7c24df
// 007c24d7  8b8fd4000000         mov ecx, dword ptr [edi + 0xd4]
// 007c24dd  eb02                 jmp 0x7c24e1
// 007c24df  8bc8                 mov ecx, eax
// 007c24e1  8b87e4000000         mov eax, dword ptr [edi + 0xe4]
// 007c24e7  83f8ff               cmp eax, -1
// 007c24ea  7506                 jne 0x7c24f2
// 007c24ec  8b87e0000000         mov eax, dword ptr [edi + 0xe0]
// 007c24f2  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 007c24f9  51                   push ecx
// 007c24fa  50                   push eax
// 007c24fb  8d84249c000000       lea eax, [esp + 0x9c]
// 007c2502  50                   push eax
// 007c2503  8bce                 mov ecx, esi
// 007c2505  e8c072f5ff           call 0x7197ca
// 007c250a  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 007c2511  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 007c2518  51                   push ecx
// 007c2519  52                   push edx
// 007c251a  8d442430             lea eax, [esp + 0x30]
// 007c251e  50                   push eax
// 007c251f  8bce                 mov ecx, esi
// 007c2521  e8e873f5ff           call 0x71990e
// 007c2526  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 007c252d  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 007c2534  51                   push ecx
// 007c2535  52                   push edx
// 007c2536  8bce                 mov ecx, esi
// 007c2538  e8cb73f5ff           call 0x719908
// 007c253d  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 007c2544  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 007c254b  48                   dec eax
// 007c254c  50                   push eax
// 007c254d  51                   push ecx
// 007c254e  8bce                 mov ecx, esi
// 007c2550  e8b373f5ff           call 0x719908
// 007c2555  e949fdffff           jmp 0x7c22a3
// 007c255a  8b442438             mov eax, dword ptr [esp + 0x38]
// 007c255e  837c2414ff           cmp dword ptr [esp + 0x14], -1
// 007c2563  0f8481000000         je 0x7c25ea
// 007c2569  85db                 test ebx, ebx
// 007c256b  757d                 jne 0x7c25ea
// 007c256d  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007c2571  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007c2575  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 007c2579  8bc8                 mov ecx, eax
// 007c257b  8b442444             mov eax, dword ptr [esp + 0x44]
// 007c257f  89442464             mov dword ptr [esp + 0x64], eax
// 007c2583  03c3                 add eax, ebx
// 007c2585  8b1f                 mov ebx, dword ptr [edi]
// 007c2587  89442464             mov dword ptr [esp + 0x64], eax
// 007c258b  8b442414             mov eax, dword ptr [esp + 0x14]
// 007c258f  50                   push eax
// 007c2590  83ec10               sub esp, 0x10
// 007c2593  8bc4                 mov eax, esp
// 007c2595  8908                 mov dword ptr [eax], ecx
// 007c2597  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007c259b  895004               mov dword ptr [eax + 4], edx
// 007c259e  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 007c25a2  896808               mov dword ptr [eax + 8], ebp
// 007c25a5  89480c               mov dword ptr [eax + 0xc], ecx
// 007c25a8  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007c25ac  83ec10               sub esp, 0x10
// 007c25af  8bc4                 mov eax, esp
// 007c25b1  8910                 mov dword ptr [eax], edx
// 007c25b3  8b542474             mov edx, dword ptr [esp + 0x74]
// 007c25b7  894804               mov dword ptr [eax + 4], ecx
// 007c25ba  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007c25be  895008               mov dword ptr [eax + 8], edx
// 007c25c1  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 007c25c8  89480c               mov dword ptr [eax + 0xc], ecx
// 007c25cb  8b83ac000000         mov eax, dword ptr [ebx + 0xac]
// 007c25d1  52                   push edx
// 007c25d2  56                   push esi
// 007c25d3  8bcf                 mov ecx, edi
// 007c25d5  ffd0                 call eax
// 007c25d7  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007c25db  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 007c25e2  8d540102             lea edx, [ecx + eax + 2]
// 007c25e6  89542438             mov dword ptr [esp + 0x38], edx
// 007c25ea  6a01                 push 1
// 007c25ec  8bce                 mov ecx, esi
// 007c25ee  e813990800           call 0x84bf06
// 007c25f3  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007c25f7  8b442438             mov eax, dword ptr [esp + 0x38]
// 007c25fb  83e903               sub ecx, 3
// 007c25fe  83c003               add eax, 3
// 007c2601  894c2440             mov dword ptr [esp + 0x40], ecx
// 007c2605  894c2450             mov dword ptr [esp + 0x50], ecx
// 007c2609  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007c260d  8be8                 mov ebp, eax
// 007c260f  89442438             mov dword ptr [esp + 0x38], eax
// 007c2613  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007c2617  894c2454             mov dword ptr [esp + 0x54], ecx
// 007c261b  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 007c2622  896c2448             mov dword ptr [esp + 0x48], ebp
// 007c2626  8944244c             mov dword ptr [esp + 0x4c], eax
// 007c262a  ff1554fb8900         call dword ptr [0x89fb54]
// 007c2630  85c0                 test eax, eax
// 007c2632  0f8e2f010000         jle 0x7c2767
// 007c2638  8b542440             mov edx, dword ptr [esp + 0x40]
// 007c263c  3b542438             cmp edx, dword ptr [esp + 0x38]
// 007c2640  0f8e21010000         jle 0x7c2767
// 007c2646  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 007c264c  83f8ff               cmp eax, -1
// 007c264f  7506                 jne 0x7c2657
// 007c2651  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 007c2657  8b16                 mov edx, dword ptr [esi]
// 007c2659  50                   push eax
// 007c265a  8b4238               mov eax, dword ptr [edx + 0x38]
// 007c265d  8bce                 mov ecx, esi
// 007c265f  ffd0                 call eax
// 007c2661  83bf2802000000       cmp dword ptr [edi + 0x228], 0
// 007c2668  744c                 je 0x7c26b6
// 007c266a  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 007c2672  7442                 je 0x7c26b6
// 007c2674  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 007c2678  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 007c267c  8b542428             mov edx, dword ptr [esp + 0x28]
// 007c2680  8bcb                 mov ecx, ebx
// 007c2682  2bcd                 sub ecx, ebp
// 007c2684  8d41e5               lea eax, [ecx - 0x1b]
// 007c2687  3bd0                 cmp edx, eax
// 007c2689  8bca                 mov ecx, edx
// 007c268b  7c02                 jl 0x7c268f
// 007c268d  8bc8                 mov ecx, eax
// 007c268f  83f9fb               cmp ecx, -5
// 007c2692  7d0a                 jge 0x7c269e
// 007c2694  c7442420fbffffff     mov dword ptr [esp + 0x20], 0xfffffffb
// 007c269c  eb08                 jmp 0x7c26a6
// 007c269e  3bd0                 cmp edx, eax
// 007c26a0  7c04                 jl 0x7c26a6
// 007c26a2  89442420             mov dword ptr [esp + 0x20], eax
// 007c26a6  8b542420             mov edx, dword ptr [esp + 0x20]
// 007c26aa  8d442a08             lea eax, [edx + ebp + 8]
// 007c26ae  3bd8                 cmp ebx, eax
// 007c26b0  7c04                 jl 0x7c26b6
// 007c26b2  89442440             mov dword ptr [esp + 0x40], eax
// 007c26b6  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007c26bd  e89ea5f8ff           call 0x74cc60
// 007c26c2  a810                 test al, 0x10
// 007c26c4  745e                 je 0x7c2724
// 007c26c6  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007c26ca  8b542440             mov edx, dword ptr [esp + 0x40]
// 007c26ce  8b442438             mov eax, dword ptr [esp + 0x38]
// 007c26d2  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007c26d6  68108c0000           push 0x8c10
// 007c26db  8d4c242c             lea ecx, [esp + 0x2c]
// 007c26df  89542434             mov dword ptr [esp + 0x34], edx
// 007c26e3  51                   push ecx
// 007c26e4  89442430             mov dword ptr [esp + 0x30], eax
// 007c26e8  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007c26ec  8d9424ac000000       lea edx, [esp + 0xac]
// 007c26f3  52                   push edx
// 007c26f4  8bce                 mov ecx, esi
// 007c26f6  bb10880000           mov ebx, 0x8810
// 007c26fb  89442440             mov dword ptr [esp + 0x40], eax
// 007c26ff  e88c92f5ff           call 0x71b990
// 007c2704  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007c2708  2b442434             sub eax, dword ptr [esp + 0x34]
// 007c270c  2b44243c             sub eax, dword ptr [esp + 0x3c]
// 007c2710  03442444             add eax, dword ptr [esp + 0x44]
// 007c2714  83f801               cmp eax, 1
// 007c2717  7e10                 jle 0x7c2729
// 007c2719  99                   cdq 
// 007c271a  2bc2                 sub eax, edx
// 007c271c  d1f8                 sar eax, 1
// 007c271e  0144243c             add dword ptr [esp + 0x3c], eax
// 007c2722  eb05                 jmp 0x7c2729
// 007c2724  bb24880000           mov ebx, 0x8824
// 007c2729  8b2e                 mov ebp, dword ptr [esi]
// 007c272b  53                   push ebx
// 007c272c  8d44243c             lea eax, [esp + 0x3c]
// 007c2730  50                   push eax
// 007c2731  8d8c24ac000000       lea ecx, [esp + 0xac]
// 007c2738  ff1554fb8900         call dword ptr [0x89fb54]
// 007c273e  50                   push eax
// 007c273f  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 007c2746  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c274c  8b5570               mov edx, dword ptr [ebp + 0x70]
// 007c274f  50                   push eax
// 007c2750  8bce                 mov ecx, esi
// 007c2752  ffd2                 call edx
// 007c2754  8b442420             mov eax, dword ptr [esp + 0x20]
// 007c2758  01442448             add dword ptr [esp + 0x48], eax
// 007c275c  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 007c2763  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 007c2767  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 007c276f  743d                 je 0x7c27ae
// 007c2771  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007c2778  f7db                 neg ebx
// 007c277a  1bdb                 sbb ebx, ebx
// 007c277c  83e307               and ebx, 7
// 007c277f  83c30a               add ebx, 0xa
// 007c2782  03eb                 add ebp, ebx
// 007c2784  e887a5f8ff           call 0x74cd10
// 007c2789  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007c278d  8b542450             mov edx, dword ptr [esp + 0x50]
// 007c2791  50                   push eax
// 007c2792  83ec10               sub esp, 0x10
// 007c2795  8bc4                 mov eax, esp
// 007c2797  8928                 mov dword ptr [eax], ebp
// 007c2799  894804               mov dword ptr [eax + 4], ecx
// 007c279c  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 007c27a0  895008               mov dword ptr [eax + 8], edx
// 007c27a3  89480c               mov dword ptr [eax + 0xc], ecx
// 007c27a6  56                   push esi
// 007c27a7  8bcf                 mov ecx, edi
// 007c27a9  e842e4ffff           call 0x7c0bf0
// 007c27ae  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 007c27b3  7426                 je 0x7c27db
// 007c27b5  83bf1002000000       cmp dword ptr [edi + 0x210], 0
// 007c27bc  741d                 je 0x7c27db
// 007c27be  8b4e04               mov ecx, dword ptr [esi + 4]
// 007c27c1  8b542418             mov edx, dword ptr [esp + 0x18]
// 007c27c5  019424a0000000       add dword ptr [esp + 0xa0], edx
// 007c27cc  8d842494000000       lea eax, [esp + 0x94]
// 007c27d3  50                   push eax
// 007c27d4  51                   push ecx
// 007c27d5  ff15ccee8900         call dword ptr [0x89eecc]
// 007c27db  8d4c2468             lea ecx, [esp + 0x68]
// 007c27df  c684248000000000     mov byte ptr [esp + 0x80], 0
// 007c27e7  e8f4e0faff           call 0x7708e0
// 007c27ec  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 007c27f3  ff1510fd8900         call dword ptr [0x89fd10]
// 007c27f9  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007c27fd  64890d00000000       mov dword ptr fs:[0], ecx
// 007c2804  59                   pop ecx
// 007c2805  5f                   pop edi
// 007c2806  5e                   pop esi
// 007c2807  5d                   pop ebp
// 007c2808  5b                   pop ebx
// 007c2809  83c470               add esp, 0x70
// 007c280c  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawColumn@CXTPReportPaintManager@@UAEXPAVCDC@@PAVCXTPReportColumn@@PAVCXTPReportHeader@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp