// roc 2008-06 00698070  unit: Ogre::RbxSceneManager  size: 556 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00698070
//
// 00698070  83ec1c               sub esp, 0x1c
// 00698073  53                   push ebx
// 00698074  55                   push ebp
// 00698075  56                   push esi
// 00698076  8b742438             mov esi, dword ptr [esp + 0x38]
// 0069807a  57                   push edi
// 0069807b  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0069807f  8d043e               lea eax, [esi + edi]
// 00698082  83f802               cmp eax, 2
// 00698085  7537                 jne 0x6980be
// 00698087  8b742430             mov esi, dword ptr [esp + 0x30]
// 0069808b  8b0e                 mov ecx, dword ptr [esi]
// 0069808d  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00698091  8b17                 mov edx, dword ptr [edi]
// 00698093  51                   push ecx
// 00698094  52                   push edx
// 00698095  8d4c2450             lea ecx, [esp + 0x50]
// 00698099  e8a246ffff           call 0x68c740
// 0069809e  84c0                 test al, al
// 006980a0  0f84ee010000         je 0x698294
// 006980a6  3bf7                 cmp esi, edi
// 006980a8  0f84e6010000         je 0x698294
// 006980ae  8b0f                 mov ecx, dword ptr [edi]
// 006980b0  8b06                 mov eax, dword ptr [esi]
// 006980b2  890e                 mov dword ptr [esi], ecx
// 006980b4  8907                 mov dword ptr [edi], eax
// 006980b6  5f                   pop edi
// 006980b7  5e                   pop esi
// 006980b8  5d                   pop ebp
// 006980b9  5b                   pop ebx
// 006980ba  83c41c               add esp, 0x1c
// 006980bd  c3                   ret 
// 006980be  3bf7                 cmp esi, edi
// 006980c0  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 006980c4  7f7e                 jg 0x698144
// 006980c6  8bcd                 mov ecx, ebp
// 006980c8  e80382ffff           call 0x6902d0
// 006980cd  3bf0                 cmp esi, eax
// 006980cf  7f73                 jg 0x698144
// 006980d1  8b4510               mov eax, dword ptr [ebp + 0x10]
// 006980d4  8b10                 mov edx, dword ptr [eax]
// 006980d6  8b742434             mov esi, dword ptr [esp + 0x34]
// 006980da  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 006980de  895004               mov dword ptr [eax + 4], edx
// 006980e1  83ec14               sub esp, 0x14
// 006980e4  8bc4                 mov eax, esp
// 006980e6  89642450             mov dword ptr [esp + 0x50], esp
// 006980ea  33db                 xor ebx, ebx
// 006980ec  56                   push esi
// 006980ed  8918                 mov dword ptr [eax], ebx
// 006980ef  895804               mov dword ptr [eax + 4], ebx
// 006980f2  895808               mov dword ptr [eax + 8], ebx
// 006980f5  89580c               mov dword ptr [eax + 0xc], ebx
// 006980f8  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 006980fb  8d542430             lea edx, [esp + 0x30]
// 006980ff  57                   push edi
// 00698100  52                   push edx
// 00698101  894810               mov dword ptr [eax + 0x10], ecx
// 00698104  e847a4ffff           call 0x692550
// 00698109  8b442438             mov eax, dword ptr [esp + 0x38]
// 0069810d  83c420               add esp, 0x20
// 00698110  3bc3                 cmp eax, ebx
// 00698112  7409                 je 0x69811d
// 00698114  50                   push eax
// 00698115  e860850000           call 0x6a067a
// 0069811a  83c404               add esp, 4
// 0069811d  8b442448             mov eax, dword ptr [esp + 0x48]
// 00698121  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00698125  8b6d10               mov ebp, dword ptr [ebp + 0x10]
// 00698128  8b5504               mov edx, dword ptr [ebp + 4]
// 0069812b  50                   push eax
// 0069812c  8b4500               mov eax, dword ptr [ebp]
// 0069812f  57                   push edi
// 00698130  51                   push ecx
// 00698131  56                   push esi
// 00698132  52                   push edx
// 00698133  50                   push eax
// 00698134  e847bfffff           call 0x694080
// 00698139  83c418               add esp, 0x18
// 0069813c  5f                   pop edi
// 0069813d  5e                   pop esi
// 0069813e  5d                   pop ebp
// 0069813f  5b                   pop ebx
// 00698140  83c41c               add esp, 0x1c
// 00698143  c3                   ret 
// 00698144  8bcd                 mov ecx, ebp
// 00698146  e88581ffff           call 0x6902d0
// 0069814b  3bf8                 cmp edi, eax
// 0069814d  7f7c                 jg 0x6981cb
// 0069814f  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00698152  8b08                 mov ecx, dword ptr [eax]
// 00698154  8b742438             mov esi, dword ptr [esp + 0x38]
// 00698158  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0069815c  894804               mov dword ptr [eax + 4], ecx
// 0069815f  83ec14               sub esp, 0x14
// 00698162  8bc4                 mov eax, esp
// 00698164  33db                 xor ebx, ebx
// 00698166  8918                 mov dword ptr [eax], ebx
// 00698168  895804               mov dword ptr [eax + 4], ebx
// 0069816b  895808               mov dword ptr [eax + 8], ebx
// 0069816e  89580c               mov dword ptr [eax + 0xc], ebx
// 00698171  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00698174  89642450             mov dword ptr [esp + 0x50], esp
// 00698178  56                   push esi
// 00698179  895010               mov dword ptr [eax + 0x10], edx
// 0069817c  8d442430             lea eax, [esp + 0x30]
// 00698180  57                   push edi
// 00698181  50                   push eax
// 00698182  e8c9a3ffff           call 0x692550
// 00698187  8b442438             mov eax, dword ptr [esp + 0x38]
// 0069818b  83c420               add esp, 0x20
// 0069818e  3bc3                 cmp eax, ebx
// 00698190  7409                 je 0x69819b
// 00698192  50                   push eax
// 00698193  e8e2840000           call 0x6a067a
// 00698198  83c404               add esp, 4
// 0069819b  8b542448             mov edx, dword ptr [esp + 0x48]
// 0069819f  8b6d10               mov ebp, dword ptr [ebp + 0x10]
// 006981a2  8b4504               mov eax, dword ptr [ebp + 4]
// 006981a5  885c243c             mov byte ptr [esp + 0x3c], bl
// 006981a9  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006981ad  51                   push ecx
// 006981ae  8b4d00               mov ecx, dword ptr [ebp]
// 006981b1  52                   push edx
// 006981b2  8b542438             mov edx, dword ptr [esp + 0x38]
// 006981b6  56                   push esi
// 006981b7  50                   push eax
// 006981b8  51                   push ecx
// 006981b9  57                   push edi
// 006981ba  52                   push edx
// 006981bb  e84063ffff           call 0x68e500
// 006981c0  83c41c               add esp, 0x1c
// 006981c3  5f                   pop edi
// 006981c4  5e                   pop esi
// 006981c5  5d                   pop ebp
// 006981c6  5b                   pop ebx
// 006981c7  83c41c               add esp, 0x1c
// 006981ca  c3                   ret 
// 006981cb  3bfe                 cmp edi, esi
// 006981cd  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006981d1  6a00                 push 0
// 006981d3  51                   push ecx
// 006981d4  7d38                 jge 0x69820e
// 006981d6  8bc6                 mov eax, esi
// 006981d8  99                   cdq 
// 006981d9  2bc2                 sub eax, edx
// 006981db  8b542440             mov edx, dword ptr [esp + 0x40]
// 006981df  8bf8                 mov edi, eax
// 006981e1  8b442438             mov eax, dword ptr [esp + 0x38]
// 006981e5  d1ff                 sar edi, 1
// 006981e7  8d04b8               lea eax, [eax + edi*4]
// 006981ea  50                   push eax
// 006981eb  8944241c             mov dword ptr [esp + 0x1c], eax
// 006981ef  8b442440             mov eax, dword ptr [esp + 0x40]
// 006981f3  52                   push edx
// 006981f4  50                   push eax
// 006981f5  e8f663ffff           call 0x68e5f0
// 006981fa  8bd8                 mov ebx, eax
// 006981fc  8b442424             mov eax, dword ptr [esp + 0x24]
// 00698200  8bf3                 mov esi, ebx
// 00698202  2b742448             sub esi, dword ptr [esp + 0x48]
// 00698206  83c414               add esp, 0x14
// 00698209  c1fe02               sar esi, 2
// 0069820c  eb2c                 jmp 0x69823a
// 0069820e  8bc7                 mov eax, edi
// 00698210  99                   cdq 
// 00698211  2bc2                 sub eax, edx
// 00698213  8b542438             mov edx, dword ptr [esp + 0x38]
// 00698217  8bf0                 mov esi, eax
// 00698219  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0069821d  d1fe                 sar esi, 1
// 0069821f  8d1cb0               lea ebx, [eax + esi*4]
// 00698222  53                   push ebx
// 00698223  50                   push eax
// 00698224  52                   push edx
// 00698225  e87664ffff           call 0x68e6a0
// 0069822a  8bf8                 mov edi, eax
// 0069822c  2b7c2444             sub edi, dword ptr [esp + 0x44]
// 00698230  83c414               add esp, 0x14
// 00698233  89442410             mov dword ptr [esp + 0x10], eax
// 00698237  c1ff02               sar edi, 2
// 0069823a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0069823e  55                   push ebp
// 0069823f  2bcf                 sub ecx, edi
// 00698241  56                   push esi
// 00698242  51                   push ecx
// 00698243  894c2448             mov dword ptr [esp + 0x48], ecx
// 00698247  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0069824b  53                   push ebx
// 0069824c  51                   push ecx
// 0069824d  50                   push eax
// 0069824e  e86da3ffff           call 0x6925c0
// 00698253  8b542460             mov edx, dword ptr [esp + 0x60]
// 00698257  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0069825b  52                   push edx
// 0069825c  55                   push ebp
// 0069825d  56                   push esi
// 0069825e  57                   push edi
// 0069825f  50                   push eax
// 00698260  89442440             mov dword ptr [esp + 0x40], eax
// 00698264  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00698268  50                   push eax
// 00698269  51                   push ecx
// 0069826a  e801feffff           call 0x698070
// 0069826f  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00698273  8b442474             mov eax, dword ptr [esp + 0x74]
// 00698277  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0069827b  52                   push edx
// 0069827c  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00698280  55                   push ebp
// 00698281  2bc6                 sub eax, esi
// 00698283  50                   push eax
// 00698284  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 00698288  50                   push eax
// 00698289  51                   push ecx
// 0069828a  53                   push ebx
// 0069828b  52                   push edx
// 0069828c  e8dffdffff           call 0x698070
// 00698291  83c450               add esp, 0x50
// 00698294  5f                   pop edi
// 00698295  5e                   pop esi
// 00698296  5d                   pop ebp
// 00698297  5b                   pop ebx
// 00698298  83c41c               add esp, 0x1c
// 0069829b  c3                   ret 
// library ogre-1.6.4/OgreSceneManager.cpp (function ??$_Buffered_merge@PAPAVLight@Ogre@@HPAV12@UlightsForShadowTextureLess@SceneManager@2@@std@@YAXPAPAVLight@Ogre@@00HHAAV?$_Temp_iterator@PAVLight@Ogre@@@0@UlightsForShadowTextureLess@SceneManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreSceneManager.cpp
