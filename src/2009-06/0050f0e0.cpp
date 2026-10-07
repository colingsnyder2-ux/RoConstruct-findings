// roc 2009-06 0050f0e0  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 4394 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0050f0e0
//
// 0050f0e0  83ec10               sub esp, 0x10
// 0050f0e3  53                   push ebx
// 0050f0e4  55                   push ebp
// 0050f0e5  56                   push esi
// 0050f0e6  8b742424             mov esi, dword ptr [esp + 0x24]
// 0050f0ea  8d4174               lea eax, [ecx + 0x74]
// 0050f0ed  57                   push edi
// 0050f0ee  b910000000           mov ecx, 0x10
// 0050f0f3  8bf8                 mov edi, eax
// 0050f0f5  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0050f0f7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0050f0fb  8b7108               mov esi, dword ptr [ecx + 8]
// 0050f0fe  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 0050f101  8b11                 mov edx, dword ptr [ecx]
// 0050f103  8b7904               mov edi, dword ptr [ecx + 4]
// 0050f106  33de                 xor ebx, esi
// 0050f108  23df                 and ebx, edi
// 0050f10a  33590c               xor ebx, dword ptr [ecx + 0xc]
// 0050f10d  8b30                 mov esi, dword ptr [eax]
// 0050f10f  8bea                 mov ebp, edx
// 0050f111  c1c505               rol ebp, 5
// 0050f114  03eb                 add ebp, ebx
// 0050f116  036910               add ebp, dword ptr [ecx + 0x10]
// 0050f119  c1cf02               ror edi, 2
// 0050f11c  8db42e9979825a       lea esi, [esi + ebp + 0x5a827999]
// 0050f123  8b6908               mov ebp, dword ptr [ecx + 8]
// 0050f126  33ef                 xor ebp, edi
// 0050f128  23ea                 and ebp, edx
// 0050f12a  336908               xor ebp, dword ptr [ecx + 8]
// 0050f12d  8bde                 mov ebx, esi
// 0050f12f  c1c305               rol ebx, 5
// 0050f132  03dd                 add ebx, ebp
// 0050f134  035804               add ebx, dword ptr [eax + 4]
// 0050f137  c1ca02               ror edx, 2
// 0050f13a  897c2410             mov dword ptr [esp + 0x10], edi
// 0050f13e  8b790c               mov edi, dword ptr [ecx + 0xc]
// 0050f141  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0050f145  33ea                 xor ebp, edx
// 0050f147  23ee                 and ebp, esi
// 0050f149  336c2410             xor ebp, dword ptr [esp + 0x10]
// 0050f14d  8dbc1f9979825a       lea edi, [edi + ebx + 0x5a827999]
// 0050f154  8bdf                 mov ebx, edi
// 0050f156  c1c305               rol ebx, 5
// 0050f159  035808               add ebx, dword ptr [eax + 8]
// 0050f15c  89542428             mov dword ptr [esp + 0x28], edx
// 0050f160  8b5108               mov edx, dword ptr [ecx + 8]
// 0050f163  03eb                 add ebp, ebx
// 0050f165  8d942a9979825a       lea edx, [edx + ebp + 0x5a827999]
// 0050f16c  c1ce02               ror esi, 2
// 0050f16f  89742418             mov dword ptr [esp + 0x18], esi
// 0050f173  8bee                 mov ebp, esi
// 0050f175  8b742428             mov esi, dword ptr [esp + 0x28]
// 0050f179  33ee                 xor ebp, esi
// 0050f17b  23ef                 and ebp, edi
// 0050f17d  33ee                 xor ebp, esi
// 0050f17f  8b742410             mov esi, dword ptr [esp + 0x10]
// 0050f183  8bda                 mov ebx, edx
// 0050f185  c1c305               rol ebx, 5
// 0050f188  03dd                 add ebx, ebp
// 0050f18a  03580c               add ebx, dword ptr [eax + 0xc]
// 0050f18d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0050f191  c1cf02               ror edi, 2
// 0050f194  33ef                 xor ebp, edi
// 0050f196  8db41e9979825a       lea esi, [esi + ebx + 0x5a827999]
// 0050f19d  23ea                 and ebp, edx
// 0050f19f  336c2418             xor ebp, dword ptr [esp + 0x18]
// 0050f1a3  8bde                 mov ebx, esi
// 0050f1a5  c1c305               rol ebx, 5
// 0050f1a8  03dd                 add ebx, ebp
// 0050f1aa  035810               add ebx, dword ptr [eax + 0x10]
// 0050f1ad  897c2424             mov dword ptr [esp + 0x24], edi
// 0050f1b1  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0050f1b5  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0050f1b9  c1ca02               ror edx, 2
// 0050f1bc  33ea                 xor ebp, edx
// 0050f1be  8dbc1f9979825a       lea edi, [edi + ebx + 0x5a827999]
// 0050f1c5  23ee                 and ebp, esi
// 0050f1c7  336c2424             xor ebp, dword ptr [esp + 0x24]
// 0050f1cb  8bdf                 mov ebx, edi
// 0050f1cd  c1c305               rol ebx, 5
// 0050f1d0  89542414             mov dword ptr [esp + 0x14], edx
// 0050f1d4  03dd                 add ebx, ebp
// 0050f1d6  035814               add ebx, dword ptr [eax + 0x14]
// 0050f1d9  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0050f1dd  8b542418             mov edx, dword ptr [esp + 0x18]
// 0050f1e1  8d941a9979825a       lea edx, [edx + ebx + 0x5a827999]
// 0050f1e8  c1ce02               ror esi, 2
// 0050f1eb  33ee                 xor ebp, esi
// 0050f1ed  23ef                 and ebp, edi
// 0050f1ef  336c2414             xor ebp, dword ptr [esp + 0x14]
// 0050f1f3  8bda                 mov ebx, edx
// 0050f1f5  c1c305               rol ebx, 5
// 0050f1f8  03dd                 add ebx, ebp
// 0050f1fa  035818               add ebx, dword ptr [eax + 0x18]
// 0050f1fd  c1cf02               ror edi, 2
// 0050f200  89742410             mov dword ptr [esp + 0x10], esi
// 0050f204  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0050f208  8b742424             mov esi, dword ptr [esp + 0x24]
// 0050f20c  33ef                 xor ebp, edi
// 0050f20e  23ea                 and ebp, edx
// 0050f210  336c2410             xor ebp, dword ptr [esp + 0x10]
// 0050f214  8db41e9979825a       lea esi, [esi + ebx + 0x5a827999]
// 0050f21b  8bde                 mov ebx, esi
// 0050f21d  c1c305               rol ebx, 5
// 0050f220  03dd                 add ebx, ebp
// 0050f222  03581c               add ebx, dword ptr [eax + 0x1c]
// 0050f225  c1ca02               ror edx, 2
// 0050f228  897c2428             mov dword ptr [esp + 0x28], edi
// 0050f22c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0050f230  8dbc1f9979825a       lea edi, [edi + ebx + 0x5a827999]
// 0050f237  89542418             mov dword ptr [esp + 0x18], edx
// 0050f23b  8bea                 mov ebp, edx
// 0050f23d  8b542428             mov edx, dword ptr [esp + 0x28]
// 0050f241  33ea                 xor ebp, edx
// 0050f243  23ee                 and ebp, esi
// 0050f245  33ea                 xor ebp, edx
// 0050f247  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050f24b  8bdf                 mov ebx, edi
// 0050f24d  c1c305               rol ebx, 5
// 0050f250  035820               add ebx, dword ptr [eax + 0x20]
// 0050f253  03eb                 add ebp, ebx
// 0050f255  8d942a9979825a       lea edx, [edx + ebp + 0x5a827999]
// 0050f25c  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0050f260  c1ce02               ror esi, 2
// 0050f263  33ee                 xor ebp, esi
// 0050f265  23ef                 and ebp, edi
// 0050f267  336c2418             xor ebp, dword ptr [esp + 0x18]
// 0050f26b  8bda                 mov ebx, edx
// 0050f26d  c1c305               rol ebx, 5
// 0050f270  03dd                 add ebx, ebp
// 0050f272  035824               add ebx, dword ptr [eax + 0x24]
// 0050f275  c1cf02               ror edi, 2
// 0050f278  89742424             mov dword ptr [esp + 0x24], esi
// 0050f27c  8b742428             mov esi, dword ptr [esp + 0x28]
// 0050f280  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0050f284  33ef                 xor ebp, edi
// 0050f286  8db41e9979825a       lea esi, [esi + ebx + 0x5a827999]
// 0050f28d  23ea                 and ebp, edx
// 0050f28f  336c2424             xor ebp, dword ptr [esp + 0x24]
// 0050f293  8bde                 mov ebx, esi
// 0050f295  c1c305               rol ebx, 5
// 0050f298  03dd                 add ebx, ebp
// 0050f29a  035828               add ebx, dword ptr [eax + 0x28]
// 0050f29d  c1ca02               ror edx, 2
// 0050f2a0  897c2414             mov dword ptr [esp + 0x14], edi
// 0050f2a4  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0050f2a8  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0050f2ac  33ea                 xor ebp, edx
// 0050f2ae  8dbc1f9979825a       lea edi, [edi + ebx + 0x5a827999]
// 0050f2b5  23ee                 and ebp, esi
// 0050f2b7  336c2414             xor ebp, dword ptr [esp + 0x14]
// 0050f2bb  8bdf                 mov ebx, edi
// 0050f2bd  c1c305               rol ebx, 5
// 0050f2c0  03dd                 add ebx, ebp
// 0050f2c2  03582c               add ebx, dword ptr [eax + 0x2c]
// 0050f2c5  89542410             mov dword ptr [esp + 0x10], edx
// 0050f2c9  8b542424             mov edx, dword ptr [esp + 0x24]
// 0050f2cd  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0050f2d1  8d9c1a9979825a       lea ebx, [edx + ebx + 0x5a827999]
// 0050f2d8  c1ce02               ror esi, 2
// 0050f2db  8bd3                 mov edx, ebx
// 0050f2dd  89742428             mov dword ptr [esp + 0x28], esi
// 0050f2e1  c1c205               rol edx, 5
// 0050f2e4  33ee                 xor ebp, esi
// 0050f2e6  23ef                 and ebp, edi
// 0050f2e8  336c2410             xor ebp, dword ptr [esp + 0x10]
// 0050f2ec  8b742414             mov esi, dword ptr [esp + 0x14]
// 0050f2f0  03d5                 add edx, ebp
// 0050f2f2  035030               add edx, dword ptr [eax + 0x30]
// 0050f2f5  c1cf02               ror edi, 2
// 0050f2f8  8db4169979825a       lea esi, [esi + edx + 0x5a827999]
// 0050f2ff  8b5034               mov edx, dword ptr [eax + 0x34]
// 0050f302  89742414             mov dword ptr [esp + 0x14], esi
// 0050f306  897c2418             mov dword ptr [esp + 0x18], edi
// 0050f30a  8bee                 mov ebp, esi
// 0050f30c  8b742428             mov esi, dword ptr [esp + 0x28]
// 0050f310  33fe                 xor edi, esi
// 0050f312  23fb                 and edi, ebx
// 0050f314  c1c505               rol ebp, 5
// 0050f317  03ea                 add ebp, edx
// 0050f319  33fe                 xor edi, esi
// 0050f31b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0050f31f  03fd                 add edi, ebp
// 0050f321  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0050f325  335020               xor edx, dword ptr [eax + 0x20]
// 0050f328  c1cb02               ror ebx, 2
// 0050f32b  33eb                 xor ebp, ebx
// 0050f32d  236c2414             and ebp, dword ptr [esp + 0x14]
// 0050f331  335008               xor edx, dword ptr [eax + 8]
// 0050f334  336c2418             xor ebp, dword ptr [esp + 0x18]
// 0050f338  3310                 xor edx, dword ptr [eax]
// 0050f33a  8db43e9979825a       lea esi, [esi + edi + 0x5a827999]
// 0050f341  8bfe                 mov edi, esi
// 0050f343  c1c705               rol edi, 5
// 0050f346  03fd                 add edi, ebp
// 0050f348  037838               add edi, dword ptr [eax + 0x38]
// 0050f34b  895c2424             mov dword ptr [esp + 0x24], ebx
// 0050f34f  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0050f353  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0050f357  8d9c3b9979825a       lea ebx, [ebx + edi + 0x5a827999]
// 0050f35e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0050f362  c1cf02               ror edi, 2
// 0050f365  33ef                 xor ebp, edi
// 0050f367  23ee                 and ebp, esi
// 0050f369  336c2424             xor ebp, dword ptr [esp + 0x24]
// 0050f36d  895c2428             mov dword ptr [esp + 0x28], ebx
// 0050f371  c1c305               rol ebx, 5
// 0050f374  03dd                 add ebx, ebp
// 0050f376  03583c               add ebx, dword ptr [eax + 0x3c]
// 0050f379  c1ce02               ror esi, 2
// 0050f37c  d1c2                 rol edx, 1
// 0050f37e  8954241c             mov dword ptr [esp + 0x1c], edx
// 0050f382  8910                 mov dword ptr [eax], edx
// 0050f384  897c2414             mov dword ptr [esp + 0x14], edi
// 0050f388  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0050f38c  8b542414             mov edx, dword ptr [esp + 0x14]
// 0050f390  8dbc1f9979825a       lea edi, [edi + ebx + 0x5a827999]
// 0050f397  8bda                 mov ebx, edx
// 0050f399  33de                 xor ebx, esi
// 0050f39b  89742410             mov dword ptr [esp + 0x10], esi
// 0050f39f  8bf3                 mov esi, ebx
// 0050f3a1  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0050f3a5  23f3                 and esi, ebx
// 0050f3a7  33f2                 xor esi, edx
// 0050f3a9  8b542424             mov edx, dword ptr [esp + 0x24]
// 0050f3ad  8bef                 mov ebp, edi
// 0050f3af  c1c505               rol ebp, 5
// 0050f3b2  036c241c             add ebp, dword ptr [esp + 0x1c]
// 0050f3b6  03f5                 add esi, ebp
// 0050f3b8  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0050f3bc  8db4329979825a       lea esi, [edx + esi + 0x5a827999]
// 0050f3c3  8b5038               mov edx, dword ptr [eax + 0x38]
// 0050f3c6  33500c               xor edx, dword ptr [eax + 0xc]
// 0050f3c9  c1cb02               ror ebx, 2
// 0050f3cc  335004               xor edx, dword ptr [eax + 4]
// 0050f3cf  89742424             mov dword ptr [esp + 0x24], esi
// 0050f3d3  335024               xor edx, dword ptr [eax + 0x24]
// 0050f3d6  33eb                 xor ebp, ebx
// 0050f3d8  d1c2                 rol edx, 1
// 0050f3da  c1c605               rol esi, 5
// 0050f3dd  895c2428             mov dword ptr [esp + 0x28], ebx
// 0050f3e1  895004               mov dword ptr [eax + 4], edx
// 0050f3e4  23ef                 and ebp, edi
// 0050f3e6  336c2410             xor ebp, dword ptr [esp + 0x10]
// 0050f3ea  03f2                 add esi, edx
// 0050f3ec  8b542414             mov edx, dword ptr [esp + 0x14]
// 0050f3f0  03ee                 add ebp, esi
// 0050f3f2  8db42a9979825a       lea esi, [edx + ebp + 0x5a827999]
// 0050f3f9  8b5028               mov edx, dword ptr [eax + 0x28]
// 0050f3fc  335010               xor edx, dword ptr [eax + 0x10]
// 0050f3ff  c1cf02               ror edi, 2
// 0050f402  335008               xor edx, dword ptr [eax + 8]
// 0050f405  897c2418             mov dword ptr [esp + 0x18], edi
// 0050f409  33503c               xor edx, dword ptr [eax + 0x3c]
// 0050f40c  337c2428             xor edi, dword ptr [esp + 0x28]
// 0050f410  d1c2                 rol edx, 1
// 0050f412  237c2424             and edi, dword ptr [esp + 0x24]
// 0050f416  895008               mov dword ptr [eax + 8], edx
// 0050f419  337c2428             xor edi, dword ptr [esp + 0x28]
// 0050f41d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0050f421  8bde                 mov ebx, esi
// 0050f423  c1c305               rol ebx, 5
// 0050f426  03da                 add ebx, edx
// 0050f428  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050f42c  03fb                 add edi, ebx
// 0050f42e  8dbc3a9979825a       lea edi, [edx + edi + 0x5a827999]
// 0050f435  8b542424             mov edx, dword ptr [esp + 0x24]
// 0050f439  c1ca02               ror edx, 2
// 0050f43c  8bda                 mov ebx, edx
// 0050f43e  8b500c               mov edx, dword ptr [eax + 0xc]
// 0050f441  3310                 xor edx, dword ptr [eax]
// 0050f443  33eb                 xor ebp, ebx
// 0050f445  33502c               xor edx, dword ptr [eax + 0x2c]
// 0050f448  23ee                 and ebp, esi
// 0050f44a  335014               xor edx, dword ptr [eax + 0x14]
// 0050f44d  336c2418             xor ebp, dword ptr [esp + 0x18]
// 0050f451  d1c2                 rol edx, 1
// 0050f453  89500c               mov dword ptr [eax + 0xc], edx
// 0050f456  897c2410             mov dword ptr [esp + 0x10], edi
// 0050f45a  c1c705               rol edi, 5
// 0050f45d  03fa                 add edi, edx
// 0050f45f  8b542428             mov edx, dword ptr [esp + 0x28]
// 0050f463  03ef                 add ebp, edi
// 0050f465  8dbc2a9979825a       lea edi, [edx + ebp + 0x5a827999]
// 0050f46c  8b5030               mov edx, dword ptr [eax + 0x30]
// 0050f46f  335018               xor edx, dword ptr [eax + 0x18]
// 0050f472  c1ce02               ror esi, 2
// 0050f475  335010               xor edx, dword ptr [eax + 0x10]
// 0050f478  895c2424             mov dword ptr [esp + 0x24], ebx
// 0050f47c  335004               xor edx, dword ptr [eax + 4]
// 0050f47f  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0050f483  d1c2                 rol edx, 1
// 0050f485  33ee                 xor ebp, esi
// 0050f487  89742414             mov dword ptr [esp + 0x14], esi
// 0050f48b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0050f48f  33ee                 xor ebp, esi
// 0050f491  895010               mov dword ptr [eax + 0x10], edx
// 0050f494  8bdf                 mov ebx, edi
// 0050f496  c1c305               rol ebx, 5
// 0050f499  03da                 add ebx, edx
// 0050f49b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0050f49f  03eb                 add ebp, ebx
// 0050f4a1  8dac2aa1ebd96e       lea ebp, [edx + ebp + 0x6ed9eba1]
// 0050f4a8  8b5008               mov edx, dword ptr [eax + 8]
// 0050f4ab  335034               xor edx, dword ptr [eax + 0x34]
// 0050f4ae  c1ce02               ror esi, 2
// 0050f4b1  33501c               xor edx, dword ptr [eax + 0x1c]
// 0050f4b4  8bde                 mov ebx, esi
// 0050f4b6  335014               xor edx, dword ptr [eax + 0x14]
// 0050f4b9  8b742414             mov esi, dword ptr [esp + 0x14]
// 0050f4bd  d1c2                 rol edx, 1
// 0050f4bf  33f3                 xor esi, ebx
// 0050f4c1  896c2418             mov dword ptr [esp + 0x18], ebp
// 0050f4c5  c1c505               rol ebp, 5
// 0050f4c8  03ea                 add ebp, edx
// 0050f4ca  33f7                 xor esi, edi
// 0050f4cc  895014               mov dword ptr [eax + 0x14], edx
// 0050f4cf  8b542424             mov edx, dword ptr [esp + 0x24]
// 0050f4d3  03f5                 add esi, ebp
// 0050f4d5  c1cf02               ror edi, 2
// 0050f4d8  8db432a1ebd96e       lea esi, [edx + esi + 0x6ed9eba1]
// 0050f4df  8b5038               mov edx, dword ptr [eax + 0x38]
// 0050f4e2  895c2410             mov dword ptr [esp + 0x10], ebx
// 0050f4e6  897c2428             mov dword ptr [esp + 0x28], edi
// 0050f4ea  335020               xor edx, dword ptr [eax + 0x20]
// 0050f4ed  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0050f4f1  335018               xor edx, dword ptr [eax + 0x18]
// 0050f4f4  33fb                 xor edi, ebx
// 0050f4f6  33500c               xor edx, dword ptr [eax + 0xc]
// 0050f4f9  8bee                 mov ebp, esi
// 0050f4fb  d1c2                 rol edx, 1
// 0050f4fd  c1c505               rol ebp, 5
// 0050f500  03ea                 add ebp, edx
// 0050f502  895018               mov dword ptr [eax + 0x18], edx
// 0050f505  8b542414             mov edx, dword ptr [esp + 0x14]
// 0050f509  8bdf                 mov ebx, edi
// 0050f50b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0050f50f  33df                 xor ebx, edi
// 0050f511  03dd                 add ebx, ebp
// 0050f513  8d9c1aa1ebd96e       lea ebx, [edx + ebx + 0x6ed9eba1]
// 0050f51a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0050f51e  c1ca02               ror edx, 2
// 0050f521  8bea                 mov ebp, edx
// 0050f523  8b5010               mov edx, dword ptr [eax + 0x10]
// 0050f526  33503c               xor edx, dword ptr [eax + 0x3c]
// 0050f529  896c2418             mov dword ptr [esp + 0x18], ebp
// 0050f52d  335024               xor edx, dword ptr [eax + 0x24]
// 0050f530  33ee                 xor ebp, esi
// 0050f532  33501c               xor edx, dword ptr [eax + 0x1c]
// 0050f535  33ef                 xor ebp, edi
// 0050f537  d1c2                 rol edx, 1
// 0050f539  89501c               mov dword ptr [eax + 0x1c], edx
// 0050f53c  895c2414             mov dword ptr [esp + 0x14], ebx
// 0050f540  c1c305               rol ebx, 5
// 0050f543  03da                 add ebx, edx
// 0050f545  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050f549  03eb                 add ebp, ebx
// 0050f54b  8dbc2aa1ebd96e       lea edi, [edx + ebp + 0x6ed9eba1]
// 0050f552  8b5028               mov edx, dword ptr [eax + 0x28]
// 0050f555  335020               xor edx, dword ptr [eax + 0x20]
// 0050f558  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0050f55c  3310                 xor edx, dword ptr [eax]
// 0050f55e  c1ce02               ror esi, 2
// 0050f561  335014               xor edx, dword ptr [eax + 0x14]
// 0050f564  33ee                 xor ebp, esi
// 0050f566  d1c2                 rol edx, 1
// 0050f568  895020               mov dword ptr [eax + 0x20], edx
// 0050f56b  89742424             mov dword ptr [esp + 0x24], esi
// 0050f56f  8b742414             mov esi, dword ptr [esp + 0x14]
// 0050f573  33ee                 xor ebp, esi
// 0050f575  8bdf                 mov ebx, edi
// 0050f577  c1c305               rol ebx, 5
// 0050f57a  03da                 add ebx, edx
// 0050f57c  8b542428             mov edx, dword ptr [esp + 0x28]
// 0050f580  03eb                 add ebp, ebx
// 0050f582  8dac2aa1ebd96e       lea ebp, [edx + ebp + 0x6ed9eba1]
// 0050f589  8b5018               mov edx, dword ptr [eax + 0x18]
// 0050f58c  335004               xor edx, dword ptr [eax + 4]
// 0050f58f  c1ce02               ror esi, 2
// 0050f592  33502c               xor edx, dword ptr [eax + 0x2c]
// 0050f595  8bde                 mov ebx, esi
// 0050f597  335024               xor edx, dword ptr [eax + 0x24]
// 0050f59a  8b742424             mov esi, dword ptr [esp + 0x24]
// 0050f59e  d1c2                 rol edx, 1
// 0050f5a0  33f3                 xor esi, ebx
// 0050f5a2  896c2428             mov dword ptr [esp + 0x28], ebp
// 0050f5a6  c1c505               rol ebp, 5
// 0050f5a9  03ea                 add ebp, edx
// 0050f5ab  895024               mov dword ptr [eax + 0x24], edx
// 0050f5ae  8b542418             mov edx, dword ptr [esp + 0x18]
// 0050f5b2  33f7                 xor esi, edi
// 0050f5b4  03f5                 add esi, ebp
// 0050f5b6  8db432a1ebd96e       lea esi, [edx + esi + 0x6ed9eba1]
// 0050f5bd  8b5030               mov edx, dword ptr [eax + 0x30]
// 0050f5c0  335028               xor edx, dword ptr [eax + 0x28]
// 0050f5c3  c1cf02               ror edi, 2
// 0050f5c6  335008               xor edx, dword ptr [eax + 8]
// 0050f5c9  8bee                 mov ebp, esi
// 0050f5cb  33501c               xor edx, dword ptr [eax + 0x1c]
// 0050f5ce  895c2414             mov dword ptr [esp + 0x14], ebx
// 0050f5d2  d1c2                 rol edx, 1
// 0050f5d4  897c2410             mov dword ptr [esp + 0x10], edi
// 0050f5d8  895028               mov dword ptr [eax + 0x28], edx
// 0050f5db  c1c505               rol ebp, 5
// 0050f5de  03ea                 add ebp, edx
// 0050f5e0  33df                 xor ebx, edi
// 0050f5e2  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0050f5e6  8b542424             mov edx, dword ptr [esp + 0x24]
// 0050f5ea  33df                 xor ebx, edi
// 0050f5ec  03dd                 add ebx, ebp
// 0050f5ee  8d9c1aa1ebd96e       lea ebx, [edx + ebx + 0x6ed9eba1]
// 0050f5f5  8b5020               mov edx, dword ptr [eax + 0x20]
// 0050f5f8  33500c               xor edx, dword ptr [eax + 0xc]
// 0050f5fb  c1cf02               ror edi, 2
// 0050f5fe  335034               xor edx, dword ptr [eax + 0x34]
// 0050f601  897c2428             mov dword ptr [esp + 0x28], edi
// 0050f605  33502c               xor edx, dword ptr [eax + 0x2c]
// 0050f608  895c2424             mov dword ptr [esp + 0x24], ebx
// 0050f60c  d1c2                 rol edx, 1
// 0050f60e  89502c               mov dword ptr [eax + 0x2c], edx
// 0050f611  c1c305               rol ebx, 5
// 0050f614  03da                 add ebx, edx
// 0050f616  8b542414             mov edx, dword ptr [esp + 0x14]
// 0050f61a  8bfe                 mov edi, esi
// 0050f61c  337c2410             xor edi, dword ptr [esp + 0x10]
// 0050f620  337c2428             xor edi, dword ptr [esp + 0x28]
// 0050f624  03fb                 add edi, ebx
// 0050f626  8dbc3aa1ebd96e       lea edi, [edx + edi + 0x6ed9eba1]
// 0050f62d  8b5038               mov edx, dword ptr [eax + 0x38]
// 0050f630  335030               xor edx, dword ptr [eax + 0x30]
// 0050f633  c1ce02               ror esi, 2
// 0050f636  335010               xor edx, dword ptr [eax + 0x10]
// 0050f639  89742418             mov dword ptr [esp + 0x18], esi
// 0050f63d  335024               xor edx, dword ptr [eax + 0x24]
// 0050f640  33742424             xor esi, dword ptr [esp + 0x24]
// 0050f644  d1c2                 rol edx, 1
// 0050f646  33742428             xor esi, dword ptr [esp + 0x28]
// 0050f64a  895030               mov dword ptr [eax + 0x30], edx
// 0050f64d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0050f651  8bdf                 mov ebx, edi
// 0050f653  c1c305               rol ebx, 5
// 0050f656  03da                 add ebx, edx
// 0050f658  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050f65c  03f3                 add esi, ebx
// 0050f65e  8db432a1ebd96e       lea esi, [edx + esi + 0x6ed9eba1]
// 0050f665  8b542424             mov edx, dword ptr [esp + 0x24]
// 0050f669  c1ca02               ror edx, 2
// 0050f66c  8bda                 mov ebx, edx
// 0050f66e  8b5028               mov edx, dword ptr [eax + 0x28]
// 0050f671  33503c               xor edx, dword ptr [eax + 0x3c]
// 0050f674  33eb                 xor ebp, ebx
// 0050f676  335034               xor edx, dword ptr [eax + 0x34]
// 0050f679  33ef                 xor ebp, edi
// 0050f67b  335014               xor edx, dword ptr [eax + 0x14]
// 0050f67e  89742410             mov dword ptr [esp + 0x10], esi
// 0050f682  d1c2                 rol edx, 1
// 0050f684  c1c605               rol esi, 5
// 0050f687  03f2                 add esi, edx
// 0050f689  895034               mov dword ptr [eax + 0x34], edx
// 0050f68c  8b542428             mov edx, dword ptr [esp + 0x28]
// 0050f690  03ee                 add ebp, esi
// 0050f692  8db42aa1ebd96e       lea esi, [edx + ebp + 0x6ed9eba1]
// 0050f699  8b5038               mov edx, dword ptr [eax + 0x38]
// 0050f69c  335018               xor edx, dword ptr [eax + 0x18]
// 0050f69f  c1cf02               ror edi, 2
// 0050f6a2  3310                 xor edx, dword ptr [eax]
// 0050f6a4  895c2424             mov dword ptr [esp + 0x24], ebx
// 0050f6a8  33502c               xor edx, dword ptr [eax + 0x2c]
// 0050f6ab  33df                 xor ebx, edi
// 0050f6ad  d1c2                 rol edx, 1
// 0050f6af  897c2414             mov dword ptr [esp + 0x14], edi
// 0050f6b3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0050f6b7  8bee                 mov ebp, esi
// 0050f6b9  c1c505               rol ebp, 5
// 0050f6bc  03ea                 add ebp, edx
// 0050f6be  33df                 xor ebx, edi
// 0050f6c0  895038               mov dword ptr [eax + 0x38], edx
// 0050f6c3  8b542418             mov edx, dword ptr [esp + 0x18]
// 0050f6c7  03dd                 add ebx, ebp
// 0050f6c9  8dac1aa1ebd96e       lea ebp, [edx + ebx + 0x6ed9eba1]
// 0050f6d0  8b5030               mov edx, dword ptr [eax + 0x30]
// 0050f6d3  c1cf02               ror edi, 2
// 0050f6d6  8bdf                 mov ebx, edi
// 0050f6d8  896c2418             mov dword ptr [esp + 0x18], ebp
// 0050f6dc  895c2410             mov dword ptr [esp + 0x10], ebx
// 0050f6e0  335004               xor edx, dword ptr [eax + 4]
// 0050f6e3  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0050f6e7  33503c               xor edx, dword ptr [eax + 0x3c]
// 0050f6ea  33fb                 xor edi, ebx
// 0050f6ec  33501c               xor edx, dword ptr [eax + 0x1c]
// 0050f6ef  33fe                 xor edi, esi
// 0050f6f1  d1c2                 rol edx, 1
// 0050f6f3  c1c505               rol ebp, 5
// 0050f6f6  03ea                 add ebp, edx
// 0050f6f8  89503c               mov dword ptr [eax + 0x3c], edx
// 0050f6fb  8b542424             mov edx, dword ptr [esp + 0x24]
// 0050f6ff  03fd                 add edi, ebp
// 0050f701  8dbc3aa1ebd96e       lea edi, [edx + edi + 0x6ed9eba1]
// 0050f708  8b5020               mov edx, dword ptr [eax + 0x20]
// 0050f70b  335008               xor edx, dword ptr [eax + 8]
// 0050f70e  c1ce02               ror esi, 2
// 0050f711  3310                 xor edx, dword ptr [eax]
// 0050f713  89742428             mov dword ptr [esp + 0x28], esi
// 0050f717  335034               xor edx, dword ptr [eax + 0x34]
// 0050f71a  8b742418             mov esi, dword ptr [esp + 0x18]
// 0050f71e  d1c2                 rol edx, 1
// 0050f720  33f3                 xor esi, ebx
// 0050f722  8910                 mov dword ptr [eax], edx
// 0050f724  8bef                 mov ebp, edi
// 0050f726  c1c505               rol ebp, 5
// 0050f729  03ea                 add ebp, edx
// 0050f72b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0050f72f  8bde                 mov ebx, esi
// 0050f731  8b742428             mov esi, dword ptr [esp + 0x28]
// 0050f735  33de                 xor ebx, esi
// 0050f737  03dd                 add ebx, ebp
// 0050f739  8d9c1aa1ebd96e       lea ebx, [edx + ebx + 0x6ed9eba1]
// 0050f740  8b542418             mov edx, dword ptr [esp + 0x18]
// 0050f744  c1ca02               ror edx, 2
// 0050f747  8bea                 mov ebp, edx
// 0050f749  8b5038               mov edx, dword ptr [eax + 0x38]
// 0050f74c  33500c               xor edx, dword ptr [eax + 0xc]
// 0050f74f  896c2418             mov dword ptr [esp + 0x18], ebp
// 0050f753  335004               xor edx, dword ptr [eax + 4]
// 0050f756  33ef                 xor ebp, edi
// 0050f758  335024               xor edx, dword ptr [eax + 0x24]
// 0050f75b  33ee                 xor ebp, esi
// 0050f75d  d1c2                 rol edx, 1
// 0050f75f  895c2414             mov dword ptr [esp + 0x14], ebx
// 0050f763  c1c305               rol ebx, 5
// 0050f766  03da                 add ebx, edx
// 0050f768  03eb                 add ebp, ebx
// 0050f76a  895004               mov dword ptr [eax + 4], edx
// 0050f76d  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050f771  8db42aa1ebd96e       lea esi, [edx + ebp + 0x6ed9eba1]
// 0050f778  8b5028               mov edx, dword ptr [eax + 0x28]
// 0050f77b  335010               xor edx, dword ptr [eax + 0x10]
// 0050f77e  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0050f782  335008               xor edx, dword ptr [eax + 8]
// 0050f785  c1cf02               ror edi, 2
// 0050f788  33503c               xor edx, dword ptr [eax + 0x3c]
// 0050f78b  33ef                 xor ebp, edi
// 0050f78d  d1c2                 rol edx, 1
// 0050f78f  897c2424             mov dword ptr [esp + 0x24], edi
// 0050f793  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0050f797  33ef                 xor ebp, edi
// 0050f799  895008               mov dword ptr [eax + 8], edx
// 0050f79c  8bde                 mov ebx, esi
// 0050f79e  c1c305               rol ebx, 5
// 0050f7a1  03da                 add ebx, edx
// 0050f7a3  8b542428             mov edx, dword ptr [esp + 0x28]
// 0050f7a7  03eb                 add ebp, ebx
// 0050f7a9  8dac2aa1ebd96e       lea ebp, [edx + ebp + 0x6ed9eba1]
// 0050f7b0  8b500c               mov edx, dword ptr [eax + 0xc]
// 0050f7b3  3310                 xor edx, dword ptr [eax]
// 0050f7b5  c1cf02               ror edi, 2
// 0050f7b8  33502c               xor edx, dword ptr [eax + 0x2c]
// 0050f7bb  8bdf                 mov ebx, edi
// 0050f7bd  335014               xor edx, dword ptr [eax + 0x14]
// 0050f7c0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0050f7c4  d1c2                 rol edx, 1
// 0050f7c6  896c2428             mov dword ptr [esp + 0x28], ebp
// 0050f7ca  895c2414             mov dword ptr [esp + 0x14], ebx
// 0050f7ce  89500c               mov dword ptr [eax + 0xc], edx
// 0050f7d1  c1c505               rol ebp, 5
// 0050f7d4  03ea                 add ebp, edx
// 0050f7d6  33fb                 xor edi, ebx
// 0050f7d8  8b542418             mov edx, dword ptr [esp + 0x18]
// 0050f7dc  33fe                 xor edi, esi
// 0050f7de  03fd                 add edi, ebp
// 0050f7e0  8dbc3aa1ebd96e       lea edi, [edx + edi + 0x6ed9eba1]
// 0050f7e7  8b5030               mov edx, dword ptr [eax + 0x30]
// 0050f7ea  335018               xor edx, dword ptr [eax + 0x18]
// 0050f7ed  c1ce02               ror esi, 2
// 0050f7f0  335010               xor edx, dword ptr [eax + 0x10]
// 0050f7f3  33de                 xor ebx, esi
// 0050f7f5  335004               xor edx, dword ptr [eax + 4]
// 0050f7f8  89742410             mov dword ptr [esp + 0x10], esi
// 0050f7fc  8b742428             mov esi, dword ptr [esp + 0x28]
// 0050f800  d1c2                 rol edx, 1
// 0050f802  33de                 xor ebx, esi
// 0050f804  895010               mov dword ptr [eax + 0x10], edx
// 0050f807  8bef                 mov ebp, edi
// 0050f809  c1c505               rol ebp, 5
// 0050f80c  03ea                 add ebp, edx
// 0050f80e  8b542424             mov edx, dword ptr [esp + 0x24]
// 0050f812  03dd                 add ebx, ebp
// 0050f814  8d9c1aa1ebd96e       lea ebx, [edx + ebx + 0x6ed9eba1]
// 0050f81b  8b5008               mov edx, dword ptr [eax + 8]
// 0050f81e  335034               xor edx, dword ptr [eax + 0x34]
// 0050f821  c1ce02               ror esi, 2
// 0050f824  33501c               xor edx, dword ptr [eax + 0x1c]
// 0050f827  89742428             mov dword ptr [esp + 0x28], esi
// 0050f82b  335014               xor edx, dword ptr [eax + 0x14]
// 0050f82e  895c2424             mov dword ptr [esp + 0x24], ebx
// 0050f832  d1c2                 rol edx, 1
// 0050f834  895014               mov dword ptr [eax + 0x14], edx
// 0050f837  c1c305               rol ebx, 5
// 0050f83a  03da                 add ebx, edx
// 0050f83c  8b542414             mov edx, dword ptr [esp + 0x14]
// 0050f840  8bf7                 mov esi, edi
// 0050f842  33742410             xor esi, dword ptr [esp + 0x10]
// 0050f846  33742428             xor esi, dword ptr [esp + 0x28]
// 0050f84a  03f3                 add esi, ebx
// 0050f84c  8db432a1ebd96e       lea esi, [edx + esi + 0x6ed9eba1]
// 0050f853  8b5038               mov edx, dword ptr [eax + 0x38]
// 0050f856  335020               xor edx, dword ptr [eax + 0x20]
// 0050f859  c1cf02               ror edi, 2
// 0050f85c  335018               xor edx, dword ptr [eax + 0x18]
// 0050f85f  897c2418             mov dword ptr [esp + 0x18], edi
// 0050f863  33500c               xor edx, dword ptr [eax + 0xc]
// 0050f866  337c2424             xor edi, dword ptr [esp + 0x24]
// 0050f86a  d1c2                 rol edx, 1
// 0050f86c  337c2428             xor edi, dword ptr [esp + 0x28]
// 0050f870  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0050f874  895018               mov dword ptr [eax + 0x18], edx
// 0050f877  8bde                 mov ebx, esi
// 0050f879  c1c305               rol ebx, 5
// 0050f87c  03da                 add ebx, edx
// 0050f87e  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050f882  03fb                 add edi, ebx
// 0050f884  8d9c3aa1ebd96e       lea ebx, [edx + edi + 0x6ed9eba1]
// 0050f88b  8b542424             mov edx, dword ptr [esp + 0x24]
// 0050f88f  c1ca02               ror edx, 2
// 0050f892  8bfa                 mov edi, edx
// 0050f894  8b5010               mov edx, dword ptr [eax + 0x10]
// 0050f897  33503c               xor edx, dword ptr [eax + 0x3c]
// 0050f89a  895c2410             mov dword ptr [esp + 0x10], ebx
// 0050f89e  335024               xor edx, dword ptr [eax + 0x24]
// 0050f8a1  33ef                 xor ebp, edi
// 0050f8a3  33501c               xor edx, dword ptr [eax + 0x1c]
// 0050f8a6  33ee                 xor ebp, esi
// 0050f8a8  d1c2                 rol edx, 1
// 0050f8aa  c1c305               rol ebx, 5
// 0050f8ad  03da                 add ebx, edx
// 0050f8af  89501c               mov dword ptr [eax + 0x1c], edx
// 0050f8b2  8b542428             mov edx, dword ptr [esp + 0x28]
// 0050f8b6  03eb                 add ebp, ebx
// 0050f8b8  8d9c2aa1ebd96e       lea ebx, [edx + ebp + 0x6ed9eba1]
// 0050f8bf  8b5028               mov edx, dword ptr [eax + 0x28]
// 0050f8c2  335020               xor edx, dword ptr [eax + 0x20]
// 0050f8c5  c1ce02               ror esi, 2
// 0050f8c8  3310                 xor edx, dword ptr [eax]
// 0050f8ca  897c2424             mov dword ptr [esp + 0x24], edi
// 0050f8ce  895c2428             mov dword ptr [esp + 0x28], ebx
// 0050f8d2  89742414             mov dword ptr [esp + 0x14], esi
// 0050f8d6  335014               xor edx, dword ptr [eax + 0x14]
// 0050f8d9  8bee                 mov ebp, esi
// 0050f8db  0b6c2410             or ebp, dword ptr [esp + 0x10]
// 0050f8df  23742410             and esi, dword ptr [esp + 0x10]
// 0050f8e3  23ef                 and ebp, edi
// 0050f8e5  d1c2                 rol edx, 1
// 0050f8e7  895020               mov dword ptr [eax + 0x20], edx
// 0050f8ea  0bee                 or ebp, esi
// 0050f8ec  03ea                 add ebp, edx
// 0050f8ee  036c2418             add ebp, dword ptr [esp + 0x18]
// 0050f8f2  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050f8f6  c1c305               rol ebx, 5
// 0050f8f9  c1ca02               ror edx, 2
// 0050f8fc  8bfa                 mov edi, edx
// 0050f8fe  8b5018               mov edx, dword ptr [eax + 0x18]
// 0050f901  335004               xor edx, dword ptr [eax + 4]
// 0050f904  8db42bdcbc1b8f       lea esi, [ebx + ebp - 0x70e44324]
// 0050f90b  33502c               xor edx, dword ptr [eax + 0x2c]
// 0050f90e  897c2410             mov dword ptr [esp + 0x10], edi
// 0050f912  335024               xor edx, dword ptr [eax + 0x24]
// 0050f915  0b7c2428             or edi, dword ptr [esp + 0x28]
// 0050f919  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0050f91d  236c2428             and ebp, dword ptr [esp + 0x28]
// 0050f921  237c2414             and edi, dword ptr [esp + 0x14]
// 0050f925  d1c2                 rol edx, 1
// 0050f927  0bfd                 or edi, ebp
// 0050f929  03fa                 add edi, edx
// 0050f92b  037c2424             add edi, dword ptr [esp + 0x24]
// 0050f92f  895024               mov dword ptr [eax + 0x24], edx
// 0050f932  8b542428             mov edx, dword ptr [esp + 0x28]
// 0050f936  8bde                 mov ebx, esi
// 0050f938  c1c305               rol ebx, 5
// 0050f93b  c1ca02               ror edx, 2
// 0050f93e  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 0050f945  8bda                 mov ebx, edx
// 0050f947  8b5030               mov edx, dword ptr [eax + 0x30]
// 0050f94a  335028               xor edx, dword ptr [eax + 0x28]
// 0050f94d  895c2428             mov dword ptr [esp + 0x28], ebx
// 0050f951  335008               xor edx, dword ptr [eax + 8]
// 0050f954  8bee                 mov ebp, esi
// 0050f956  33501c               xor edx, dword ptr [eax + 0x1c]
// 0050f959  0beb                 or ebp, ebx
// 0050f95b  236c2410             and ebp, dword ptr [esp + 0x10]
// 0050f95f  d1c2                 rol edx, 1
// 0050f961  895028               mov dword ptr [eax + 0x28], edx
// 0050f964  8bde                 mov ebx, esi
// 0050f966  235c2428             and ebx, dword ptr [esp + 0x28]
// 0050f96a  897c2424             mov dword ptr [esp + 0x24], edi
// 0050f96e  0beb                 or ebp, ebx
// 0050f970  03ea                 add ebp, edx
// 0050f972  036c2414             add ebp, dword ptr [esp + 0x14]
// 0050f976  8b5020               mov edx, dword ptr [eax + 0x20]
// 0050f979  33500c               xor edx, dword ptr [eax + 0xc]
// 0050f97c  c1c705               rol edi, 5
// 0050f97f  335034               xor edx, dword ptr [eax + 0x34]
// 0050f982  c1ce02               ror esi, 2
// 0050f985  33502c               xor edx, dword ptr [eax + 0x2c]
// 0050f988  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 0050f98f  d1c2                 rol edx, 1
// 0050f991  8bde                 mov ebx, esi
// 0050f993  0b5c2424             or ebx, dword ptr [esp + 0x24]
// 0050f997  8bee                 mov ebp, esi
// 0050f999  235c2428             and ebx, dword ptr [esp + 0x28]
// 0050f99d  236c2424             and ebp, dword ptr [esp + 0x24]
// 0050f9a1  89502c               mov dword ptr [eax + 0x2c], edx
// 0050f9a4  0bdd                 or ebx, ebp
// 0050f9a6  03da                 add ebx, edx
// 0050f9a8  035c2410             add ebx, dword ptr [esp + 0x10]
// 0050f9ac  8b542424             mov edx, dword ptr [esp + 0x24]
// 0050f9b0  897c2414             mov dword ptr [esp + 0x14], edi
// 0050f9b4  c1c705               rol edi, 5
// 0050f9b7  c1ca02               ror edx, 2
// 0050f9ba  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 0050f9c1  8bda                 mov ebx, edx
// 0050f9c3  8b5038               mov edx, dword ptr [eax + 0x38]
// 0050f9c6  335030               xor edx, dword ptr [eax + 0x30]
// 0050f9c9  897c2410             mov dword ptr [esp + 0x10], edi
// 0050f9cd  335010               xor edx, dword ptr [eax + 0x10]
// 0050f9d0  895c2424             mov dword ptr [esp + 0x24], ebx
// 0050f9d4  335024               xor edx, dword ptr [eax + 0x24]
// 0050f9d7  d1c2                 rol edx, 1
// 0050f9d9  0b5c2414             or ebx, dword ptr [esp + 0x14]
// 0050f9dd  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0050f9e1  236c2414             and ebp, dword ptr [esp + 0x14]
// 0050f9e5  23de                 and ebx, esi
// 0050f9e7  0bdd                 or ebx, ebp
// 0050f9e9  03da                 add ebx, edx
// 0050f9eb  035c2428             add ebx, dword ptr [esp + 0x28]
// 0050f9ef  895030               mov dword ptr [eax + 0x30], edx
// 0050f9f2  8b542414             mov edx, dword ptr [esp + 0x14]
// 0050f9f6  c1c705               rol edi, 5
// 0050f9f9  c1ca02               ror edx, 2
// 0050f9fc  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 0050fa03  8bda                 mov ebx, edx
// 0050fa05  8b5028               mov edx, dword ptr [eax + 0x28]
// 0050fa08  33503c               xor edx, dword ptr [eax + 0x3c]
// 0050fa0b  895c2414             mov dword ptr [esp + 0x14], ebx
// 0050fa0f  335034               xor edx, dword ptr [eax + 0x34]
// 0050fa12  0b5c2410             or ebx, dword ptr [esp + 0x10]
// 0050fa16  335014               xor edx, dword ptr [eax + 0x14]
// 0050fa19  235c2424             and ebx, dword ptr [esp + 0x24]
// 0050fa1d  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0050fa21  236c2410             and ebp, dword ptr [esp + 0x10]
// 0050fa25  d1c2                 rol edx, 1
// 0050fa27  0bdd                 or ebx, ebp
// 0050fa29  03da                 add ebx, edx
// 0050fa2b  895034               mov dword ptr [eax + 0x34], edx
// 0050fa2e  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050fa32  897c2428             mov dword ptr [esp + 0x28], edi
// 0050fa36  c1c705               rol edi, 5
// 0050fa39  03de                 add ebx, esi
// 0050fa3b  c1ca02               ror edx, 2
// 0050fa3e  8db43bdcbc1b8f       lea esi, [ebx + edi - 0x70e44324]
// 0050fa45  8bfa                 mov edi, edx
// 0050fa47  8b5038               mov edx, dword ptr [eax + 0x38]
// 0050fa4a  335018               xor edx, dword ptr [eax + 0x18]
// 0050fa4d  897c2410             mov dword ptr [esp + 0x10], edi
// 0050fa51  3310                 xor edx, dword ptr [eax]
// 0050fa53  0b7c2428             or edi, dword ptr [esp + 0x28]
// 0050fa57  33502c               xor edx, dword ptr [eax + 0x2c]
// 0050fa5a  237c2414             and edi, dword ptr [esp + 0x14]
// 0050fa5e  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0050fa62  236c2428             and ebp, dword ptr [esp + 0x28]
// 0050fa66  d1c2                 rol edx, 1
// 0050fa68  0bfd                 or edi, ebp
// 0050fa6a  03fa                 add edi, edx
// 0050fa6c  037c2424             add edi, dword ptr [esp + 0x24]
// 0050fa70  895038               mov dword ptr [eax + 0x38], edx
// 0050fa73  8b542428             mov edx, dword ptr [esp + 0x28]
// 0050fa77  8bde                 mov ebx, esi
// 0050fa79  c1c305               rol ebx, 5
// 0050fa7c  c1ca02               ror edx, 2
// 0050fa7f  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 0050fa86  8bda                 mov ebx, edx
// 0050fa88  8b5030               mov edx, dword ptr [eax + 0x30]
// 0050fa8b  335004               xor edx, dword ptr [eax + 4]
// 0050fa8e  8bee                 mov ebp, esi
// 0050fa90  33503c               xor edx, dword ptr [eax + 0x3c]
// 0050fa93  0beb                 or ebp, ebx
// 0050fa95  33501c               xor edx, dword ptr [eax + 0x1c]
// 0050fa98  236c2410             and ebp, dword ptr [esp + 0x10]
// 0050fa9c  d1c2                 rol edx, 1
// 0050fa9e  895c2428             mov dword ptr [esp + 0x28], ebx
// 0050faa2  8bde                 mov ebx, esi
// 0050faa4  235c2428             and ebx, dword ptr [esp + 0x28]
// 0050faa8  89503c               mov dword ptr [eax + 0x3c], edx
// 0050faab  0beb                 or ebp, ebx
// 0050faad  03ea                 add ebp, edx
// 0050faaf  8b5020               mov edx, dword ptr [eax + 0x20]
// 0050fab2  335008               xor edx, dword ptr [eax + 8]
// 0050fab5  036c2414             add ebp, dword ptr [esp + 0x14]
// 0050fab9  3310                 xor edx, dword ptr [eax]
// 0050fabb  897c2424             mov dword ptr [esp + 0x24], edi
// 0050fabf  335034               xor edx, dword ptr [eax + 0x34]
// 0050fac2  c1c705               rol edi, 5
// 0050fac5  c1ce02               ror esi, 2
// 0050fac8  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 0050facf  d1c2                 rol edx, 1
// 0050fad1  897c2414             mov dword ptr [esp + 0x14], edi
// 0050fad5  8910                 mov dword ptr [eax], edx
// 0050fad7  c1c705               rol edi, 5
// 0050fada  8bde                 mov ebx, esi
// 0050fadc  0b5c2424             or ebx, dword ptr [esp + 0x24]
// 0050fae0  8bee                 mov ebp, esi
// 0050fae2  235c2428             and ebx, dword ptr [esp + 0x28]
// 0050fae6  236c2424             and ebp, dword ptr [esp + 0x24]
// 0050faea  0bdd                 or ebx, ebp
// 0050faec  03da                 add ebx, edx
// 0050faee  035c2410             add ebx, dword ptr [esp + 0x10]
// 0050faf2  8b542424             mov edx, dword ptr [esp + 0x24]
// 0050faf6  c1ca02               ror edx, 2
// 0050faf9  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 0050fb00  8bda                 mov ebx, edx
// 0050fb02  8b5038               mov edx, dword ptr [eax + 0x38]
// 0050fb05  33500c               xor edx, dword ptr [eax + 0xc]
// 0050fb08  895c2424             mov dword ptr [esp + 0x24], ebx
// 0050fb0c  335004               xor edx, dword ptr [eax + 4]
// 0050fb0f  0b5c2414             or ebx, dword ptr [esp + 0x14]
// 0050fb13  335024               xor edx, dword ptr [eax + 0x24]
// 0050fb16  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0050fb1a  236c2414             and ebp, dword ptr [esp + 0x14]
// 0050fb1e  d1c2                 rol edx, 1
// 0050fb20  23de                 and ebx, esi
// 0050fb22  0bdd                 or ebx, ebp
// 0050fb24  03da                 add ebx, edx
// 0050fb26  035c2428             add ebx, dword ptr [esp + 0x28]
// 0050fb2a  895004               mov dword ptr [eax + 4], edx
// 0050fb2d  8b542414             mov edx, dword ptr [esp + 0x14]
// 0050fb31  897c2410             mov dword ptr [esp + 0x10], edi
// 0050fb35  c1c705               rol edi, 5
// 0050fb38  c1ca02               ror edx, 2
// 0050fb3b  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 0050fb42  8bda                 mov ebx, edx
// 0050fb44  8b5028               mov edx, dword ptr [eax + 0x28]
// 0050fb47  335010               xor edx, dword ptr [eax + 0x10]
// 0050fb4a  895c2414             mov dword ptr [esp + 0x14], ebx
// 0050fb4e  335008               xor edx, dword ptr [eax + 8]
// 0050fb51  0b5c2410             or ebx, dword ptr [esp + 0x10]
// 0050fb55  33503c               xor edx, dword ptr [eax + 0x3c]
// 0050fb58  235c2424             and ebx, dword ptr [esp + 0x24]
// 0050fb5c  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0050fb60  236c2410             and ebp, dword ptr [esp + 0x10]
// 0050fb64  d1c2                 rol edx, 1
// 0050fb66  0bdd                 or ebx, ebp
// 0050fb68  03da                 add ebx, edx
// 0050fb6a  895008               mov dword ptr [eax + 8], edx
// 0050fb6d  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050fb71  897c2428             mov dword ptr [esp + 0x28], edi
// 0050fb75  c1c705               rol edi, 5
// 0050fb78  03de                 add ebx, esi
// 0050fb7a  c1ca02               ror edx, 2
// 0050fb7d  8db43bdcbc1b8f       lea esi, [ebx + edi - 0x70e44324]
// 0050fb84  8bfa                 mov edi, edx
// 0050fb86  8b500c               mov edx, dword ptr [eax + 0xc]
// 0050fb89  3310                 xor edx, dword ptr [eax]
// 0050fb8b  897c2410             mov dword ptr [esp + 0x10], edi
// 0050fb8f  33502c               xor edx, dword ptr [eax + 0x2c]
// 0050fb92  0b7c2428             or edi, dword ptr [esp + 0x28]
// 0050fb96  335014               xor edx, dword ptr [eax + 0x14]
// 0050fb99  237c2414             and edi, dword ptr [esp + 0x14]
// 0050fb9d  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0050fba1  236c2428             and ebp, dword ptr [esp + 0x28]
// 0050fba5  d1c2                 rol edx, 1
// 0050fba7  0bfd                 or edi, ebp
// 0050fba9  03fa                 add edi, edx
// 0050fbab  037c2424             add edi, dword ptr [esp + 0x24]
// 0050fbaf  89500c               mov dword ptr [eax + 0xc], edx
// 0050fbb2  8b542428             mov edx, dword ptr [esp + 0x28]
// 0050fbb6  8bde                 mov ebx, esi
// 0050fbb8  c1c305               rol ebx, 5
// 0050fbbb  c1ca02               ror edx, 2
// 0050fbbe  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 0050fbc5  8bda                 mov ebx, edx
// 0050fbc7  8b5030               mov edx, dword ptr [eax + 0x30]
// 0050fbca  335018               xor edx, dword ptr [eax + 0x18]
// 0050fbcd  897c2424             mov dword ptr [esp + 0x24], edi
// 0050fbd1  335010               xor edx, dword ptr [eax + 0x10]
// 0050fbd4  895c2428             mov dword ptr [esp + 0x28], ebx
// 0050fbd8  335004               xor edx, dword ptr [eax + 4]
// 0050fbdb  8bee                 mov ebp, esi
// 0050fbdd  d1c2                 rol edx, 1
// 0050fbdf  895010               mov dword ptr [eax + 0x10], edx
// 0050fbe2  c1c705               rol edi, 5
// 0050fbe5  0beb                 or ebp, ebx
// 0050fbe7  236c2410             and ebp, dword ptr [esp + 0x10]
// 0050fbeb  8bde                 mov ebx, esi
// 0050fbed  235c2428             and ebx, dword ptr [esp + 0x28]
// 0050fbf1  0beb                 or ebp, ebx
// 0050fbf3  03ea                 add ebp, edx
// 0050fbf5  036c2414             add ebp, dword ptr [esp + 0x14]
// 0050fbf9  8b5008               mov edx, dword ptr [eax + 8]
// 0050fbfc  335034               xor edx, dword ptr [eax + 0x34]
// 0050fbff  c1ce02               ror esi, 2
// 0050fc02  33501c               xor edx, dword ptr [eax + 0x1c]
// 0050fc05  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 0050fc0c  335014               xor edx, dword ptr [eax + 0x14]
// 0050fc0f  8bde                 mov ebx, esi
// 0050fc11  0b5c2424             or ebx, dword ptr [esp + 0x24]
// 0050fc15  d1c2                 rol edx, 1
// 0050fc17  235c2428             and ebx, dword ptr [esp + 0x28]
// 0050fc1b  895014               mov dword ptr [eax + 0x14], edx
// 0050fc1e  897c2414             mov dword ptr [esp + 0x14], edi
// 0050fc22  c1c705               rol edi, 5
// 0050fc25  8bee                 mov ebp, esi
// 0050fc27  236c2424             and ebp, dword ptr [esp + 0x24]
// 0050fc2b  0bdd                 or ebx, ebp
// 0050fc2d  03da                 add ebx, edx
// 0050fc2f  035c2410             add ebx, dword ptr [esp + 0x10]
// 0050fc33  8b542424             mov edx, dword ptr [esp + 0x24]
// 0050fc37  c1ca02               ror edx, 2
// 0050fc3a  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 0050fc41  8bda                 mov ebx, edx
// 0050fc43  8b5038               mov edx, dword ptr [eax + 0x38]
// 0050fc46  335020               xor edx, dword ptr [eax + 0x20]
// 0050fc49  895c2424             mov dword ptr [esp + 0x24], ebx
// 0050fc4d  335018               xor edx, dword ptr [eax + 0x18]
// 0050fc50  0b5c2414             or ebx, dword ptr [esp + 0x14]
// 0050fc54  33500c               xor edx, dword ptr [eax + 0xc]
// 0050fc57  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0050fc5b  236c2414             and ebp, dword ptr [esp + 0x14]
// 0050fc5f  d1c2                 rol edx, 1
// 0050fc61  23de                 and ebx, esi
// 0050fc63  0bdd                 or ebx, ebp
// 0050fc65  03da                 add ebx, edx
// 0050fc67  035c2428             add ebx, dword ptr [esp + 0x28]
// 0050fc6b  895018               mov dword ptr [eax + 0x18], edx
// 0050fc6e  8b542414             mov edx, dword ptr [esp + 0x14]
// 0050fc72  897c2410             mov dword ptr [esp + 0x10], edi
// 0050fc76  c1c705               rol edi, 5
// 0050fc79  c1ca02               ror edx, 2
// 0050fc7c  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 0050fc83  8bda                 mov ebx, edx
// 0050fc85  8b5010               mov edx, dword ptr [eax + 0x10]
// 0050fc88  33503c               xor edx, dword ptr [eax + 0x3c]
// 0050fc8b  895c2414             mov dword ptr [esp + 0x14], ebx
// 0050fc8f  335024               xor edx, dword ptr [eax + 0x24]
// 0050fc92  0b5c2410             or ebx, dword ptr [esp + 0x10]
// 0050fc96  33501c               xor edx, dword ptr [eax + 0x1c]
// 0050fc99  235c2424             and ebx, dword ptr [esp + 0x24]
// 0050fc9d  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0050fca1  236c2410             and ebp, dword ptr [esp + 0x10]
// 0050fca5  d1c2                 rol edx, 1
// 0050fca7  0bdd                 or ebx, ebp
// 0050fca9  03da                 add ebx, edx
// 0050fcab  89501c               mov dword ptr [eax + 0x1c], edx
// 0050fcae  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050fcb2  03de                 add ebx, esi
// 0050fcb4  897c2428             mov dword ptr [esp + 0x28], edi
// 0050fcb8  c1c705               rol edi, 5
// 0050fcbb  c1ca02               ror edx, 2
// 0050fcbe  8db43bdcbc1b8f       lea esi, [ebx + edi - 0x70e44324]
// 0050fcc5  8bfa                 mov edi, edx
// 0050fcc7  8b5028               mov edx, dword ptr [eax + 0x28]
// 0050fcca  335020               xor edx, dword ptr [eax + 0x20]
// 0050fccd  897c2410             mov dword ptr [esp + 0x10], edi
// 0050fcd1  3310                 xor edx, dword ptr [eax]
// 0050fcd3  0b7c2428             or edi, dword ptr [esp + 0x28]
// 0050fcd7  335014               xor edx, dword ptr [eax + 0x14]
// 0050fcda  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0050fcde  d1c2                 rol edx, 1
// 0050fce0  8bde                 mov ebx, esi
// 0050fce2  c1c305               rol ebx, 5
// 0050fce5  237c2414             and edi, dword ptr [esp + 0x14]
// 0050fce9  895020               mov dword ptr [eax + 0x20], edx
// 0050fcec  236c2428             and ebp, dword ptr [esp + 0x28]
// 0050fcf0  0bfd                 or edi, ebp
// 0050fcf2  03fa                 add edi, edx
// 0050fcf4  037c2424             add edi, dword ptr [esp + 0x24]
// 0050fcf8  8b542428             mov edx, dword ptr [esp + 0x28]
// 0050fcfc  c1ca02               ror edx, 2
// 0050fcff  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 0050fd06  8bda                 mov ebx, edx
// 0050fd08  8b5018               mov edx, dword ptr [eax + 0x18]
// 0050fd0b  335004               xor edx, dword ptr [eax + 4]
// 0050fd0e  8bee                 mov ebp, esi
// 0050fd10  33502c               xor edx, dword ptr [eax + 0x2c]
// 0050fd13  0beb                 or ebp, ebx
// 0050fd15  335024               xor edx, dword ptr [eax + 0x24]
// 0050fd18  236c2410             and ebp, dword ptr [esp + 0x10]
// 0050fd1c  d1c2                 rol edx, 1
// 0050fd1e  895c2428             mov dword ptr [esp + 0x28], ebx
// 0050fd22  8bde                 mov ebx, esi
// 0050fd24  235c2428             and ebx, dword ptr [esp + 0x28]
// 0050fd28  895024               mov dword ptr [eax + 0x24], edx
// 0050fd2b  0beb                 or ebp, ebx
// 0050fd2d  03ea                 add ebp, edx
// 0050fd2f  036c2414             add ebp, dword ptr [esp + 0x14]
// 0050fd33  8b5030               mov edx, dword ptr [eax + 0x30]
// 0050fd36  335028               xor edx, dword ptr [eax + 0x28]
// 0050fd39  897c2424             mov dword ptr [esp + 0x24], edi
// 0050fd3d  335008               xor edx, dword ptr [eax + 8]
// 0050fd40  c1c705               rol edi, 5
// 0050fd43  33501c               xor edx, dword ptr [eax + 0x1c]
// 0050fd46  c1ce02               ror esi, 2
// 0050fd49  8d9c2fdcbc1b8f       lea ebx, [edi + ebp - 0x70e44324]
// 0050fd50  d1c2                 rol edx, 1
// 0050fd52  8bee                 mov ebp, esi
// 0050fd54  0b6c2424             or ebp, dword ptr [esp + 0x24]
// 0050fd58  89742418             mov dword ptr [esp + 0x18], esi
// 0050fd5c  236c2428             and ebp, dword ptr [esp + 0x28]
// 0050fd60  23742424             and esi, dword ptr [esp + 0x24]
// 0050fd64  895028               mov dword ptr [eax + 0x28], edx
// 0050fd67  0bee                 or ebp, esi
// 0050fd69  03ea                 add ebp, edx
// 0050fd6b  036c2410             add ebp, dword ptr [esp + 0x10]
// 0050fd6f  8b542424             mov edx, dword ptr [esp + 0x24]
// 0050fd73  8bfb                 mov edi, ebx
// 0050fd75  c1c705               rol edi, 5
// 0050fd78  c1ca02               ror edx, 2
// 0050fd7b  8bf2                 mov esi, edx
// 0050fd7d  8b5020               mov edx, dword ptr [eax + 0x20]
// 0050fd80  33500c               xor edx, dword ptr [eax + 0xc]
// 0050fd83  89742424             mov dword ptr [esp + 0x24], esi
// 0050fd87  335034               xor edx, dword ptr [eax + 0x34]
// 0050fd8a  0bf3                 or esi, ebx
// 0050fd8c  33502c               xor edx, dword ptr [eax + 0x2c]
// 0050fd8f  23742418             and esi, dword ptr [esp + 0x18]
// 0050fd93  895c2414             mov dword ptr [esp + 0x14], ebx
// 0050fd97  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0050fd9b  235c2414             and ebx, dword ptr [esp + 0x14]
// 0050fd9f  d1c2                 rol edx, 1
// 0050fda1  0bf3                 or esi, ebx
// 0050fda3  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0050fda7  03f2                 add esi, edx
// 0050fda9  03742428             add esi, dword ptr [esp + 0x28]
// 0050fdad  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 0050fdb4  89502c               mov dword ptr [eax + 0x2c], edx
// 0050fdb7  8b5038               mov edx, dword ptr [eax + 0x38]
// 0050fdba  335030               xor edx, dword ptr [eax + 0x30]
// 0050fdbd  8bef                 mov ebp, edi
// 0050fdbf  335010               xor edx, dword ptr [eax + 0x10]
// 0050fdc2  c1c505               rol ebp, 5
// 0050fdc5  335024               xor edx, dword ptr [eax + 0x24]
// 0050fdc8  8db42edcbc1b8f       lea esi, [esi + ebp - 0x70e44324]
// 0050fdcf  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0050fdd3  c1cb02               ror ebx, 2
// 0050fdd6  33eb                 xor ebp, ebx
// 0050fdd8  d1c2                 rol edx, 1
// 0050fdda  33ef                 xor ebp, edi
// 0050fddc  89742428             mov dword ptr [esp + 0x28], esi
// 0050fde0  03ea                 add ebp, edx
// 0050fde2  c1c605               rol esi, 5
// 0050fde5  036c2418             add ebp, dword ptr [esp + 0x18]
// 0050fde9  895c2414             mov dword ptr [esp + 0x14], ebx
// 0050fded  895030               mov dword ptr [eax + 0x30], edx
// 0050fdf0  8b5028               mov edx, dword ptr [eax + 0x28]
// 0050fdf3  33503c               xor edx, dword ptr [eax + 0x3c]
// 0050fdf6  c1cf02               ror edi, 2
// 0050fdf9  335034               xor edx, dword ptr [eax + 0x34]
// 0050fdfc  33df                 xor ebx, edi
// 0050fdfe  335014               xor edx, dword ptr [eax + 0x14]
// 0050fe01  8db42ed6c162ca       lea esi, [esi + ebp - 0x359d3e2a]
// 0050fe08  d1c2                 rol edx, 1
// 0050fe0a  895034               mov dword ptr [eax + 0x34], edx
// 0050fe0d  897c2410             mov dword ptr [esp + 0x10], edi
// 0050fe11  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0050fe15  33df                 xor ebx, edi
// 0050fe17  03da                 add ebx, edx
// 0050fe19  035c2424             add ebx, dword ptr [esp + 0x24]
// 0050fe1d  8b5038               mov edx, dword ptr [eax + 0x38]
// 0050fe20  335018               xor edx, dword ptr [eax + 0x18]
// 0050fe23  8bee                 mov ebp, esi
// 0050fe25  3310                 xor edx, dword ptr [eax]
// 0050fe27  c1c505               rol ebp, 5
// 0050fe2a  33502c               xor edx, dword ptr [eax + 0x2c]
// 0050fe2d  c1cf02               ror edi, 2
// 0050fe30  d1c2                 rol edx, 1
// 0050fe32  897c2428             mov dword ptr [esp + 0x28], edi
// 0050fe36  895038               mov dword ptr [eax + 0x38], edx
// 0050fe39  8bfe                 mov edi, esi
// 0050fe3b  337c2410             xor edi, dword ptr [esp + 0x10]
// 0050fe3f  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 0050fe46  337c2428             xor edi, dword ptr [esp + 0x28]
// 0050fe4a  895c2424             mov dword ptr [esp + 0x24], ebx
// 0050fe4e  03fa                 add edi, edx
// 0050fe50  037c2414             add edi, dword ptr [esp + 0x14]
// 0050fe54  8b5030               mov edx, dword ptr [eax + 0x30]
// 0050fe57  335004               xor edx, dword ptr [eax + 4]
// 0050fe5a  c1c305               rol ebx, 5
// 0050fe5d  33503c               xor edx, dword ptr [eax + 0x3c]
// 0050fe60  c1ce02               ror esi, 2
// 0050fe63  33501c               xor edx, dword ptr [eax + 0x1c]
// 0050fe66  89742418             mov dword ptr [esp + 0x18], esi
// 0050fe6a  33742424             xor esi, dword ptr [esp + 0x24]
// 0050fe6e  d1c2                 rol edx, 1
// 0050fe70  33742428             xor esi, dword ptr [esp + 0x28]
// 0050fe74  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0050fe78  03f2                 add esi, edx
// 0050fe7a  03742410             add esi, dword ptr [esp + 0x10]
// 0050fe7e  8dbc1fd6c162ca       lea edi, [edi + ebx - 0x359d3e2a]
// 0050fe85  89503c               mov dword ptr [eax + 0x3c], edx
// 0050fe88  8b542424             mov edx, dword ptr [esp + 0x24]
// 0050fe8c  8bdf                 mov ebx, edi
// 0050fe8e  c1c305               rol ebx, 5
// 0050fe91  c1ca02               ror edx, 2
// 0050fe94  8db41ed6c162ca       lea esi, [esi + ebx - 0x359d3e2a]
// 0050fe9b  8bda                 mov ebx, edx
// 0050fe9d  8b5020               mov edx, dword ptr [eax + 0x20]
// 0050fea0  335008               xor edx, dword ptr [eax + 8]
// 0050fea3  33eb                 xor ebp, ebx
// 0050fea5  3310                 xor edx, dword ptr [eax]
// 0050fea7  33ef                 xor ebp, edi
// 0050fea9  335034               xor edx, dword ptr [eax + 0x34]
// 0050feac  89742410             mov dword ptr [esp + 0x10], esi
// 0050feb0  d1c2                 rol edx, 1
// 0050feb2  03ea                 add ebp, edx
// 0050feb4  036c2428             add ebp, dword ptr [esp + 0x28]
// 0050feb8  8910                 mov dword ptr [eax], edx
// 0050feba  8b5038               mov edx, dword ptr [eax + 0x38]
// 0050febd  33500c               xor edx, dword ptr [eax + 0xc]
// 0050fec0  c1c605               rol esi, 5
// 0050fec3  335004               xor edx, dword ptr [eax + 4]
// 0050fec6  c1cf02               ror edi, 2
// 0050fec9  335024               xor edx, dword ptr [eax + 0x24]
// 0050fecc  895c2424             mov dword ptr [esp + 0x24], ebx
// 0050fed0  33df                 xor ebx, edi
// 0050fed2  897c2414             mov dword ptr [esp + 0x14], edi
// 0050fed6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0050feda  d1c2                 rol edx, 1
// 0050fedc  8db42ed6c162ca       lea esi, [esi + ebp - 0x359d3e2a]
// 0050fee3  33df                 xor ebx, edi
// 0050fee5  8bee                 mov ebp, esi
// 0050fee7  03da                 add ebx, edx
// 0050fee9  c1c505               rol ebp, 5
// 0050feec  035c2418             add ebx, dword ptr [esp + 0x18]
// 0050fef0  895004               mov dword ptr [eax + 4], edx
// 0050fef3  8b5028               mov edx, dword ptr [eax + 0x28]
// 0050fef6  335010               xor edx, dword ptr [eax + 0x10]
// 0050fef9  8dac2bd6c162ca       lea ebp, [ebx + ebp - 0x359d3e2a]
// 0050ff00  335008               xor edx, dword ptr [eax + 8]
// 0050ff03  c1cf02               ror edi, 2
// 0050ff06  33503c               xor edx, dword ptr [eax + 0x3c]
// 0050ff09  8bdf                 mov ebx, edi
// 0050ff0b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0050ff0f  d1c2                 rol edx, 1
// 0050ff11  33fb                 xor edi, ebx
// 0050ff13  33fe                 xor edi, esi
// 0050ff15  03fa                 add edi, edx
// 0050ff17  037c2424             add edi, dword ptr [esp + 0x24]
// 0050ff1b  895008               mov dword ptr [eax + 8], edx
// 0050ff1e  8b500c               mov edx, dword ptr [eax + 0xc]
// 0050ff21  3310                 xor edx, dword ptr [eax]
// 0050ff23  896c2418             mov dword ptr [esp + 0x18], ebp
// 0050ff27  33502c               xor edx, dword ptr [eax + 0x2c]
// 0050ff2a  c1c505               rol ebp, 5
// 0050ff2d  335014               xor edx, dword ptr [eax + 0x14]
// 0050ff30  c1ce02               ror esi, 2
// 0050ff33  d1c2                 rol edx, 1
// 0050ff35  8dbc2fd6c162ca       lea edi, [edi + ebp - 0x359d3e2a]
// 0050ff3c  89742428             mov dword ptr [esp + 0x28], esi
// 0050ff40  8b742418             mov esi, dword ptr [esp + 0x18]
// 0050ff44  33f3                 xor esi, ebx
// 0050ff46  89500c               mov dword ptr [eax + 0xc], edx
// 0050ff49  895c2410             mov dword ptr [esp + 0x10], ebx
// 0050ff4d  8bde                 mov ebx, esi
// 0050ff4f  8b742428             mov esi, dword ptr [esp + 0x28]
// 0050ff53  33de                 xor ebx, esi
// 0050ff55  03da                 add ebx, edx
// 0050ff57  035c2414             add ebx, dword ptr [esp + 0x14]
// 0050ff5b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0050ff5f  8bef                 mov ebp, edi
// 0050ff61  c1c505               rol ebp, 5
// 0050ff64  c1ca02               ror edx, 2
// 0050ff67  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 0050ff6e  8bea                 mov ebp, edx
// 0050ff70  8b5030               mov edx, dword ptr [eax + 0x30]
// 0050ff73  335018               xor edx, dword ptr [eax + 0x18]
// 0050ff76  896c2418             mov dword ptr [esp + 0x18], ebp
// 0050ff7a  335010               xor edx, dword ptr [eax + 0x10]
// 0050ff7d  33ef                 xor ebp, edi
// 0050ff7f  335004               xor edx, dword ptr [eax + 4]
// 0050ff82  33ee                 xor ebp, esi
// 0050ff84  d1c2                 rol edx, 1
// 0050ff86  03ea                 add ebp, edx
// 0050ff88  036c2410             add ebp, dword ptr [esp + 0x10]
// 0050ff8c  895010               mov dword ptr [eax + 0x10], edx
// 0050ff8f  8b5008               mov edx, dword ptr [eax + 8]
// 0050ff92  335034               xor edx, dword ptr [eax + 0x34]
// 0050ff95  895c2414             mov dword ptr [esp + 0x14], ebx
// 0050ff99  33501c               xor edx, dword ptr [eax + 0x1c]
// 0050ff9c  c1c305               rol ebx, 5
// 0050ff9f  335014               xor edx, dword ptr [eax + 0x14]
// 0050ffa2  8db42bd6c162ca       lea esi, [ebx + ebp - 0x359d3e2a]
// 0050ffa9  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0050ffad  c1cf02               ror edi, 2
// 0050ffb0  33ef                 xor ebp, edi
// 0050ffb2  d1c2                 rol edx, 1
// 0050ffb4  897c2424             mov dword ptr [esp + 0x24], edi
// 0050ffb8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0050ffbc  33ef                 xor ebp, edi
// 0050ffbe  03ea                 add ebp, edx
// 0050ffc0  036c2428             add ebp, dword ptr [esp + 0x28]
// 0050ffc4  895014               mov dword ptr [eax + 0x14], edx
// 0050ffc7  8b5038               mov edx, dword ptr [eax + 0x38]
// 0050ffca  335020               xor edx, dword ptr [eax + 0x20]
// 0050ffcd  8bde                 mov ebx, esi
// 0050ffcf  335018               xor edx, dword ptr [eax + 0x18]
// 0050ffd2  c1c305               rol ebx, 5
// 0050ffd5  33500c               xor edx, dword ptr [eax + 0xc]
// 0050ffd8  c1cf02               ror edi, 2
// 0050ffdb  8dac2bd6c162ca       lea ebp, [ebx + ebp - 0x359d3e2a]
// 0050ffe2  8bdf                 mov ebx, edi
// 0050ffe4  d1c2                 rol edx, 1
// 0050ffe6  896c2428             mov dword ptr [esp + 0x28], ebp
// 0050ffea  895c2414             mov dword ptr [esp + 0x14], ebx
// 0050ffee  895018               mov dword ptr [eax + 0x18], edx
// 0050fff1  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0050fff5  33fb                 xor edi, ebx
// 0050fff7  33fe                 xor edi, esi
// 0050fff9  03fa                 add edi, edx
// 0050fffb  037c2418             add edi, dword ptr [esp + 0x18]
// 0050ffff  8b5010               mov edx, dword ptr [eax + 0x10]
// 00510002  33503c               xor edx, dword ptr [eax + 0x3c]
// 00510005  c1c505               rol ebp, 5
// 00510008  335024               xor edx, dword ptr [eax + 0x24]
// 0051000b  c1ce02               ror esi, 2
// 0051000e  33501c               xor edx, dword ptr [eax + 0x1c]
// 00510011  33de                 xor ebx, esi
// 00510013  d1c2                 rol edx, 1
// 00510015  89501c               mov dword ptr [eax + 0x1c], edx
// 00510018  8dbc2fd6c162ca       lea edi, [edi + ebp - 0x359d3e2a]
// 0051001f  89742410             mov dword ptr [esp + 0x10], esi
// 00510023  8b742428             mov esi, dword ptr [esp + 0x28]
// 00510027  33de                 xor ebx, esi
// 00510029  03da                 add ebx, edx
// 0051002b  035c2424             add ebx, dword ptr [esp + 0x24]
// 0051002f  8b5028               mov edx, dword ptr [eax + 0x28]
// 00510032  335020               xor edx, dword ptr [eax + 0x20]
// 00510035  8bef                 mov ebp, edi
// 00510037  3310                 xor edx, dword ptr [eax]
// 00510039  c1c505               rol ebp, 5
// 0051003c  335014               xor edx, dword ptr [eax + 0x14]
// 0051003f  c1ce02               ror esi, 2
// 00510042  d1c2                 rol edx, 1
// 00510044  89742428             mov dword ptr [esp + 0x28], esi
// 00510048  895020               mov dword ptr [eax + 0x20], edx
// 0051004b  8bf7                 mov esi, edi
// 0051004d  33742410             xor esi, dword ptr [esp + 0x10]
// 00510051  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 00510058  33742428             xor esi, dword ptr [esp + 0x28]
// 0051005c  895c2424             mov dword ptr [esp + 0x24], ebx
// 00510060  03f2                 add esi, edx
// 00510062  03742414             add esi, dword ptr [esp + 0x14]
// 00510066  8b5018               mov edx, dword ptr [eax + 0x18]
// 00510069  335004               xor edx, dword ptr [eax + 4]
// 0051006c  c1c305               rol ebx, 5
// 0051006f  33502c               xor edx, dword ptr [eax + 0x2c]
// 00510072  c1cf02               ror edi, 2
// 00510075  335024               xor edx, dword ptr [eax + 0x24]
// 00510078  897c2418             mov dword ptr [esp + 0x18], edi
// 0051007c  337c2424             xor edi, dword ptr [esp + 0x24]
// 00510080  d1c2                 rol edx, 1
// 00510082  337c2428             xor edi, dword ptr [esp + 0x28]
// 00510086  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0051008a  03fa                 add edi, edx
// 0051008c  037c2410             add edi, dword ptr [esp + 0x10]
// 00510090  895024               mov dword ptr [eax + 0x24], edx
// 00510093  8b542424             mov edx, dword ptr [esp + 0x24]
// 00510097  8db41ed6c162ca       lea esi, [esi + ebx - 0x359d3e2a]
// 0051009e  8bde                 mov ebx, esi
// 005100a0  c1c305               rol ebx, 5
// 005100a3  c1ca02               ror edx, 2
// 005100a6  8dbc1fd6c162ca       lea edi, [edi + ebx - 0x359d3e2a]
// 005100ad  8bda                 mov ebx, edx
// 005100af  8b5030               mov edx, dword ptr [eax + 0x30]
// 005100b2  335028               xor edx, dword ptr [eax + 0x28]
// 005100b5  33eb                 xor ebp, ebx
// 005100b7  335008               xor edx, dword ptr [eax + 8]
// 005100ba  33ee                 xor ebp, esi
// 005100bc  33501c               xor edx, dword ptr [eax + 0x1c]
// 005100bf  897c2410             mov dword ptr [esp + 0x10], edi
// 005100c3  d1c2                 rol edx, 1
// 005100c5  03ea                 add ebp, edx
// 005100c7  036c2428             add ebp, dword ptr [esp + 0x28]
// 005100cb  895028               mov dword ptr [eax + 0x28], edx
// 005100ce  8b5020               mov edx, dword ptr [eax + 0x20]
// 005100d1  33500c               xor edx, dword ptr [eax + 0xc]
// 005100d4  c1c705               rol edi, 5
// 005100d7  335034               xor edx, dword ptr [eax + 0x34]
// 005100da  c1ce02               ror esi, 2
// 005100dd  33502c               xor edx, dword ptr [eax + 0x2c]
// 005100e0  8dbc2fd6c162ca       lea edi, [edi + ebp - 0x359d3e2a]
// 005100e7  d1c2                 rol edx, 1
// 005100e9  895c2424             mov dword ptr [esp + 0x24], ebx
// 005100ed  89742414             mov dword ptr [esp + 0x14], esi
// 005100f1  89502c               mov dword ptr [eax + 0x2c], edx
// 005100f4  8bef                 mov ebp, edi
// 005100f6  33de                 xor ebx, esi
// 005100f8  8b742410             mov esi, dword ptr [esp + 0x10]
// 005100fc  33de                 xor ebx, esi
// 005100fe  03da                 add ebx, edx
// 00510100  035c2418             add ebx, dword ptr [esp + 0x18]
// 00510104  8b5038               mov edx, dword ptr [eax + 0x38]
// 00510107  335030               xor edx, dword ptr [eax + 0x30]
// 0051010a  c1c505               rol ebp, 5
// 0051010d  335010               xor edx, dword ptr [eax + 0x10]
// 00510110  c1ce02               ror esi, 2
// 00510113  335024               xor edx, dword ptr [eax + 0x24]
// 00510116  8dac2bd6c162ca       lea ebp, [ebx + ebp - 0x359d3e2a]
// 0051011d  d1c2                 rol edx, 1
// 0051011f  8bde                 mov ebx, esi
// 00510121  8b742414             mov esi, dword ptr [esp + 0x14]
// 00510125  33f3                 xor esi, ebx
// 00510127  33f7                 xor esi, edi
// 00510129  03f2                 add esi, edx
// 0051012b  03742424             add esi, dword ptr [esp + 0x24]
// 0051012f  895030               mov dword ptr [eax + 0x30], edx
// 00510132  8b5028               mov edx, dword ptr [eax + 0x28]
// 00510135  33503c               xor edx, dword ptr [eax + 0x3c]
// 00510138  896c2418             mov dword ptr [esp + 0x18], ebp
// 0051013c  335034               xor edx, dword ptr [eax + 0x34]
// 0051013f  c1c505               rol ebp, 5
// 00510142  335014               xor edx, dword ptr [eax + 0x14]
// 00510145  c1cf02               ror edi, 2
// 00510148  d1c2                 rol edx, 1
// 0051014a  895034               mov dword ptr [eax + 0x34], edx
// 0051014d  8db42ed6c162ca       lea esi, [esi + ebp - 0x359d3e2a]
// 00510154  897c2428             mov dword ptr [esp + 0x28], edi
// 00510158  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0051015c  33fb                 xor edi, ebx
// 0051015e  895c2410             mov dword ptr [esp + 0x10], ebx
// 00510162  8bdf                 mov ebx, edi
// 00510164  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00510168  33df                 xor ebx, edi
// 0051016a  03da                 add ebx, edx
// 0051016c  035c2414             add ebx, dword ptr [esp + 0x14]
// 00510170  8b542418             mov edx, dword ptr [esp + 0x18]
// 00510174  8bee                 mov ebp, esi
// 00510176  c1c505               rol ebp, 5
// 00510179  c1ca02               ror edx, 2
// 0051017c  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 00510183  8bea                 mov ebp, edx
// 00510185  8b5038               mov edx, dword ptr [eax + 0x38]
// 00510188  335018               xor edx, dword ptr [eax + 0x18]
// 0051018b  896c2418             mov dword ptr [esp + 0x18], ebp
// 0051018f  3310                 xor edx, dword ptr [eax]
// 00510191  33ee                 xor ebp, esi
// 00510193  33502c               xor edx, dword ptr [eax + 0x2c]
// 00510196  33ef                 xor ebp, edi
// 00510198  d1c2                 rol edx, 1
// 0051019a  895038               mov dword ptr [eax + 0x38], edx
// 0051019d  03ea                 add ebp, edx
// 0051019f  8b5030               mov edx, dword ptr [eax + 0x30]
// 005101a2  335004               xor edx, dword ptr [eax + 4]
// 005101a5  036c2410             add ebp, dword ptr [esp + 0x10]
// 005101a9  33503c               xor edx, dword ptr [eax + 0x3c]
// 005101ac  895c2414             mov dword ptr [esp + 0x14], ebx
// 005101b0  33501c               xor edx, dword ptr [eax + 0x1c]
// 005101b3  c1c305               rol ebx, 5
// 005101b6  c1ce02               ror esi, 2
// 005101b9  d1c2                 rol edx, 1
// 005101bb  89503c               mov dword ptr [eax + 0x3c], edx
// 005101be  8b442418             mov eax, dword ptr [esp + 0x18]
// 005101c2  33c6                 xor eax, esi
// 005101c4  89742424             mov dword ptr [esp + 0x24], esi
// 005101c8  8bf0                 mov esi, eax
// 005101ca  8b442414             mov eax, dword ptr [esp + 0x14]
// 005101ce  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 005101d5  33f0                 xor esi, eax
// 005101d7  03f2                 add esi, edx
// 005101d9  8beb                 mov ebp, ebx
// 005101db  c1c505               rol ebp, 5
// 005101de  03f7                 add esi, edi
// 005101e0  8d942ed6c162ca       lea edx, [esi + ebp - 0x359d3e2a]
// 005101e7  0111                 add dword ptr [ecx], edx
// 005101e9  015904               add dword ptr [ecx + 4], ebx
// 005101ec  8b542418             mov edx, dword ptr [esp + 0x18]
// 005101f0  c1c802               ror eax, 2
// 005101f3  014108               add dword ptr [ecx + 8], eax
// 005101f6  8b442424             mov eax, dword ptr [esp + 0x24]
// 005101fa  01410c               add dword ptr [ecx + 0xc], eax
// 005101fd  015110               add dword ptr [ecx + 0x10], edx
// 00510200  5f                   pop edi
// 00510201  5e                   pop esi
// 00510202  5d                   pop ebp
// 00510203  5b                   pop ebx
// 00510204  83c410               add esp, 0x10
// 00510207  c20800               ret 8
// library rbx2016-raknet/SHA1.cpp (function ?Transform@CSHA1@@AAEXQAIQAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
