// roc 2009-06 007f54d0  unit: CXTPTabManager::CNavigateButtonArrowRight  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f54d0
//
// 007f54d0  83ec24               sub esp, 0x24
// 007f54d3  53                   push ebx
// 007f54d4  8bd9                 mov ebx, ecx
// 007f54d6  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 007f54d9  8b01                 mov eax, dword ptr [ecx]
// 007f54db  8b502c               mov edx, dword ptr [eax + 0x2c]
// 007f54de  55                   push ebp
// 007f54df  56                   push esi
// 007f54e0  57                   push edi
// 007f54e1  ffd2                 call edx
// 007f54e3  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 007f54e9  8b01                 mov eax, dword ptr [ecx]
// 007f54eb  8b4010               mov eax, dword ptr [eax + 0x10]
// 007f54ee  8d542424             lea edx, [esp + 0x24]
// 007f54f2  52                   push edx
// 007f54f3  ffd0                 call eax
// 007f54f5  8b730c               mov esi, dword ptr [ebx + 0xc]
// 007f54f8  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 007f54fc  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 007f54ff  8b17                 mov edx, dword ptr [edi]
// 007f5501  8b4704               mov eax, dword ptr [edi + 4]
// 007f5504  8b6f08               mov ebp, dword ptr [edi + 8]
// 007f5507  894c2410             mov dword ptr [esp + 0x10], ecx
// 007f550b  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 007f550e  89542414             mov dword ptr [esp + 0x14], edx
// 007f5512  8b16                 mov edx, dword ptr [esi]
// 007f5514  89442418             mov dword ptr [esp + 0x18], eax
// 007f5518  8b4248               mov eax, dword ptr [edx + 0x48]
// 007f551b  894c2420             mov dword ptr [esp + 0x20], ecx
// 007f551f  8bce                 mov ecx, esi
// 007f5521  ffd0                 call eax
// 007f5523  83f802               cmp eax, 2
// 007f5526  740d                 je 0x7f5535
// 007f5528  8b16                 mov edx, dword ptr [esi]
// 007f552a  8b4248               mov eax, dword ptr [edx + 0x48]
// 007f552d  8bce                 mov ecx, esi
// 007f552f  ffd0                 call eax
// 007f5531  85c0                 test eax, eax
// 007f5533  7508                 jne 0x7f553d
// 007f5535  2b6c2414             sub ebp, dword ptr [esp + 0x14]
// 007f5539  8bf5                 mov esi, ebp
// 007f553b  eb08                 jmp 0x7f5545
// 007f553d  8b742420             mov esi, dword ptr [esp + 0x20]
// 007f5541  2b742418             sub esi, dword ptr [esp + 0x18]
// 007f5545  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 007f5548  e813f3ffff           call 0x7f4860
// 007f554d  2b74242c             sub esi, dword ptr [esp + 0x2c]
// 007f5551  03442410             add eax, dword ptr [esp + 0x10]
// 007f5555  2b742424             sub esi, dword ptr [esp + 0x24]
// 007f5559  33c9                 xor ecx, ecx
// 007f555b  83ee1c               sub esi, 0x1c
// 007f555e  3bc6                 cmp eax, esi
// 007f5560  0f9fc1               setg cl
// 007f5563  57                   push edi
// 007f5564  894b20               mov dword ptr [ebx + 0x20], ecx
// 007f5567  8bcb                 mov ecx, ebx
// 007f5569  e892feffff           call 0x7f5400
// 007f556e  5f                   pop edi
// 007f556f  5e                   pop esi
// 007f5570  5d                   pop ebp
// 007f5571  5b                   pop ebx
// 007f5572  83c424               add esp, 0x24
// 007f5575  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CNavigateButtonArrowRight@CXTPTabManager@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
