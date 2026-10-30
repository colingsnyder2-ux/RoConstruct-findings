// roc 2010-06 00821180  unit: CXTCaptionButton  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00821180
//
// 00821180  53                   push ebx
// 00821181  56                   push esi
// 00821182  8bf1                 mov esi, ecx
// 00821184  8b4620               mov eax, dword ptr [esi + 0x20]
// 00821187  8b9e80000000         mov ebx, dword ptr [esi + 0x80]
// 0082118d  57                   push edi
// 0082118e  85c0                 test eax, eax
// 00821190  740f                 je 0x8211a1
// 00821192  50                   push eax
// 00821193  ff154cba9e00         call dword ptr [0x9eba4c]
// 00821199  50                   push eax
// 0082119a  e8cb6af8ff           call 0x7a7c6a
// 0082119f  eb02                 jmp 0x8211a3
// 008211a1  33c0                 xor eax, eax
// 008211a3  50                   push eax
// 008211a4  e877fdffff           call 0x820f20
// 008211a9  50                   push eax
// 008211aa  e8cf6bf8ff           call 0x7a7d7e
// 008211af  8bf8                 mov edi, eax
// 008211b1  83c408               add esp, 8
// 008211b4  85ff                 test edi, edi
// 008211b6  747a                 je 0x821232
// 008211b8  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 008211bb  8b06                 mov eax, dword ptr [esi]
// 008211bd  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 008211c3  51                   push ecx
// 008211c4  8bce                 mov ecx, esi
// 008211c6  ffd2                 call edx
// 008211c8  8b4f78               mov ecx, dword ptr [edi + 0x78]
// 008211cb  8b06                 mov eax, dword ptr [esi]
// 008211cd  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 008211d3  51                   push ecx
// 008211d4  8bce                 mov ecx, esi
// 008211d6  ffd2                 call edx
// 008211d8  e84329fcff           call 0x7e3b20
// 008211dd  6a15                 push 0x15
// 008211df  8bc8                 mov ecx, eax
// 008211e1  e8ca20fcff           call 0x7e32b0
// 008211e6  8b16                 mov edx, dword ptr [esi]
// 008211e8  50                   push eax
// 008211e9  8b8280010000         mov eax, dword ptr [edx + 0x180]
// 008211ef  8bce                 mov ecx, esi
// 008211f1  ffd0                 call eax
// 008211f3  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008211f6  8b3d54ba9e00         mov edi, dword ptr [0x9eba54]
// 008211fc  6a00                 push 0
// 008211fe  6a00                 push 0
// 00821200  6a31                 push 0x31
// 00821202  51                   push ecx
// 00821203  ffd7                 call edi
// 00821205  50                   push eax
// 00821206  e89972f8ff           call 0x7a84a4
// 0082120b  85c0                 test eax, eax
// 0082120d  7403                 je 0x821212
// 0082120f  8b4004               mov eax, dword ptr [eax + 4]
// 00821212  8b5620               mov edx, dword ptr [esi + 0x20]
// 00821215  6a01                 push 1
// 00821217  50                   push eax
// 00821218  6a30                 push 0x30
// 0082121a  52                   push edx
// 0082121b  ffd7                 call edi
// 0082121d  837c241400           cmp dword ptr [esp + 0x14], 0
// 00821222  740e                 je 0x821232
// 00821224  8b4620               mov eax, dword ptr [esi + 0x20]
// 00821227  6a01                 push 1
// 00821229  6a00                 push 0
// 0082122b  50                   push eax
// 0082122c  ff1578ba9e00         call dword ptr [0x9eba78]
// 00821232  5f                   pop edi
// 00821233  5e                   pop esi
// 00821234  8bc3                 mov eax, ebx
// 00821236  5b                   pop ebx
// 00821237  c20800               ret 8
// copied from an identical function in another client (function ?SetXButtonStyle@CXTCaptionButton@@UAEKKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp