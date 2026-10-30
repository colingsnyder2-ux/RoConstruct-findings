// roc 2009-06 007f0160  unit: CXTPPropertyGridPaintManager  size: 1472 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f0160
//
// 007f0160  6aff                 push -1
// 007f0162  68e1098800           push 0x8809e1
// 007f0167  64a100000000         mov eax, dword ptr fs:[0]
// 007f016d  50                   push eax
// 007f016e  83ec38               sub esp, 0x38
// 007f0171  53                   push ebx
// 007f0172  55                   push ebp
// 007f0173  56                   push esi
// 007f0174  57                   push edi
// 007f0175  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007f017a  33c4                 xor eax, esp
// 007f017c  50                   push eax
// 007f017d  8d44244c             lea eax, [esp + 0x4c]
// 007f0181  64a300000000         mov dword ptr fs:[0], eax
// 007f0187  8be9                 mov ebp, ecx
// 007f0189  896c2414             mov dword ptr [esp + 0x14], ebp
// 007f018d  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 007f0191  8b4738               mov eax, dword ptr [edi + 0x38]
// 007f0194  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 007f0197  8b5f3c               mov ebx, dword ptr [edi + 0x3c]
// 007f019a  8b7734               mov esi, dword ptr [edi + 0x34]
// 007f019d  89442430             mov dword ptr [esp + 0x30], eax
// 007f01a1  03c1                 add eax, ecx
// 007f01a3  99                   cdq 
// 007f01a4  2bc2                 sub eax, edx
// 007f01a6  894c2438             mov dword ptr [esp + 0x38], ecx
// 007f01aa  8bc8                 mov ecx, eax
// 007f01ac  8d0433               lea eax, [ebx + esi]
// 007f01af  99                   cdq 
// 007f01b0  d1f9                 sar ecx, 1
// 007f01b2  895c2434             mov dword ptr [esp + 0x34], ebx
// 007f01b6  2bc2                 sub eax, edx
// 007f01b8  83c103               add ecx, 3
// 007f01bb  8bd8                 mov ebx, eax
// 007f01bd  894c2418             mov dword ptr [esp + 0x18], ecx
// 007f01c1  d1fb                 sar ebx, 1
// 007f01c3  8bcf                 mov ecx, edi
// 007f01c5  8974242c             mov dword ptr [esp + 0x2c], esi
// 007f01c9  895c241c             mov dword ptr [esp + 0x1c], ebx
// 007f01cd  e87ea6c2ff           call 0x41a850
// 007f01d2  8bf0                 mov esi, eax
// 007f01d4  f7de                 neg esi
// 007f01d6  1bf6                 sbb esi, esi
// 007f01d8  f7de                 neg esi
// 007f01da  83c611               add esi, 0x11
// 007f01dd  e83e49f6ff           call 0x754b20
// 007f01e2  56                   push esi
// 007f01e3  8bc8                 mov ecx, eax
// 007f01e5  e8b640f6ff           call 0x7542a0
// 007f01ea  837d0401             cmp dword ptr [ebp + 4], 1
// 007f01ee  89442460             mov dword ptr [esp + 0x60], eax
// 007f01f2  0f851f010000         jne 0x7f0317
// 007f01f8  8d4d14               lea ecx, [ebp + 0x14]
// 007f01fb  e8a009faff           call 0x790ba0
// 007f0200  85c0                 test eax, eax
// 007f0202  0f840f010000         je 0x7f0317
// 007f0208  8d4d20               lea ecx, [ebp + 0x20]
// 007f020b  e89009faff           call 0x790ba0
// 007f0210  85c0                 test eax, eax
// 007f0212  0f84ff000000         je 0x7f0317
// 007f0218  8b4574               mov eax, dword ptr [ebp + 0x74]
// 007f021b  8b4878               mov ecx, dword ptr [eax + 0x78]
// 007f021e  83c070               add eax, 0x70
// 007f0221  83f9ff               cmp ecx, -1
// 007f0224  7505                 jne 0x7f022b
// 007f0226  8b4004               mov eax, dword ptr [eax + 4]
// 007f0229  eb02                 jmp 0x7f022d
// 007f022b  8bc1                 mov eax, ecx
// 007f022d  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 007f0231  50                   push eax
// 007f0232  8d442430             lea eax, [esp + 0x30]
// 007f0236  50                   push eax
// 007f0237  8bce                 mov ecx, esi
// 007f0239  e89295f2ff           call 0x7197d0
// 007f023e  8b4730               mov eax, dword ptr [edi + 0x30]
// 007f0241  8bcf                 mov ecx, edi
// 007f0243  83f865               cmp eax, 0x65
// 007f0246  7471                 je 0x7f02b9
// 007f0248  e803a6c2ff           call 0x41a850
// 007f024d  85c0                 test eax, eax
// 007f024f  7507                 jne 0x7f0258
// 007f0251  b804000000           mov eax, 4
// 007f0256  eb3e                 jmp 0x7f0296
// 007f0258  8bcf                 mov ecx, edi
// 007f025a  e8d1b4ffff           call 0x7eb730
// 007f025f  85c0                 test eax, eax
// 007f0261  7412                 je 0x7f0275
// 007f0263  8bcf                 mov ecx, edi
// 007f0265  e8a6b4ffff           call 0x7eb710
// 007f026a  85c0                 test eax, eax
// 007f026c  7407                 je 0x7f0275
// 007f026e  b803000000           mov eax, 3
// 007f0273  eb21                 jmp 0x7f0296
// 007f0275  8bcf                 mov ecx, edi
// 007f0277  e894b4ffff           call 0x7eb710
// 007f027c  85c0                 test eax, eax
// 007f027e  7407                 je 0x7f0287
// 007f0280  b802000000           mov eax, 2
// 007f0285  eb0f                 jmp 0x7f0296
// 007f0287  8bcf                 mov ecx, edi
// 007f0289  e862b4ffff           call 0x7eb6f0
// 007f028e  f7d8                 neg eax
// 007f0290  1bc0                 sbb eax, eax
// 007f0292  83e004               and eax, 4
// 007f0295  40                   inc eax
// 007f0296  85f6                 test esi, esi
// 007f0298  7504                 jne 0x7f029e
// 007f029a  33c9                 xor ecx, ecx
// 007f029c  eb03                 jmp 0x7f02a1
// 007f029e  8b4e04               mov ecx, dword ptr [esi + 4]
// 007f02a1  6a00                 push 0
// 007f02a3  8d542430             lea edx, [esp + 0x30]
// 007f02a7  52                   push edx
// 007f02a8  50                   push eax
// 007f02a9  6a01                 push 1
// 007f02ab  51                   push ecx
// 007f02ac  8d4d14               lea ecx, [ebp + 0x14]
// 007f02af  e86c05faff           call 0x790820
// 007f02b4  e9b2020000           jmp 0x7f056b
// 007f02b9  e892a5c2ff           call 0x41a850
// 007f02be  85c0                 test eax, eax
// 007f02c0  7507                 jne 0x7f02c9
// 007f02c2  b804000000           mov eax, 4
// 007f02c7  eb2b                 jmp 0x7f02f4
// 007f02c9  8bcf                 mov ecx, edi
// 007f02cb  e860b4ffff           call 0x7eb730
// 007f02d0  85c0                 test eax, eax
// 007f02d2  7412                 je 0x7f02e6
// 007f02d4  8bcf                 mov ecx, edi
// 007f02d6  e835b4ffff           call 0x7eb710
// 007f02db  85c0                 test eax, eax
// 007f02dd  7407                 je 0x7f02e6
// 007f02df  b803000000           mov eax, 3
// 007f02e4  eb0e                 jmp 0x7f02f4
// 007f02e6  8bcf                 mov ecx, edi
// 007f02e8  e823b4ffff           call 0x7eb710
// 007f02ed  f7d8                 neg eax
// 007f02ef  1bc0                 sbb eax, eax
// 007f02f1  f7d8                 neg eax
// 007f02f3  40                   inc eax
// 007f02f4  85f6                 test esi, esi
// 007f02f6  7504                 jne 0x7f02fc
// 007f02f8  33c9                 xor ecx, ecx
// 007f02fa  eb03                 jmp 0x7f02ff
// 007f02fc  8b4e04               mov ecx, dword ptr [esi + 4]
// 007f02ff  6a00                 push 0
// 007f0301  8d542430             lea edx, [esp + 0x30]
// 007f0305  52                   push edx
// 007f0306  50                   push eax
// 007f0307  6a01                 push 1
// 007f0309  51                   push ecx
// 007f030a  8d4d20               lea ecx, [ebp + 0x20]
// 007f030d  e80e05faff           call 0x790820
// 007f0312  e954020000           jmp 0x7f056b
// 007f0317  8b4504               mov eax, dword ptr [ebp + 4]
// 007f031a  83f803               cmp eax, 3
// 007f031d  0f859e000000         jne 0x7f03c1
// 007f0323  8bcf                 mov ecx, edi
// 007f0325  e806b4ffff           call 0x7eb730
// 007f032a  85c0                 test eax, eax
// 007f032c  7412                 je 0x7f0340
// 007f032e  8bcf                 mov ecx, edi
// 007f0330  e8dbb3ffff           call 0x7eb710
// 007f0335  85c0                 test eax, eax
// 007f0337  7407                 je 0x7f0340
// 007f0339  b8ffab3f00           mov eax, 0x3fabff
// 007f033e  eb1d                 jmp 0x7f035d
// 007f0340  8bcf                 mov ecx, edi
// 007f0342  e8c9b3ffff           call 0x7eb710
// 007f0347  85c0                 test eax, eax
// 007f0349  7407                 je 0x7f0352
// 007f034b  b8ffe7a200           mov eax, 0xa2e7ff
// 007f0350  eb0b                 jmp 0x7f035d
// 007f0352  8b4538               mov eax, dword ptr [ebp + 0x38]
// 007f0355  83f8ff               cmp eax, -1
// 007f0358  7503                 jne 0x7f035d
// 007f035a  8b4534               mov eax, dword ptr [ebp + 0x34]
// 007f035d  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 007f0361  50                   push eax
// 007f0362  8d442430             lea eax, [esp + 0x30]
// 007f0366  50                   push eax
// 007f0367  8bce                 mov ecx, esi
// 007f0369  e86294f2ff           call 0x7197d0
// 007f036e  8bcf                 mov ecx, edi
// 007f0370  e8bbb3ffff           call 0x7eb730
// 007f0375  85c0                 test eax, eax
// 007f0377  7412                 je 0x7f038b
// 007f0379  8bcf                 mov ecx, edi
// 007f037b  e890b3ffff           call 0x7eb710
// 007f0380  85c0                 test eax, eax
// 007f0382  7407                 je 0x7f038b
// 007f0384  bbfb8c3c00           mov ebx, 0x3c8cfb
// 007f0389  eb1d                 jmp 0x7f03a8
// 007f038b  8bcf                 mov ecx, edi
// 007f038d  e87eb3ffff           call 0x7eb710
// 007f0392  85c0                 test eax, eax
// 007f0394  7407                 je 0x7f039d
// 007f0396  bbffbd6900           mov ebx, 0x69bdff
// 007f039b  eb0b                 jmp 0x7f03a8
// 007f039d  8b5d44               mov ebx, dword ptr [ebp + 0x44]
// 007f03a0  83fbff               cmp ebx, -1
// 007f03a3  7503                 jne 0x7f03a8
// 007f03a5  8b5d40               mov ebx, dword ptr [ebp + 0x40]
// 007f03a8  e87347f6ff           call 0x754b20
// 007f03ad  53                   push ebx
// 007f03ae  8bc8                 mov ecx, eax
// 007f03b0  e8eb3ef6ff           call 0x7542a0
// 007f03b5  50                   push eax
// 007f03b6  50                   push eax
// 007f03b7  8d4c2434             lea ecx, [esp + 0x34]
// 007f03bb  51                   push ecx
// 007f03bc  e94d010000           jmp 0x7f050e
// 007f03c1  83f802               cmp eax, 2
// 007f03c4  0f8596000000         jne 0x7f0460
// 007f03ca  8bcf                 mov ecx, edi
// 007f03cc  e85fb3ffff           call 0x7eb730
// 007f03d1  85c0                 test eax, eax
// 007f03d3  7412                 je 0x7f03e7
// 007f03d5  8bcf                 mov ecx, edi
// 007f03d7  e834b3ffff           call 0x7eb710
// 007f03dc  85c0                 test eax, eax
// 007f03de  7407                 je 0x7f03e7
// 007f03e0  be21000000           mov esi, 0x21
// 007f03e5  eb12                 jmp 0x7f03f9
// 007f03e7  8bcf                 mov ecx, edi
// 007f03e9  e822b3ffff           call 0x7eb710
// 007f03ee  8bf0                 mov esi, eax
// 007f03f0  f7de                 neg esi
// 007f03f2  1bf6                 sbb esi, esi
// 007f03f4  f7de                 neg esi
// 007f03f6  83c61e               add esi, 0x1e
// 007f03f9  e82247f6ff           call 0x754b20
// 007f03fe  56                   push esi
// 007f03ff  8bc8                 mov ecx, eax
// 007f0401  e89a3ef6ff           call 0x7542a0
// 007f0406  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 007f040a  50                   push eax
// 007f040b  8d542430             lea edx, [esp + 0x30]
// 007f040f  52                   push edx
// 007f0410  8bce                 mov ecx, esi
// 007f0412  e8b993f2ff           call 0x7197d0
// 007f0417  8bcf                 mov ecx, edi
// 007f0419  e812b3ffff           call 0x7eb730
// 007f041e  85c0                 test eax, eax
// 007f0420  7412                 je 0x7f0434
// 007f0422  8bcf                 mov ecx, edi
// 007f0424  e8e7b2ffff           call 0x7eb710
// 007f0429  85c0                 test eax, eax
// 007f042b  7407                 je 0x7f0434
// 007f042d  bb32000000           mov ebx, 0x32
// 007f0432  eb13                 jmp 0x7f0447
// 007f0434  8bcf                 mov ecx, edi
// 007f0436  e8d5b2ffff           call 0x7eb710
// 007f043b  8bd8                 mov ebx, eax
// 007f043d  f7db                 neg ebx
// 007f043f  1bdb                 sbb ebx, ebx
// 007f0441  83e310               and ebx, 0x10
// 007f0444  83c310               add ebx, 0x10
// 007f0447  e8d446f6ff           call 0x754b20
// 007f044c  53                   push ebx
// 007f044d  8bc8                 mov ecx, eax
// 007f044f  e84c3ef6ff           call 0x7542a0
// 007f0454  50                   push eax
// 007f0455  50                   push eax
// 007f0456  8d442434             lea eax, [esp + 0x34]
// 007f045a  50                   push eax
// 007f045b  e9ae000000           jmp 0x7f050e
// 007f0460  e8bb46f6ff           call 0x754b20
// 007f0465  6a0f                 push 0xf
// 007f0467  8bc8                 mov ecx, eax
// 007f0469  e8323ef6ff           call 0x7542a0
// 007f046e  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 007f0472  50                   push eax
// 007f0473  8d4c2430             lea ecx, [esp + 0x30]
// 007f0477  51                   push ecx
// 007f0478  8bce                 mov ecx, esi
// 007f047a  e85193f2ff           call 0x7197d0
// 007f047f  8bcf                 mov ecx, edi
// 007f0481  e8aab2ffff           call 0x7eb730
// 007f0486  85c0                 test eax, eax
// 007f0488  7424                 je 0x7f04ae
// 007f048a  8bcf                 mov ecx, edi
// 007f048c  e87fb2ffff           call 0x7eb710
// 007f0491  85c0                 test eax, eax
// 007f0493  7419                 je 0x7f04ae
// 007f0495  e88646f6ff           call 0x754b20
// 007f049a  6a10                 push 0x10
// 007f049c  8bc8                 mov ecx, eax
// 007f049e  e8fd3df6ff           call 0x7542a0
// 007f04a3  8bd8                 mov ebx, eax
// 007f04a5  e87646f6ff           call 0x754b20
// 007f04aa  6a10                 push 0x10
// 007f04ac  eb52                 jmp 0x7f0500
// 007f04ae  e86d46f6ff           call 0x754b20
// 007f04b3  6a15                 push 0x15
// 007f04b5  8bc8                 mov ecx, eax
// 007f04b7  e8e43df6ff           call 0x7542a0
// 007f04bc  8bd8                 mov ebx, eax
// 007f04be  e85d46f6ff           call 0x754b20
// 007f04c3  6a0f                 push 0xf
// 007f04c5  8bc8                 mov ecx, eax
// 007f04c7  e8d43df6ff           call 0x7542a0
// 007f04cc  53                   push ebx
// 007f04cd  50                   push eax
// 007f04ce  8d442434             lea eax, [esp + 0x34]
// 007f04d2  50                   push eax
// 007f04d3  8bce                 mov ecx, esi
// 007f04d5  e8f092f2ff           call 0x7197ca
// 007f04da  6aff                 push -1
// 007f04dc  6aff                 push -1
// 007f04de  8d4c2434             lea ecx, [esp + 0x34]
// 007f04e2  51                   push ecx
// 007f04e3  ff15bced8900         call dword ptr [0x89edbc]
// 007f04e9  e83246f6ff           call 0x754b20
// 007f04ee  6a10                 push 0x10
// 007f04f0  8bc8                 mov ecx, eax
// 007f04f2  e8a93df6ff           call 0x7542a0
// 007f04f7  8bd8                 mov ebx, eax
// 007f04f9  e82246f6ff           call 0x754b20
// 007f04fe  6a05                 push 5
// 007f0500  8bc8                 mov ecx, eax
// 007f0502  e8993df6ff           call 0x7542a0
// 007f0507  53                   push ebx
// 007f0508  50                   push eax
// 007f0509  8d542434             lea edx, [esp + 0x34]
// 007f050d  52                   push edx
// 007f050e  8bce                 mov ecx, esi
// 007f0510  e8b592f2ff           call 0x7197ca
// 007f0515  8b4730               mov eax, dword ptr [edi + 0x30]
// 007f0518  83f865               cmp eax, 0x65
// 007f051b  754a                 jne 0x7f0567
// 007f051d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007f0521  8b442430             mov eax, dword ptr [esp + 0x30]
// 007f0525  03c1                 add eax, ecx
// 007f0527  99                   cdq 
// 007f0528  2bc2                 sub eax, edx
// 007f052a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007f052e  8bc8                 mov ecx, eax
// 007f0530  8b442434             mov eax, dword ptr [esp + 0x34]
// 007f0534  03c2                 add eax, edx
// 007f0536  99                   cdq 
// 007f0537  2bc2                 sub eax, edx
// 007f0539  d1f8                 sar eax, 1
// 007f053b  8d68fd               lea ebp, [eax - 3]
// 007f053e  d1f9                 sar ecx, 1
// 007f0540  896c2424             mov dword ptr [esp + 0x24], ebp
// 007f0544  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 007f0548  55                   push ebp
// 007f0549  8d5102               lea edx, [ecx + 2]
// 007f054c  52                   push edx
// 007f054d  50                   push eax
// 007f054e  49                   dec ecx
// 007f054f  51                   push ecx
// 007f0550  8d5803               lea ebx, [eax + 3]
// 007f0553  53                   push ebx
// 007f0554  51                   push ecx
// 007f0555  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007f0559  51                   push ecx
// 007f055a  56                   push esi
// 007f055b  e8500ef8ff           call 0x7713b0
// 007f0560  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 007f0564  83c420               add esp, 0x20
// 007f0567  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007f056b  837f3065             cmp dword ptr [edi + 0x30], 0x65
// 007f056f  0f84f6000000         je 0x7f066b
// 007f0575  8b17                 mov edx, dword ptr [edi]
// 007f0577  8b4258               mov eax, dword ptr [edx + 0x58]
// 007f057a  8bcf                 mov ecx, edi
// 007f057c  ffd0                 call eax
// 007f057e  8bd8                 mov ebx, eax
// 007f0580  85db                 test ebx, ebx
// 007f0582  744b                 je 0x7f05cf
// 007f0584  8bcb                 mov ecx, ebx
// 007f0586  e825c9f5ff           call 0x74ceb0
// 007f058b  8bcb                 mov ecx, ebx
// 007f058d  8be8                 mov ebp, eax
// 007f058f  e88c7cfdff           call 0x7c8220
// 007f0594  8bc8                 mov ecx, eax
// 007f0596  8b442434             mov eax, dword ptr [esp + 0x34]
// 007f059a  2bc1                 sub eax, ecx
// 007f059c  0344242c             add eax, dword ptr [esp + 0x2c]
// 007f05a0  894c2424             mov dword ptr [esp + 0x24], ecx
// 007f05a4  99                   cdq 
// 007f05a5  2bc2                 sub eax, edx
// 007f05a7  8bc8                 mov ecx, eax
// 007f05a9  8b442438             mov eax, dword ptr [esp + 0x38]
// 007f05ad  2bc5                 sub eax, ebp
// 007f05af  03442430             add eax, dword ptr [esp + 0x30]
// 007f05b3  55                   push ebp
// 007f05b4  99                   cdq 
// 007f05b5  2bc2                 sub eax, edx
// 007f05b7  8b542428             mov edx, dword ptr [esp + 0x28]
// 007f05bb  52                   push edx
// 007f05bc  d1f8                 sar eax, 1
// 007f05be  d1f9                 sar ecx, 1
// 007f05c0  50                   push eax
// 007f05c1  51                   push ecx
// 007f05c2  56                   push esi
// 007f05c3  8bcb                 mov ecx, ebx
// 007f05c5  e8d699f4ff           call 0x739fa0
// 007f05ca  e9e2000000           jmp 0x7f06b1
// 007f05cf  8d44245c             lea eax, [esp + 0x5c]
// 007f05d3  50                   push eax
// 007f05d4  8bcf                 mov ecx, edi
// 007f05d6  e8656ec3ff           call 0x427440
// 007f05db  8bc8                 mov ecx, eax
// 007f05dd  ff155cfb8900         call dword ptr [0x89fb5c]
// 007f05e3  84c0                 test al, al
// 007f05e5  8d4c245c             lea ecx, [esp + 0x5c]
// 007f05e9  0f94c3               sete bl
// 007f05ec  ff1510fd8900         call dword ptr [0x89fd10]
// 007f05f2  84db                 test bl, bl
// 007f05f4  7471                 je 0x7f0667
// 007f05f6  8b472c               mov eax, dword ptr [edi + 0x2c]
// 007f05f9  8b5500               mov edx, dword ptr [ebp]
// 007f05fc  6a01                 push 1
// 007f05fe  50                   push eax
// 007f05ff  8b420c               mov eax, dword ptr [edx + 0xc]
// 007f0602  8bcd                 mov ecx, ebp
// 007f0604  ffd0                 call eax
// 007f0606  50                   push eax
// 007f0607  56                   push esi
// 007f0608  8d4c2444             lea ecx, [esp + 0x44]
// 007f060c  e84f02f8ff           call 0x770860
// 007f0611  8b16                 mov edx, dword ptr [esi]
// 007f0613  8b442460             mov eax, dword ptr [esp + 0x60]
// 007f0617  8b5238               mov edx, dword ptr [edx + 0x38]
// 007f061a  50                   push eax
// 007f061b  8bce                 mov ecx, esi
// 007f061d  c744245800000000     mov dword ptr [esp + 0x58], 0
// 007f0625  ffd2                 call edx
// 007f0627  8d442460             lea eax, [esp + 0x60]
// 007f062b  50                   push eax
// 007f062c  8bcf                 mov ecx, edi
// 007f062e  e80d6ec3ff           call 0x427440
// 007f0633  6825080000           push 0x825
// 007f0638  8d4c2430             lea ecx, [esp + 0x30]
// 007f063c  51                   push ecx
// 007f063d  50                   push eax
// 007f063e  8bce                 mov ecx, esi
// 007f0640  c644246001           mov byte ptr [esp + 0x60], 1
// 007f0645  e846b3f2ff           call 0x71b990
// 007f064a  8d4c2460             lea ecx, [esp + 0x60]
// 007f064e  ff1510fd8900         call dword ptr [0x89fd10]
// 007f0654  8d4c243c             lea ecx, [esp + 0x3c]
// 007f0658  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 007f0660  e87b02f8ff           call 0x7708e0
// 007f0665  eb4a                 jmp 0x7f06b1
// 007f0667  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007f066b  837f3064             cmp dword ptr [edi + 0x30], 0x64
// 007f066f  7540                 jne 0x7f06b1
// 007f0671  8b542460             mov edx, dword ptr [esp + 0x60]
// 007f0675  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 007f0679  52                   push edx
// 007f067a  6a02                 push 2
// 007f067c  6a02                 push 2
// 007f067e  55                   push ebp
// 007f067f  8d43fc               lea eax, [ebx - 4]
// 007f0682  50                   push eax
// 007f0683  8bce                 mov ecx, esi
// 007f0685  e8a6b80500           call 0x84bf30
// 007f068a  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007f068e  51                   push ecx
// 007f068f  6a02                 push 2
// 007f0691  6a02                 push 2
// 007f0693  55                   push ebp
// 007f0694  53                   push ebx
// 007f0695  8bce                 mov ecx, esi
// 007f0697  e894b80500           call 0x84bf30
// 007f069c  8b542460             mov edx, dword ptr [esp + 0x60]
// 007f06a0  52                   push edx
// 007f06a1  6a02                 push 2
// 007f06a3  6a02                 push 2
// 007f06a5  55                   push ebp
// 007f06a6  83c304               add ebx, 4
// 007f06a9  53                   push ebx
// 007f06aa  8bce                 mov ecx, esi
// 007f06ac  e87fb80500           call 0x84bf30
// 007f06b1  8bcf                 mov ecx, edi
// 007f06b3  e838b0ffff           call 0x7eb6f0
// 007f06b8  85c0                 test eax, eax
// 007f06ba  744e                 je 0x7f070a
// 007f06bc  e85f44f6ff           call 0x754b20
// 007f06c1  6a12                 push 0x12
// 007f06c3  8bc8                 mov ecx, eax
// 007f06c5  e8d63bf6ff           call 0x7542a0
// 007f06ca  8b16                 mov edx, dword ptr [esi]
// 007f06cc  50                   push eax
// 007f06cd  8b4238               mov eax, dword ptr [edx + 0x38]
// 007f06d0  8bce                 mov ecx, esi
// 007f06d2  ffd0                 call eax
// 007f06d4  e84744f6ff           call 0x754b20
// 007f06d9  6a0f                 push 0xf
// 007f06db  8bc8                 mov ecx, eax
// 007f06dd  e8be3bf6ff           call 0x7542a0
// 007f06e2  8b16                 mov edx, dword ptr [esi]
// 007f06e4  50                   push eax
// 007f06e5  8b4234               mov eax, dword ptr [edx + 0x34]
// 007f06e8  8bce                 mov ecx, esi
// 007f06ea  ffd0                 call eax
// 007f06ec  6afe                 push -2
// 007f06ee  6afe                 push -2
// 007f06f0  8d4c2434             lea ecx, [esp + 0x34]
// 007f06f4  51                   push ecx
// 007f06f5  ff15bced8900         call dword ptr [0x89edbc]
// 007f06fb  8b4604               mov eax, dword ptr [esi + 4]
// 007f06fe  8d54242c             lea edx, [esp + 0x2c]
// 007f0702  52                   push edx
// 007f0703  50                   push eax
// 007f0704  ff15e0ee8900         call dword ptr [0x89eee0]
// 007f070a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007f070e  64890d00000000       mov dword ptr fs:[0], ecx
// 007f0715  59                   pop ecx
// 007f0716  5f                   pop edi
// 007f0717  5e                   pop esi
// 007f0718  5d                   pop ebp
// 007f0719  5b                   pop ebx
// 007f071a  83c444               add esp, 0x44
// 007f071d  c20800               ret 8
// copied from an identical function in another client (function ?FillInplaceButton@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@PAVCXTPPropertyGridInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp