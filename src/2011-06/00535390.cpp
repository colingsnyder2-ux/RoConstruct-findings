// roc 2011-06 00535390  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4394 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00535390
//
// 00535390  83ec10               sub esp, 0x10
// 00535393  53                   push ebx
// 00535394  55                   push ebp
// 00535395  56                   push esi
// 00535396  8b742424             mov esi, dword ptr [esp + 0x24]
// 0053539a  8d4174               lea eax, [ecx + 0x74]
// 0053539d  57                   push edi
// 0053539e  b910000000           mov ecx, 0x10
// 005353a3  8bf8                 mov edi, eax
// 005353a5  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005353a7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005353ab  8b7108               mov esi, dword ptr [ecx + 8]
// 005353ae  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 005353b1  8b11                 mov edx, dword ptr [ecx]
// 005353b3  8b7904               mov edi, dword ptr [ecx + 4]
// 005353b6  33de                 xor ebx, esi
// 005353b8  23df                 and ebx, edi
// 005353ba  33590c               xor ebx, dword ptr [ecx + 0xc]
// 005353bd  8b30                 mov esi, dword ptr [eax]
// 005353bf  8bea                 mov ebp, edx
// 005353c1  c1c505               rol ebp, 5
// 005353c4  03eb                 add ebp, ebx
// 005353c6  036910               add ebp, dword ptr [ecx + 0x10]
// 005353c9  c1cf02               ror edi, 2
// 005353cc  8db42e9979825a       lea esi, [esi + ebp + 0x5a827999]
// 005353d3  8b6908               mov ebp, dword ptr [ecx + 8]
// 005353d6  33ef                 xor ebp, edi
// 005353d8  23ea                 and ebp, edx
// 005353da  336908               xor ebp, dword ptr [ecx + 8]
// 005353dd  8bde                 mov ebx, esi
// 005353df  c1c305               rol ebx, 5
// 005353e2  03dd                 add ebx, ebp
// 005353e4  035804               add ebx, dword ptr [eax + 4]
// 005353e7  c1ca02               ror edx, 2
// 005353ea  897c2410             mov dword ptr [esp + 0x10], edi
// 005353ee  8b790c               mov edi, dword ptr [ecx + 0xc]
// 005353f1  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005353f5  33ea                 xor ebp, edx
// 005353f7  23ee                 and ebp, esi
// 005353f9  336c2410             xor ebp, dword ptr [esp + 0x10]
// 005353fd  8dbc1f9979825a       lea edi, [edi + ebx + 0x5a827999]
// 00535404  8bdf                 mov ebx, edi
// 00535406  c1c305               rol ebx, 5
// 00535409  035808               add ebx, dword ptr [eax + 8]
// 0053540c  89542428             mov dword ptr [esp + 0x28], edx
// 00535410  8b5108               mov edx, dword ptr [ecx + 8]
// 00535413  03eb                 add ebp, ebx
// 00535415  8d942a9979825a       lea edx, [edx + ebp + 0x5a827999]
// 0053541c  c1ce02               ror esi, 2
// 0053541f  89742418             mov dword ptr [esp + 0x18], esi
// 00535423  8bee                 mov ebp, esi
// 00535425  8b742428             mov esi, dword ptr [esp + 0x28]
// 00535429  33ee                 xor ebp, esi
// 0053542b  23ef                 and ebp, edi
// 0053542d  33ee                 xor ebp, esi
// 0053542f  8b742410             mov esi, dword ptr [esp + 0x10]
// 00535433  8bda                 mov ebx, edx
// 00535435  c1c305               rol ebx, 5
// 00535438  03dd                 add ebx, ebp
// 0053543a  03580c               add ebx, dword ptr [eax + 0xc]
// 0053543d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00535441  c1cf02               ror edi, 2
// 00535444  33ef                 xor ebp, edi
// 00535446  8db41e9979825a       lea esi, [esi + ebx + 0x5a827999]
// 0053544d  23ea                 and ebp, edx
// 0053544f  336c2418             xor ebp, dword ptr [esp + 0x18]
// 00535453  8bde                 mov ebx, esi
// 00535455  c1c305               rol ebx, 5
// 00535458  03dd                 add ebx, ebp
// 0053545a  035810               add ebx, dword ptr [eax + 0x10]
// 0053545d  897c2424             mov dword ptr [esp + 0x24], edi
// 00535461  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00535465  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00535469  c1ca02               ror edx, 2
// 0053546c  33ea                 xor ebp, edx
// 0053546e  8dbc1f9979825a       lea edi, [edi + ebx + 0x5a827999]
// 00535475  23ee                 and ebp, esi
// 00535477  336c2424             xor ebp, dword ptr [esp + 0x24]
// 0053547b  8bdf                 mov ebx, edi
// 0053547d  c1c305               rol ebx, 5
// 00535480  89542414             mov dword ptr [esp + 0x14], edx
// 00535484  03dd                 add ebx, ebp
// 00535486  035814               add ebx, dword ptr [eax + 0x14]
// 00535489  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0053548d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00535491  8d941a9979825a       lea edx, [edx + ebx + 0x5a827999]
// 00535498  c1ce02               ror esi, 2
// 0053549b  33ee                 xor ebp, esi
// 0053549d  23ef                 and ebp, edi
// 0053549f  336c2414             xor ebp, dword ptr [esp + 0x14]
// 005354a3  8bda                 mov ebx, edx
// 005354a5  c1c305               rol ebx, 5
// 005354a8  03dd                 add ebx, ebp
// 005354aa  035818               add ebx, dword ptr [eax + 0x18]
// 005354ad  c1cf02               ror edi, 2
// 005354b0  89742410             mov dword ptr [esp + 0x10], esi
// 005354b4  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005354b8  8b742424             mov esi, dword ptr [esp + 0x24]
// 005354bc  33ef                 xor ebp, edi
// 005354be  23ea                 and ebp, edx
// 005354c0  336c2410             xor ebp, dword ptr [esp + 0x10]
// 005354c4  8db41e9979825a       lea esi, [esi + ebx + 0x5a827999]
// 005354cb  8bde                 mov ebx, esi
// 005354cd  c1c305               rol ebx, 5
// 005354d0  03dd                 add ebx, ebp
// 005354d2  03581c               add ebx, dword ptr [eax + 0x1c]
// 005354d5  c1ca02               ror edx, 2
// 005354d8  897c2428             mov dword ptr [esp + 0x28], edi
// 005354dc  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005354e0  8dbc1f9979825a       lea edi, [edi + ebx + 0x5a827999]
// 005354e7  89542418             mov dword ptr [esp + 0x18], edx
// 005354eb  8bea                 mov ebp, edx
// 005354ed  8b542428             mov edx, dword ptr [esp + 0x28]
// 005354f1  33ea                 xor ebp, edx
// 005354f3  23ee                 and ebp, esi
// 005354f5  33ea                 xor ebp, edx
// 005354f7  8b542410             mov edx, dword ptr [esp + 0x10]
// 005354fb  8bdf                 mov ebx, edi
// 005354fd  c1c305               rol ebx, 5
// 00535500  035820               add ebx, dword ptr [eax + 0x20]
// 00535503  03eb                 add ebp, ebx
// 00535505  8d942a9979825a       lea edx, [edx + ebp + 0x5a827999]
// 0053550c  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00535510  c1ce02               ror esi, 2
// 00535513  33ee                 xor ebp, esi
// 00535515  23ef                 and ebp, edi
// 00535517  336c2418             xor ebp, dword ptr [esp + 0x18]
// 0053551b  8bda                 mov ebx, edx
// 0053551d  c1c305               rol ebx, 5
// 00535520  03dd                 add ebx, ebp
// 00535522  035824               add ebx, dword ptr [eax + 0x24]
// 00535525  c1cf02               ror edi, 2
// 00535528  89742424             mov dword ptr [esp + 0x24], esi
// 0053552c  8b742428             mov esi, dword ptr [esp + 0x28]
// 00535530  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00535534  33ef                 xor ebp, edi
// 00535536  8db41e9979825a       lea esi, [esi + ebx + 0x5a827999]
// 0053553d  23ea                 and ebp, edx
// 0053553f  336c2424             xor ebp, dword ptr [esp + 0x24]
// 00535543  8bde                 mov ebx, esi
// 00535545  c1c305               rol ebx, 5
// 00535548  03dd                 add ebx, ebp
// 0053554a  035828               add ebx, dword ptr [eax + 0x28]
// 0053554d  c1ca02               ror edx, 2
// 00535550  897c2414             mov dword ptr [esp + 0x14], edi
// 00535554  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00535558  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0053555c  33ea                 xor ebp, edx
// 0053555e  8dbc1f9979825a       lea edi, [edi + ebx + 0x5a827999]
// 00535565  23ee                 and ebp, esi
// 00535567  336c2414             xor ebp, dword ptr [esp + 0x14]
// 0053556b  8bdf                 mov ebx, edi
// 0053556d  c1c305               rol ebx, 5
// 00535570  03dd                 add ebx, ebp
// 00535572  03582c               add ebx, dword ptr [eax + 0x2c]
// 00535575  89542410             mov dword ptr [esp + 0x10], edx
// 00535579  8b542424             mov edx, dword ptr [esp + 0x24]
// 0053557d  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00535581  8d9c1a9979825a       lea ebx, [edx + ebx + 0x5a827999]
// 00535588  c1ce02               ror esi, 2
// 0053558b  8bd3                 mov edx, ebx
// 0053558d  89742428             mov dword ptr [esp + 0x28], esi
// 00535591  c1c205               rol edx, 5
// 00535594  33ee                 xor ebp, esi
// 00535596  23ef                 and ebp, edi
// 00535598  336c2410             xor ebp, dword ptr [esp + 0x10]
// 0053559c  8b742414             mov esi, dword ptr [esp + 0x14]
// 005355a0  03d5                 add edx, ebp
// 005355a2  035030               add edx, dword ptr [eax + 0x30]
// 005355a5  c1cf02               ror edi, 2
// 005355a8  8db4169979825a       lea esi, [esi + edx + 0x5a827999]
// 005355af  8b5034               mov edx, dword ptr [eax + 0x34]
// 005355b2  89742414             mov dword ptr [esp + 0x14], esi
// 005355b6  897c2418             mov dword ptr [esp + 0x18], edi
// 005355ba  8bee                 mov ebp, esi
// 005355bc  8b742428             mov esi, dword ptr [esp + 0x28]
// 005355c0  33fe                 xor edi, esi
// 005355c2  23fb                 and edi, ebx
// 005355c4  c1c505               rol ebp, 5
// 005355c7  03ea                 add ebp, edx
// 005355c9  33fe                 xor edi, esi
// 005355cb  8b742410             mov esi, dword ptr [esp + 0x10]
// 005355cf  03fd                 add edi, ebp
// 005355d1  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005355d5  335020               xor edx, dword ptr [eax + 0x20]
// 005355d8  c1cb02               ror ebx, 2
// 005355db  33eb                 xor ebp, ebx
// 005355dd  236c2414             and ebp, dword ptr [esp + 0x14]
// 005355e1  335008               xor edx, dword ptr [eax + 8]
// 005355e4  336c2418             xor ebp, dword ptr [esp + 0x18]
// 005355e8  3310                 xor edx, dword ptr [eax]
// 005355ea  8db43e9979825a       lea esi, [esi + edi + 0x5a827999]
// 005355f1  8bfe                 mov edi, esi
// 005355f3  c1c705               rol edi, 5
// 005355f6  03fd                 add edi, ebp
// 005355f8  037838               add edi, dword ptr [eax + 0x38]
// 005355fb  895c2424             mov dword ptr [esp + 0x24], ebx
// 005355ff  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00535603  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00535607  8d9c3b9979825a       lea ebx, [ebx + edi + 0x5a827999]
// 0053560e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00535612  c1cf02               ror edi, 2
// 00535615  33ef                 xor ebp, edi
// 00535617  23ee                 and ebp, esi
// 00535619  336c2424             xor ebp, dword ptr [esp + 0x24]
// 0053561d  895c2428             mov dword ptr [esp + 0x28], ebx
// 00535621  c1c305               rol ebx, 5
// 00535624  03dd                 add ebx, ebp
// 00535626  03583c               add ebx, dword ptr [eax + 0x3c]
// 00535629  c1ce02               ror esi, 2
// 0053562c  d1c2                 rol edx, 1
// 0053562e  8954241c             mov dword ptr [esp + 0x1c], edx
// 00535632  8910                 mov dword ptr [eax], edx
// 00535634  897c2414             mov dword ptr [esp + 0x14], edi
// 00535638  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0053563c  8b542414             mov edx, dword ptr [esp + 0x14]
// 00535640  8dbc1f9979825a       lea edi, [edi + ebx + 0x5a827999]
// 00535647  8bda                 mov ebx, edx
// 00535649  33de                 xor ebx, esi
// 0053564b  89742410             mov dword ptr [esp + 0x10], esi
// 0053564f  8bf3                 mov esi, ebx
// 00535651  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00535655  23f3                 and esi, ebx
// 00535657  33f2                 xor esi, edx
// 00535659  8b542424             mov edx, dword ptr [esp + 0x24]
// 0053565d  8bef                 mov ebp, edi
// 0053565f  c1c505               rol ebp, 5
// 00535662  036c241c             add ebp, dword ptr [esp + 0x1c]
// 00535666  03f5                 add esi, ebp
// 00535668  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0053566c  8db4329979825a       lea esi, [edx + esi + 0x5a827999]
// 00535673  8b5038               mov edx, dword ptr [eax + 0x38]
// 00535676  33500c               xor edx, dword ptr [eax + 0xc]
// 00535679  c1cb02               ror ebx, 2
// 0053567c  335004               xor edx, dword ptr [eax + 4]
// 0053567f  89742424             mov dword ptr [esp + 0x24], esi
// 00535683  335024               xor edx, dword ptr [eax + 0x24]
// 00535686  33eb                 xor ebp, ebx
// 00535688  d1c2                 rol edx, 1
// 0053568a  c1c605               rol esi, 5
// 0053568d  895c2428             mov dword ptr [esp + 0x28], ebx
// 00535691  895004               mov dword ptr [eax + 4], edx
// 00535694  23ef                 and ebp, edi
// 00535696  336c2410             xor ebp, dword ptr [esp + 0x10]
// 0053569a  03f2                 add esi, edx
// 0053569c  8b542414             mov edx, dword ptr [esp + 0x14]
// 005356a0  03ee                 add ebp, esi
// 005356a2  8db42a9979825a       lea esi, [edx + ebp + 0x5a827999]
// 005356a9  8b5028               mov edx, dword ptr [eax + 0x28]
// 005356ac  335010               xor edx, dword ptr [eax + 0x10]
// 005356af  c1cf02               ror edi, 2
// 005356b2  335008               xor edx, dword ptr [eax + 8]
// 005356b5  897c2418             mov dword ptr [esp + 0x18], edi
// 005356b9  33503c               xor edx, dword ptr [eax + 0x3c]
// 005356bc  337c2428             xor edi, dword ptr [esp + 0x28]
// 005356c0  d1c2                 rol edx, 1
// 005356c2  237c2424             and edi, dword ptr [esp + 0x24]
// 005356c6  895008               mov dword ptr [eax + 8], edx
// 005356c9  337c2428             xor edi, dword ptr [esp + 0x28]
// 005356cd  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005356d1  8bde                 mov ebx, esi
// 005356d3  c1c305               rol ebx, 5
// 005356d6  03da                 add ebx, edx
// 005356d8  8b542410             mov edx, dword ptr [esp + 0x10]
// 005356dc  03fb                 add edi, ebx
// 005356de  8dbc3a9979825a       lea edi, [edx + edi + 0x5a827999]
// 005356e5  8b542424             mov edx, dword ptr [esp + 0x24]
// 005356e9  c1ca02               ror edx, 2
// 005356ec  8bda                 mov ebx, edx
// 005356ee  8b500c               mov edx, dword ptr [eax + 0xc]
// 005356f1  3310                 xor edx, dword ptr [eax]
// 005356f3  33eb                 xor ebp, ebx
// 005356f5  33502c               xor edx, dword ptr [eax + 0x2c]
// 005356f8  23ee                 and ebp, esi
// 005356fa  335014               xor edx, dword ptr [eax + 0x14]
// 005356fd  336c2418             xor ebp, dword ptr [esp + 0x18]
// 00535701  d1c2                 rol edx, 1
// 00535703  89500c               mov dword ptr [eax + 0xc], edx
// 00535706  897c2410             mov dword ptr [esp + 0x10], edi
// 0053570a  c1c705               rol edi, 5
// 0053570d  03fa                 add edi, edx
// 0053570f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00535713  03ef                 add ebp, edi
// 00535715  8dbc2a9979825a       lea edi, [edx + ebp + 0x5a827999]
// 0053571c  8b5030               mov edx, dword ptr [eax + 0x30]
// 0053571f  335018               xor edx, dword ptr [eax + 0x18]
// 00535722  c1ce02               ror esi, 2
// 00535725  335010               xor edx, dword ptr [eax + 0x10]
// 00535728  895c2424             mov dword ptr [esp + 0x24], ebx
// 0053572c  335004               xor edx, dword ptr [eax + 4]
// 0053572f  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00535733  d1c2                 rol edx, 1
// 00535735  33ee                 xor ebp, esi
// 00535737  89742414             mov dword ptr [esp + 0x14], esi
// 0053573b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053573f  33ee                 xor ebp, esi
// 00535741  895010               mov dword ptr [eax + 0x10], edx
// 00535744  8bdf                 mov ebx, edi
// 00535746  c1c305               rol ebx, 5
// 00535749  03da                 add ebx, edx
// 0053574b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053574f  03eb                 add ebp, ebx
// 00535751  8dac2aa1ebd96e       lea ebp, [edx + ebp + 0x6ed9eba1]
// 00535758  8b5008               mov edx, dword ptr [eax + 8]
// 0053575b  335034               xor edx, dword ptr [eax + 0x34]
// 0053575e  c1ce02               ror esi, 2
// 00535761  33501c               xor edx, dword ptr [eax + 0x1c]
// 00535764  8bde                 mov ebx, esi
// 00535766  335014               xor edx, dword ptr [eax + 0x14]
// 00535769  8b742414             mov esi, dword ptr [esp + 0x14]
// 0053576d  d1c2                 rol edx, 1
// 0053576f  33f3                 xor esi, ebx
// 00535771  896c2418             mov dword ptr [esp + 0x18], ebp
// 00535775  c1c505               rol ebp, 5
// 00535778  03ea                 add ebp, edx
// 0053577a  33f7                 xor esi, edi
// 0053577c  895014               mov dword ptr [eax + 0x14], edx
// 0053577f  8b542424             mov edx, dword ptr [esp + 0x24]
// 00535783  03f5                 add esi, ebp
// 00535785  c1cf02               ror edi, 2
// 00535788  8db432a1ebd96e       lea esi, [edx + esi + 0x6ed9eba1]
// 0053578f  8b5038               mov edx, dword ptr [eax + 0x38]
// 00535792  895c2410             mov dword ptr [esp + 0x10], ebx
// 00535796  897c2428             mov dword ptr [esp + 0x28], edi
// 0053579a  335020               xor edx, dword ptr [eax + 0x20]
// 0053579d  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005357a1  335018               xor edx, dword ptr [eax + 0x18]
// 005357a4  33fb                 xor edi, ebx
// 005357a6  33500c               xor edx, dword ptr [eax + 0xc]
// 005357a9  8bee                 mov ebp, esi
// 005357ab  d1c2                 rol edx, 1
// 005357ad  c1c505               rol ebp, 5
// 005357b0  03ea                 add ebp, edx
// 005357b2  895018               mov dword ptr [eax + 0x18], edx
// 005357b5  8b542414             mov edx, dword ptr [esp + 0x14]
// 005357b9  8bdf                 mov ebx, edi
// 005357bb  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005357bf  33df                 xor ebx, edi
// 005357c1  03dd                 add ebx, ebp
// 005357c3  8d9c1aa1ebd96e       lea ebx, [edx + ebx + 0x6ed9eba1]
// 005357ca  8b542418             mov edx, dword ptr [esp + 0x18]
// 005357ce  c1ca02               ror edx, 2
// 005357d1  8bea                 mov ebp, edx
// 005357d3  8b5010               mov edx, dword ptr [eax + 0x10]
// 005357d6  33503c               xor edx, dword ptr [eax + 0x3c]
// 005357d9  896c2418             mov dword ptr [esp + 0x18], ebp
// 005357dd  335024               xor edx, dword ptr [eax + 0x24]
// 005357e0  33ee                 xor ebp, esi
// 005357e2  33501c               xor edx, dword ptr [eax + 0x1c]
// 005357e5  33ef                 xor ebp, edi
// 005357e7  d1c2                 rol edx, 1
// 005357e9  89501c               mov dword ptr [eax + 0x1c], edx
// 005357ec  895c2414             mov dword ptr [esp + 0x14], ebx
// 005357f0  c1c305               rol ebx, 5
// 005357f3  03da                 add ebx, edx
// 005357f5  8b542410             mov edx, dword ptr [esp + 0x10]
// 005357f9  03eb                 add ebp, ebx
// 005357fb  8dbc2aa1ebd96e       lea edi, [edx + ebp + 0x6ed9eba1]
// 00535802  8b5028               mov edx, dword ptr [eax + 0x28]
// 00535805  335020               xor edx, dword ptr [eax + 0x20]
// 00535808  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0053580c  3310                 xor edx, dword ptr [eax]
// 0053580e  c1ce02               ror esi, 2
// 00535811  335014               xor edx, dword ptr [eax + 0x14]
// 00535814  33ee                 xor ebp, esi
// 00535816  d1c2                 rol edx, 1
// 00535818  895020               mov dword ptr [eax + 0x20], edx
// 0053581b  89742424             mov dword ptr [esp + 0x24], esi
// 0053581f  8b742414             mov esi, dword ptr [esp + 0x14]
// 00535823  33ee                 xor ebp, esi
// 00535825  8bdf                 mov ebx, edi
// 00535827  c1c305               rol ebx, 5
// 0053582a  03da                 add ebx, edx
// 0053582c  8b542428             mov edx, dword ptr [esp + 0x28]
// 00535830  03eb                 add ebp, ebx
// 00535832  8dac2aa1ebd96e       lea ebp, [edx + ebp + 0x6ed9eba1]
// 00535839  8b5018               mov edx, dword ptr [eax + 0x18]
// 0053583c  335004               xor edx, dword ptr [eax + 4]
// 0053583f  c1ce02               ror esi, 2
// 00535842  33502c               xor edx, dword ptr [eax + 0x2c]
// 00535845  8bde                 mov ebx, esi
// 00535847  335024               xor edx, dword ptr [eax + 0x24]
// 0053584a  8b742424             mov esi, dword ptr [esp + 0x24]
// 0053584e  d1c2                 rol edx, 1
// 00535850  33f3                 xor esi, ebx
// 00535852  896c2428             mov dword ptr [esp + 0x28], ebp
// 00535856  c1c505               rol ebp, 5
// 00535859  03ea                 add ebp, edx
// 0053585b  895024               mov dword ptr [eax + 0x24], edx
// 0053585e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00535862  33f7                 xor esi, edi
// 00535864  03f5                 add esi, ebp
// 00535866  8db432a1ebd96e       lea esi, [edx + esi + 0x6ed9eba1]
// 0053586d  8b5030               mov edx, dword ptr [eax + 0x30]
// 00535870  335028               xor edx, dword ptr [eax + 0x28]
// 00535873  c1cf02               ror edi, 2
// 00535876  335008               xor edx, dword ptr [eax + 8]
// 00535879  8bee                 mov ebp, esi
// 0053587b  33501c               xor edx, dword ptr [eax + 0x1c]
// 0053587e  895c2414             mov dword ptr [esp + 0x14], ebx
// 00535882  d1c2                 rol edx, 1
// 00535884  897c2410             mov dword ptr [esp + 0x10], edi
// 00535888  895028               mov dword ptr [eax + 0x28], edx
// 0053588b  c1c505               rol ebp, 5
// 0053588e  03ea                 add ebp, edx
// 00535890  33df                 xor ebx, edi
// 00535892  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00535896  8b542424             mov edx, dword ptr [esp + 0x24]
// 0053589a  33df                 xor ebx, edi
// 0053589c  03dd                 add ebx, ebp
// 0053589e  8d9c1aa1ebd96e       lea ebx, [edx + ebx + 0x6ed9eba1]
// 005358a5  8b5020               mov edx, dword ptr [eax + 0x20]
// 005358a8  33500c               xor edx, dword ptr [eax + 0xc]
// 005358ab  c1cf02               ror edi, 2
// 005358ae  335034               xor edx, dword ptr [eax + 0x34]
// 005358b1  897c2428             mov dword ptr [esp + 0x28], edi
// 005358b5  33502c               xor edx, dword ptr [eax + 0x2c]
// 005358b8  895c2424             mov dword ptr [esp + 0x24], ebx
// 005358bc  d1c2                 rol edx, 1
// 005358be  89502c               mov dword ptr [eax + 0x2c], edx
// 005358c1  c1c305               rol ebx, 5
// 005358c4  03da                 add ebx, edx
// 005358c6  8b542414             mov edx, dword ptr [esp + 0x14]
// 005358ca  8bfe                 mov edi, esi
// 005358cc  337c2410             xor edi, dword ptr [esp + 0x10]
// 005358d0  337c2428             xor edi, dword ptr [esp + 0x28]
// 005358d4  03fb                 add edi, ebx
// 005358d6  8dbc3aa1ebd96e       lea edi, [edx + edi + 0x6ed9eba1]
// 005358dd  8b5038               mov edx, dword ptr [eax + 0x38]
// 005358e0  335030               xor edx, dword ptr [eax + 0x30]
// 005358e3  c1ce02               ror esi, 2
// 005358e6  335010               xor edx, dword ptr [eax + 0x10]
// 005358e9  89742418             mov dword ptr [esp + 0x18], esi
// 005358ed  335024               xor edx, dword ptr [eax + 0x24]
// 005358f0  33742424             xor esi, dword ptr [esp + 0x24]
// 005358f4  d1c2                 rol edx, 1
// 005358f6  33742428             xor esi, dword ptr [esp + 0x28]
// 005358fa  895030               mov dword ptr [eax + 0x30], edx
// 005358fd  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00535901  8bdf                 mov ebx, edi
// 00535903  c1c305               rol ebx, 5
// 00535906  03da                 add ebx, edx
// 00535908  8b542410             mov edx, dword ptr [esp + 0x10]
// 0053590c  03f3                 add esi, ebx
// 0053590e  8db432a1ebd96e       lea esi, [edx + esi + 0x6ed9eba1]
// 00535915  8b542424             mov edx, dword ptr [esp + 0x24]
// 00535919  c1ca02               ror edx, 2
// 0053591c  8bda                 mov ebx, edx
// 0053591e  8b5028               mov edx, dword ptr [eax + 0x28]
// 00535921  33503c               xor edx, dword ptr [eax + 0x3c]
// 00535924  33eb                 xor ebp, ebx
// 00535926  335034               xor edx, dword ptr [eax + 0x34]
// 00535929  33ef                 xor ebp, edi
// 0053592b  335014               xor edx, dword ptr [eax + 0x14]
// 0053592e  89742410             mov dword ptr [esp + 0x10], esi
// 00535932  d1c2                 rol edx, 1
// 00535934  c1c605               rol esi, 5
// 00535937  03f2                 add esi, edx
// 00535939  895034               mov dword ptr [eax + 0x34], edx
// 0053593c  8b542428             mov edx, dword ptr [esp + 0x28]
// 00535940  03ee                 add ebp, esi
// 00535942  8db42aa1ebd96e       lea esi, [edx + ebp + 0x6ed9eba1]
// 00535949  8b5038               mov edx, dword ptr [eax + 0x38]
// 0053594c  335018               xor edx, dword ptr [eax + 0x18]
// 0053594f  c1cf02               ror edi, 2
// 00535952  3310                 xor edx, dword ptr [eax]
// 00535954  895c2424             mov dword ptr [esp + 0x24], ebx
// 00535958  33502c               xor edx, dword ptr [eax + 0x2c]
// 0053595b  33df                 xor ebx, edi
// 0053595d  d1c2                 rol edx, 1
// 0053595f  897c2414             mov dword ptr [esp + 0x14], edi
// 00535963  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00535967  8bee                 mov ebp, esi
// 00535969  c1c505               rol ebp, 5
// 0053596c  03ea                 add ebp, edx
// 0053596e  33df                 xor ebx, edi
// 00535970  895038               mov dword ptr [eax + 0x38], edx
// 00535973  8b542418             mov edx, dword ptr [esp + 0x18]
// 00535977  03dd                 add ebx, ebp
// 00535979  8dac1aa1ebd96e       lea ebp, [edx + ebx + 0x6ed9eba1]
// 00535980  8b5030               mov edx, dword ptr [eax + 0x30]
// 00535983  c1cf02               ror edi, 2
// 00535986  8bdf                 mov ebx, edi
// 00535988  896c2418             mov dword ptr [esp + 0x18], ebp
// 0053598c  895c2410             mov dword ptr [esp + 0x10], ebx
// 00535990  335004               xor edx, dword ptr [eax + 4]
// 00535993  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00535997  33503c               xor edx, dword ptr [eax + 0x3c]
// 0053599a  33fb                 xor edi, ebx
// 0053599c  33501c               xor edx, dword ptr [eax + 0x1c]
// 0053599f  33fe                 xor edi, esi
// 005359a1  d1c2                 rol edx, 1
// 005359a3  c1c505               rol ebp, 5
// 005359a6  03ea                 add ebp, edx
// 005359a8  89503c               mov dword ptr [eax + 0x3c], edx
// 005359ab  8b542424             mov edx, dword ptr [esp + 0x24]
// 005359af  03fd                 add edi, ebp
// 005359b1  8dbc3aa1ebd96e       lea edi, [edx + edi + 0x6ed9eba1]
// 005359b8  8b5020               mov edx, dword ptr [eax + 0x20]
// 005359bb  335008               xor edx, dword ptr [eax + 8]
// 005359be  c1ce02               ror esi, 2
// 005359c1  3310                 xor edx, dword ptr [eax]
// 005359c3  89742428             mov dword ptr [esp + 0x28], esi
// 005359c7  335034               xor edx, dword ptr [eax + 0x34]
// 005359ca  8b742418             mov esi, dword ptr [esp + 0x18]
// 005359ce  d1c2                 rol edx, 1
// 005359d0  33f3                 xor esi, ebx
// 005359d2  8910                 mov dword ptr [eax], edx
// 005359d4  8bef                 mov ebp, edi
// 005359d6  c1c505               rol ebp, 5
// 005359d9  03ea                 add ebp, edx
// 005359db  8b542414             mov edx, dword ptr [esp + 0x14]
// 005359df  8bde                 mov ebx, esi
// 005359e1  8b742428             mov esi, dword ptr [esp + 0x28]
// 005359e5  33de                 xor ebx, esi
// 005359e7  03dd                 add ebx, ebp
// 005359e9  8d9c1aa1ebd96e       lea ebx, [edx + ebx + 0x6ed9eba1]
// 005359f0  8b542418             mov edx, dword ptr [esp + 0x18]
// 005359f4  c1ca02               ror edx, 2
// 005359f7  8bea                 mov ebp, edx
// 005359f9  8b5038               mov edx, dword ptr [eax + 0x38]
// 005359fc  33500c               xor edx, dword ptr [eax + 0xc]
// 005359ff  896c2418             mov dword ptr [esp + 0x18], ebp
// 00535a03  335004               xor edx, dword ptr [eax + 4]
// 00535a06  33ef                 xor ebp, edi
// 00535a08  335024               xor edx, dword ptr [eax + 0x24]
// 00535a0b  33ee                 xor ebp, esi
// 00535a0d  d1c2                 rol edx, 1
// 00535a0f  895c2414             mov dword ptr [esp + 0x14], ebx
// 00535a13  c1c305               rol ebx, 5
// 00535a16  03da                 add ebx, edx
// 00535a18  03eb                 add ebp, ebx
// 00535a1a  895004               mov dword ptr [eax + 4], edx
// 00535a1d  8b542410             mov edx, dword ptr [esp + 0x10]
// 00535a21  8db42aa1ebd96e       lea esi, [edx + ebp + 0x6ed9eba1]
// 00535a28  8b5028               mov edx, dword ptr [eax + 0x28]
// 00535a2b  335010               xor edx, dword ptr [eax + 0x10]
// 00535a2e  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00535a32  335008               xor edx, dword ptr [eax + 8]
// 00535a35  c1cf02               ror edi, 2
// 00535a38  33503c               xor edx, dword ptr [eax + 0x3c]
// 00535a3b  33ef                 xor ebp, edi
// 00535a3d  d1c2                 rol edx, 1
// 00535a3f  897c2424             mov dword ptr [esp + 0x24], edi
// 00535a43  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00535a47  33ef                 xor ebp, edi
// 00535a49  895008               mov dword ptr [eax + 8], edx
// 00535a4c  8bde                 mov ebx, esi
// 00535a4e  c1c305               rol ebx, 5
// 00535a51  03da                 add ebx, edx
// 00535a53  8b542428             mov edx, dword ptr [esp + 0x28]
// 00535a57  03eb                 add ebp, ebx
// 00535a59  8dac2aa1ebd96e       lea ebp, [edx + ebp + 0x6ed9eba1]
// 00535a60  8b500c               mov edx, dword ptr [eax + 0xc]
// 00535a63  3310                 xor edx, dword ptr [eax]
// 00535a65  c1cf02               ror edi, 2
// 00535a68  33502c               xor edx, dword ptr [eax + 0x2c]
// 00535a6b  8bdf                 mov ebx, edi
// 00535a6d  335014               xor edx, dword ptr [eax + 0x14]
// 00535a70  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00535a74  d1c2                 rol edx, 1
// 00535a76  896c2428             mov dword ptr [esp + 0x28], ebp
// 00535a7a  895c2414             mov dword ptr [esp + 0x14], ebx
// 00535a7e  89500c               mov dword ptr [eax + 0xc], edx
// 00535a81  c1c505               rol ebp, 5
// 00535a84  03ea                 add ebp, edx
// 00535a86  33fb                 xor edi, ebx
// 00535a88  8b542418             mov edx, dword ptr [esp + 0x18]
// 00535a8c  33fe                 xor edi, esi
// 00535a8e  03fd                 add edi, ebp
// 00535a90  8dbc3aa1ebd96e       lea edi, [edx + edi + 0x6ed9eba1]
// 00535a97  8b5030               mov edx, dword ptr [eax + 0x30]
// 00535a9a  335018               xor edx, dword ptr [eax + 0x18]
// 00535a9d  c1ce02               ror esi, 2
// 00535aa0  335010               xor edx, dword ptr [eax + 0x10]
// 00535aa3  33de                 xor ebx, esi
// 00535aa5  335004               xor edx, dword ptr [eax + 4]
// 00535aa8  89742410             mov dword ptr [esp + 0x10], esi
// 00535aac  8b742428             mov esi, dword ptr [esp + 0x28]
// 00535ab0  d1c2                 rol edx, 1
// 00535ab2  33de                 xor ebx, esi
// 00535ab4  895010               mov dword ptr [eax + 0x10], edx
// 00535ab7  8bef                 mov ebp, edi
// 00535ab9  c1c505               rol ebp, 5
// 00535abc  03ea                 add ebp, edx
// 00535abe  8b542424             mov edx, dword ptr [esp + 0x24]
// 00535ac2  03dd                 add ebx, ebp
// 00535ac4  8d9c1aa1ebd96e       lea ebx, [edx + ebx + 0x6ed9eba1]
// 00535acb  8b5008               mov edx, dword ptr [eax + 8]
// 00535ace  335034               xor edx, dword ptr [eax + 0x34]
// 00535ad1  c1ce02               ror esi, 2
// 00535ad4  33501c               xor edx, dword ptr [eax + 0x1c]
// 00535ad7  89742428             mov dword ptr [esp + 0x28], esi
// 00535adb  335014               xor edx, dword ptr [eax + 0x14]
// 00535ade  895c2424             mov dword ptr [esp + 0x24], ebx
// 00535ae2  d1c2                 rol edx, 1
// 00535ae4  895014               mov dword ptr [eax + 0x14], edx
// 00535ae7  c1c305               rol ebx, 5
// 00535aea  03da                 add ebx, edx
// 00535aec  8b542414             mov edx, dword ptr [esp + 0x14]
// 00535af0  8bf7                 mov esi, edi
// 00535af2  33742410             xor esi, dword ptr [esp + 0x10]
// 00535af6  33742428             xor esi, dword ptr [esp + 0x28]
// 00535afa  03f3                 add esi, ebx
// 00535afc  8db432a1ebd96e       lea esi, [edx + esi + 0x6ed9eba1]
// 00535b03  8b5038               mov edx, dword ptr [eax + 0x38]
// 00535b06  335020               xor edx, dword ptr [eax + 0x20]
// 00535b09  c1cf02               ror edi, 2
// 00535b0c  335018               xor edx, dword ptr [eax + 0x18]
// 00535b0f  897c2418             mov dword ptr [esp + 0x18], edi
// 00535b13  33500c               xor edx, dword ptr [eax + 0xc]
// 00535b16  337c2424             xor edi, dword ptr [esp + 0x24]
// 00535b1a  d1c2                 rol edx, 1
// 00535b1c  337c2428             xor edi, dword ptr [esp + 0x28]
// 00535b20  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00535b24  895018               mov dword ptr [eax + 0x18], edx
// 00535b27  8bde                 mov ebx, esi
// 00535b29  c1c305               rol ebx, 5
// 00535b2c  03da                 add ebx, edx
// 00535b2e  8b542410             mov edx, dword ptr [esp + 0x10]
// 00535b32  03fb                 add edi, ebx
// 00535b34  8d9c3aa1ebd96e       lea ebx, [edx + edi + 0x6ed9eba1]
// 00535b3b  8b542424             mov edx, dword ptr [esp + 0x24]
// 00535b3f  c1ca02               ror edx, 2
// 00535b42  8bfa                 mov edi, edx
// 00535b44  8b5010               mov edx, dword ptr [eax + 0x10]
// 00535b47  33503c               xor edx, dword ptr [eax + 0x3c]
// 00535b4a  895c2410             mov dword ptr [esp + 0x10], ebx
// 00535b4e  335024               xor edx, dword ptr [eax + 0x24]
// 00535b51  33ef                 xor ebp, edi
// 00535b53  33501c               xor edx, dword ptr [eax + 0x1c]
// 00535b56  33ee                 xor ebp, esi
// 00535b58  d1c2                 rol edx, 1
// 00535b5a  c1c305               rol ebx, 5
// 00535b5d  03da                 add ebx, edx
// 00535b5f  89501c               mov dword ptr [eax + 0x1c], edx
// 00535b62  8b542428             mov edx, dword ptr [esp + 0x28]
// 00535b66  03eb                 add ebp, ebx
// 00535b68  8d9c2aa1ebd96e       lea ebx, [edx + ebp + 0x6ed9eba1]
// 00535b6f  8b5028               mov edx, dword ptr [eax + 0x28]
// 00535b72  335020               xor edx, dword ptr [eax + 0x20]
// 00535b75  c1ce02               ror esi, 2
// 00535b78  3310                 xor edx, dword ptr [eax]
// 00535b7a  897c2424             mov dword ptr [esp + 0x24], edi
// 00535b7e  895c2428             mov dword ptr [esp + 0x28], ebx
// 00535b82  89742414             mov dword ptr [esp + 0x14], esi
// 00535b86  335014               xor edx, dword ptr [eax + 0x14]
// 00535b89  8bee                 mov ebp, esi
// 00535b8b  0b6c2410             or ebp, dword ptr [esp + 0x10]
// 00535b8f  23742410             and esi, dword ptr [esp + 0x10]
// 00535b93  23ef                 and ebp, edi
// 00535b95  d1c2                 rol edx, 1
// 00535b97  895020               mov dword ptr [eax + 0x20], edx
// 00535b9a  0bee                 or ebp, esi
// 00535b9c  03ea                 add ebp, edx
// 00535b9e  036c2418             add ebp, dword ptr [esp + 0x18]
// 00535ba2  8b542410             mov edx, dword ptr [esp + 0x10]
// 00535ba6  c1c305               rol ebx, 5
// 00535ba9  c1ca02               ror edx, 2
// 00535bac  8bfa                 mov edi, edx
// 00535bae  8b5018               mov edx, dword ptr [eax + 0x18]
// 00535bb1  335004               xor edx, dword ptr [eax + 4]
// 00535bb4  8db42bdcbc1b8f       lea esi, [ebx + ebp - 0x70e44324]
// 00535bbb  33502c               xor edx, dword ptr [eax + 0x2c]
// 00535bbe  897c2410             mov dword ptr [esp + 0x10], edi
// 00535bc2  335024               xor edx, dword ptr [eax + 0x24]
// 00535bc5  0b7c2428             or edi, dword ptr [esp + 0x28]
// 00535bc9  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00535bcd  236c2428             and ebp, dword ptr [esp + 0x28]
// 00535bd1  237c2414             and edi, dword ptr [esp + 0x14]
// 00535bd5  d1c2                 rol edx, 1
// 00535bd7  0bfd                 or edi, ebp
// 00535bd9  03fa                 add edi, edx
// 00535bdb  037c2424             add edi, dword ptr [esp + 0x24]
// 00535bdf  895024               mov dword ptr [eax + 0x24], edx
// 00535be2  8b542428             mov edx, dword ptr [esp + 0x28]
// 00535be6  8bde                 mov ebx, esi
// 00535be8  c1c305               rol ebx, 5
// 00535beb  c1ca02               ror edx, 2
// 00535bee  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 00535bf5  8bda                 mov ebx, edx
// 00535bf7  8b5030               mov edx, dword ptr [eax + 0x30]
// 00535bfa  335028               xor edx, dword ptr [eax + 0x28]
// 00535bfd  895c2428             mov dword ptr [esp + 0x28], ebx
// 00535c01  335008               xor edx, dword ptr [eax + 8]
// 00535c04  8bee                 mov ebp, esi
// 00535c06  33501c               xor edx, dword ptr [eax + 0x1c]
// 00535c09  0beb                 or ebp, ebx
// 00535c0b  236c2410             and ebp, dword ptr [esp + 0x10]
// 00535c0f  d1c2                 rol edx, 1
// 00535c11  895028               mov dword ptr [eax + 0x28], edx
// 00535c14  8bde                 mov ebx, esi
// 00535c16  235c2428             and ebx, dword ptr [esp + 0x28]
// 00535c1a  897c2424             mov dword ptr [esp + 0x24], edi
// 00535c1e  0beb                 or ebp, ebx
// 00535c20  03ea                 add ebp, edx
// 00535c22  036c2414             add ebp, dword ptr [esp + 0x14]
// 00535c26  8b5020               mov edx, dword ptr [eax + 0x20]
// 00535c29  33500c               xor edx, dword ptr [eax + 0xc]
// 00535c2c  c1c705               rol edi, 5
// 00535c2f  335034               xor edx, dword ptr [eax + 0x34]
// 00535c32  c1ce02               ror esi, 2
// 00535c35  33502c               xor edx, dword ptr [eax + 0x2c]
// 00535c38  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 00535c3f  d1c2                 rol edx, 1
// 00535c41  8bde                 mov ebx, esi
// 00535c43  0b5c2424             or ebx, dword ptr [esp + 0x24]
// 00535c47  8bee                 mov ebp, esi
// 00535c49  235c2428             and ebx, dword ptr [esp + 0x28]
// 00535c4d  236c2424             and ebp, dword ptr [esp + 0x24]
// 00535c51  89502c               mov dword ptr [eax + 0x2c], edx
// 00535c54  0bdd                 or ebx, ebp
// 00535c56  03da                 add ebx, edx
// 00535c58  035c2410             add ebx, dword ptr [esp + 0x10]
// 00535c5c  8b542424             mov edx, dword ptr [esp + 0x24]
// 00535c60  897c2414             mov dword ptr [esp + 0x14], edi
// 00535c64  c1c705               rol edi, 5
// 00535c67  c1ca02               ror edx, 2
// 00535c6a  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 00535c71  8bda                 mov ebx, edx
// 00535c73  8b5038               mov edx, dword ptr [eax + 0x38]
// 00535c76  335030               xor edx, dword ptr [eax + 0x30]
// 00535c79  897c2410             mov dword ptr [esp + 0x10], edi
// 00535c7d  335010               xor edx, dword ptr [eax + 0x10]
// 00535c80  895c2424             mov dword ptr [esp + 0x24], ebx
// 00535c84  335024               xor edx, dword ptr [eax + 0x24]
// 00535c87  d1c2                 rol edx, 1
// 00535c89  0b5c2414             or ebx, dword ptr [esp + 0x14]
// 00535c8d  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00535c91  236c2414             and ebp, dword ptr [esp + 0x14]
// 00535c95  23de                 and ebx, esi
// 00535c97  0bdd                 or ebx, ebp
// 00535c99  03da                 add ebx, edx
// 00535c9b  035c2428             add ebx, dword ptr [esp + 0x28]
// 00535c9f  895030               mov dword ptr [eax + 0x30], edx
// 00535ca2  8b542414             mov edx, dword ptr [esp + 0x14]
// 00535ca6  c1c705               rol edi, 5
// 00535ca9  c1ca02               ror edx, 2
// 00535cac  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 00535cb3  8bda                 mov ebx, edx
// 00535cb5  8b5028               mov edx, dword ptr [eax + 0x28]
// 00535cb8  33503c               xor edx, dword ptr [eax + 0x3c]
// 00535cbb  895c2414             mov dword ptr [esp + 0x14], ebx
// 00535cbf  335034               xor edx, dword ptr [eax + 0x34]
// 00535cc2  0b5c2410             or ebx, dword ptr [esp + 0x10]
// 00535cc6  335014               xor edx, dword ptr [eax + 0x14]
// 00535cc9  235c2424             and ebx, dword ptr [esp + 0x24]
// 00535ccd  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00535cd1  236c2410             and ebp, dword ptr [esp + 0x10]
// 00535cd5  d1c2                 rol edx, 1
// 00535cd7  0bdd                 or ebx, ebp
// 00535cd9  03da                 add ebx, edx
// 00535cdb  895034               mov dword ptr [eax + 0x34], edx
// 00535cde  8b542410             mov edx, dword ptr [esp + 0x10]
// 00535ce2  897c2428             mov dword ptr [esp + 0x28], edi
// 00535ce6  c1c705               rol edi, 5
// 00535ce9  03de                 add ebx, esi
// 00535ceb  c1ca02               ror edx, 2
// 00535cee  8db43bdcbc1b8f       lea esi, [ebx + edi - 0x70e44324]
// 00535cf5  8bfa                 mov edi, edx
// 00535cf7  8b5038               mov edx, dword ptr [eax + 0x38]
// 00535cfa  335018               xor edx, dword ptr [eax + 0x18]
// 00535cfd  897c2410             mov dword ptr [esp + 0x10], edi
// 00535d01  3310                 xor edx, dword ptr [eax]
// 00535d03  0b7c2428             or edi, dword ptr [esp + 0x28]
// 00535d07  33502c               xor edx, dword ptr [eax + 0x2c]
// 00535d0a  237c2414             and edi, dword ptr [esp + 0x14]
// 00535d0e  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00535d12  236c2428             and ebp, dword ptr [esp + 0x28]
// 00535d16  d1c2                 rol edx, 1
// 00535d18  0bfd                 or edi, ebp
// 00535d1a  03fa                 add edi, edx
// 00535d1c  037c2424             add edi, dword ptr [esp + 0x24]
// 00535d20  895038               mov dword ptr [eax + 0x38], edx
// 00535d23  8b542428             mov edx, dword ptr [esp + 0x28]
// 00535d27  8bde                 mov ebx, esi
// 00535d29  c1c305               rol ebx, 5
// 00535d2c  c1ca02               ror edx, 2
// 00535d2f  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 00535d36  8bda                 mov ebx, edx
// 00535d38  8b5030               mov edx, dword ptr [eax + 0x30]
// 00535d3b  335004               xor edx, dword ptr [eax + 4]
// 00535d3e  8bee                 mov ebp, esi
// 00535d40  33503c               xor edx, dword ptr [eax + 0x3c]
// 00535d43  0beb                 or ebp, ebx
// 00535d45  33501c               xor edx, dword ptr [eax + 0x1c]
// 00535d48  236c2410             and ebp, dword ptr [esp + 0x10]
// 00535d4c  d1c2                 rol edx, 1
// 00535d4e  895c2428             mov dword ptr [esp + 0x28], ebx
// 00535d52  8bde                 mov ebx, esi
// 00535d54  235c2428             and ebx, dword ptr [esp + 0x28]
// 00535d58  89503c               mov dword ptr [eax + 0x3c], edx
// 00535d5b  0beb                 or ebp, ebx
// 00535d5d  03ea                 add ebp, edx
// 00535d5f  8b5020               mov edx, dword ptr [eax + 0x20]
// 00535d62  335008               xor edx, dword ptr [eax + 8]
// 00535d65  036c2414             add ebp, dword ptr [esp + 0x14]
// 00535d69  3310                 xor edx, dword ptr [eax]
// 00535d6b  897c2424             mov dword ptr [esp + 0x24], edi
// 00535d6f  335034               xor edx, dword ptr [eax + 0x34]
// 00535d72  c1c705               rol edi, 5
// 00535d75  c1ce02               ror esi, 2
// 00535d78  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 00535d7f  d1c2                 rol edx, 1
// 00535d81  897c2414             mov dword ptr [esp + 0x14], edi
// 00535d85  8910                 mov dword ptr [eax], edx
// 00535d87  c1c705               rol edi, 5
// 00535d8a  8bde                 mov ebx, esi
// 00535d8c  0b5c2424             or ebx, dword ptr [esp + 0x24]
// 00535d90  8bee                 mov ebp, esi
// 00535d92  235c2428             and ebx, dword ptr [esp + 0x28]
// 00535d96  236c2424             and ebp, dword ptr [esp + 0x24]
// 00535d9a  0bdd                 or ebx, ebp
// 00535d9c  03da                 add ebx, edx
// 00535d9e  035c2410             add ebx, dword ptr [esp + 0x10]
// 00535da2  8b542424             mov edx, dword ptr [esp + 0x24]
// 00535da6  c1ca02               ror edx, 2
// 00535da9  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 00535db0  8bda                 mov ebx, edx
// 00535db2  8b5038               mov edx, dword ptr [eax + 0x38]
// 00535db5  33500c               xor edx, dword ptr [eax + 0xc]
// 00535db8  895c2424             mov dword ptr [esp + 0x24], ebx
// 00535dbc  335004               xor edx, dword ptr [eax + 4]
// 00535dbf  0b5c2414             or ebx, dword ptr [esp + 0x14]
// 00535dc3  335024               xor edx, dword ptr [eax + 0x24]
// 00535dc6  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00535dca  236c2414             and ebp, dword ptr [esp + 0x14]
// 00535dce  d1c2                 rol edx, 1
// 00535dd0  23de                 and ebx, esi
// 00535dd2  0bdd                 or ebx, ebp
// 00535dd4  03da                 add ebx, edx
// 00535dd6  035c2428             add ebx, dword ptr [esp + 0x28]
// 00535dda  895004               mov dword ptr [eax + 4], edx
// 00535ddd  8b542414             mov edx, dword ptr [esp + 0x14]
// 00535de1  897c2410             mov dword ptr [esp + 0x10], edi
// 00535de5  c1c705               rol edi, 5
// 00535de8  c1ca02               ror edx, 2
// 00535deb  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 00535df2  8bda                 mov ebx, edx
// 00535df4  8b5028               mov edx, dword ptr [eax + 0x28]
// 00535df7  335010               xor edx, dword ptr [eax + 0x10]
// 00535dfa  895c2414             mov dword ptr [esp + 0x14], ebx
// 00535dfe  335008               xor edx, dword ptr [eax + 8]
// 00535e01  0b5c2410             or ebx, dword ptr [esp + 0x10]
// 00535e05  33503c               xor edx, dword ptr [eax + 0x3c]
// 00535e08  235c2424             and ebx, dword ptr [esp + 0x24]
// 00535e0c  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00535e10  236c2410             and ebp, dword ptr [esp + 0x10]
// 00535e14  d1c2                 rol edx, 1
// 00535e16  0bdd                 or ebx, ebp
// 00535e18  03da                 add ebx, edx
// 00535e1a  895008               mov dword ptr [eax + 8], edx
// 00535e1d  8b542410             mov edx, dword ptr [esp + 0x10]
// 00535e21  897c2428             mov dword ptr [esp + 0x28], edi
// 00535e25  c1c705               rol edi, 5
// 00535e28  03de                 add ebx, esi
// 00535e2a  c1ca02               ror edx, 2
// 00535e2d  8db43bdcbc1b8f       lea esi, [ebx + edi - 0x70e44324]
// 00535e34  8bfa                 mov edi, edx
// 00535e36  8b500c               mov edx, dword ptr [eax + 0xc]
// 00535e39  3310                 xor edx, dword ptr [eax]
// 00535e3b  897c2410             mov dword ptr [esp + 0x10], edi
// 00535e3f  33502c               xor edx, dword ptr [eax + 0x2c]
// 00535e42  0b7c2428             or edi, dword ptr [esp + 0x28]
// 00535e46  335014               xor edx, dword ptr [eax + 0x14]
// 00535e49  237c2414             and edi, dword ptr [esp + 0x14]
// 00535e4d  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00535e51  236c2428             and ebp, dword ptr [esp + 0x28]
// 00535e55  d1c2                 rol edx, 1
// 00535e57  0bfd                 or edi, ebp
// 00535e59  03fa                 add edi, edx
// 00535e5b  037c2424             add edi, dword ptr [esp + 0x24]
// 00535e5f  89500c               mov dword ptr [eax + 0xc], edx
// 00535e62  8b542428             mov edx, dword ptr [esp + 0x28]
// 00535e66  8bde                 mov ebx, esi
// 00535e68  c1c305               rol ebx, 5
// 00535e6b  c1ca02               ror edx, 2
// 00535e6e  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 00535e75  8bda                 mov ebx, edx
// 00535e77  8b5030               mov edx, dword ptr [eax + 0x30]
// 00535e7a  335018               xor edx, dword ptr [eax + 0x18]
// 00535e7d  897c2424             mov dword ptr [esp + 0x24], edi
// 00535e81  335010               xor edx, dword ptr [eax + 0x10]
// 00535e84  895c2428             mov dword ptr [esp + 0x28], ebx
// 00535e88  335004               xor edx, dword ptr [eax + 4]
// 00535e8b  8bee                 mov ebp, esi
// 00535e8d  d1c2                 rol edx, 1
// 00535e8f  895010               mov dword ptr [eax + 0x10], edx
// 00535e92  c1c705               rol edi, 5
// 00535e95  0beb                 or ebp, ebx
// 00535e97  236c2410             and ebp, dword ptr [esp + 0x10]
// 00535e9b  8bde                 mov ebx, esi
// 00535e9d  235c2428             and ebx, dword ptr [esp + 0x28]
// 00535ea1  0beb                 or ebp, ebx
// 00535ea3  03ea                 add ebp, edx
// 00535ea5  036c2414             add ebp, dword ptr [esp + 0x14]
// 00535ea9  8b5008               mov edx, dword ptr [eax + 8]
// 00535eac  335034               xor edx, dword ptr [eax + 0x34]
// 00535eaf  c1ce02               ror esi, 2
// 00535eb2  33501c               xor edx, dword ptr [eax + 0x1c]
// 00535eb5  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 00535ebc  335014               xor edx, dword ptr [eax + 0x14]
// 00535ebf  8bde                 mov ebx, esi
// 00535ec1  0b5c2424             or ebx, dword ptr [esp + 0x24]
// 00535ec5  d1c2                 rol edx, 1
// 00535ec7  235c2428             and ebx, dword ptr [esp + 0x28]
// 00535ecb  895014               mov dword ptr [eax + 0x14], edx
// 00535ece  897c2414             mov dword ptr [esp + 0x14], edi
// 00535ed2  c1c705               rol edi, 5
// 00535ed5  8bee                 mov ebp, esi
// 00535ed7  236c2424             and ebp, dword ptr [esp + 0x24]
// 00535edb  0bdd                 or ebx, ebp
// 00535edd  03da                 add ebx, edx
// 00535edf  035c2410             add ebx, dword ptr [esp + 0x10]
// 00535ee3  8b542424             mov edx, dword ptr [esp + 0x24]
// 00535ee7  c1ca02               ror edx, 2
// 00535eea  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 00535ef1  8bda                 mov ebx, edx
// 00535ef3  8b5038               mov edx, dword ptr [eax + 0x38]
// 00535ef6  335020               xor edx, dword ptr [eax + 0x20]
// 00535ef9  895c2424             mov dword ptr [esp + 0x24], ebx
// 00535efd  335018               xor edx, dword ptr [eax + 0x18]
// 00535f00  0b5c2414             or ebx, dword ptr [esp + 0x14]
// 00535f04  33500c               xor edx, dword ptr [eax + 0xc]
// 00535f07  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00535f0b  236c2414             and ebp, dword ptr [esp + 0x14]
// 00535f0f  d1c2                 rol edx, 1
// 00535f11  23de                 and ebx, esi
// 00535f13  0bdd                 or ebx, ebp
// 00535f15  03da                 add ebx, edx
// 00535f17  035c2428             add ebx, dword ptr [esp + 0x28]
// 00535f1b  895018               mov dword ptr [eax + 0x18], edx
// 00535f1e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00535f22  897c2410             mov dword ptr [esp + 0x10], edi
// 00535f26  c1c705               rol edi, 5
// 00535f29  c1ca02               ror edx, 2
// 00535f2c  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 00535f33  8bda                 mov ebx, edx
// 00535f35  8b5010               mov edx, dword ptr [eax + 0x10]
// 00535f38  33503c               xor edx, dword ptr [eax + 0x3c]
// 00535f3b  895c2414             mov dword ptr [esp + 0x14], ebx
// 00535f3f  335024               xor edx, dword ptr [eax + 0x24]
// 00535f42  0b5c2410             or ebx, dword ptr [esp + 0x10]
// 00535f46  33501c               xor edx, dword ptr [eax + 0x1c]
// 00535f49  235c2424             and ebx, dword ptr [esp + 0x24]
// 00535f4d  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00535f51  236c2410             and ebp, dword ptr [esp + 0x10]
// 00535f55  d1c2                 rol edx, 1
// 00535f57  0bdd                 or ebx, ebp
// 00535f59  03da                 add ebx, edx
// 00535f5b  89501c               mov dword ptr [eax + 0x1c], edx
// 00535f5e  8b542410             mov edx, dword ptr [esp + 0x10]
// 00535f62  03de                 add ebx, esi
// 00535f64  897c2428             mov dword ptr [esp + 0x28], edi
// 00535f68  c1c705               rol edi, 5
// 00535f6b  c1ca02               ror edx, 2
// 00535f6e  8db43bdcbc1b8f       lea esi, [ebx + edi - 0x70e44324]
// 00535f75  8bfa                 mov edi, edx
// 00535f77  8b5028               mov edx, dword ptr [eax + 0x28]
// 00535f7a  335020               xor edx, dword ptr [eax + 0x20]
// 00535f7d  897c2410             mov dword ptr [esp + 0x10], edi
// 00535f81  3310                 xor edx, dword ptr [eax]
// 00535f83  0b7c2428             or edi, dword ptr [esp + 0x28]
// 00535f87  335014               xor edx, dword ptr [eax + 0x14]
// 00535f8a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00535f8e  d1c2                 rol edx, 1
// 00535f90  8bde                 mov ebx, esi
// 00535f92  c1c305               rol ebx, 5
// 00535f95  237c2414             and edi, dword ptr [esp + 0x14]
// 00535f99  895020               mov dword ptr [eax + 0x20], edx
// 00535f9c  236c2428             and ebp, dword ptr [esp + 0x28]
// 00535fa0  0bfd                 or edi, ebp
// 00535fa2  03fa                 add edi, edx
// 00535fa4  037c2424             add edi, dword ptr [esp + 0x24]
// 00535fa8  8b542428             mov edx, dword ptr [esp + 0x28]
// 00535fac  c1ca02               ror edx, 2
// 00535faf  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 00535fb6  8bda                 mov ebx, edx
// 00535fb8  8b5018               mov edx, dword ptr [eax + 0x18]
// 00535fbb  335004               xor edx, dword ptr [eax + 4]
// 00535fbe  8bee                 mov ebp, esi
// 00535fc0  33502c               xor edx, dword ptr [eax + 0x2c]
// 00535fc3  0beb                 or ebp, ebx
// 00535fc5  335024               xor edx, dword ptr [eax + 0x24]
// 00535fc8  236c2410             and ebp, dword ptr [esp + 0x10]
// 00535fcc  d1c2                 rol edx, 1
// 00535fce  895c2428             mov dword ptr [esp + 0x28], ebx
// 00535fd2  8bde                 mov ebx, esi
// 00535fd4  235c2428             and ebx, dword ptr [esp + 0x28]
// 00535fd8  895024               mov dword ptr [eax + 0x24], edx
// 00535fdb  0beb                 or ebp, ebx
// 00535fdd  03ea                 add ebp, edx
// 00535fdf  036c2414             add ebp, dword ptr [esp + 0x14]
// 00535fe3  8b5030               mov edx, dword ptr [eax + 0x30]
// 00535fe6  335028               xor edx, dword ptr [eax + 0x28]
// 00535fe9  897c2424             mov dword ptr [esp + 0x24], edi
// 00535fed  335008               xor edx, dword ptr [eax + 8]
// 00535ff0  c1c705               rol edi, 5
// 00535ff3  33501c               xor edx, dword ptr [eax + 0x1c]
// 00535ff6  c1ce02               ror esi, 2
// 00535ff9  8d9c2fdcbc1b8f       lea ebx, [edi + ebp - 0x70e44324]
// 00536000  d1c2                 rol edx, 1
// 00536002  8bee                 mov ebp, esi
// 00536004  0b6c2424             or ebp, dword ptr [esp + 0x24]
// 00536008  89742418             mov dword ptr [esp + 0x18], esi
// 0053600c  236c2428             and ebp, dword ptr [esp + 0x28]
// 00536010  23742424             and esi, dword ptr [esp + 0x24]
// 00536014  895028               mov dword ptr [eax + 0x28], edx
// 00536017  0bee                 or ebp, esi
// 00536019  03ea                 add ebp, edx
// 0053601b  036c2410             add ebp, dword ptr [esp + 0x10]
// 0053601f  8b542424             mov edx, dword ptr [esp + 0x24]
// 00536023  8bfb                 mov edi, ebx
// 00536025  c1c705               rol edi, 5
// 00536028  c1ca02               ror edx, 2
// 0053602b  8bf2                 mov esi, edx
// 0053602d  8b5020               mov edx, dword ptr [eax + 0x20]
// 00536030  33500c               xor edx, dword ptr [eax + 0xc]
// 00536033  89742424             mov dword ptr [esp + 0x24], esi
// 00536037  335034               xor edx, dword ptr [eax + 0x34]
// 0053603a  0bf3                 or esi, ebx
// 0053603c  33502c               xor edx, dword ptr [eax + 0x2c]
// 0053603f  23742418             and esi, dword ptr [esp + 0x18]
// 00536043  895c2414             mov dword ptr [esp + 0x14], ebx
// 00536047  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0053604b  235c2414             and ebx, dword ptr [esp + 0x14]
// 0053604f  d1c2                 rol edx, 1
// 00536051  0bf3                 or esi, ebx
// 00536053  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00536057  03f2                 add esi, edx
// 00536059  03742428             add esi, dword ptr [esp + 0x28]
// 0053605d  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 00536064  89502c               mov dword ptr [eax + 0x2c], edx
// 00536067  8b5038               mov edx, dword ptr [eax + 0x38]
// 0053606a  335030               xor edx, dword ptr [eax + 0x30]
// 0053606d  8bef                 mov ebp, edi
// 0053606f  335010               xor edx, dword ptr [eax + 0x10]
// 00536072  c1c505               rol ebp, 5
// 00536075  335024               xor edx, dword ptr [eax + 0x24]
// 00536078  8db42edcbc1b8f       lea esi, [esi + ebp - 0x70e44324]
// 0053607f  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00536083  c1cb02               ror ebx, 2
// 00536086  33eb                 xor ebp, ebx
// 00536088  d1c2                 rol edx, 1
// 0053608a  33ef                 xor ebp, edi
// 0053608c  89742428             mov dword ptr [esp + 0x28], esi
// 00536090  03ea                 add ebp, edx
// 00536092  c1c605               rol esi, 5
// 00536095  036c2418             add ebp, dword ptr [esp + 0x18]
// 00536099  895c2414             mov dword ptr [esp + 0x14], ebx
// 0053609d  895030               mov dword ptr [eax + 0x30], edx
// 005360a0  8b5028               mov edx, dword ptr [eax + 0x28]
// 005360a3  33503c               xor edx, dword ptr [eax + 0x3c]
// 005360a6  c1cf02               ror edi, 2
// 005360a9  335034               xor edx, dword ptr [eax + 0x34]
// 005360ac  33df                 xor ebx, edi
// 005360ae  335014               xor edx, dword ptr [eax + 0x14]
// 005360b1  8db42ed6c162ca       lea esi, [esi + ebp - 0x359d3e2a]
// 005360b8  d1c2                 rol edx, 1
// 005360ba  895034               mov dword ptr [eax + 0x34], edx
// 005360bd  897c2410             mov dword ptr [esp + 0x10], edi
// 005360c1  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005360c5  33df                 xor ebx, edi
// 005360c7  03da                 add ebx, edx
// 005360c9  035c2424             add ebx, dword ptr [esp + 0x24]
// 005360cd  8b5038               mov edx, dword ptr [eax + 0x38]
// 005360d0  335018               xor edx, dword ptr [eax + 0x18]
// 005360d3  8bee                 mov ebp, esi
// 005360d5  3310                 xor edx, dword ptr [eax]
// 005360d7  c1c505               rol ebp, 5
// 005360da  33502c               xor edx, dword ptr [eax + 0x2c]
// 005360dd  c1cf02               ror edi, 2
// 005360e0  d1c2                 rol edx, 1
// 005360e2  897c2428             mov dword ptr [esp + 0x28], edi
// 005360e6  895038               mov dword ptr [eax + 0x38], edx
// 005360e9  8bfe                 mov edi, esi
// 005360eb  337c2410             xor edi, dword ptr [esp + 0x10]
// 005360ef  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 005360f6  337c2428             xor edi, dword ptr [esp + 0x28]
// 005360fa  895c2424             mov dword ptr [esp + 0x24], ebx
// 005360fe  03fa                 add edi, edx
// 00536100  037c2414             add edi, dword ptr [esp + 0x14]
// 00536104  8b5030               mov edx, dword ptr [eax + 0x30]
// 00536107  335004               xor edx, dword ptr [eax + 4]
// 0053610a  c1c305               rol ebx, 5
// 0053610d  33503c               xor edx, dword ptr [eax + 0x3c]
// 00536110  c1ce02               ror esi, 2
// 00536113  33501c               xor edx, dword ptr [eax + 0x1c]
// 00536116  89742418             mov dword ptr [esp + 0x18], esi
// 0053611a  33742424             xor esi, dword ptr [esp + 0x24]
// 0053611e  d1c2                 rol edx, 1
// 00536120  33742428             xor esi, dword ptr [esp + 0x28]
// 00536124  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00536128  03f2                 add esi, edx
// 0053612a  03742410             add esi, dword ptr [esp + 0x10]
// 0053612e  8dbc1fd6c162ca       lea edi, [edi + ebx - 0x359d3e2a]
// 00536135  89503c               mov dword ptr [eax + 0x3c], edx
// 00536138  8b542424             mov edx, dword ptr [esp + 0x24]
// 0053613c  8bdf                 mov ebx, edi
// 0053613e  c1c305               rol ebx, 5
// 00536141  c1ca02               ror edx, 2
// 00536144  8db41ed6c162ca       lea esi, [esi + ebx - 0x359d3e2a]
// 0053614b  8bda                 mov ebx, edx
// 0053614d  8b5020               mov edx, dword ptr [eax + 0x20]
// 00536150  335008               xor edx, dword ptr [eax + 8]
// 00536153  33eb                 xor ebp, ebx
// 00536155  3310                 xor edx, dword ptr [eax]
// 00536157  33ef                 xor ebp, edi
// 00536159  335034               xor edx, dword ptr [eax + 0x34]
// 0053615c  89742410             mov dword ptr [esp + 0x10], esi
// 00536160  d1c2                 rol edx, 1
// 00536162  03ea                 add ebp, edx
// 00536164  036c2428             add ebp, dword ptr [esp + 0x28]
// 00536168  8910                 mov dword ptr [eax], edx
// 0053616a  8b5038               mov edx, dword ptr [eax + 0x38]
// 0053616d  33500c               xor edx, dword ptr [eax + 0xc]
// 00536170  c1c605               rol esi, 5
// 00536173  335004               xor edx, dword ptr [eax + 4]
// 00536176  c1cf02               ror edi, 2
// 00536179  335024               xor edx, dword ptr [eax + 0x24]
// 0053617c  895c2424             mov dword ptr [esp + 0x24], ebx
// 00536180  33df                 xor ebx, edi
// 00536182  897c2414             mov dword ptr [esp + 0x14], edi
// 00536186  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0053618a  d1c2                 rol edx, 1
// 0053618c  8db42ed6c162ca       lea esi, [esi + ebp - 0x359d3e2a]
// 00536193  33df                 xor ebx, edi
// 00536195  8bee                 mov ebp, esi
// 00536197  03da                 add ebx, edx
// 00536199  c1c505               rol ebp, 5
// 0053619c  035c2418             add ebx, dword ptr [esp + 0x18]
// 005361a0  895004               mov dword ptr [eax + 4], edx
// 005361a3  8b5028               mov edx, dword ptr [eax + 0x28]
// 005361a6  335010               xor edx, dword ptr [eax + 0x10]
// 005361a9  8dac2bd6c162ca       lea ebp, [ebx + ebp - 0x359d3e2a]
// 005361b0  335008               xor edx, dword ptr [eax + 8]
// 005361b3  c1cf02               ror edi, 2
// 005361b6  33503c               xor edx, dword ptr [eax + 0x3c]
// 005361b9  8bdf                 mov ebx, edi
// 005361bb  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005361bf  d1c2                 rol edx, 1
// 005361c1  33fb                 xor edi, ebx
// 005361c3  33fe                 xor edi, esi
// 005361c5  03fa                 add edi, edx
// 005361c7  037c2424             add edi, dword ptr [esp + 0x24]
// 005361cb  895008               mov dword ptr [eax + 8], edx
// 005361ce  8b500c               mov edx, dword ptr [eax + 0xc]
// 005361d1  3310                 xor edx, dword ptr [eax]
// 005361d3  896c2418             mov dword ptr [esp + 0x18], ebp
// 005361d7  33502c               xor edx, dword ptr [eax + 0x2c]
// 005361da  c1c505               rol ebp, 5
// 005361dd  335014               xor edx, dword ptr [eax + 0x14]
// 005361e0  c1ce02               ror esi, 2
// 005361e3  d1c2                 rol edx, 1
// 005361e5  8dbc2fd6c162ca       lea edi, [edi + ebp - 0x359d3e2a]
// 005361ec  89742428             mov dword ptr [esp + 0x28], esi
// 005361f0  8b742418             mov esi, dword ptr [esp + 0x18]
// 005361f4  33f3                 xor esi, ebx
// 005361f6  89500c               mov dword ptr [eax + 0xc], edx
// 005361f9  895c2410             mov dword ptr [esp + 0x10], ebx
// 005361fd  8bde                 mov ebx, esi
// 005361ff  8b742428             mov esi, dword ptr [esp + 0x28]
// 00536203  33de                 xor ebx, esi
// 00536205  03da                 add ebx, edx
// 00536207  035c2414             add ebx, dword ptr [esp + 0x14]
// 0053620b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053620f  8bef                 mov ebp, edi
// 00536211  c1c505               rol ebp, 5
// 00536214  c1ca02               ror edx, 2
// 00536217  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 0053621e  8bea                 mov ebp, edx
// 00536220  8b5030               mov edx, dword ptr [eax + 0x30]
// 00536223  335018               xor edx, dword ptr [eax + 0x18]
// 00536226  896c2418             mov dword ptr [esp + 0x18], ebp
// 0053622a  335010               xor edx, dword ptr [eax + 0x10]
// 0053622d  33ef                 xor ebp, edi
// 0053622f  335004               xor edx, dword ptr [eax + 4]
// 00536232  33ee                 xor ebp, esi
// 00536234  d1c2                 rol edx, 1
// 00536236  03ea                 add ebp, edx
// 00536238  036c2410             add ebp, dword ptr [esp + 0x10]
// 0053623c  895010               mov dword ptr [eax + 0x10], edx
// 0053623f  8b5008               mov edx, dword ptr [eax + 8]
// 00536242  335034               xor edx, dword ptr [eax + 0x34]
// 00536245  895c2414             mov dword ptr [esp + 0x14], ebx
// 00536249  33501c               xor edx, dword ptr [eax + 0x1c]
// 0053624c  c1c305               rol ebx, 5
// 0053624f  335014               xor edx, dword ptr [eax + 0x14]
// 00536252  8db42bd6c162ca       lea esi, [ebx + ebp - 0x359d3e2a]
// 00536259  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0053625d  c1cf02               ror edi, 2
// 00536260  33ef                 xor ebp, edi
// 00536262  d1c2                 rol edx, 1
// 00536264  897c2424             mov dword ptr [esp + 0x24], edi
// 00536268  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0053626c  33ef                 xor ebp, edi
// 0053626e  03ea                 add ebp, edx
// 00536270  036c2428             add ebp, dword ptr [esp + 0x28]
// 00536274  895014               mov dword ptr [eax + 0x14], edx
// 00536277  8b5038               mov edx, dword ptr [eax + 0x38]
// 0053627a  335020               xor edx, dword ptr [eax + 0x20]
// 0053627d  8bde                 mov ebx, esi
// 0053627f  335018               xor edx, dword ptr [eax + 0x18]
// 00536282  c1c305               rol ebx, 5
// 00536285  33500c               xor edx, dword ptr [eax + 0xc]
// 00536288  c1cf02               ror edi, 2
// 0053628b  8dac2bd6c162ca       lea ebp, [ebx + ebp - 0x359d3e2a]
// 00536292  8bdf                 mov ebx, edi
// 00536294  d1c2                 rol edx, 1
// 00536296  896c2428             mov dword ptr [esp + 0x28], ebp
// 0053629a  895c2414             mov dword ptr [esp + 0x14], ebx
// 0053629e  895018               mov dword ptr [eax + 0x18], edx
// 005362a1  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005362a5  33fb                 xor edi, ebx
// 005362a7  33fe                 xor edi, esi
// 005362a9  03fa                 add edi, edx
// 005362ab  037c2418             add edi, dword ptr [esp + 0x18]
// 005362af  8b5010               mov edx, dword ptr [eax + 0x10]
// 005362b2  33503c               xor edx, dword ptr [eax + 0x3c]
// 005362b5  c1c505               rol ebp, 5
// 005362b8  335024               xor edx, dword ptr [eax + 0x24]
// 005362bb  c1ce02               ror esi, 2
// 005362be  33501c               xor edx, dword ptr [eax + 0x1c]
// 005362c1  33de                 xor ebx, esi
// 005362c3  d1c2                 rol edx, 1
// 005362c5  89501c               mov dword ptr [eax + 0x1c], edx
// 005362c8  8dbc2fd6c162ca       lea edi, [edi + ebp - 0x359d3e2a]
// 005362cf  89742410             mov dword ptr [esp + 0x10], esi
// 005362d3  8b742428             mov esi, dword ptr [esp + 0x28]
// 005362d7  33de                 xor ebx, esi
// 005362d9  03da                 add ebx, edx
// 005362db  035c2424             add ebx, dword ptr [esp + 0x24]
// 005362df  8b5028               mov edx, dword ptr [eax + 0x28]
// 005362e2  335020               xor edx, dword ptr [eax + 0x20]
// 005362e5  8bef                 mov ebp, edi
// 005362e7  3310                 xor edx, dword ptr [eax]
// 005362e9  c1c505               rol ebp, 5
// 005362ec  335014               xor edx, dword ptr [eax + 0x14]
// 005362ef  c1ce02               ror esi, 2
// 005362f2  d1c2                 rol edx, 1
// 005362f4  89742428             mov dword ptr [esp + 0x28], esi
// 005362f8  895020               mov dword ptr [eax + 0x20], edx
// 005362fb  8bf7                 mov esi, edi
// 005362fd  33742410             xor esi, dword ptr [esp + 0x10]
// 00536301  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 00536308  33742428             xor esi, dword ptr [esp + 0x28]
// 0053630c  895c2424             mov dword ptr [esp + 0x24], ebx
// 00536310  03f2                 add esi, edx
// 00536312  03742414             add esi, dword ptr [esp + 0x14]
// 00536316  8b5018               mov edx, dword ptr [eax + 0x18]
// 00536319  335004               xor edx, dword ptr [eax + 4]
// 0053631c  c1c305               rol ebx, 5
// 0053631f  33502c               xor edx, dword ptr [eax + 0x2c]
// 00536322  c1cf02               ror edi, 2
// 00536325  335024               xor edx, dword ptr [eax + 0x24]
// 00536328  897c2418             mov dword ptr [esp + 0x18], edi
// 0053632c  337c2424             xor edi, dword ptr [esp + 0x24]
// 00536330  d1c2                 rol edx, 1
// 00536332  337c2428             xor edi, dword ptr [esp + 0x28]
// 00536336  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0053633a  03fa                 add edi, edx
// 0053633c  037c2410             add edi, dword ptr [esp + 0x10]
// 00536340  895024               mov dword ptr [eax + 0x24], edx
// 00536343  8b542424             mov edx, dword ptr [esp + 0x24]
// 00536347  8db41ed6c162ca       lea esi, [esi + ebx - 0x359d3e2a]
// 0053634e  8bde                 mov ebx, esi
// 00536350  c1c305               rol ebx, 5
// 00536353  c1ca02               ror edx, 2
// 00536356  8dbc1fd6c162ca       lea edi, [edi + ebx - 0x359d3e2a]
// 0053635d  8bda                 mov ebx, edx
// 0053635f  8b5030               mov edx, dword ptr [eax + 0x30]
// 00536362  335028               xor edx, dword ptr [eax + 0x28]
// 00536365  33eb                 xor ebp, ebx
// 00536367  335008               xor edx, dword ptr [eax + 8]
// 0053636a  33ee                 xor ebp, esi
// 0053636c  33501c               xor edx, dword ptr [eax + 0x1c]
// 0053636f  897c2410             mov dword ptr [esp + 0x10], edi
// 00536373  d1c2                 rol edx, 1
// 00536375  03ea                 add ebp, edx
// 00536377  036c2428             add ebp, dword ptr [esp + 0x28]
// 0053637b  895028               mov dword ptr [eax + 0x28], edx
// 0053637e  8b5020               mov edx, dword ptr [eax + 0x20]
// 00536381  33500c               xor edx, dword ptr [eax + 0xc]
// 00536384  c1c705               rol edi, 5
// 00536387  335034               xor edx, dword ptr [eax + 0x34]
// 0053638a  c1ce02               ror esi, 2
// 0053638d  33502c               xor edx, dword ptr [eax + 0x2c]
// 00536390  8dbc2fd6c162ca       lea edi, [edi + ebp - 0x359d3e2a]
// 00536397  d1c2                 rol edx, 1
// 00536399  895c2424             mov dword ptr [esp + 0x24], ebx
// 0053639d  89742414             mov dword ptr [esp + 0x14], esi
// 005363a1  89502c               mov dword ptr [eax + 0x2c], edx
// 005363a4  8bef                 mov ebp, edi
// 005363a6  33de                 xor ebx, esi
// 005363a8  8b742410             mov esi, dword ptr [esp + 0x10]
// 005363ac  33de                 xor ebx, esi
// 005363ae  03da                 add ebx, edx
// 005363b0  035c2418             add ebx, dword ptr [esp + 0x18]
// 005363b4  8b5038               mov edx, dword ptr [eax + 0x38]
// 005363b7  335030               xor edx, dword ptr [eax + 0x30]
// 005363ba  c1c505               rol ebp, 5
// 005363bd  335010               xor edx, dword ptr [eax + 0x10]
// 005363c0  c1ce02               ror esi, 2
// 005363c3  335024               xor edx, dword ptr [eax + 0x24]
// 005363c6  8dac2bd6c162ca       lea ebp, [ebx + ebp - 0x359d3e2a]
// 005363cd  d1c2                 rol edx, 1
// 005363cf  8bde                 mov ebx, esi
// 005363d1  8b742414             mov esi, dword ptr [esp + 0x14]
// 005363d5  33f3                 xor esi, ebx
// 005363d7  33f7                 xor esi, edi
// 005363d9  03f2                 add esi, edx
// 005363db  03742424             add esi, dword ptr [esp + 0x24]
// 005363df  895030               mov dword ptr [eax + 0x30], edx
// 005363e2  8b5028               mov edx, dword ptr [eax + 0x28]
// 005363e5  33503c               xor edx, dword ptr [eax + 0x3c]
// 005363e8  896c2418             mov dword ptr [esp + 0x18], ebp
// 005363ec  335034               xor edx, dword ptr [eax + 0x34]
// 005363ef  c1c505               rol ebp, 5
// 005363f2  335014               xor edx, dword ptr [eax + 0x14]
// 005363f5  c1cf02               ror edi, 2
// 005363f8  d1c2                 rol edx, 1
// 005363fa  895034               mov dword ptr [eax + 0x34], edx
// 005363fd  8db42ed6c162ca       lea esi, [esi + ebp - 0x359d3e2a]
// 00536404  897c2428             mov dword ptr [esp + 0x28], edi
// 00536408  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0053640c  33fb                 xor edi, ebx
// 0053640e  895c2410             mov dword ptr [esp + 0x10], ebx
// 00536412  8bdf                 mov ebx, edi
// 00536414  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00536418  33df                 xor ebx, edi
// 0053641a  03da                 add ebx, edx
// 0053641c  035c2414             add ebx, dword ptr [esp + 0x14]
// 00536420  8b542418             mov edx, dword ptr [esp + 0x18]
// 00536424  8bee                 mov ebp, esi
// 00536426  c1c505               rol ebp, 5
// 00536429  c1ca02               ror edx, 2
// 0053642c  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 00536433  8bea                 mov ebp, edx
// 00536435  8b5038               mov edx, dword ptr [eax + 0x38]
// 00536438  335018               xor edx, dword ptr [eax + 0x18]
// 0053643b  896c2418             mov dword ptr [esp + 0x18], ebp
// 0053643f  3310                 xor edx, dword ptr [eax]
// 00536441  33ee                 xor ebp, esi
// 00536443  33502c               xor edx, dword ptr [eax + 0x2c]
// 00536446  33ef                 xor ebp, edi
// 00536448  d1c2                 rol edx, 1
// 0053644a  895038               mov dword ptr [eax + 0x38], edx
// 0053644d  03ea                 add ebp, edx
// 0053644f  8b5030               mov edx, dword ptr [eax + 0x30]
// 00536452  335004               xor edx, dword ptr [eax + 4]
// 00536455  036c2410             add ebp, dword ptr [esp + 0x10]
// 00536459  33503c               xor edx, dword ptr [eax + 0x3c]
// 0053645c  895c2414             mov dword ptr [esp + 0x14], ebx
// 00536460  33501c               xor edx, dword ptr [eax + 0x1c]
// 00536463  c1c305               rol ebx, 5
// 00536466  c1ce02               ror esi, 2
// 00536469  d1c2                 rol edx, 1
// 0053646b  89503c               mov dword ptr [eax + 0x3c], edx
// 0053646e  8b442418             mov eax, dword ptr [esp + 0x18]
// 00536472  33c6                 xor eax, esi
// 00536474  89742424             mov dword ptr [esp + 0x24], esi
// 00536478  8bf0                 mov esi, eax
// 0053647a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0053647e  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 00536485  33f0                 xor esi, eax
// 00536487  03f2                 add esi, edx
// 00536489  8beb                 mov ebp, ebx
// 0053648b  c1c505               rol ebp, 5
// 0053648e  03f7                 add esi, edi
// 00536490  8d942ed6c162ca       lea edx, [esi + ebp - 0x359d3e2a]
// 00536497  0111                 add dword ptr [ecx], edx
// 00536499  015904               add dword ptr [ecx + 4], ebx
// 0053649c  8b542418             mov edx, dword ptr [esp + 0x18]
// 005364a0  c1c802               ror eax, 2
// 005364a3  014108               add dword ptr [ecx + 8], eax
// 005364a6  8b442424             mov eax, dword ptr [esp + 0x24]
// 005364aa  01410c               add dword ptr [ecx + 0xc], eax
// 005364ad  015110               add dword ptr [ecx + 0x10], edx
// 005364b0  5f                   pop edi
// 005364b1  5e                   pop esi
// 005364b2  5d                   pop ebp
// 005364b3  5b                   pop ebx
// 005364b4  83c410               add esp, 0x10
// 005364b7  c20800               ret 8
// library rbx2016-raknet/SHA1.cpp (function ?Transform@CSHA1@@AAEXQAIQAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
