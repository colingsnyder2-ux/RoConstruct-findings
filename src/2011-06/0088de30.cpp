// roc 2011-06 0088de30  unit: CXTPRibbonTheme  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088de30
//
// 0088de30  83ec10               sub esp, 0x10
// 0088de33  53                   push ebx
// 0088de34  56                   push esi
// 0088de35  8b742430             mov esi, dword ptr [esp + 0x30]
// 0088de39  8bd9                 mov ebx, ecx
// 0088de3b  57                   push edi
// 0088de3c  8bce                 mov ecx, esi
// 0088de3e  e88d6bb9ff           call 0x4249d0
// 0088de43  8bb8c0000000         mov edi, dword ptr [eax + 0xc0]
// 0088de49  8bce                 mov ecx, esi
// 0088de4b  e800470200           call 0x8b2550
// 0088de50  3bc7                 cmp eax, edi
// 0088de52  7d7d                 jge 0x88ded1
// 0088de54  68f80aad00           push 0xad0af8
// 0088de59  8bcb                 mov ecx, ebx
// 0088de5b  e830140000           call 0x88f290
// 0088de60  8bf0                 mov esi, eax
// 0088de62  85f6                 test esi, esi
// 0088de64  746b                 je 0x88ded1
// 0088de66  6a01                 push 1
// 0088de68  6a00                 push 0
// 0088de6a  8d442414             lea eax, [esp + 0x14]
// 0088de6e  50                   push eax
// 0088de6f  8bce                 mov ecx, esi
// 0088de71  e89af80500           call 0x8ed710
// 0088de76  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0088de7a  83c1fe               add ecx, -2
// 0088de7d  83ec10               sub esp, 0x10
// 0088de80  8bc4                 mov eax, esp
// 0088de82  894c2434             mov dword ptr [esp + 0x34], ecx
// 0088de86  33c9                 xor ecx, ecx
// 0088de88  8908                 mov dword ptr [eax], ecx
// 0088de8a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088de8e  bb02000000           mov ebx, 2
// 0088de93  295c2438             sub dword ptr [esp + 0x38], ebx
// 0088de97  8bd3                 mov edx, ebx
// 0088de99  895004               mov dword ptr [eax + 4], edx
// 0088de9c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088dea0  33ff                 xor edi, edi
// 0088dea2  897808               mov dword ptr [eax + 8], edi
// 0088dea5  89580c               mov dword ptr [eax + 0xc], ebx
// 0088dea8  83ec10               sub esp, 0x10
// 0088deab  8bc4                 mov eax, esp
// 0088dead  8910                 mov dword ptr [eax], edx
// 0088deaf  8b542434             mov edx, dword ptr [esp + 0x34]
// 0088deb3  894804               mov dword ptr [eax + 4], ecx
// 0088deb6  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0088deba  895008               mov dword ptr [eax + 8], edx
// 0088debd  89480c               mov dword ptr [eax + 0xc], ecx
// 0088dec0  8b442440             mov eax, dword ptr [esp + 0x40]
// 0088dec4  8d542444             lea edx, [esp + 0x44]
// 0088dec8  52                   push edx
// 0088dec9  50                   push eax
// 0088deca  8bce                 mov ecx, esi
// 0088decc  e80ff10500           call 0x8ecfe0
// 0088ded1  5f                   pop edi
// 0088ded2  5e                   pop esi
// 0088ded3  5b                   pop ebx
// 0088ded4  83c410               add esp, 0x10
// 0088ded7  c21c00               ret 0x1c
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawStatusBarPaneBorder@CXTPRibbonTheme@@MAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
