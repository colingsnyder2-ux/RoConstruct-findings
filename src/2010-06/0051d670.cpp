// roc 2010-06 0051d670  unit: RakPeer  size: 4394 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051d670
//
// 0051d670  83ec10               sub esp, 0x10
// 0051d673  53                   push ebx
// 0051d674  55                   push ebp
// 0051d675  56                   push esi
// 0051d676  8b742424             mov esi, dword ptr [esp + 0x24]
// 0051d67a  8d4174               lea eax, [ecx + 0x74]
// 0051d67d  57                   push edi
// 0051d67e  b910000000           mov ecx, 0x10
// 0051d683  8bf8                 mov edi, eax
// 0051d685  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0051d687  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0051d68b  8b7108               mov esi, dword ptr [ecx + 8]
// 0051d68e  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 0051d691  8b11                 mov edx, dword ptr [ecx]
// 0051d693  8b7904               mov edi, dword ptr [ecx + 4]
// 0051d696  33de                 xor ebx, esi
// 0051d698  23df                 and ebx, edi
// 0051d69a  33590c               xor ebx, dword ptr [ecx + 0xc]
// 0051d69d  8b30                 mov esi, dword ptr [eax]
// 0051d69f  8bea                 mov ebp, edx
// 0051d6a1  c1c505               rol ebp, 5
// 0051d6a4  03eb                 add ebp, ebx
// 0051d6a6  036910               add ebp, dword ptr [ecx + 0x10]
// 0051d6a9  c1cf02               ror edi, 2
// 0051d6ac  8db42e9979825a       lea esi, [esi + ebp + 0x5a827999]
// 0051d6b3  8b6908               mov ebp, dword ptr [ecx + 8]
// 0051d6b6  33ef                 xor ebp, edi
// 0051d6b8  23ea                 and ebp, edx
// 0051d6ba  336908               xor ebp, dword ptr [ecx + 8]
// 0051d6bd  8bde                 mov ebx, esi
// 0051d6bf  c1c305               rol ebx, 5
// 0051d6c2  03dd                 add ebx, ebp
// 0051d6c4  035804               add ebx, dword ptr [eax + 4]
// 0051d6c7  c1ca02               ror edx, 2
// 0051d6ca  897c2410             mov dword ptr [esp + 0x10], edi
// 0051d6ce  8b790c               mov edi, dword ptr [ecx + 0xc]
// 0051d6d1  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0051d6d5  33ea                 xor ebp, edx
// 0051d6d7  23ee                 and ebp, esi
// 0051d6d9  336c2410             xor ebp, dword ptr [esp + 0x10]
// 0051d6dd  8dbc1f9979825a       lea edi, [edi + ebx + 0x5a827999]
// 0051d6e4  8bdf                 mov ebx, edi
// 0051d6e6  c1c305               rol ebx, 5
// 0051d6e9  035808               add ebx, dword ptr [eax + 8]
// 0051d6ec  89542428             mov dword ptr [esp + 0x28], edx
// 0051d6f0  8b5108               mov edx, dword ptr [ecx + 8]
// 0051d6f3  03eb                 add ebp, ebx
// 0051d6f5  8d942a9979825a       lea edx, [edx + ebp + 0x5a827999]
// 0051d6fc  c1ce02               ror esi, 2
// 0051d6ff  89742418             mov dword ptr [esp + 0x18], esi
// 0051d703  8bee                 mov ebp, esi
// 0051d705  8b742428             mov esi, dword ptr [esp + 0x28]
// 0051d709  33ee                 xor ebp, esi
// 0051d70b  23ef                 and ebp, edi
// 0051d70d  33ee                 xor ebp, esi
// 0051d70f  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051d713  8bda                 mov ebx, edx
// 0051d715  c1c305               rol ebx, 5
// 0051d718  03dd                 add ebx, ebp
// 0051d71a  03580c               add ebx, dword ptr [eax + 0xc]
// 0051d71d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0051d721  c1cf02               ror edi, 2
// 0051d724  33ef                 xor ebp, edi
// 0051d726  8db41e9979825a       lea esi, [esi + ebx + 0x5a827999]
// 0051d72d  23ea                 and ebp, edx
// 0051d72f  336c2418             xor ebp, dword ptr [esp + 0x18]
// 0051d733  8bde                 mov ebx, esi
// 0051d735  c1c305               rol ebx, 5
// 0051d738  03dd                 add ebx, ebp
// 0051d73a  035810               add ebx, dword ptr [eax + 0x10]
// 0051d73d  897c2424             mov dword ptr [esp + 0x24], edi
// 0051d741  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0051d745  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0051d749  c1ca02               ror edx, 2
// 0051d74c  33ea                 xor ebp, edx
// 0051d74e  8dbc1f9979825a       lea edi, [edi + ebx + 0x5a827999]
// 0051d755  23ee                 and ebp, esi
// 0051d757  336c2424             xor ebp, dword ptr [esp + 0x24]
// 0051d75b  8bdf                 mov ebx, edi
// 0051d75d  c1c305               rol ebx, 5
// 0051d760  89542414             mov dword ptr [esp + 0x14], edx
// 0051d764  03dd                 add ebx, ebp
// 0051d766  035814               add ebx, dword ptr [eax + 0x14]
// 0051d769  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0051d76d  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051d771  8d941a9979825a       lea edx, [edx + ebx + 0x5a827999]
// 0051d778  c1ce02               ror esi, 2
// 0051d77b  33ee                 xor ebp, esi
// 0051d77d  23ef                 and ebp, edi
// 0051d77f  336c2414             xor ebp, dword ptr [esp + 0x14]
// 0051d783  8bda                 mov ebx, edx
// 0051d785  c1c305               rol ebx, 5
// 0051d788  03dd                 add ebx, ebp
// 0051d78a  035818               add ebx, dword ptr [eax + 0x18]
// 0051d78d  c1cf02               ror edi, 2
// 0051d790  89742410             mov dword ptr [esp + 0x10], esi
// 0051d794  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0051d798  8b742424             mov esi, dword ptr [esp + 0x24]
// 0051d79c  33ef                 xor ebp, edi
// 0051d79e  23ea                 and ebp, edx
// 0051d7a0  336c2410             xor ebp, dword ptr [esp + 0x10]
// 0051d7a4  8db41e9979825a       lea esi, [esi + ebx + 0x5a827999]
// 0051d7ab  8bde                 mov ebx, esi
// 0051d7ad  c1c305               rol ebx, 5
// 0051d7b0  03dd                 add ebx, ebp
// 0051d7b2  03581c               add ebx, dword ptr [eax + 0x1c]
// 0051d7b5  c1ca02               ror edx, 2
// 0051d7b8  897c2428             mov dword ptr [esp + 0x28], edi
// 0051d7bc  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0051d7c0  8dbc1f9979825a       lea edi, [edi + ebx + 0x5a827999]
// 0051d7c7  89542418             mov dword ptr [esp + 0x18], edx
// 0051d7cb  8bea                 mov ebp, edx
// 0051d7cd  8b542428             mov edx, dword ptr [esp + 0x28]
// 0051d7d1  33ea                 xor ebp, edx
// 0051d7d3  23ee                 and ebp, esi
// 0051d7d5  33ea                 xor ebp, edx
// 0051d7d7  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051d7db  8bdf                 mov ebx, edi
// 0051d7dd  c1c305               rol ebx, 5
// 0051d7e0  035820               add ebx, dword ptr [eax + 0x20]
// 0051d7e3  03eb                 add ebp, ebx
// 0051d7e5  8d942a9979825a       lea edx, [edx + ebp + 0x5a827999]
// 0051d7ec  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0051d7f0  c1ce02               ror esi, 2
// 0051d7f3  33ee                 xor ebp, esi
// 0051d7f5  23ef                 and ebp, edi
// 0051d7f7  336c2418             xor ebp, dword ptr [esp + 0x18]
// 0051d7fb  8bda                 mov ebx, edx
// 0051d7fd  c1c305               rol ebx, 5
// 0051d800  03dd                 add ebx, ebp
// 0051d802  035824               add ebx, dword ptr [eax + 0x24]
// 0051d805  c1cf02               ror edi, 2
// 0051d808  89742424             mov dword ptr [esp + 0x24], esi
// 0051d80c  8b742428             mov esi, dword ptr [esp + 0x28]
// 0051d810  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0051d814  33ef                 xor ebp, edi
// 0051d816  8db41e9979825a       lea esi, [esi + ebx + 0x5a827999]
// 0051d81d  23ea                 and ebp, edx
// 0051d81f  336c2424             xor ebp, dword ptr [esp + 0x24]
// 0051d823  8bde                 mov ebx, esi
// 0051d825  c1c305               rol ebx, 5
// 0051d828  03dd                 add ebx, ebp
// 0051d82a  035828               add ebx, dword ptr [eax + 0x28]
// 0051d82d  c1ca02               ror edx, 2
// 0051d830  897c2414             mov dword ptr [esp + 0x14], edi
// 0051d834  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0051d838  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0051d83c  33ea                 xor ebp, edx
// 0051d83e  8dbc1f9979825a       lea edi, [edi + ebx + 0x5a827999]
// 0051d845  23ee                 and ebp, esi
// 0051d847  336c2414             xor ebp, dword ptr [esp + 0x14]
// 0051d84b  8bdf                 mov ebx, edi
// 0051d84d  c1c305               rol ebx, 5
// 0051d850  03dd                 add ebx, ebp
// 0051d852  03582c               add ebx, dword ptr [eax + 0x2c]
// 0051d855  89542410             mov dword ptr [esp + 0x10], edx
// 0051d859  8b542424             mov edx, dword ptr [esp + 0x24]
// 0051d85d  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0051d861  8d9c1a9979825a       lea ebx, [edx + ebx + 0x5a827999]
// 0051d868  c1ce02               ror esi, 2
// 0051d86b  8bd3                 mov edx, ebx
// 0051d86d  89742428             mov dword ptr [esp + 0x28], esi
// 0051d871  c1c205               rol edx, 5
// 0051d874  33ee                 xor ebp, esi
// 0051d876  23ef                 and ebp, edi
// 0051d878  336c2410             xor ebp, dword ptr [esp + 0x10]
// 0051d87c  8b742414             mov esi, dword ptr [esp + 0x14]
// 0051d880  03d5                 add edx, ebp
// 0051d882  035030               add edx, dword ptr [eax + 0x30]
// 0051d885  c1cf02               ror edi, 2
// 0051d888  8db4169979825a       lea esi, [esi + edx + 0x5a827999]
// 0051d88f  8b5034               mov edx, dword ptr [eax + 0x34]
// 0051d892  89742414             mov dword ptr [esp + 0x14], esi
// 0051d896  897c2418             mov dword ptr [esp + 0x18], edi
// 0051d89a  8bee                 mov ebp, esi
// 0051d89c  8b742428             mov esi, dword ptr [esp + 0x28]
// 0051d8a0  33fe                 xor edi, esi
// 0051d8a2  23fb                 and edi, ebx
// 0051d8a4  c1c505               rol ebp, 5
// 0051d8a7  03ea                 add ebp, edx
// 0051d8a9  33fe                 xor edi, esi
// 0051d8ab  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051d8af  03fd                 add edi, ebp
// 0051d8b1  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0051d8b5  335020               xor edx, dword ptr [eax + 0x20]
// 0051d8b8  c1cb02               ror ebx, 2
// 0051d8bb  33eb                 xor ebp, ebx
// 0051d8bd  236c2414             and ebp, dword ptr [esp + 0x14]
// 0051d8c1  335008               xor edx, dword ptr [eax + 8]
// 0051d8c4  336c2418             xor ebp, dword ptr [esp + 0x18]
// 0051d8c8  3310                 xor edx, dword ptr [eax]
// 0051d8ca  8db43e9979825a       lea esi, [esi + edi + 0x5a827999]
// 0051d8d1  8bfe                 mov edi, esi
// 0051d8d3  c1c705               rol edi, 5
// 0051d8d6  03fd                 add edi, ebp
// 0051d8d8  037838               add edi, dword ptr [eax + 0x38]
// 0051d8db  895c2424             mov dword ptr [esp + 0x24], ebx
// 0051d8df  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0051d8e3  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0051d8e7  8d9c3b9979825a       lea ebx, [ebx + edi + 0x5a827999]
// 0051d8ee  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0051d8f2  c1cf02               ror edi, 2
// 0051d8f5  33ef                 xor ebp, edi
// 0051d8f7  23ee                 and ebp, esi
// 0051d8f9  336c2424             xor ebp, dword ptr [esp + 0x24]
// 0051d8fd  895c2428             mov dword ptr [esp + 0x28], ebx
// 0051d901  c1c305               rol ebx, 5
// 0051d904  03dd                 add ebx, ebp
// 0051d906  03583c               add ebx, dword ptr [eax + 0x3c]
// 0051d909  c1ce02               ror esi, 2
// 0051d90c  d1c2                 rol edx, 1
// 0051d90e  8954241c             mov dword ptr [esp + 0x1c], edx
// 0051d912  8910                 mov dword ptr [eax], edx
// 0051d914  897c2414             mov dword ptr [esp + 0x14], edi
// 0051d918  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0051d91c  8b542414             mov edx, dword ptr [esp + 0x14]
// 0051d920  8dbc1f9979825a       lea edi, [edi + ebx + 0x5a827999]
// 0051d927  8bda                 mov ebx, edx
// 0051d929  33de                 xor ebx, esi
// 0051d92b  89742410             mov dword ptr [esp + 0x10], esi
// 0051d92f  8bf3                 mov esi, ebx
// 0051d931  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0051d935  23f3                 and esi, ebx
// 0051d937  33f2                 xor esi, edx
// 0051d939  8b542424             mov edx, dword ptr [esp + 0x24]
// 0051d93d  8bef                 mov ebp, edi
// 0051d93f  c1c505               rol ebp, 5
// 0051d942  036c241c             add ebp, dword ptr [esp + 0x1c]
// 0051d946  03f5                 add esi, ebp
// 0051d948  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0051d94c  8db4329979825a       lea esi, [edx + esi + 0x5a827999]
// 0051d953  8b5038               mov edx, dword ptr [eax + 0x38]
// 0051d956  33500c               xor edx, dword ptr [eax + 0xc]
// 0051d959  c1cb02               ror ebx, 2
// 0051d95c  335004               xor edx, dword ptr [eax + 4]
// 0051d95f  89742424             mov dword ptr [esp + 0x24], esi
// 0051d963  335024               xor edx, dword ptr [eax + 0x24]
// 0051d966  33eb                 xor ebp, ebx
// 0051d968  d1c2                 rol edx, 1
// 0051d96a  c1c605               rol esi, 5
// 0051d96d  895c2428             mov dword ptr [esp + 0x28], ebx
// 0051d971  895004               mov dword ptr [eax + 4], edx
// 0051d974  23ef                 and ebp, edi
// 0051d976  336c2410             xor ebp, dword ptr [esp + 0x10]
// 0051d97a  03f2                 add esi, edx
// 0051d97c  8b542414             mov edx, dword ptr [esp + 0x14]
// 0051d980  03ee                 add ebp, esi
// 0051d982  8db42a9979825a       lea esi, [edx + ebp + 0x5a827999]
// 0051d989  8b5028               mov edx, dword ptr [eax + 0x28]
// 0051d98c  335010               xor edx, dword ptr [eax + 0x10]
// 0051d98f  c1cf02               ror edi, 2
// 0051d992  335008               xor edx, dword ptr [eax + 8]
// 0051d995  897c2418             mov dword ptr [esp + 0x18], edi
// 0051d999  33503c               xor edx, dword ptr [eax + 0x3c]
// 0051d99c  337c2428             xor edi, dword ptr [esp + 0x28]
// 0051d9a0  d1c2                 rol edx, 1
// 0051d9a2  237c2424             and edi, dword ptr [esp + 0x24]
// 0051d9a6  895008               mov dword ptr [eax + 8], edx
// 0051d9a9  337c2428             xor edi, dword ptr [esp + 0x28]
// 0051d9ad  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0051d9b1  8bde                 mov ebx, esi
// 0051d9b3  c1c305               rol ebx, 5
// 0051d9b6  03da                 add ebx, edx
// 0051d9b8  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051d9bc  03fb                 add edi, ebx
// 0051d9be  8dbc3a9979825a       lea edi, [edx + edi + 0x5a827999]
// 0051d9c5  8b542424             mov edx, dword ptr [esp + 0x24]
// 0051d9c9  c1ca02               ror edx, 2
// 0051d9cc  8bda                 mov ebx, edx
// 0051d9ce  8b500c               mov edx, dword ptr [eax + 0xc]
// 0051d9d1  3310                 xor edx, dword ptr [eax]
// 0051d9d3  33eb                 xor ebp, ebx
// 0051d9d5  33502c               xor edx, dword ptr [eax + 0x2c]
// 0051d9d8  23ee                 and ebp, esi
// 0051d9da  335014               xor edx, dword ptr [eax + 0x14]
// 0051d9dd  336c2418             xor ebp, dword ptr [esp + 0x18]
// 0051d9e1  d1c2                 rol edx, 1
// 0051d9e3  89500c               mov dword ptr [eax + 0xc], edx
// 0051d9e6  897c2410             mov dword ptr [esp + 0x10], edi
// 0051d9ea  c1c705               rol edi, 5
// 0051d9ed  03fa                 add edi, edx
// 0051d9ef  8b542428             mov edx, dword ptr [esp + 0x28]
// 0051d9f3  03ef                 add ebp, edi
// 0051d9f5  8dbc2a9979825a       lea edi, [edx + ebp + 0x5a827999]
// 0051d9fc  8b5030               mov edx, dword ptr [eax + 0x30]
// 0051d9ff  335018               xor edx, dword ptr [eax + 0x18]
// 0051da02  c1ce02               ror esi, 2
// 0051da05  335010               xor edx, dword ptr [eax + 0x10]
// 0051da08  895c2424             mov dword ptr [esp + 0x24], ebx
// 0051da0c  335004               xor edx, dword ptr [eax + 4]
// 0051da0f  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0051da13  d1c2                 rol edx, 1
// 0051da15  33ee                 xor ebp, esi
// 0051da17  89742414             mov dword ptr [esp + 0x14], esi
// 0051da1b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051da1f  33ee                 xor ebp, esi
// 0051da21  895010               mov dword ptr [eax + 0x10], edx
// 0051da24  8bdf                 mov ebx, edi
// 0051da26  c1c305               rol ebx, 5
// 0051da29  03da                 add ebx, edx
// 0051da2b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051da2f  03eb                 add ebp, ebx
// 0051da31  8dac2aa1ebd96e       lea ebp, [edx + ebp + 0x6ed9eba1]
// 0051da38  8b5008               mov edx, dword ptr [eax + 8]
// 0051da3b  335034               xor edx, dword ptr [eax + 0x34]
// 0051da3e  c1ce02               ror esi, 2
// 0051da41  33501c               xor edx, dword ptr [eax + 0x1c]
// 0051da44  8bde                 mov ebx, esi
// 0051da46  335014               xor edx, dword ptr [eax + 0x14]
// 0051da49  8b742414             mov esi, dword ptr [esp + 0x14]
// 0051da4d  d1c2                 rol edx, 1
// 0051da4f  33f3                 xor esi, ebx
// 0051da51  896c2418             mov dword ptr [esp + 0x18], ebp
// 0051da55  c1c505               rol ebp, 5
// 0051da58  03ea                 add ebp, edx
// 0051da5a  33f7                 xor esi, edi
// 0051da5c  895014               mov dword ptr [eax + 0x14], edx
// 0051da5f  8b542424             mov edx, dword ptr [esp + 0x24]
// 0051da63  03f5                 add esi, ebp
// 0051da65  c1cf02               ror edi, 2
// 0051da68  8db432a1ebd96e       lea esi, [edx + esi + 0x6ed9eba1]
// 0051da6f  8b5038               mov edx, dword ptr [eax + 0x38]
// 0051da72  895c2410             mov dword ptr [esp + 0x10], ebx
// 0051da76  897c2428             mov dword ptr [esp + 0x28], edi
// 0051da7a  335020               xor edx, dword ptr [eax + 0x20]
// 0051da7d  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0051da81  335018               xor edx, dword ptr [eax + 0x18]
// 0051da84  33fb                 xor edi, ebx
// 0051da86  33500c               xor edx, dword ptr [eax + 0xc]
// 0051da89  8bee                 mov ebp, esi
// 0051da8b  d1c2                 rol edx, 1
// 0051da8d  c1c505               rol ebp, 5
// 0051da90  03ea                 add ebp, edx
// 0051da92  895018               mov dword ptr [eax + 0x18], edx
// 0051da95  8b542414             mov edx, dword ptr [esp + 0x14]
// 0051da99  8bdf                 mov ebx, edi
// 0051da9b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0051da9f  33df                 xor ebx, edi
// 0051daa1  03dd                 add ebx, ebp
// 0051daa3  8d9c1aa1ebd96e       lea ebx, [edx + ebx + 0x6ed9eba1]
// 0051daaa  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051daae  c1ca02               ror edx, 2
// 0051dab1  8bea                 mov ebp, edx
// 0051dab3  8b5010               mov edx, dword ptr [eax + 0x10]
// 0051dab6  33503c               xor edx, dword ptr [eax + 0x3c]
// 0051dab9  896c2418             mov dword ptr [esp + 0x18], ebp
// 0051dabd  335024               xor edx, dword ptr [eax + 0x24]
// 0051dac0  33ee                 xor ebp, esi
// 0051dac2  33501c               xor edx, dword ptr [eax + 0x1c]
// 0051dac5  33ef                 xor ebp, edi
// 0051dac7  d1c2                 rol edx, 1
// 0051dac9  89501c               mov dword ptr [eax + 0x1c], edx
// 0051dacc  895c2414             mov dword ptr [esp + 0x14], ebx
// 0051dad0  c1c305               rol ebx, 5
// 0051dad3  03da                 add ebx, edx
// 0051dad5  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051dad9  03eb                 add ebp, ebx
// 0051dadb  8dbc2aa1ebd96e       lea edi, [edx + ebp + 0x6ed9eba1]
// 0051dae2  8b5028               mov edx, dword ptr [eax + 0x28]
// 0051dae5  335020               xor edx, dword ptr [eax + 0x20]
// 0051dae8  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0051daec  3310                 xor edx, dword ptr [eax]
// 0051daee  c1ce02               ror esi, 2
// 0051daf1  335014               xor edx, dword ptr [eax + 0x14]
// 0051daf4  33ee                 xor ebp, esi
// 0051daf6  d1c2                 rol edx, 1
// 0051daf8  895020               mov dword ptr [eax + 0x20], edx
// 0051dafb  89742424             mov dword ptr [esp + 0x24], esi
// 0051daff  8b742414             mov esi, dword ptr [esp + 0x14]
// 0051db03  33ee                 xor ebp, esi
// 0051db05  8bdf                 mov ebx, edi
// 0051db07  c1c305               rol ebx, 5
// 0051db0a  03da                 add ebx, edx
// 0051db0c  8b542428             mov edx, dword ptr [esp + 0x28]
// 0051db10  03eb                 add ebp, ebx
// 0051db12  8dac2aa1ebd96e       lea ebp, [edx + ebp + 0x6ed9eba1]
// 0051db19  8b5018               mov edx, dword ptr [eax + 0x18]
// 0051db1c  335004               xor edx, dword ptr [eax + 4]
// 0051db1f  c1ce02               ror esi, 2
// 0051db22  33502c               xor edx, dword ptr [eax + 0x2c]
// 0051db25  8bde                 mov ebx, esi
// 0051db27  335024               xor edx, dword ptr [eax + 0x24]
// 0051db2a  8b742424             mov esi, dword ptr [esp + 0x24]
// 0051db2e  d1c2                 rol edx, 1
// 0051db30  33f3                 xor esi, ebx
// 0051db32  896c2428             mov dword ptr [esp + 0x28], ebp
// 0051db36  c1c505               rol ebp, 5
// 0051db39  03ea                 add ebp, edx
// 0051db3b  895024               mov dword ptr [eax + 0x24], edx
// 0051db3e  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051db42  33f7                 xor esi, edi
// 0051db44  03f5                 add esi, ebp
// 0051db46  8db432a1ebd96e       lea esi, [edx + esi + 0x6ed9eba1]
// 0051db4d  8b5030               mov edx, dword ptr [eax + 0x30]
// 0051db50  335028               xor edx, dword ptr [eax + 0x28]
// 0051db53  c1cf02               ror edi, 2
// 0051db56  335008               xor edx, dword ptr [eax + 8]
// 0051db59  8bee                 mov ebp, esi
// 0051db5b  33501c               xor edx, dword ptr [eax + 0x1c]
// 0051db5e  895c2414             mov dword ptr [esp + 0x14], ebx
// 0051db62  d1c2                 rol edx, 1
// 0051db64  897c2410             mov dword ptr [esp + 0x10], edi
// 0051db68  895028               mov dword ptr [eax + 0x28], edx
// 0051db6b  c1c505               rol ebp, 5
// 0051db6e  03ea                 add ebp, edx
// 0051db70  33df                 xor ebx, edi
// 0051db72  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0051db76  8b542424             mov edx, dword ptr [esp + 0x24]
// 0051db7a  33df                 xor ebx, edi
// 0051db7c  03dd                 add ebx, ebp
// 0051db7e  8d9c1aa1ebd96e       lea ebx, [edx + ebx + 0x6ed9eba1]
// 0051db85  8b5020               mov edx, dword ptr [eax + 0x20]
// 0051db88  33500c               xor edx, dword ptr [eax + 0xc]
// 0051db8b  c1cf02               ror edi, 2
// 0051db8e  335034               xor edx, dword ptr [eax + 0x34]
// 0051db91  897c2428             mov dword ptr [esp + 0x28], edi
// 0051db95  33502c               xor edx, dword ptr [eax + 0x2c]
// 0051db98  895c2424             mov dword ptr [esp + 0x24], ebx
// 0051db9c  d1c2                 rol edx, 1
// 0051db9e  89502c               mov dword ptr [eax + 0x2c], edx
// 0051dba1  c1c305               rol ebx, 5
// 0051dba4  03da                 add ebx, edx
// 0051dba6  8b542414             mov edx, dword ptr [esp + 0x14]
// 0051dbaa  8bfe                 mov edi, esi
// 0051dbac  337c2410             xor edi, dword ptr [esp + 0x10]
// 0051dbb0  337c2428             xor edi, dword ptr [esp + 0x28]
// 0051dbb4  03fb                 add edi, ebx
// 0051dbb6  8dbc3aa1ebd96e       lea edi, [edx + edi + 0x6ed9eba1]
// 0051dbbd  8b5038               mov edx, dword ptr [eax + 0x38]
// 0051dbc0  335030               xor edx, dword ptr [eax + 0x30]
// 0051dbc3  c1ce02               ror esi, 2
// 0051dbc6  335010               xor edx, dword ptr [eax + 0x10]
// 0051dbc9  89742418             mov dword ptr [esp + 0x18], esi
// 0051dbcd  335024               xor edx, dword ptr [eax + 0x24]
// 0051dbd0  33742424             xor esi, dword ptr [esp + 0x24]
// 0051dbd4  d1c2                 rol edx, 1
// 0051dbd6  33742428             xor esi, dword ptr [esp + 0x28]
// 0051dbda  895030               mov dword ptr [eax + 0x30], edx
// 0051dbdd  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0051dbe1  8bdf                 mov ebx, edi
// 0051dbe3  c1c305               rol ebx, 5
// 0051dbe6  03da                 add ebx, edx
// 0051dbe8  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051dbec  03f3                 add esi, ebx
// 0051dbee  8db432a1ebd96e       lea esi, [edx + esi + 0x6ed9eba1]
// 0051dbf5  8b542424             mov edx, dword ptr [esp + 0x24]
// 0051dbf9  c1ca02               ror edx, 2
// 0051dbfc  8bda                 mov ebx, edx
// 0051dbfe  8b5028               mov edx, dword ptr [eax + 0x28]
// 0051dc01  33503c               xor edx, dword ptr [eax + 0x3c]
// 0051dc04  33eb                 xor ebp, ebx
// 0051dc06  335034               xor edx, dword ptr [eax + 0x34]
// 0051dc09  33ef                 xor ebp, edi
// 0051dc0b  335014               xor edx, dword ptr [eax + 0x14]
// 0051dc0e  89742410             mov dword ptr [esp + 0x10], esi
// 0051dc12  d1c2                 rol edx, 1
// 0051dc14  c1c605               rol esi, 5
// 0051dc17  03f2                 add esi, edx
// 0051dc19  895034               mov dword ptr [eax + 0x34], edx
// 0051dc1c  8b542428             mov edx, dword ptr [esp + 0x28]
// 0051dc20  03ee                 add ebp, esi
// 0051dc22  8db42aa1ebd96e       lea esi, [edx + ebp + 0x6ed9eba1]
// 0051dc29  8b5038               mov edx, dword ptr [eax + 0x38]
// 0051dc2c  335018               xor edx, dword ptr [eax + 0x18]
// 0051dc2f  c1cf02               ror edi, 2
// 0051dc32  3310                 xor edx, dword ptr [eax]
// 0051dc34  895c2424             mov dword ptr [esp + 0x24], ebx
// 0051dc38  33502c               xor edx, dword ptr [eax + 0x2c]
// 0051dc3b  33df                 xor ebx, edi
// 0051dc3d  d1c2                 rol edx, 1
// 0051dc3f  897c2414             mov dword ptr [esp + 0x14], edi
// 0051dc43  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0051dc47  8bee                 mov ebp, esi
// 0051dc49  c1c505               rol ebp, 5
// 0051dc4c  03ea                 add ebp, edx
// 0051dc4e  33df                 xor ebx, edi
// 0051dc50  895038               mov dword ptr [eax + 0x38], edx
// 0051dc53  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051dc57  03dd                 add ebx, ebp
// 0051dc59  8dac1aa1ebd96e       lea ebp, [edx + ebx + 0x6ed9eba1]
// 0051dc60  8b5030               mov edx, dword ptr [eax + 0x30]
// 0051dc63  c1cf02               ror edi, 2
// 0051dc66  8bdf                 mov ebx, edi
// 0051dc68  896c2418             mov dword ptr [esp + 0x18], ebp
// 0051dc6c  895c2410             mov dword ptr [esp + 0x10], ebx
// 0051dc70  335004               xor edx, dword ptr [eax + 4]
// 0051dc73  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0051dc77  33503c               xor edx, dword ptr [eax + 0x3c]
// 0051dc7a  33fb                 xor edi, ebx
// 0051dc7c  33501c               xor edx, dword ptr [eax + 0x1c]
// 0051dc7f  33fe                 xor edi, esi
// 0051dc81  d1c2                 rol edx, 1
// 0051dc83  c1c505               rol ebp, 5
// 0051dc86  03ea                 add ebp, edx
// 0051dc88  89503c               mov dword ptr [eax + 0x3c], edx
// 0051dc8b  8b542424             mov edx, dword ptr [esp + 0x24]
// 0051dc8f  03fd                 add edi, ebp
// 0051dc91  8dbc3aa1ebd96e       lea edi, [edx + edi + 0x6ed9eba1]
// 0051dc98  8b5020               mov edx, dword ptr [eax + 0x20]
// 0051dc9b  335008               xor edx, dword ptr [eax + 8]
// 0051dc9e  c1ce02               ror esi, 2
// 0051dca1  3310                 xor edx, dword ptr [eax]
// 0051dca3  89742428             mov dword ptr [esp + 0x28], esi
// 0051dca7  335034               xor edx, dword ptr [eax + 0x34]
// 0051dcaa  8b742418             mov esi, dword ptr [esp + 0x18]
// 0051dcae  d1c2                 rol edx, 1
// 0051dcb0  33f3                 xor esi, ebx
// 0051dcb2  8910                 mov dword ptr [eax], edx
// 0051dcb4  8bef                 mov ebp, edi
// 0051dcb6  c1c505               rol ebp, 5
// 0051dcb9  03ea                 add ebp, edx
// 0051dcbb  8b542414             mov edx, dword ptr [esp + 0x14]
// 0051dcbf  8bde                 mov ebx, esi
// 0051dcc1  8b742428             mov esi, dword ptr [esp + 0x28]
// 0051dcc5  33de                 xor ebx, esi
// 0051dcc7  03dd                 add ebx, ebp
// 0051dcc9  8d9c1aa1ebd96e       lea ebx, [edx + ebx + 0x6ed9eba1]
// 0051dcd0  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051dcd4  c1ca02               ror edx, 2
// 0051dcd7  8bea                 mov ebp, edx
// 0051dcd9  8b5038               mov edx, dword ptr [eax + 0x38]
// 0051dcdc  33500c               xor edx, dword ptr [eax + 0xc]
// 0051dcdf  896c2418             mov dword ptr [esp + 0x18], ebp
// 0051dce3  335004               xor edx, dword ptr [eax + 4]
// 0051dce6  33ef                 xor ebp, edi
// 0051dce8  335024               xor edx, dword ptr [eax + 0x24]
// 0051dceb  33ee                 xor ebp, esi
// 0051dced  d1c2                 rol edx, 1
// 0051dcef  895c2414             mov dword ptr [esp + 0x14], ebx
// 0051dcf3  c1c305               rol ebx, 5
// 0051dcf6  03da                 add ebx, edx
// 0051dcf8  03eb                 add ebp, ebx
// 0051dcfa  895004               mov dword ptr [eax + 4], edx
// 0051dcfd  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051dd01  8db42aa1ebd96e       lea esi, [edx + ebp + 0x6ed9eba1]
// 0051dd08  8b5028               mov edx, dword ptr [eax + 0x28]
// 0051dd0b  335010               xor edx, dword ptr [eax + 0x10]
// 0051dd0e  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0051dd12  335008               xor edx, dword ptr [eax + 8]
// 0051dd15  c1cf02               ror edi, 2
// 0051dd18  33503c               xor edx, dword ptr [eax + 0x3c]
// 0051dd1b  33ef                 xor ebp, edi
// 0051dd1d  d1c2                 rol edx, 1
// 0051dd1f  897c2424             mov dword ptr [esp + 0x24], edi
// 0051dd23  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0051dd27  33ef                 xor ebp, edi
// 0051dd29  895008               mov dword ptr [eax + 8], edx
// 0051dd2c  8bde                 mov ebx, esi
// 0051dd2e  c1c305               rol ebx, 5
// 0051dd31  03da                 add ebx, edx
// 0051dd33  8b542428             mov edx, dword ptr [esp + 0x28]
// 0051dd37  03eb                 add ebp, ebx
// 0051dd39  8dac2aa1ebd96e       lea ebp, [edx + ebp + 0x6ed9eba1]
// 0051dd40  8b500c               mov edx, dword ptr [eax + 0xc]
// 0051dd43  3310                 xor edx, dword ptr [eax]
// 0051dd45  c1cf02               ror edi, 2
// 0051dd48  33502c               xor edx, dword ptr [eax + 0x2c]
// 0051dd4b  8bdf                 mov ebx, edi
// 0051dd4d  335014               xor edx, dword ptr [eax + 0x14]
// 0051dd50  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0051dd54  d1c2                 rol edx, 1
// 0051dd56  896c2428             mov dword ptr [esp + 0x28], ebp
// 0051dd5a  895c2414             mov dword ptr [esp + 0x14], ebx
// 0051dd5e  89500c               mov dword ptr [eax + 0xc], edx
// 0051dd61  c1c505               rol ebp, 5
// 0051dd64  03ea                 add ebp, edx
// 0051dd66  33fb                 xor edi, ebx
// 0051dd68  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051dd6c  33fe                 xor edi, esi
// 0051dd6e  03fd                 add edi, ebp
// 0051dd70  8dbc3aa1ebd96e       lea edi, [edx + edi + 0x6ed9eba1]
// 0051dd77  8b5030               mov edx, dword ptr [eax + 0x30]
// 0051dd7a  335018               xor edx, dword ptr [eax + 0x18]
// 0051dd7d  c1ce02               ror esi, 2
// 0051dd80  335010               xor edx, dword ptr [eax + 0x10]
// 0051dd83  33de                 xor ebx, esi
// 0051dd85  335004               xor edx, dword ptr [eax + 4]
// 0051dd88  89742410             mov dword ptr [esp + 0x10], esi
// 0051dd8c  8b742428             mov esi, dword ptr [esp + 0x28]
// 0051dd90  d1c2                 rol edx, 1
// 0051dd92  33de                 xor ebx, esi
// 0051dd94  895010               mov dword ptr [eax + 0x10], edx
// 0051dd97  8bef                 mov ebp, edi
// 0051dd99  c1c505               rol ebp, 5
// 0051dd9c  03ea                 add ebp, edx
// 0051dd9e  8b542424             mov edx, dword ptr [esp + 0x24]
// 0051dda2  03dd                 add ebx, ebp
// 0051dda4  8d9c1aa1ebd96e       lea ebx, [edx + ebx + 0x6ed9eba1]
// 0051ddab  8b5008               mov edx, dword ptr [eax + 8]
// 0051ddae  335034               xor edx, dword ptr [eax + 0x34]
// 0051ddb1  c1ce02               ror esi, 2
// 0051ddb4  33501c               xor edx, dword ptr [eax + 0x1c]
// 0051ddb7  89742428             mov dword ptr [esp + 0x28], esi
// 0051ddbb  335014               xor edx, dword ptr [eax + 0x14]
// 0051ddbe  895c2424             mov dword ptr [esp + 0x24], ebx
// 0051ddc2  d1c2                 rol edx, 1
// 0051ddc4  895014               mov dword ptr [eax + 0x14], edx
// 0051ddc7  c1c305               rol ebx, 5
// 0051ddca  03da                 add ebx, edx
// 0051ddcc  8b542414             mov edx, dword ptr [esp + 0x14]
// 0051ddd0  8bf7                 mov esi, edi
// 0051ddd2  33742410             xor esi, dword ptr [esp + 0x10]
// 0051ddd6  33742428             xor esi, dword ptr [esp + 0x28]
// 0051ddda  03f3                 add esi, ebx
// 0051dddc  8db432a1ebd96e       lea esi, [edx + esi + 0x6ed9eba1]
// 0051dde3  8b5038               mov edx, dword ptr [eax + 0x38]
// 0051dde6  335020               xor edx, dword ptr [eax + 0x20]
// 0051dde9  c1cf02               ror edi, 2
// 0051ddec  335018               xor edx, dword ptr [eax + 0x18]
// 0051ddef  897c2418             mov dword ptr [esp + 0x18], edi
// 0051ddf3  33500c               xor edx, dword ptr [eax + 0xc]
// 0051ddf6  337c2424             xor edi, dword ptr [esp + 0x24]
// 0051ddfa  d1c2                 rol edx, 1
// 0051ddfc  337c2428             xor edi, dword ptr [esp + 0x28]
// 0051de00  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0051de04  895018               mov dword ptr [eax + 0x18], edx
// 0051de07  8bde                 mov ebx, esi
// 0051de09  c1c305               rol ebx, 5
// 0051de0c  03da                 add ebx, edx
// 0051de0e  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051de12  03fb                 add edi, ebx
// 0051de14  8d9c3aa1ebd96e       lea ebx, [edx + edi + 0x6ed9eba1]
// 0051de1b  8b542424             mov edx, dword ptr [esp + 0x24]
// 0051de1f  c1ca02               ror edx, 2
// 0051de22  8bfa                 mov edi, edx
// 0051de24  8b5010               mov edx, dword ptr [eax + 0x10]
// 0051de27  33503c               xor edx, dword ptr [eax + 0x3c]
// 0051de2a  895c2410             mov dword ptr [esp + 0x10], ebx
// 0051de2e  335024               xor edx, dword ptr [eax + 0x24]
// 0051de31  33ef                 xor ebp, edi
// 0051de33  33501c               xor edx, dword ptr [eax + 0x1c]
// 0051de36  33ee                 xor ebp, esi
// 0051de38  d1c2                 rol edx, 1
// 0051de3a  c1c305               rol ebx, 5
// 0051de3d  03da                 add ebx, edx
// 0051de3f  89501c               mov dword ptr [eax + 0x1c], edx
// 0051de42  8b542428             mov edx, dword ptr [esp + 0x28]
// 0051de46  03eb                 add ebp, ebx
// 0051de48  8d9c2aa1ebd96e       lea ebx, [edx + ebp + 0x6ed9eba1]
// 0051de4f  8b5028               mov edx, dword ptr [eax + 0x28]
// 0051de52  335020               xor edx, dword ptr [eax + 0x20]
// 0051de55  c1ce02               ror esi, 2
// 0051de58  3310                 xor edx, dword ptr [eax]
// 0051de5a  897c2424             mov dword ptr [esp + 0x24], edi
// 0051de5e  895c2428             mov dword ptr [esp + 0x28], ebx
// 0051de62  89742414             mov dword ptr [esp + 0x14], esi
// 0051de66  335014               xor edx, dword ptr [eax + 0x14]
// 0051de69  8bee                 mov ebp, esi
// 0051de6b  0b6c2410             or ebp, dword ptr [esp + 0x10]
// 0051de6f  23742410             and esi, dword ptr [esp + 0x10]
// 0051de73  23ef                 and ebp, edi
// 0051de75  d1c2                 rol edx, 1
// 0051de77  895020               mov dword ptr [eax + 0x20], edx
// 0051de7a  0bee                 or ebp, esi
// 0051de7c  03ea                 add ebp, edx
// 0051de7e  036c2418             add ebp, dword ptr [esp + 0x18]
// 0051de82  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051de86  c1c305               rol ebx, 5
// 0051de89  c1ca02               ror edx, 2
// 0051de8c  8bfa                 mov edi, edx
// 0051de8e  8b5018               mov edx, dword ptr [eax + 0x18]
// 0051de91  335004               xor edx, dword ptr [eax + 4]
// 0051de94  8db42bdcbc1b8f       lea esi, [ebx + ebp - 0x70e44324]
// 0051de9b  33502c               xor edx, dword ptr [eax + 0x2c]
// 0051de9e  897c2410             mov dword ptr [esp + 0x10], edi
// 0051dea2  335024               xor edx, dword ptr [eax + 0x24]
// 0051dea5  0b7c2428             or edi, dword ptr [esp + 0x28]
// 0051dea9  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0051dead  236c2428             and ebp, dword ptr [esp + 0x28]
// 0051deb1  237c2414             and edi, dword ptr [esp + 0x14]
// 0051deb5  d1c2                 rol edx, 1
// 0051deb7  0bfd                 or edi, ebp
// 0051deb9  03fa                 add edi, edx
// 0051debb  037c2424             add edi, dword ptr [esp + 0x24]
// 0051debf  895024               mov dword ptr [eax + 0x24], edx
// 0051dec2  8b542428             mov edx, dword ptr [esp + 0x28]
// 0051dec6  8bde                 mov ebx, esi
// 0051dec8  c1c305               rol ebx, 5
// 0051decb  c1ca02               ror edx, 2
// 0051dece  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 0051ded5  8bda                 mov ebx, edx
// 0051ded7  8b5030               mov edx, dword ptr [eax + 0x30]
// 0051deda  335028               xor edx, dword ptr [eax + 0x28]
// 0051dedd  895c2428             mov dword ptr [esp + 0x28], ebx
// 0051dee1  335008               xor edx, dword ptr [eax + 8]
// 0051dee4  8bee                 mov ebp, esi
// 0051dee6  33501c               xor edx, dword ptr [eax + 0x1c]
// 0051dee9  0beb                 or ebp, ebx
// 0051deeb  236c2410             and ebp, dword ptr [esp + 0x10]
// 0051deef  d1c2                 rol edx, 1
// 0051def1  895028               mov dword ptr [eax + 0x28], edx
// 0051def4  8bde                 mov ebx, esi
// 0051def6  235c2428             and ebx, dword ptr [esp + 0x28]
// 0051defa  897c2424             mov dword ptr [esp + 0x24], edi
// 0051defe  0beb                 or ebp, ebx
// 0051df00  03ea                 add ebp, edx
// 0051df02  036c2414             add ebp, dword ptr [esp + 0x14]
// 0051df06  8b5020               mov edx, dword ptr [eax + 0x20]
// 0051df09  33500c               xor edx, dword ptr [eax + 0xc]
// 0051df0c  c1c705               rol edi, 5
// 0051df0f  335034               xor edx, dword ptr [eax + 0x34]
// 0051df12  c1ce02               ror esi, 2
// 0051df15  33502c               xor edx, dword ptr [eax + 0x2c]
// 0051df18  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 0051df1f  d1c2                 rol edx, 1
// 0051df21  8bde                 mov ebx, esi
// 0051df23  0b5c2424             or ebx, dword ptr [esp + 0x24]
// 0051df27  8bee                 mov ebp, esi
// 0051df29  235c2428             and ebx, dword ptr [esp + 0x28]
// 0051df2d  236c2424             and ebp, dword ptr [esp + 0x24]
// 0051df31  89502c               mov dword ptr [eax + 0x2c], edx
// 0051df34  0bdd                 or ebx, ebp
// 0051df36  03da                 add ebx, edx
// 0051df38  035c2410             add ebx, dword ptr [esp + 0x10]
// 0051df3c  8b542424             mov edx, dword ptr [esp + 0x24]
// 0051df40  897c2414             mov dword ptr [esp + 0x14], edi
// 0051df44  c1c705               rol edi, 5
// 0051df47  c1ca02               ror edx, 2
// 0051df4a  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 0051df51  8bda                 mov ebx, edx
// 0051df53  8b5038               mov edx, dword ptr [eax + 0x38]
// 0051df56  335030               xor edx, dword ptr [eax + 0x30]
// 0051df59  897c2410             mov dword ptr [esp + 0x10], edi
// 0051df5d  335010               xor edx, dword ptr [eax + 0x10]
// 0051df60  895c2424             mov dword ptr [esp + 0x24], ebx
// 0051df64  335024               xor edx, dword ptr [eax + 0x24]
// 0051df67  d1c2                 rol edx, 1
// 0051df69  0b5c2414             or ebx, dword ptr [esp + 0x14]
// 0051df6d  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0051df71  236c2414             and ebp, dword ptr [esp + 0x14]
// 0051df75  23de                 and ebx, esi
// 0051df77  0bdd                 or ebx, ebp
// 0051df79  03da                 add ebx, edx
// 0051df7b  035c2428             add ebx, dword ptr [esp + 0x28]
// 0051df7f  895030               mov dword ptr [eax + 0x30], edx
// 0051df82  8b542414             mov edx, dword ptr [esp + 0x14]
// 0051df86  c1c705               rol edi, 5
// 0051df89  c1ca02               ror edx, 2
// 0051df8c  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 0051df93  8bda                 mov ebx, edx
// 0051df95  8b5028               mov edx, dword ptr [eax + 0x28]
// 0051df98  33503c               xor edx, dword ptr [eax + 0x3c]
// 0051df9b  895c2414             mov dword ptr [esp + 0x14], ebx
// 0051df9f  335034               xor edx, dword ptr [eax + 0x34]
// 0051dfa2  0b5c2410             or ebx, dword ptr [esp + 0x10]
// 0051dfa6  335014               xor edx, dword ptr [eax + 0x14]
// 0051dfa9  235c2424             and ebx, dword ptr [esp + 0x24]
// 0051dfad  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0051dfb1  236c2410             and ebp, dword ptr [esp + 0x10]
// 0051dfb5  d1c2                 rol edx, 1
// 0051dfb7  0bdd                 or ebx, ebp
// 0051dfb9  03da                 add ebx, edx
// 0051dfbb  895034               mov dword ptr [eax + 0x34], edx
// 0051dfbe  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051dfc2  897c2428             mov dword ptr [esp + 0x28], edi
// 0051dfc6  c1c705               rol edi, 5
// 0051dfc9  03de                 add ebx, esi
// 0051dfcb  c1ca02               ror edx, 2
// 0051dfce  8db43bdcbc1b8f       lea esi, [ebx + edi - 0x70e44324]
// 0051dfd5  8bfa                 mov edi, edx
// 0051dfd7  8b5038               mov edx, dword ptr [eax + 0x38]
// 0051dfda  335018               xor edx, dword ptr [eax + 0x18]
// 0051dfdd  897c2410             mov dword ptr [esp + 0x10], edi
// 0051dfe1  3310                 xor edx, dword ptr [eax]
// 0051dfe3  0b7c2428             or edi, dword ptr [esp + 0x28]
// 0051dfe7  33502c               xor edx, dword ptr [eax + 0x2c]
// 0051dfea  237c2414             and edi, dword ptr [esp + 0x14]
// 0051dfee  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0051dff2  236c2428             and ebp, dword ptr [esp + 0x28]
// 0051dff6  d1c2                 rol edx, 1
// 0051dff8  0bfd                 or edi, ebp
// 0051dffa  03fa                 add edi, edx
// 0051dffc  037c2424             add edi, dword ptr [esp + 0x24]
// 0051e000  895038               mov dword ptr [eax + 0x38], edx
// 0051e003  8b542428             mov edx, dword ptr [esp + 0x28]
// 0051e007  8bde                 mov ebx, esi
// 0051e009  c1c305               rol ebx, 5
// 0051e00c  c1ca02               ror edx, 2
// 0051e00f  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 0051e016  8bda                 mov ebx, edx
// 0051e018  8b5030               mov edx, dword ptr [eax + 0x30]
// 0051e01b  335004               xor edx, dword ptr [eax + 4]
// 0051e01e  8bee                 mov ebp, esi
// 0051e020  33503c               xor edx, dword ptr [eax + 0x3c]
// 0051e023  0beb                 or ebp, ebx
// 0051e025  33501c               xor edx, dword ptr [eax + 0x1c]
// 0051e028  236c2410             and ebp, dword ptr [esp + 0x10]
// 0051e02c  d1c2                 rol edx, 1
// 0051e02e  895c2428             mov dword ptr [esp + 0x28], ebx
// 0051e032  8bde                 mov ebx, esi
// 0051e034  235c2428             and ebx, dword ptr [esp + 0x28]
// 0051e038  89503c               mov dword ptr [eax + 0x3c], edx
// 0051e03b  0beb                 or ebp, ebx
// 0051e03d  03ea                 add ebp, edx
// 0051e03f  8b5020               mov edx, dword ptr [eax + 0x20]
// 0051e042  335008               xor edx, dword ptr [eax + 8]
// 0051e045  036c2414             add ebp, dword ptr [esp + 0x14]
// 0051e049  3310                 xor edx, dword ptr [eax]
// 0051e04b  897c2424             mov dword ptr [esp + 0x24], edi
// 0051e04f  335034               xor edx, dword ptr [eax + 0x34]
// 0051e052  c1c705               rol edi, 5
// 0051e055  c1ce02               ror esi, 2
// 0051e058  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 0051e05f  d1c2                 rol edx, 1
// 0051e061  897c2414             mov dword ptr [esp + 0x14], edi
// 0051e065  8910                 mov dword ptr [eax], edx
// 0051e067  c1c705               rol edi, 5
// 0051e06a  8bde                 mov ebx, esi
// 0051e06c  0b5c2424             or ebx, dword ptr [esp + 0x24]
// 0051e070  8bee                 mov ebp, esi
// 0051e072  235c2428             and ebx, dword ptr [esp + 0x28]
// 0051e076  236c2424             and ebp, dword ptr [esp + 0x24]
// 0051e07a  0bdd                 or ebx, ebp
// 0051e07c  03da                 add ebx, edx
// 0051e07e  035c2410             add ebx, dword ptr [esp + 0x10]
// 0051e082  8b542424             mov edx, dword ptr [esp + 0x24]
// 0051e086  c1ca02               ror edx, 2
// 0051e089  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 0051e090  8bda                 mov ebx, edx
// 0051e092  8b5038               mov edx, dword ptr [eax + 0x38]
// 0051e095  33500c               xor edx, dword ptr [eax + 0xc]
// 0051e098  895c2424             mov dword ptr [esp + 0x24], ebx
// 0051e09c  335004               xor edx, dword ptr [eax + 4]
// 0051e09f  0b5c2414             or ebx, dword ptr [esp + 0x14]
// 0051e0a3  335024               xor edx, dword ptr [eax + 0x24]
// 0051e0a6  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0051e0aa  236c2414             and ebp, dword ptr [esp + 0x14]
// 0051e0ae  d1c2                 rol edx, 1
// 0051e0b0  23de                 and ebx, esi
// 0051e0b2  0bdd                 or ebx, ebp
// 0051e0b4  03da                 add ebx, edx
// 0051e0b6  035c2428             add ebx, dword ptr [esp + 0x28]
// 0051e0ba  895004               mov dword ptr [eax + 4], edx
// 0051e0bd  8b542414             mov edx, dword ptr [esp + 0x14]
// 0051e0c1  897c2410             mov dword ptr [esp + 0x10], edi
// 0051e0c5  c1c705               rol edi, 5
// 0051e0c8  c1ca02               ror edx, 2
// 0051e0cb  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 0051e0d2  8bda                 mov ebx, edx
// 0051e0d4  8b5028               mov edx, dword ptr [eax + 0x28]
// 0051e0d7  335010               xor edx, dword ptr [eax + 0x10]
// 0051e0da  895c2414             mov dword ptr [esp + 0x14], ebx
// 0051e0de  335008               xor edx, dword ptr [eax + 8]
// 0051e0e1  0b5c2410             or ebx, dword ptr [esp + 0x10]
// 0051e0e5  33503c               xor edx, dword ptr [eax + 0x3c]
// 0051e0e8  235c2424             and ebx, dword ptr [esp + 0x24]
// 0051e0ec  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0051e0f0  236c2410             and ebp, dword ptr [esp + 0x10]
// 0051e0f4  d1c2                 rol edx, 1
// 0051e0f6  0bdd                 or ebx, ebp
// 0051e0f8  03da                 add ebx, edx
// 0051e0fa  895008               mov dword ptr [eax + 8], edx
// 0051e0fd  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051e101  897c2428             mov dword ptr [esp + 0x28], edi
// 0051e105  c1c705               rol edi, 5
// 0051e108  03de                 add ebx, esi
// 0051e10a  c1ca02               ror edx, 2
// 0051e10d  8db43bdcbc1b8f       lea esi, [ebx + edi - 0x70e44324]
// 0051e114  8bfa                 mov edi, edx
// 0051e116  8b500c               mov edx, dword ptr [eax + 0xc]
// 0051e119  3310                 xor edx, dword ptr [eax]
// 0051e11b  897c2410             mov dword ptr [esp + 0x10], edi
// 0051e11f  33502c               xor edx, dword ptr [eax + 0x2c]
// 0051e122  0b7c2428             or edi, dword ptr [esp + 0x28]
// 0051e126  335014               xor edx, dword ptr [eax + 0x14]
// 0051e129  237c2414             and edi, dword ptr [esp + 0x14]
// 0051e12d  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0051e131  236c2428             and ebp, dword ptr [esp + 0x28]
// 0051e135  d1c2                 rol edx, 1
// 0051e137  0bfd                 or edi, ebp
// 0051e139  03fa                 add edi, edx
// 0051e13b  037c2424             add edi, dword ptr [esp + 0x24]
// 0051e13f  89500c               mov dword ptr [eax + 0xc], edx
// 0051e142  8b542428             mov edx, dword ptr [esp + 0x28]
// 0051e146  8bde                 mov ebx, esi
// 0051e148  c1c305               rol ebx, 5
// 0051e14b  c1ca02               ror edx, 2
// 0051e14e  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 0051e155  8bda                 mov ebx, edx
// 0051e157  8b5030               mov edx, dword ptr [eax + 0x30]
// 0051e15a  335018               xor edx, dword ptr [eax + 0x18]
// 0051e15d  897c2424             mov dword ptr [esp + 0x24], edi
// 0051e161  335010               xor edx, dword ptr [eax + 0x10]
// 0051e164  895c2428             mov dword ptr [esp + 0x28], ebx
// 0051e168  335004               xor edx, dword ptr [eax + 4]
// 0051e16b  8bee                 mov ebp, esi
// 0051e16d  d1c2                 rol edx, 1
// 0051e16f  895010               mov dword ptr [eax + 0x10], edx
// 0051e172  c1c705               rol edi, 5
// 0051e175  0beb                 or ebp, ebx
// 0051e177  236c2410             and ebp, dword ptr [esp + 0x10]
// 0051e17b  8bde                 mov ebx, esi
// 0051e17d  235c2428             and ebx, dword ptr [esp + 0x28]
// 0051e181  0beb                 or ebp, ebx
// 0051e183  03ea                 add ebp, edx
// 0051e185  036c2414             add ebp, dword ptr [esp + 0x14]
// 0051e189  8b5008               mov edx, dword ptr [eax + 8]
// 0051e18c  335034               xor edx, dword ptr [eax + 0x34]
// 0051e18f  c1ce02               ror esi, 2
// 0051e192  33501c               xor edx, dword ptr [eax + 0x1c]
// 0051e195  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 0051e19c  335014               xor edx, dword ptr [eax + 0x14]
// 0051e19f  8bde                 mov ebx, esi
// 0051e1a1  0b5c2424             or ebx, dword ptr [esp + 0x24]
// 0051e1a5  d1c2                 rol edx, 1
// 0051e1a7  235c2428             and ebx, dword ptr [esp + 0x28]
// 0051e1ab  895014               mov dword ptr [eax + 0x14], edx
// 0051e1ae  897c2414             mov dword ptr [esp + 0x14], edi
// 0051e1b2  c1c705               rol edi, 5
// 0051e1b5  8bee                 mov ebp, esi
// 0051e1b7  236c2424             and ebp, dword ptr [esp + 0x24]
// 0051e1bb  0bdd                 or ebx, ebp
// 0051e1bd  03da                 add ebx, edx
// 0051e1bf  035c2410             add ebx, dword ptr [esp + 0x10]
// 0051e1c3  8b542424             mov edx, dword ptr [esp + 0x24]
// 0051e1c7  c1ca02               ror edx, 2
// 0051e1ca  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 0051e1d1  8bda                 mov ebx, edx
// 0051e1d3  8b5038               mov edx, dword ptr [eax + 0x38]
// 0051e1d6  335020               xor edx, dword ptr [eax + 0x20]
// 0051e1d9  895c2424             mov dword ptr [esp + 0x24], ebx
// 0051e1dd  335018               xor edx, dword ptr [eax + 0x18]
// 0051e1e0  0b5c2414             or ebx, dword ptr [esp + 0x14]
// 0051e1e4  33500c               xor edx, dword ptr [eax + 0xc]
// 0051e1e7  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0051e1eb  236c2414             and ebp, dword ptr [esp + 0x14]
// 0051e1ef  d1c2                 rol edx, 1
// 0051e1f1  23de                 and ebx, esi
// 0051e1f3  0bdd                 or ebx, ebp
// 0051e1f5  03da                 add ebx, edx
// 0051e1f7  035c2428             add ebx, dword ptr [esp + 0x28]
// 0051e1fb  895018               mov dword ptr [eax + 0x18], edx
// 0051e1fe  8b542414             mov edx, dword ptr [esp + 0x14]
// 0051e202  897c2410             mov dword ptr [esp + 0x10], edi
// 0051e206  c1c705               rol edi, 5
// 0051e209  c1ca02               ror edx, 2
// 0051e20c  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 0051e213  8bda                 mov ebx, edx
// 0051e215  8b5010               mov edx, dword ptr [eax + 0x10]
// 0051e218  33503c               xor edx, dword ptr [eax + 0x3c]
// 0051e21b  895c2414             mov dword ptr [esp + 0x14], ebx
// 0051e21f  335024               xor edx, dword ptr [eax + 0x24]
// 0051e222  0b5c2410             or ebx, dword ptr [esp + 0x10]
// 0051e226  33501c               xor edx, dword ptr [eax + 0x1c]
// 0051e229  235c2424             and ebx, dword ptr [esp + 0x24]
// 0051e22d  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0051e231  236c2410             and ebp, dword ptr [esp + 0x10]
// 0051e235  d1c2                 rol edx, 1
// 0051e237  0bdd                 or ebx, ebp
// 0051e239  03da                 add ebx, edx
// 0051e23b  89501c               mov dword ptr [eax + 0x1c], edx
// 0051e23e  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051e242  03de                 add ebx, esi
// 0051e244  897c2428             mov dword ptr [esp + 0x28], edi
// 0051e248  c1c705               rol edi, 5
// 0051e24b  c1ca02               ror edx, 2
// 0051e24e  8db43bdcbc1b8f       lea esi, [ebx + edi - 0x70e44324]
// 0051e255  8bfa                 mov edi, edx
// 0051e257  8b5028               mov edx, dword ptr [eax + 0x28]
// 0051e25a  335020               xor edx, dword ptr [eax + 0x20]
// 0051e25d  897c2410             mov dword ptr [esp + 0x10], edi
// 0051e261  3310                 xor edx, dword ptr [eax]
// 0051e263  0b7c2428             or edi, dword ptr [esp + 0x28]
// 0051e267  335014               xor edx, dword ptr [eax + 0x14]
// 0051e26a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0051e26e  d1c2                 rol edx, 1
// 0051e270  8bde                 mov ebx, esi
// 0051e272  c1c305               rol ebx, 5
// 0051e275  237c2414             and edi, dword ptr [esp + 0x14]
// 0051e279  895020               mov dword ptr [eax + 0x20], edx
// 0051e27c  236c2428             and ebp, dword ptr [esp + 0x28]
// 0051e280  0bfd                 or edi, ebp
// 0051e282  03fa                 add edi, edx
// 0051e284  037c2424             add edi, dword ptr [esp + 0x24]
// 0051e288  8b542428             mov edx, dword ptr [esp + 0x28]
// 0051e28c  c1ca02               ror edx, 2
// 0051e28f  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 0051e296  8bda                 mov ebx, edx
// 0051e298  8b5018               mov edx, dword ptr [eax + 0x18]
// 0051e29b  335004               xor edx, dword ptr [eax + 4]
// 0051e29e  8bee                 mov ebp, esi
// 0051e2a0  33502c               xor edx, dword ptr [eax + 0x2c]
// 0051e2a3  0beb                 or ebp, ebx
// 0051e2a5  335024               xor edx, dword ptr [eax + 0x24]
// 0051e2a8  236c2410             and ebp, dword ptr [esp + 0x10]
// 0051e2ac  d1c2                 rol edx, 1
// 0051e2ae  895c2428             mov dword ptr [esp + 0x28], ebx
// 0051e2b2  8bde                 mov ebx, esi
// 0051e2b4  235c2428             and ebx, dword ptr [esp + 0x28]
// 0051e2b8  895024               mov dword ptr [eax + 0x24], edx
// 0051e2bb  0beb                 or ebp, ebx
// 0051e2bd  03ea                 add ebp, edx
// 0051e2bf  036c2414             add ebp, dword ptr [esp + 0x14]
// 0051e2c3  8b5030               mov edx, dword ptr [eax + 0x30]
// 0051e2c6  335028               xor edx, dword ptr [eax + 0x28]
// 0051e2c9  897c2424             mov dword ptr [esp + 0x24], edi
// 0051e2cd  335008               xor edx, dword ptr [eax + 8]
// 0051e2d0  c1c705               rol edi, 5
// 0051e2d3  33501c               xor edx, dword ptr [eax + 0x1c]
// 0051e2d6  c1ce02               ror esi, 2
// 0051e2d9  8d9c2fdcbc1b8f       lea ebx, [edi + ebp - 0x70e44324]
// 0051e2e0  d1c2                 rol edx, 1
// 0051e2e2  8bee                 mov ebp, esi
// 0051e2e4  0b6c2424             or ebp, dword ptr [esp + 0x24]
// 0051e2e8  89742418             mov dword ptr [esp + 0x18], esi
// 0051e2ec  236c2428             and ebp, dword ptr [esp + 0x28]
// 0051e2f0  23742424             and esi, dword ptr [esp + 0x24]
// 0051e2f4  895028               mov dword ptr [eax + 0x28], edx
// 0051e2f7  0bee                 or ebp, esi
// 0051e2f9  03ea                 add ebp, edx
// 0051e2fb  036c2410             add ebp, dword ptr [esp + 0x10]
// 0051e2ff  8b542424             mov edx, dword ptr [esp + 0x24]
// 0051e303  8bfb                 mov edi, ebx
// 0051e305  c1c705               rol edi, 5
// 0051e308  c1ca02               ror edx, 2
// 0051e30b  8bf2                 mov esi, edx
// 0051e30d  8b5020               mov edx, dword ptr [eax + 0x20]
// 0051e310  33500c               xor edx, dword ptr [eax + 0xc]
// 0051e313  89742424             mov dword ptr [esp + 0x24], esi
// 0051e317  335034               xor edx, dword ptr [eax + 0x34]
// 0051e31a  0bf3                 or esi, ebx
// 0051e31c  33502c               xor edx, dword ptr [eax + 0x2c]
// 0051e31f  23742418             and esi, dword ptr [esp + 0x18]
// 0051e323  895c2414             mov dword ptr [esp + 0x14], ebx
// 0051e327  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0051e32b  235c2414             and ebx, dword ptr [esp + 0x14]
// 0051e32f  d1c2                 rol edx, 1
// 0051e331  0bf3                 or esi, ebx
// 0051e333  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0051e337  03f2                 add esi, edx
// 0051e339  03742428             add esi, dword ptr [esp + 0x28]
// 0051e33d  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 0051e344  89502c               mov dword ptr [eax + 0x2c], edx
// 0051e347  8b5038               mov edx, dword ptr [eax + 0x38]
// 0051e34a  335030               xor edx, dword ptr [eax + 0x30]
// 0051e34d  8bef                 mov ebp, edi
// 0051e34f  335010               xor edx, dword ptr [eax + 0x10]
// 0051e352  c1c505               rol ebp, 5
// 0051e355  335024               xor edx, dword ptr [eax + 0x24]
// 0051e358  8db42edcbc1b8f       lea esi, [esi + ebp - 0x70e44324]
// 0051e35f  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0051e363  c1cb02               ror ebx, 2
// 0051e366  33eb                 xor ebp, ebx
// 0051e368  d1c2                 rol edx, 1
// 0051e36a  33ef                 xor ebp, edi
// 0051e36c  89742428             mov dword ptr [esp + 0x28], esi
// 0051e370  03ea                 add ebp, edx
// 0051e372  c1c605               rol esi, 5
// 0051e375  036c2418             add ebp, dword ptr [esp + 0x18]
// 0051e379  895c2414             mov dword ptr [esp + 0x14], ebx
// 0051e37d  895030               mov dword ptr [eax + 0x30], edx
// 0051e380  8b5028               mov edx, dword ptr [eax + 0x28]
// 0051e383  33503c               xor edx, dword ptr [eax + 0x3c]
// 0051e386  c1cf02               ror edi, 2
// 0051e389  335034               xor edx, dword ptr [eax + 0x34]
// 0051e38c  33df                 xor ebx, edi
// 0051e38e  335014               xor edx, dword ptr [eax + 0x14]
// 0051e391  8db42ed6c162ca       lea esi, [esi + ebp - 0x359d3e2a]
// 0051e398  d1c2                 rol edx, 1
// 0051e39a  895034               mov dword ptr [eax + 0x34], edx
// 0051e39d  897c2410             mov dword ptr [esp + 0x10], edi
// 0051e3a1  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0051e3a5  33df                 xor ebx, edi
// 0051e3a7  03da                 add ebx, edx
// 0051e3a9  035c2424             add ebx, dword ptr [esp + 0x24]
// 0051e3ad  8b5038               mov edx, dword ptr [eax + 0x38]
// 0051e3b0  335018               xor edx, dword ptr [eax + 0x18]
// 0051e3b3  8bee                 mov ebp, esi
// 0051e3b5  3310                 xor edx, dword ptr [eax]
// 0051e3b7  c1c505               rol ebp, 5
// 0051e3ba  33502c               xor edx, dword ptr [eax + 0x2c]
// 0051e3bd  c1cf02               ror edi, 2
// 0051e3c0  d1c2                 rol edx, 1
// 0051e3c2  897c2428             mov dword ptr [esp + 0x28], edi
// 0051e3c6  895038               mov dword ptr [eax + 0x38], edx
// 0051e3c9  8bfe                 mov edi, esi
// 0051e3cb  337c2410             xor edi, dword ptr [esp + 0x10]
// 0051e3cf  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 0051e3d6  337c2428             xor edi, dword ptr [esp + 0x28]
// 0051e3da  895c2424             mov dword ptr [esp + 0x24], ebx
// 0051e3de  03fa                 add edi, edx
// 0051e3e0  037c2414             add edi, dword ptr [esp + 0x14]
// 0051e3e4  8b5030               mov edx, dword ptr [eax + 0x30]
// 0051e3e7  335004               xor edx, dword ptr [eax + 4]
// 0051e3ea  c1c305               rol ebx, 5
// 0051e3ed  33503c               xor edx, dword ptr [eax + 0x3c]
// 0051e3f0  c1ce02               ror esi, 2
// 0051e3f3  33501c               xor edx, dword ptr [eax + 0x1c]
// 0051e3f6  89742418             mov dword ptr [esp + 0x18], esi
// 0051e3fa  33742424             xor esi, dword ptr [esp + 0x24]
// 0051e3fe  d1c2                 rol edx, 1
// 0051e400  33742428             xor esi, dword ptr [esp + 0x28]
// 0051e404  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0051e408  03f2                 add esi, edx
// 0051e40a  03742410             add esi, dword ptr [esp + 0x10]
// 0051e40e  8dbc1fd6c162ca       lea edi, [edi + ebx - 0x359d3e2a]
// 0051e415  89503c               mov dword ptr [eax + 0x3c], edx
// 0051e418  8b542424             mov edx, dword ptr [esp + 0x24]
// 0051e41c  8bdf                 mov ebx, edi
// 0051e41e  c1c305               rol ebx, 5
// 0051e421  c1ca02               ror edx, 2
// 0051e424  8db41ed6c162ca       lea esi, [esi + ebx - 0x359d3e2a]
// 0051e42b  8bda                 mov ebx, edx
// 0051e42d  8b5020               mov edx, dword ptr [eax + 0x20]
// 0051e430  335008               xor edx, dword ptr [eax + 8]
// 0051e433  33eb                 xor ebp, ebx
// 0051e435  3310                 xor edx, dword ptr [eax]
// 0051e437  33ef                 xor ebp, edi
// 0051e439  335034               xor edx, dword ptr [eax + 0x34]
// 0051e43c  89742410             mov dword ptr [esp + 0x10], esi
// 0051e440  d1c2                 rol edx, 1
// 0051e442  03ea                 add ebp, edx
// 0051e444  036c2428             add ebp, dword ptr [esp + 0x28]
// 0051e448  8910                 mov dword ptr [eax], edx
// 0051e44a  8b5038               mov edx, dword ptr [eax + 0x38]
// 0051e44d  33500c               xor edx, dword ptr [eax + 0xc]
// 0051e450  c1c605               rol esi, 5
// 0051e453  335004               xor edx, dword ptr [eax + 4]
// 0051e456  c1cf02               ror edi, 2
// 0051e459  335024               xor edx, dword ptr [eax + 0x24]
// 0051e45c  895c2424             mov dword ptr [esp + 0x24], ebx
// 0051e460  33df                 xor ebx, edi
// 0051e462  897c2414             mov dword ptr [esp + 0x14], edi
// 0051e466  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0051e46a  d1c2                 rol edx, 1
// 0051e46c  8db42ed6c162ca       lea esi, [esi + ebp - 0x359d3e2a]
// 0051e473  33df                 xor ebx, edi
// 0051e475  8bee                 mov ebp, esi
// 0051e477  03da                 add ebx, edx
// 0051e479  c1c505               rol ebp, 5
// 0051e47c  035c2418             add ebx, dword ptr [esp + 0x18]
// 0051e480  895004               mov dword ptr [eax + 4], edx
// 0051e483  8b5028               mov edx, dword ptr [eax + 0x28]
// 0051e486  335010               xor edx, dword ptr [eax + 0x10]
// 0051e489  8dac2bd6c162ca       lea ebp, [ebx + ebp - 0x359d3e2a]
// 0051e490  335008               xor edx, dword ptr [eax + 8]
// 0051e493  c1cf02               ror edi, 2
// 0051e496  33503c               xor edx, dword ptr [eax + 0x3c]
// 0051e499  8bdf                 mov ebx, edi
// 0051e49b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0051e49f  d1c2                 rol edx, 1
// 0051e4a1  33fb                 xor edi, ebx
// 0051e4a3  33fe                 xor edi, esi
// 0051e4a5  03fa                 add edi, edx
// 0051e4a7  037c2424             add edi, dword ptr [esp + 0x24]
// 0051e4ab  895008               mov dword ptr [eax + 8], edx
// 0051e4ae  8b500c               mov edx, dword ptr [eax + 0xc]
// 0051e4b1  3310                 xor edx, dword ptr [eax]
// 0051e4b3  896c2418             mov dword ptr [esp + 0x18], ebp
// 0051e4b7  33502c               xor edx, dword ptr [eax + 0x2c]
// 0051e4ba  c1c505               rol ebp, 5
// 0051e4bd  335014               xor edx, dword ptr [eax + 0x14]
// 0051e4c0  c1ce02               ror esi, 2
// 0051e4c3  d1c2                 rol edx, 1
// 0051e4c5  8dbc2fd6c162ca       lea edi, [edi + ebp - 0x359d3e2a]
// 0051e4cc  89742428             mov dword ptr [esp + 0x28], esi
// 0051e4d0  8b742418             mov esi, dword ptr [esp + 0x18]
// 0051e4d4  33f3                 xor esi, ebx
// 0051e4d6  89500c               mov dword ptr [eax + 0xc], edx
// 0051e4d9  895c2410             mov dword ptr [esp + 0x10], ebx
// 0051e4dd  8bde                 mov ebx, esi
// 0051e4df  8b742428             mov esi, dword ptr [esp + 0x28]
// 0051e4e3  33de                 xor ebx, esi
// 0051e4e5  03da                 add ebx, edx
// 0051e4e7  035c2414             add ebx, dword ptr [esp + 0x14]
// 0051e4eb  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051e4ef  8bef                 mov ebp, edi
// 0051e4f1  c1c505               rol ebp, 5
// 0051e4f4  c1ca02               ror edx, 2
// 0051e4f7  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 0051e4fe  8bea                 mov ebp, edx
// 0051e500  8b5030               mov edx, dword ptr [eax + 0x30]
// 0051e503  335018               xor edx, dword ptr [eax + 0x18]
// 0051e506  896c2418             mov dword ptr [esp + 0x18], ebp
// 0051e50a  335010               xor edx, dword ptr [eax + 0x10]
// 0051e50d  33ef                 xor ebp, edi
// 0051e50f  335004               xor edx, dword ptr [eax + 4]
// 0051e512  33ee                 xor ebp, esi
// 0051e514  d1c2                 rol edx, 1
// 0051e516  03ea                 add ebp, edx
// 0051e518  036c2410             add ebp, dword ptr [esp + 0x10]
// 0051e51c  895010               mov dword ptr [eax + 0x10], edx
// 0051e51f  8b5008               mov edx, dword ptr [eax + 8]
// 0051e522  335034               xor edx, dword ptr [eax + 0x34]
// 0051e525  895c2414             mov dword ptr [esp + 0x14], ebx
// 0051e529  33501c               xor edx, dword ptr [eax + 0x1c]
// 0051e52c  c1c305               rol ebx, 5
// 0051e52f  335014               xor edx, dword ptr [eax + 0x14]
// 0051e532  8db42bd6c162ca       lea esi, [ebx + ebp - 0x359d3e2a]
// 0051e539  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0051e53d  c1cf02               ror edi, 2
// 0051e540  33ef                 xor ebp, edi
// 0051e542  d1c2                 rol edx, 1
// 0051e544  897c2424             mov dword ptr [esp + 0x24], edi
// 0051e548  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0051e54c  33ef                 xor ebp, edi
// 0051e54e  03ea                 add ebp, edx
// 0051e550  036c2428             add ebp, dword ptr [esp + 0x28]
// 0051e554  895014               mov dword ptr [eax + 0x14], edx
// 0051e557  8b5038               mov edx, dword ptr [eax + 0x38]
// 0051e55a  335020               xor edx, dword ptr [eax + 0x20]
// 0051e55d  8bde                 mov ebx, esi
// 0051e55f  335018               xor edx, dword ptr [eax + 0x18]
// 0051e562  c1c305               rol ebx, 5
// 0051e565  33500c               xor edx, dword ptr [eax + 0xc]
// 0051e568  c1cf02               ror edi, 2
// 0051e56b  8dac2bd6c162ca       lea ebp, [ebx + ebp - 0x359d3e2a]
// 0051e572  8bdf                 mov ebx, edi
// 0051e574  d1c2                 rol edx, 1
// 0051e576  896c2428             mov dword ptr [esp + 0x28], ebp
// 0051e57a  895c2414             mov dword ptr [esp + 0x14], ebx
// 0051e57e  895018               mov dword ptr [eax + 0x18], edx
// 0051e581  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0051e585  33fb                 xor edi, ebx
// 0051e587  33fe                 xor edi, esi
// 0051e589  03fa                 add edi, edx
// 0051e58b  037c2418             add edi, dword ptr [esp + 0x18]
// 0051e58f  8b5010               mov edx, dword ptr [eax + 0x10]
// 0051e592  33503c               xor edx, dword ptr [eax + 0x3c]
// 0051e595  c1c505               rol ebp, 5
// 0051e598  335024               xor edx, dword ptr [eax + 0x24]
// 0051e59b  c1ce02               ror esi, 2
// 0051e59e  33501c               xor edx, dword ptr [eax + 0x1c]
// 0051e5a1  33de                 xor ebx, esi
// 0051e5a3  d1c2                 rol edx, 1
// 0051e5a5  89501c               mov dword ptr [eax + 0x1c], edx
// 0051e5a8  8dbc2fd6c162ca       lea edi, [edi + ebp - 0x359d3e2a]
// 0051e5af  89742410             mov dword ptr [esp + 0x10], esi
// 0051e5b3  8b742428             mov esi, dword ptr [esp + 0x28]
// 0051e5b7  33de                 xor ebx, esi
// 0051e5b9  03da                 add ebx, edx
// 0051e5bb  035c2424             add ebx, dword ptr [esp + 0x24]
// 0051e5bf  8b5028               mov edx, dword ptr [eax + 0x28]
// 0051e5c2  335020               xor edx, dword ptr [eax + 0x20]
// 0051e5c5  8bef                 mov ebp, edi
// 0051e5c7  3310                 xor edx, dword ptr [eax]
// 0051e5c9  c1c505               rol ebp, 5
// 0051e5cc  335014               xor edx, dword ptr [eax + 0x14]
// 0051e5cf  c1ce02               ror esi, 2
// 0051e5d2  d1c2                 rol edx, 1
// 0051e5d4  89742428             mov dword ptr [esp + 0x28], esi
// 0051e5d8  895020               mov dword ptr [eax + 0x20], edx
// 0051e5db  8bf7                 mov esi, edi
// 0051e5dd  33742410             xor esi, dword ptr [esp + 0x10]
// 0051e5e1  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 0051e5e8  33742428             xor esi, dword ptr [esp + 0x28]
// 0051e5ec  895c2424             mov dword ptr [esp + 0x24], ebx
// 0051e5f0  03f2                 add esi, edx
// 0051e5f2  03742414             add esi, dword ptr [esp + 0x14]
// 0051e5f6  8b5018               mov edx, dword ptr [eax + 0x18]
// 0051e5f9  335004               xor edx, dword ptr [eax + 4]
// 0051e5fc  c1c305               rol ebx, 5
// 0051e5ff  33502c               xor edx, dword ptr [eax + 0x2c]
// 0051e602  c1cf02               ror edi, 2
// 0051e605  335024               xor edx, dword ptr [eax + 0x24]
// 0051e608  897c2418             mov dword ptr [esp + 0x18], edi
// 0051e60c  337c2424             xor edi, dword ptr [esp + 0x24]
// 0051e610  d1c2                 rol edx, 1
// 0051e612  337c2428             xor edi, dword ptr [esp + 0x28]
// 0051e616  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0051e61a  03fa                 add edi, edx
// 0051e61c  037c2410             add edi, dword ptr [esp + 0x10]
// 0051e620  895024               mov dword ptr [eax + 0x24], edx
// 0051e623  8b542424             mov edx, dword ptr [esp + 0x24]
// 0051e627  8db41ed6c162ca       lea esi, [esi + ebx - 0x359d3e2a]
// 0051e62e  8bde                 mov ebx, esi
// 0051e630  c1c305               rol ebx, 5
// 0051e633  c1ca02               ror edx, 2
// 0051e636  8dbc1fd6c162ca       lea edi, [edi + ebx - 0x359d3e2a]
// 0051e63d  8bda                 mov ebx, edx
// 0051e63f  8b5030               mov edx, dword ptr [eax + 0x30]
// 0051e642  335028               xor edx, dword ptr [eax + 0x28]
// 0051e645  33eb                 xor ebp, ebx
// 0051e647  335008               xor edx, dword ptr [eax + 8]
// 0051e64a  33ee                 xor ebp, esi
// 0051e64c  33501c               xor edx, dword ptr [eax + 0x1c]
// 0051e64f  897c2410             mov dword ptr [esp + 0x10], edi
// 0051e653  d1c2                 rol edx, 1
// 0051e655  03ea                 add ebp, edx
// 0051e657  036c2428             add ebp, dword ptr [esp + 0x28]
// 0051e65b  895028               mov dword ptr [eax + 0x28], edx
// 0051e65e  8b5020               mov edx, dword ptr [eax + 0x20]
// 0051e661  33500c               xor edx, dword ptr [eax + 0xc]
// 0051e664  c1c705               rol edi, 5
// 0051e667  335034               xor edx, dword ptr [eax + 0x34]
// 0051e66a  c1ce02               ror esi, 2
// 0051e66d  33502c               xor edx, dword ptr [eax + 0x2c]
// 0051e670  8dbc2fd6c162ca       lea edi, [edi + ebp - 0x359d3e2a]
// 0051e677  d1c2                 rol edx, 1
// 0051e679  895c2424             mov dword ptr [esp + 0x24], ebx
// 0051e67d  89742414             mov dword ptr [esp + 0x14], esi
// 0051e681  89502c               mov dword ptr [eax + 0x2c], edx
// 0051e684  8bef                 mov ebp, edi
// 0051e686  33de                 xor ebx, esi
// 0051e688  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051e68c  33de                 xor ebx, esi
// 0051e68e  03da                 add ebx, edx
// 0051e690  035c2418             add ebx, dword ptr [esp + 0x18]
// 0051e694  8b5038               mov edx, dword ptr [eax + 0x38]
// 0051e697  335030               xor edx, dword ptr [eax + 0x30]
// 0051e69a  c1c505               rol ebp, 5
// 0051e69d  335010               xor edx, dword ptr [eax + 0x10]
// 0051e6a0  c1ce02               ror esi, 2
// 0051e6a3  335024               xor edx, dword ptr [eax + 0x24]
// 0051e6a6  8dac2bd6c162ca       lea ebp, [ebx + ebp - 0x359d3e2a]
// 0051e6ad  d1c2                 rol edx, 1
// 0051e6af  8bde                 mov ebx, esi
// 0051e6b1  8b742414             mov esi, dword ptr [esp + 0x14]
// 0051e6b5  33f3                 xor esi, ebx
// 0051e6b7  33f7                 xor esi, edi
// 0051e6b9  03f2                 add esi, edx
// 0051e6bb  03742424             add esi, dword ptr [esp + 0x24]
// 0051e6bf  895030               mov dword ptr [eax + 0x30], edx
// 0051e6c2  8b5028               mov edx, dword ptr [eax + 0x28]
// 0051e6c5  33503c               xor edx, dword ptr [eax + 0x3c]
// 0051e6c8  896c2418             mov dword ptr [esp + 0x18], ebp
// 0051e6cc  335034               xor edx, dword ptr [eax + 0x34]
// 0051e6cf  c1c505               rol ebp, 5
// 0051e6d2  335014               xor edx, dword ptr [eax + 0x14]
// 0051e6d5  c1cf02               ror edi, 2
// 0051e6d8  d1c2                 rol edx, 1
// 0051e6da  895034               mov dword ptr [eax + 0x34], edx
// 0051e6dd  8db42ed6c162ca       lea esi, [esi + ebp - 0x359d3e2a]
// 0051e6e4  897c2428             mov dword ptr [esp + 0x28], edi
// 0051e6e8  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0051e6ec  33fb                 xor edi, ebx
// 0051e6ee  895c2410             mov dword ptr [esp + 0x10], ebx
// 0051e6f2  8bdf                 mov ebx, edi
// 0051e6f4  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0051e6f8  33df                 xor ebx, edi
// 0051e6fa  03da                 add ebx, edx
// 0051e6fc  035c2414             add ebx, dword ptr [esp + 0x14]
// 0051e700  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051e704  8bee                 mov ebp, esi
// 0051e706  c1c505               rol ebp, 5
// 0051e709  c1ca02               ror edx, 2
// 0051e70c  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 0051e713  8bea                 mov ebp, edx
// 0051e715  8b5038               mov edx, dword ptr [eax + 0x38]
// 0051e718  335018               xor edx, dword ptr [eax + 0x18]
// 0051e71b  896c2418             mov dword ptr [esp + 0x18], ebp
// 0051e71f  3310                 xor edx, dword ptr [eax]
// 0051e721  33ee                 xor ebp, esi
// 0051e723  33502c               xor edx, dword ptr [eax + 0x2c]
// 0051e726  33ef                 xor ebp, edi
// 0051e728  d1c2                 rol edx, 1
// 0051e72a  895038               mov dword ptr [eax + 0x38], edx
// 0051e72d  03ea                 add ebp, edx
// 0051e72f  8b5030               mov edx, dword ptr [eax + 0x30]
// 0051e732  335004               xor edx, dword ptr [eax + 4]
// 0051e735  036c2410             add ebp, dword ptr [esp + 0x10]
// 0051e739  33503c               xor edx, dword ptr [eax + 0x3c]
// 0051e73c  895c2414             mov dword ptr [esp + 0x14], ebx
// 0051e740  33501c               xor edx, dword ptr [eax + 0x1c]
// 0051e743  c1c305               rol ebx, 5
// 0051e746  c1ce02               ror esi, 2
// 0051e749  d1c2                 rol edx, 1
// 0051e74b  89503c               mov dword ptr [eax + 0x3c], edx
// 0051e74e  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051e752  33c6                 xor eax, esi
// 0051e754  89742424             mov dword ptr [esp + 0x24], esi
// 0051e758  8bf0                 mov esi, eax
// 0051e75a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051e75e  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 0051e765  33f0                 xor esi, eax
// 0051e767  03f2                 add esi, edx
// 0051e769  8beb                 mov ebp, ebx
// 0051e76b  c1c505               rol ebp, 5
// 0051e76e  03f7                 add esi, edi
// 0051e770  8d942ed6c162ca       lea edx, [esi + ebp - 0x359d3e2a]
// 0051e777  0111                 add dword ptr [ecx], edx
// 0051e779  015904               add dword ptr [ecx + 4], ebx
// 0051e77c  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051e780  c1c802               ror eax, 2
// 0051e783  014108               add dword ptr [ecx + 8], eax
// 0051e786  8b442424             mov eax, dword ptr [esp + 0x24]
// 0051e78a  01410c               add dword ptr [ecx + 0xc], eax
// 0051e78d  015110               add dword ptr [ecx + 0x10], edx
// 0051e790  5f                   pop edi
// 0051e791  5e                   pop esi
// 0051e792  5d                   pop ebp
// 0051e793  5b                   pop ebx
// 0051e794  83c410               add esp, 0x10
// 0051e797  c20800               ret 8
// library rbx2016-raknet/SHA1.cpp (function ?Transform@CSHA1@@AAEXQAIQAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
