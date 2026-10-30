// roc 2009-12 008c0590  unit: CXTPShadowsManager::CShadowWnd  size: 405 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c0590
//
// 008c0590  6aff                 push -1
// 008c0592  68f93d9600           push 0x963df9
// 008c0597  64a100000000         mov eax, dword ptr fs:[0]
// 008c059d  50                   push eax
// 008c059e  83ec24               sub esp, 0x24
// 008c05a1  53                   push ebx
// 008c05a2  55                   push ebp
// 008c05a3  56                   push esi
// 008c05a4  57                   push edi
// 008c05a5  a10052b600           mov eax, dword ptr [0xb65200]
// 008c05aa  33c4                 xor eax, esp
// 008c05ac  50                   push eax
// 008c05ad  8d442438             lea eax, [esp + 0x38]
// 008c05b1  64a300000000         mov dword ptr fs:[0], eax
// 008c05b7  8bf1                 mov esi, ecx
// 008c05b9  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 008c05bc  e8cf6af4ff           call 0x807090
// 008c05c1  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 008c05c4  8be8                 mov ebp, eax
// 008c05c6  e8053ff4ff           call 0x8044d0
// 008c05cb  837e2000             cmp dword ptr [esi + 0x20], 0
// 008c05cf  8bf8                 mov edi, eax
// 008c05d1  0f85ac000000         jne 0x8c0683
// 008c05d7  bb80000000           mov ebx, 0x80
// 008c05dc  e8cffeffff           call 0x8c04b0
// 008c05e1  83782000             cmp dword ptr [eax + 0x20], 0
// 008c05e5  7405                 je 0x8c05ec
// 008c05e7  bb80000800           mov ebx, 0x80080
// 008c05ec  85ff                 test edi, edi
// 008c05ee  7410                 je 0x8c0600
// 008c05f0  8b7f74               mov edi, dword ptr [edi + 0x74]
// 008c05f3  83bf8000000000       cmp dword ptr [edi + 0x80], 0
// 008c05fa  7504                 jne 0x8c0600
// 008c05fc  33ff                 xor edi, edi
// 008c05fe  eb05                 jmp 0x8c0605
// 008c0600  bf20080000           mov edi, 0x820
// 008c0605  e81435f3ff           call 0x7f3b1e
// 008c060a  68007f0000           push 0x7f00
// 008c060f  6a00                 push 0
// 008c0611  ff1548ca9800         call dword ptr [0x98ca48]
// 008c0617  6a00                 push 0
// 008c0619  6a00                 push 0
// 008c061b  50                   push eax
// 008c061c  57                   push edi
// 008c061d  e8043cf3ff           call 0x7f4226
// 008c0622  50                   push eax
// 008c0623  8d4c2418             lea ecx, [esp + 0x18]
// 008c0627  ff15b8de9800         call dword ptr [0x98deb8]
// 008c062d  8b3e                 mov edi, dword ptr [esi]
// 008c062f  6a00                 push 0
// 008c0631  6a00                 push 0
// 008c0633  55                   push ebp
// 008c0634  8d4c2434             lea ecx, [esp + 0x34]
// 008c0638  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 008c0640  e8ebabf8ff           call 0x84b230
// 008c0645  50                   push eax
// 008c0646  6800000080           push 0x80000000
// 008c064b  6a00                 push 0
// 008c064d  8d4c242c             lea ecx, [esp + 0x2c]
// 008c0651  ff1580de9800         call dword ptr [0x98de80]
// 008c0657  50                   push eax
// 008c0658  8b4760               mov eax, dword ptr [edi + 0x60]
// 008c065b  53                   push ebx
// 008c065c  8bce                 mov ecx, esi
// 008c065e  ffd0                 call eax
// 008c0660  8d4c2414             lea ecx, [esp + 0x14]
// 008c0664  85c0                 test eax, eax
// 008c0666  750d                 jne 0x8c0675
// 008c0668  ff15c0de9800         call dword ptr [0x98dec0]
// 008c066e  33c0                 xor eax, eax
// 008c0670  e99a000000           jmp 0x8c070f
// 008c0675  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 008c067d  ff15c0de9800         call dword ptr [0x98dec0]
// 008c0683  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008c0686  6a00                 push 0
// 008c0688  6a00                 push 0
// 008c068a  51                   push ecx
// 008c068b  ff1554cb9800         call dword ptr [0x98cb54]
// 008c0691  e81afeffff           call 0x8c04b0
// 008c0696  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008c069a  33d2                 xor edx, edx
// 008c069c  395020               cmp dword ptr [eax + 0x20], edx
// 008c069f  894e5c               mov dword ptr [esi + 0x5c], ecx
// 008c06a2  0f95c2               setne dl
// 008c06a5  85c9                 test ecx, ecx
// 008c06a7  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008c06ab  8d541202             lea edx, [edx + edx + 2]
// 008c06af  8bc2                 mov eax, edx
// 008c06b1  741a                 je 0x8c06cd
// 008c06b3  8d1401               lea edx, [ecx + eax]
// 008c06b6  52                   push edx
// 008c06b7  8b542458             mov edx, dword ptr [esp + 0x58]
// 008c06bb  03d0                 add edx, eax
// 008c06bd  52                   push edx
// 008c06be  51                   push ecx
// 008c06bf  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008c06c3  03c8                 add ecx, eax
// 008c06c5  51                   push ecx
// 008c06c6  8d542428             lea edx, [esp + 0x28]
// 008c06ca  52                   push edx
// 008c06cb  eb16                 jmp 0x8c06e3
// 008c06cd  51                   push ecx
// 008c06ce  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008c06d2  8d1401               lea edx, [ecx + eax]
// 008c06d5  52                   push edx
// 008c06d6  8b542458             mov edx, dword ptr [esp + 0x58]
// 008c06da  03d0                 add edx, eax
// 008c06dc  52                   push edx
// 008c06dd  51                   push ecx
// 008c06de  8d442428             lea eax, [esp + 0x28]
// 008c06e2  50                   push eax
// 008c06e3  ff1538ca9800         call dword ptr [0x98ca38]
// 008c06e9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008c06ed  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008c06f1  8b542420             mov edx, dword ptr [esp + 0x20]
// 008c06f5  6a00                 push 0
// 008c06f7  2bc8                 sub ecx, eax
// 008c06f9  51                   push ecx
// 008c06fa  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008c06fe  2bd1                 sub edx, ecx
// 008c0700  52                   push edx
// 008c0701  50                   push eax
// 008c0702  51                   push ecx
// 008c0703  8bce                 mov ecx, esi
// 008c0705  e82835f3ff           call 0x7f3c32
// 008c070a  b801000000           mov eax, 1
// 008c070f  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008c0713  64890d00000000       mov dword ptr fs:[0], ecx
// 008c071a  59                   pop ecx
// 008c071b  5f                   pop edi
// 008c071c  5e                   pop esi
// 008c071d  5d                   pop ebp
// 008c071e  5b                   pop ebx
// 008c071f  83c430               add esp, 0x30
// 008c0722  c21400               ret 0x14
// copied from an identical function in another client (function ?Create@CShadowWnd@CXTPShadowsManager@@QAEHHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPShadowsManager.cpp