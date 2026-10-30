// roc 2011-06 008f2d90  unit: CXTCaptionButton  size: 295 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2d90
//
// 008f2d90  6aff                 push -1
// 008f2d92  681aeba000           push 0xa0eb1a
// 008f2d97  64a100000000         mov eax, dword ptr fs:[0]
// 008f2d9d  50                   push eax
// 008f2d9e  83ec0c               sub esp, 0xc
// 008f2da1  56                   push esi
// 008f2da2  57                   push edi
// 008f2da3  a12058c900           mov eax, dword ptr [0xc95820]
// 008f2da8  33c4                 xor eax, esp
// 008f2daa  50                   push eax
// 008f2dab  8d442418             lea eax, [esp + 0x18]
// 008f2daf  64a300000000         mov dword ptr fs:[0], eax
// 008f2db5  8bf9                 mov edi, ecx
// 008f2db7  837c242800           cmp dword ptr [esp + 0x28], 0
// 008f2dbc  c744242001000000     mov dword ptr [esp + 0x20], 1
// 008f2dc4  7507                 jne 0x8f2dcd
// 008f2dc6  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 008f2dcb  7406                 je 0x8f2dd3
// 008f2dcd  8d442428             lea eax, [esp + 0x28]
// 008f2dd1  eb0e                 jmp 0x8f2de1
// 008f2dd3  8d442410             lea eax, [esp + 0x10]
// 008f2dd7  50                   push eax
// 008f2dd8  8d4c2434             lea ecx, [esp + 0x34]
// 008f2ddc  e80fc9f2ff           call 0x81f6f0
// 008f2de1  8b08                 mov ecx, dword ptr [eax]
// 008f2de3  894c2428             mov dword ptr [esp + 0x28], ecx
// 008f2de7  8b5004               mov edx, dword ptr [eax + 4]
// 008f2dea  6858010000           push 0x158
// 008f2def  89542430             mov dword ptr [esp + 0x30], edx
// 008f2df3  e86672f1ff           call 0x80a05e
// 008f2df8  83c404               add esp, 4
// 008f2dfb  8944240c             mov dword ptr [esp + 0xc], eax
// 008f2dff  c644242002           mov byte ptr [esp + 0x20], 2
// 008f2e04  85c0                 test eax, eax
// 008f2e06  7419                 je 0x8f2e21
// 008f2e08  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008f2e0c  8b542428             mov edx, dword ptr [esp + 0x28]
// 008f2e10  6a00                 push 0
// 008f2e12  51                   push ecx
// 008f2e13  52                   push edx
// 008f2e14  6a00                 push 0
// 008f2e16  8bc8                 mov ecx, eax
// 008f2e18  e82303f3ff           call 0x823140
// 008f2e1d  8bf0                 mov esi, eax
// 008f2e1f  eb02                 jmp 0x8f2e23
// 008f2e21  33f6                 xor esi, esi
// 008f2e23  83ec24               sub esp, 0x24
// 008f2e26  8d442454             lea eax, [esp + 0x54]
// 008f2e2a  8bcc                 mov ecx, esp
// 008f2e2c  89642430             mov dword ptr [esp + 0x30], esp
// 008f2e30  50                   push eax
// 008f2e31  c644244801           mov byte ptr [esp + 0x48], 1
// 008f2e36  e835dcf2ff           call 0x820a70
// 008f2e3b  8bce                 mov ecx, esi
// 008f2e3d  e87e0ef3ff           call 0x823cc0
// 008f2e42  8d4c2454             lea ecx, [esp + 0x54]
// 008f2e46  e885dcf2ff           call 0x820ad0
// 008f2e4b  85c0                 test eax, eax
// 008f2e4d  751a                 jne 0x8f2e69
// 008f2e4f  83ec24               sub esp, 0x24
// 008f2e52  8d542478             lea edx, [esp + 0x78]
// 008f2e56  8bcc                 mov ecx, esp
// 008f2e58  89642430             mov dword ptr [esp + 0x30], esp
// 008f2e5c  52                   push edx
// 008f2e5d  e80edcf2ff           call 0x820a70
// 008f2e62  8bce                 mov ecx, esi
// 008f2e64  e8f70ef3ff           call 0x823d60
// 008f2e69  8b442478             mov eax, dword ptr [esp + 0x78]
// 008f2e6d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008f2e71  8b542428             mov edx, dword ptr [esp + 0x28]
// 008f2e75  50                   push eax
// 008f2e76  56                   push esi
// 008f2e77  51                   push ecx
// 008f2e78  52                   push edx
// 008f2e79  8bcf                 mov ecx, edi
// 008f2e7b  e8a0feffff           call 0x8f2d20
// 008f2e80  8d4c2430             lea ecx, [esp + 0x30]
// 008f2e84  8bf0                 mov esi, eax
// 008f2e86  c644242000           mov byte ptr [esp + 0x20], 0
// 008f2e8b  e8d0fff2ff           call 0x822e60
// 008f2e90  8d4c2454             lea ecx, [esp + 0x54]
// 008f2e94  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008f2e9c  e8bffff2ff           call 0x822e60
// 008f2ea1  8bc6                 mov eax, esi
// 008f2ea3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008f2ea7  64890d00000000       mov dword ptr fs:[0], ecx
// 008f2eae  59                   pop ecx
// 008f2eaf  5f                   pop edi
// 008f2eb0  5e                   pop esi
// 008f2eb1  83c418               add esp, 0x18
// 008f2eb4  c25400               ret 0x54
// copied from an identical function in another client (function ?SetIcon@CXTButton@@UAEHVCSize@@VCXTPImageManagerIconHandle@@1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp