// roc 2007-08 00666a70  unit: CXTTreeBase  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00666a70
//
// 00666a70  83ec10               sub esp, 0x10
// 00666a73  56                   push esi
// 00666a74  8bf1                 mov esi, ecx
// 00666a76  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00666a79  e894190d00           call 0x738412
// 00666a7e  a900020000           test eax, 0x200
// 00666a83  0f848b000000         je 0x666b14
// 00666a89  837c241855           cmp dword ptr [esp + 0x18], 0x55
// 00666a8e  0f8580000000         jne 0x666b14
// 00666a94  837e1400             cmp dword ptr [esi + 0x14], 0
// 00666a98  7464                 je 0x666afe
// 00666a9a  53                   push ebx
// 00666a9b  57                   push edi
// 00666a9c  ff15a8ee7700         call dword ptr [0x77eea8]
// 00666aa2  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00666aa5  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00666aa8  0fbff8               movsx edi, ax
// 00666aab  c1e810               shr eax, 0x10
// 00666aae  0fbfd8               movsx ebx, ax
// 00666ab1  8d44240c             lea eax, [esp + 0xc]
// 00666ab5  50                   push eax
// 00666ab6  52                   push edx
// 00666ab7  ff15d4ed7700         call dword ptr [0x77edd4]
// 00666abd  53                   push ebx
// 00666abe  57                   push edi
// 00666abf  8d442414             lea eax, [esp + 0x14]
// 00666ac3  50                   push eax
// 00666ac4  ff1594ed7700         call dword ptr [0x77ed94]
// 00666aca  85c0                 test eax, eax
// 00666acc  5f                   pop edi
// 00666acd  5b                   pop ebx
// 00666ace  754c                 jne 0x666b1c
// 00666ad0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00666ad3  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00666ad6  6a55                 push 0x55
// 00666ad8  52                   push edx
// 00666ad9  ff15e0ec7700         call dword ptr [0x77ece0]
// 00666adf  8b4634               mov eax, dword ptr [esi + 0x34]
// 00666ae2  6a00                 push 0
// 00666ae4  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00666aeb  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00666aee  6a00                 push 0
// 00666af0  51                   push ecx
// 00666af1  ff15dcec7700         call dword ptr [0x77ecdc]
// 00666af7  5e                   pop esi
// 00666af8  83c410               add esp, 0x10
// 00666afb  c20400               ret 4
// 00666afe  8b5634               mov edx, dword ptr [esi + 0x34]
// 00666b01  8b4220               mov eax, dword ptr [edx + 0x20]
// 00666b04  6a55                 push 0x55
// 00666b06  50                   push eax
// 00666b07  ff15e0ec7700         call dword ptr [0x77ece0]
// 00666b0d  5e                   pop esi
// 00666b0e  83c410               add esp, 0x10
// 00666b11  c20400               ret 4
// 00666b14  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00666b17  e82297fcff           call 0x63023e
// 00666b1c  5e                   pop esi
// 00666b1d  83c410               add esp, 0x10
// 00666b20  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?OnTimer@CXTTreeBase@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
