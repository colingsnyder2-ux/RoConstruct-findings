// roc 2010-06 0087eeb0  unit: CXTPPropertyGridPaintManager  size: 1472 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087eeb0
//
// 0087eeb0  6aff                 push -1
// 0087eeb2  6851aa9b00           push 0x9baa51
// 0087eeb7  64a100000000         mov eax, dword ptr fs:[0]
// 0087eebd  50                   push eax
// 0087eebe  83ec38               sub esp, 0x38
// 0087eec1  53                   push ebx
// 0087eec2  55                   push ebp
// 0087eec3  56                   push esi
// 0087eec4  57                   push edi
// 0087eec5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0087eeca  33c4                 xor eax, esp
// 0087eecc  50                   push eax
// 0087eecd  8d44244c             lea eax, [esp + 0x4c]
// 0087eed1  64a300000000         mov dword ptr fs:[0], eax
// 0087eed7  8be9                 mov ebp, ecx
// 0087eed9  896c2414             mov dword ptr [esp + 0x14], ebp
// 0087eedd  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 0087eee1  8b4738               mov eax, dword ptr [edi + 0x38]
// 0087eee4  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 0087eee7  8b5f3c               mov ebx, dword ptr [edi + 0x3c]
// 0087eeea  8b7734               mov esi, dword ptr [edi + 0x34]
// 0087eeed  89442430             mov dword ptr [esp + 0x30], eax
// 0087eef1  03c1                 add eax, ecx
// 0087eef3  99                   cdq 
// 0087eef4  2bc2                 sub eax, edx
// 0087eef6  894c2438             mov dword ptr [esp + 0x38], ecx
// 0087eefa  8bc8                 mov ecx, eax
// 0087eefc  8d0433               lea eax, [ebx + esi]
// 0087eeff  99                   cdq 
// 0087ef00  d1f9                 sar ecx, 1
// 0087ef02  895c2434             mov dword ptr [esp + 0x34], ebx
// 0087ef06  2bc2                 sub eax, edx
// 0087ef08  83c103               add ecx, 3
// 0087ef0b  8bd8                 mov ebx, eax
// 0087ef0d  894c2418             mov dword ptr [esp + 0x18], ecx
// 0087ef11  d1fb                 sar ebx, 1
// 0087ef13  8bcf                 mov ecx, edi
// 0087ef15  8974242c             mov dword ptr [esp + 0x2c], esi
// 0087ef19  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0087ef1d  e80ef8f8ff           call 0x80e730
// 0087ef22  8bf0                 mov esi, eax
// 0087ef24  f7de                 neg esi
// 0087ef26  1bf6                 sbb esi, esi
// 0087ef28  f7de                 neg esi
// 0087ef2a  83c611               add esi, 0x11
// 0087ef2d  e8ee4bf6ff           call 0x7e3b20
// 0087ef32  56                   push esi
// 0087ef33  8bc8                 mov ecx, eax
// 0087ef35  e87643f6ff           call 0x7e32b0
// 0087ef3a  837d0401             cmp dword ptr [ebp + 4], 1
// 0087ef3e  89442460             mov dword ptr [esp + 0x60], eax
// 0087ef42  0f851f010000         jne 0x87f067
// 0087ef48  8d4d14               lea ecx, [ebp + 0x14]
// 0087ef4b  e8700cfaff           call 0x81fbc0
// 0087ef50  85c0                 test eax, eax
// 0087ef52  0f840f010000         je 0x87f067
// 0087ef58  8d4d20               lea ecx, [ebp + 0x20]
// 0087ef5b  e8600cfaff           call 0x81fbc0
// 0087ef60  85c0                 test eax, eax
// 0087ef62  0f84ff000000         je 0x87f067
// 0087ef68  8b4574               mov eax, dword ptr [ebp + 0x74]
// 0087ef6b  8b4878               mov ecx, dword ptr [eax + 0x78]
// 0087ef6e  83c070               add eax, 0x70
// 0087ef71  83f9ff               cmp ecx, -1
// 0087ef74  7505                 jne 0x87ef7b
// 0087ef76  8b4004               mov eax, dword ptr [eax + 4]
// 0087ef79  eb02                 jmp 0x87ef7d
// 0087ef7b  8bc1                 mov eax, ecx
// 0087ef7d  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0087ef81  50                   push eax
// 0087ef82  8d442430             lea eax, [esp + 0x30]
// 0087ef86  50                   push eax
// 0087ef87  8bce                 mov ecx, esi
// 0087ef89  e8b097f2ff           call 0x7a873e
// 0087ef8e  8b4730               mov eax, dword ptr [edi + 0x30]
// 0087ef91  8bcf                 mov ecx, edi
// 0087ef93  83f865               cmp eax, 0x65
// 0087ef96  7471                 je 0x87f009
// 0087ef98  e893f7f8ff           call 0x80e730
// 0087ef9d  85c0                 test eax, eax
// 0087ef9f  7507                 jne 0x87efa8
// 0087efa1  b804000000           mov eax, 4
// 0087efa6  eb3e                 jmp 0x87efe6
// 0087efa8  8bcf                 mov ecx, edi
// 0087efaa  e89135f5ff           call 0x7d2540
// 0087efaf  85c0                 test eax, eax
// 0087efb1  7412                 je 0x87efc5
// 0087efb3  8bcf                 mov ecx, edi
// 0087efb5  e8a6b4ffff           call 0x87a460
// 0087efba  85c0                 test eax, eax
// 0087efbc  7407                 je 0x87efc5
// 0087efbe  b803000000           mov eax, 3
// 0087efc3  eb21                 jmp 0x87efe6
// 0087efc5  8bcf                 mov ecx, edi
// 0087efc7  e894b4ffff           call 0x87a460
// 0087efcc  85c0                 test eax, eax
// 0087efce  7407                 je 0x87efd7
// 0087efd0  b802000000           mov eax, 2
// 0087efd5  eb0f                 jmp 0x87efe6
// 0087efd7  8bcf                 mov ecx, edi
// 0087efd9  e862b4ffff           call 0x87a440
// 0087efde  f7d8                 neg eax
// 0087efe0  1bc0                 sbb eax, eax
// 0087efe2  83e004               and eax, 4
// 0087efe5  40                   inc eax
// 0087efe6  85f6                 test esi, esi
// 0087efe8  7504                 jne 0x87efee
// 0087efea  33c9                 xor ecx, ecx
// 0087efec  eb03                 jmp 0x87eff1
// 0087efee  8b4e04               mov ecx, dword ptr [esi + 4]
// 0087eff1  6a00                 push 0
// 0087eff3  8d542430             lea edx, [esp + 0x30]
// 0087eff7  52                   push edx
// 0087eff8  50                   push eax
// 0087eff9  6a01                 push 1
// 0087effb  51                   push ecx
// 0087effc  8d4d14               lea ecx, [ebp + 0x14]
// 0087efff  e83c08faff           call 0x81f840
// 0087f004  e9b2020000           jmp 0x87f2bb
// 0087f009  e822f7f8ff           call 0x80e730
// 0087f00e  85c0                 test eax, eax
// 0087f010  7507                 jne 0x87f019
// 0087f012  b804000000           mov eax, 4
// 0087f017  eb2b                 jmp 0x87f044
// 0087f019  8bcf                 mov ecx, edi
// 0087f01b  e82035f5ff           call 0x7d2540
// 0087f020  85c0                 test eax, eax
// 0087f022  7412                 je 0x87f036
// 0087f024  8bcf                 mov ecx, edi
// 0087f026  e835b4ffff           call 0x87a460
// 0087f02b  85c0                 test eax, eax
// 0087f02d  7407                 je 0x87f036
// 0087f02f  b803000000           mov eax, 3
// 0087f034  eb0e                 jmp 0x87f044
// 0087f036  8bcf                 mov ecx, edi
// 0087f038  e823b4ffff           call 0x87a460
// 0087f03d  f7d8                 neg eax
// 0087f03f  1bc0                 sbb eax, eax
// 0087f041  f7d8                 neg eax
// 0087f043  40                   inc eax
// 0087f044  85f6                 test esi, esi
// 0087f046  7504                 jne 0x87f04c
// 0087f048  33c9                 xor ecx, ecx
// 0087f04a  eb03                 jmp 0x87f04f
// 0087f04c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0087f04f  6a00                 push 0
// 0087f051  8d542430             lea edx, [esp + 0x30]
// 0087f055  52                   push edx
// 0087f056  50                   push eax
// 0087f057  6a01                 push 1
// 0087f059  51                   push ecx
// 0087f05a  8d4d20               lea ecx, [ebp + 0x20]
// 0087f05d  e8de07faff           call 0x81f840
// 0087f062  e954020000           jmp 0x87f2bb
// 0087f067  8b4504               mov eax, dword ptr [ebp + 4]
// 0087f06a  83f803               cmp eax, 3
// 0087f06d  0f859e000000         jne 0x87f111
// 0087f073  8bcf                 mov ecx, edi
// 0087f075  e8c634f5ff           call 0x7d2540
// 0087f07a  85c0                 test eax, eax
// 0087f07c  7412                 je 0x87f090
// 0087f07e  8bcf                 mov ecx, edi
// 0087f080  e8dbb3ffff           call 0x87a460
// 0087f085  85c0                 test eax, eax
// 0087f087  7407                 je 0x87f090
// 0087f089  b8ffab3f00           mov eax, 0x3fabff
// 0087f08e  eb1d                 jmp 0x87f0ad
// 0087f090  8bcf                 mov ecx, edi
// 0087f092  e8c9b3ffff           call 0x87a460
// 0087f097  85c0                 test eax, eax
// 0087f099  7407                 je 0x87f0a2
// 0087f09b  b8ffe7a200           mov eax, 0xa2e7ff
// 0087f0a0  eb0b                 jmp 0x87f0ad
// 0087f0a2  8b4538               mov eax, dword ptr [ebp + 0x38]
// 0087f0a5  83f8ff               cmp eax, -1
// 0087f0a8  7503                 jne 0x87f0ad
// 0087f0aa  8b4534               mov eax, dword ptr [ebp + 0x34]
// 0087f0ad  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0087f0b1  50                   push eax
// 0087f0b2  8d442430             lea eax, [esp + 0x30]
// 0087f0b6  50                   push eax
// 0087f0b7  8bce                 mov ecx, esi
// 0087f0b9  e88096f2ff           call 0x7a873e
// 0087f0be  8bcf                 mov ecx, edi
// 0087f0c0  e87b34f5ff           call 0x7d2540
// 0087f0c5  85c0                 test eax, eax
// 0087f0c7  7412                 je 0x87f0db
// 0087f0c9  8bcf                 mov ecx, edi
// 0087f0cb  e890b3ffff           call 0x87a460
// 0087f0d0  85c0                 test eax, eax
// 0087f0d2  7407                 je 0x87f0db
// 0087f0d4  bbfb8c3c00           mov ebx, 0x3c8cfb
// 0087f0d9  eb1d                 jmp 0x87f0f8
// 0087f0db  8bcf                 mov ecx, edi
// 0087f0dd  e87eb3ffff           call 0x87a460
// 0087f0e2  85c0                 test eax, eax
// 0087f0e4  7407                 je 0x87f0ed
// 0087f0e6  bbffbd6900           mov ebx, 0x69bdff
// 0087f0eb  eb0b                 jmp 0x87f0f8
// 0087f0ed  8b5d44               mov ebx, dword ptr [ebp + 0x44]
// 0087f0f0  83fbff               cmp ebx, -1
// 0087f0f3  7503                 jne 0x87f0f8
// 0087f0f5  8b5d40               mov ebx, dword ptr [ebp + 0x40]
// 0087f0f8  e8234af6ff           call 0x7e3b20
// 0087f0fd  53                   push ebx
// 0087f0fe  8bc8                 mov ecx, eax
// 0087f100  e8ab41f6ff           call 0x7e32b0
// 0087f105  50                   push eax
// 0087f106  50                   push eax
// 0087f107  8d4c2434             lea ecx, [esp + 0x34]
// 0087f10b  51                   push ecx
// 0087f10c  e94d010000           jmp 0x87f25e
// 0087f111  83f802               cmp eax, 2
// 0087f114  0f8596000000         jne 0x87f1b0
// 0087f11a  8bcf                 mov ecx, edi
// 0087f11c  e81f34f5ff           call 0x7d2540
// 0087f121  85c0                 test eax, eax
// 0087f123  7412                 je 0x87f137
// 0087f125  8bcf                 mov ecx, edi
// 0087f127  e834b3ffff           call 0x87a460
// 0087f12c  85c0                 test eax, eax
// 0087f12e  7407                 je 0x87f137
// 0087f130  be21000000           mov esi, 0x21
// 0087f135  eb12                 jmp 0x87f149
// 0087f137  8bcf                 mov ecx, edi
// 0087f139  e822b3ffff           call 0x87a460
// 0087f13e  8bf0                 mov esi, eax
// 0087f140  f7de                 neg esi
// 0087f142  1bf6                 sbb esi, esi
// 0087f144  f7de                 neg esi
// 0087f146  83c61e               add esi, 0x1e
// 0087f149  e8d249f6ff           call 0x7e3b20
// 0087f14e  56                   push esi
// 0087f14f  8bc8                 mov ecx, eax
// 0087f151  e85a41f6ff           call 0x7e32b0
// 0087f156  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0087f15a  50                   push eax
// 0087f15b  8d542430             lea edx, [esp + 0x30]
// 0087f15f  52                   push edx
// 0087f160  8bce                 mov ecx, esi
// 0087f162  e8d795f2ff           call 0x7a873e
// 0087f167  8bcf                 mov ecx, edi
// 0087f169  e8d233f5ff           call 0x7d2540
// 0087f16e  85c0                 test eax, eax
// 0087f170  7412                 je 0x87f184
// 0087f172  8bcf                 mov ecx, edi
// 0087f174  e8e7b2ffff           call 0x87a460
// 0087f179  85c0                 test eax, eax
// 0087f17b  7407                 je 0x87f184
// 0087f17d  bb32000000           mov ebx, 0x32
// 0087f182  eb13                 jmp 0x87f197
// 0087f184  8bcf                 mov ecx, edi
// 0087f186  e8d5b2ffff           call 0x87a460
// 0087f18b  8bd8                 mov ebx, eax
// 0087f18d  f7db                 neg ebx
// 0087f18f  1bdb                 sbb ebx, ebx
// 0087f191  83e310               and ebx, 0x10
// 0087f194  83c310               add ebx, 0x10
// 0087f197  e88449f6ff           call 0x7e3b20
// 0087f19c  53                   push ebx
// 0087f19d  8bc8                 mov ecx, eax
// 0087f19f  e80c41f6ff           call 0x7e32b0
// 0087f1a4  50                   push eax
// 0087f1a5  50                   push eax
// 0087f1a6  8d442434             lea eax, [esp + 0x34]
// 0087f1aa  50                   push eax
// 0087f1ab  e9ae000000           jmp 0x87f25e
// 0087f1b0  e86b49f6ff           call 0x7e3b20
// 0087f1b5  6a0f                 push 0xf
// 0087f1b7  8bc8                 mov ecx, eax
// 0087f1b9  e8f240f6ff           call 0x7e32b0
// 0087f1be  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0087f1c2  50                   push eax
// 0087f1c3  8d4c2430             lea ecx, [esp + 0x30]
// 0087f1c7  51                   push ecx
// 0087f1c8  8bce                 mov ecx, esi
// 0087f1ca  e86f95f2ff           call 0x7a873e
// 0087f1cf  8bcf                 mov ecx, edi
// 0087f1d1  e86a33f5ff           call 0x7d2540
// 0087f1d6  85c0                 test eax, eax
// 0087f1d8  7424                 je 0x87f1fe
// 0087f1da  8bcf                 mov ecx, edi
// 0087f1dc  e87fb2ffff           call 0x87a460
// 0087f1e1  85c0                 test eax, eax
// 0087f1e3  7419                 je 0x87f1fe
// 0087f1e5  e83649f6ff           call 0x7e3b20
// 0087f1ea  6a10                 push 0x10
// 0087f1ec  8bc8                 mov ecx, eax
// 0087f1ee  e8bd40f6ff           call 0x7e32b0
// 0087f1f3  8bd8                 mov ebx, eax
// 0087f1f5  e82649f6ff           call 0x7e3b20
// 0087f1fa  6a10                 push 0x10
// 0087f1fc  eb52                 jmp 0x87f250
// 0087f1fe  e81d49f6ff           call 0x7e3b20
// 0087f203  6a15                 push 0x15
// 0087f205  8bc8                 mov ecx, eax
// 0087f207  e8a440f6ff           call 0x7e32b0
// 0087f20c  8bd8                 mov ebx, eax
// 0087f20e  e80d49f6ff           call 0x7e3b20
// 0087f213  6a0f                 push 0xf
// 0087f215  8bc8                 mov ecx, eax
// 0087f217  e89440f6ff           call 0x7e32b0
// 0087f21c  53                   push ebx
// 0087f21d  50                   push eax
// 0087f21e  8d442434             lea eax, [esp + 0x34]
// 0087f222  50                   push eax
// 0087f223  8bce                 mov ecx, esi
// 0087f225  e80e95f2ff           call 0x7a8738
// 0087f22a  6aff                 push -1
// 0087f22c  6aff                 push -1
// 0087f22e  8d4c2434             lea ecx, [esp + 0x34]
// 0087f232  51                   push ecx
// 0087f233  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 0087f239  e8e248f6ff           call 0x7e3b20
// 0087f23e  6a10                 push 0x10
// 0087f240  8bc8                 mov ecx, eax
// 0087f242  e86940f6ff           call 0x7e32b0
// 0087f247  8bd8                 mov ebx, eax
// 0087f249  e8d248f6ff           call 0x7e3b20
// 0087f24e  6a05                 push 5
// 0087f250  8bc8                 mov ecx, eax
// 0087f252  e85940f6ff           call 0x7e32b0
// 0087f257  53                   push ebx
// 0087f258  50                   push eax
// 0087f259  8d542434             lea edx, [esp + 0x34]
// 0087f25d  52                   push edx
// 0087f25e  8bce                 mov ecx, esi
// 0087f260  e8d394f2ff           call 0x7a8738
// 0087f265  8b4730               mov eax, dword ptr [edi + 0x30]
// 0087f268  83f865               cmp eax, 0x65
// 0087f26b  754a                 jne 0x87f2b7
// 0087f26d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0087f271  8b442430             mov eax, dword ptr [esp + 0x30]
// 0087f275  03c1                 add eax, ecx
// 0087f277  99                   cdq 
// 0087f278  2bc2                 sub eax, edx
// 0087f27a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0087f27e  8bc8                 mov ecx, eax
// 0087f280  8b442434             mov eax, dword ptr [esp + 0x34]
// 0087f284  03c2                 add eax, edx
// 0087f286  99                   cdq 
// 0087f287  2bc2                 sub eax, edx
// 0087f289  d1f8                 sar eax, 1
// 0087f28b  8d68fd               lea ebp, [eax - 3]
// 0087f28e  d1f9                 sar ecx, 1
// 0087f290  896c2424             mov dword ptr [esp + 0x24], ebp
// 0087f294  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 0087f298  55                   push ebp
// 0087f299  8d5102               lea edx, [ecx + 2]
// 0087f29c  52                   push edx
// 0087f29d  50                   push eax
// 0087f29e  49                   dec ecx
// 0087f29f  51                   push ecx
// 0087f2a0  8d5803               lea ebx, [eax + 3]
// 0087f2a3  53                   push ebx
// 0087f2a4  51                   push ecx
// 0087f2a5  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0087f2a9  51                   push ecx
// 0087f2aa  56                   push esi
// 0087f2ab  e8f0eef2ff           call 0x7ae1a0
// 0087f2b0  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0087f2b4  83c420               add esp, 0x20
// 0087f2b7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0087f2bb  837f3065             cmp dword ptr [edi + 0x30], 0x65
// 0087f2bf  0f84f6000000         je 0x87f3bb
// 0087f2c5  8b17                 mov edx, dword ptr [edi]
// 0087f2c7  8b4258               mov eax, dword ptr [edx + 0x58]
// 0087f2ca  8bcf                 mov ecx, edi
// 0087f2cc  ffd0                 call eax
// 0087f2ce  8bd8                 mov ebx, eax
// 0087f2d0  85db                 test ebx, ebx
// 0087f2d2  744b                 je 0x87f31f
// 0087f2d4  8bcb                 mov ecx, ebx
// 0087f2d6  e87598f3ff           call 0x7b8b50
// 0087f2db  8bcb                 mov ecx, ebx
// 0087f2dd  8be8                 mov ebp, eax
// 0087f2df  e8bceef4ff           call 0x7ce1a0
// 0087f2e4  8bc8                 mov ecx, eax
// 0087f2e6  8b442434             mov eax, dword ptr [esp + 0x34]
// 0087f2ea  2bc1                 sub eax, ecx
// 0087f2ec  0344242c             add eax, dword ptr [esp + 0x2c]
// 0087f2f0  894c2424             mov dword ptr [esp + 0x24], ecx
// 0087f2f4  99                   cdq 
// 0087f2f5  2bc2                 sub eax, edx
// 0087f2f7  8bc8                 mov ecx, eax
// 0087f2f9  8b442438             mov eax, dword ptr [esp + 0x38]
// 0087f2fd  2bc5                 sub eax, ebp
// 0087f2ff  03442430             add eax, dword ptr [esp + 0x30]
// 0087f303  55                   push ebp
// 0087f304  99                   cdq 
// 0087f305  2bc2                 sub eax, edx
// 0087f307  8b542428             mov edx, dword ptr [esp + 0x28]
// 0087f30b  52                   push edx
// 0087f30c  d1f8                 sar eax, 1
// 0087f30e  d1f9                 sar ecx, 1
// 0087f310  50                   push eax
// 0087f311  51                   push ecx
// 0087f312  56                   push esi
// 0087f313  8bcb                 mov ecx, ebx
// 0087f315  e8165ef4ff           call 0x7c5130
// 0087f31a  e9e2000000           jmp 0x87f401
// 0087f31f  8d44245c             lea eax, [esp + 0x5c]
// 0087f323  50                   push eax
// 0087f324  8bcf                 mov ecx, edi
// 0087f326  e815e4ffff           call 0x87d740
// 0087f32b  8bc8                 mov ecx, eax
// 0087f32d  ff15eccd9e00         call dword ptr [0x9ecdec]
// 0087f333  84c0                 test al, al
// 0087f335  8d4c245c             lea ecx, [esp + 0x5c]
// 0087f339  0f94c3               sete bl
// 0087f33c  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087f342  84db                 test bl, bl
// 0087f344  7471                 je 0x87f3b7
// 0087f346  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0087f349  8b5500               mov edx, dword ptr [ebp]
// 0087f34c  6a01                 push 1
// 0087f34e  50                   push eax
// 0087f34f  8b420c               mov eax, dword ptr [edx + 0xc]
// 0087f352  8bcd                 mov ecx, ebp
// 0087f354  ffd0                 call eax
// 0087f356  50                   push eax
// 0087f357  56                   push esi
// 0087f358  8d4c2444             lea ecx, [esp + 0x44]
// 0087f35c  e83f03f8ff           call 0x7ff6a0
// 0087f361  8b16                 mov edx, dword ptr [esi]
// 0087f363  8b442460             mov eax, dword ptr [esp + 0x60]
// 0087f367  8b5238               mov edx, dword ptr [edx + 0x38]
// 0087f36a  50                   push eax
// 0087f36b  8bce                 mov ecx, esi
// 0087f36d  c744245800000000     mov dword ptr [esp + 0x58], 0
// 0087f375  ffd2                 call edx
// 0087f377  8d442460             lea eax, [esp + 0x60]
// 0087f37b  50                   push eax
// 0087f37c  8bcf                 mov ecx, edi
// 0087f37e  e8bde3ffff           call 0x87d740
// 0087f383  6825080000           push 0x825
// 0087f388  8d4c2430             lea ecx, [esp + 0x30]
// 0087f38c  51                   push ecx
// 0087f38d  50                   push eax
// 0087f38e  8bce                 mov ecx, esi
// 0087f390  c644246001           mov byte ptr [esp + 0x60], 1
// 0087f395  e846e9f2ff           call 0x7adce0
// 0087f39a  8d4c2460             lea ecx, [esp + 0x60]
// 0087f39e  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087f3a4  8d4c243c             lea ecx, [esp + 0x3c]
// 0087f3a8  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 0087f3b0  e86b03f8ff           call 0x7ff720
// 0087f3b5  eb4a                 jmp 0x87f401
// 0087f3b7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0087f3bb  837f3064             cmp dword ptr [edi + 0x30], 0x64
// 0087f3bf  7540                 jne 0x87f401
// 0087f3c1  8b542460             mov edx, dword ptr [esp + 0x60]
// 0087f3c5  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0087f3c9  52                   push edx
// 0087f3ca  6a02                 push 2
// 0087f3cc  6a02                 push 2
// 0087f3ce  55                   push ebp
// 0087f3cf  8d43fc               lea eax, [ebx - 4]
// 0087f3d2  50                   push eax
// 0087f3d3  8bce                 mov ecx, esi
// 0087f3d5  e8b0d90f00           call 0x97cd8a
// 0087f3da  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0087f3de  51                   push ecx
// 0087f3df  6a02                 push 2
// 0087f3e1  6a02                 push 2
// 0087f3e3  55                   push ebp
// 0087f3e4  53                   push ebx
// 0087f3e5  8bce                 mov ecx, esi
// 0087f3e7  e89ed90f00           call 0x97cd8a
// 0087f3ec  8b542460             mov edx, dword ptr [esp + 0x60]
// 0087f3f0  52                   push edx
// 0087f3f1  6a02                 push 2
// 0087f3f3  6a02                 push 2
// 0087f3f5  55                   push ebp
// 0087f3f6  83c304               add ebx, 4
// 0087f3f9  53                   push ebx
// 0087f3fa  8bce                 mov ecx, esi
// 0087f3fc  e889d90f00           call 0x97cd8a
// 0087f401  8bcf                 mov ecx, edi
// 0087f403  e838b0ffff           call 0x87a440
// 0087f408  85c0                 test eax, eax
// 0087f40a  744e                 je 0x87f45a
// 0087f40c  e80f47f6ff           call 0x7e3b20
// 0087f411  6a12                 push 0x12
// 0087f413  8bc8                 mov ecx, eax
// 0087f415  e8963ef6ff           call 0x7e32b0
// 0087f41a  8b16                 mov edx, dword ptr [esi]
// 0087f41c  50                   push eax
// 0087f41d  8b4238               mov eax, dword ptr [edx + 0x38]
// 0087f420  8bce                 mov ecx, esi
// 0087f422  ffd0                 call eax
// 0087f424  e8f746f6ff           call 0x7e3b20
// 0087f429  6a0f                 push 0xf
// 0087f42b  8bc8                 mov ecx, eax
// 0087f42d  e87e3ef6ff           call 0x7e32b0
// 0087f432  8b16                 mov edx, dword ptr [esi]
// 0087f434  50                   push eax
// 0087f435  8b4234               mov eax, dword ptr [edx + 0x34]
// 0087f438  8bce                 mov ecx, esi
// 0087f43a  ffd0                 call eax
// 0087f43c  6afe                 push -2
// 0087f43e  6afe                 push -2
// 0087f440  8d4c2434             lea ecx, [esp + 0x34]
// 0087f444  51                   push ecx
// 0087f445  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 0087f44b  8b4604               mov eax, dword ptr [esi + 4]
// 0087f44e  8d54242c             lea edx, [esp + 0x2c]
// 0087f452  52                   push edx
// 0087f453  50                   push eax
// 0087f454  ff15c8ba9e00         call dword ptr [0x9ebac8]
// 0087f45a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0087f45e  64890d00000000       mov dword ptr fs:[0], ecx
// 0087f465  59                   pop ecx
// 0087f466  5f                   pop edi
// 0087f467  5e                   pop esi
// 0087f468  5d                   pop ebp
// 0087f469  5b                   pop ebx
// 0087f46a  83c444               add esp, 0x44
// 0087f46d  c20800               ret 8
// copied from an identical function in another client (function ?FillInplaceButton@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@PAVCXTPPropertyGridInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp