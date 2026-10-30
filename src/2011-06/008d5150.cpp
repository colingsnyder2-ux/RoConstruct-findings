// roc 2011-06 008d5150  unit: CXTPTabManager::CNavigateButtonArrowRight  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d5150
//
// 008d5150  83ec24               sub esp, 0x24
// 008d5153  53                   push ebx
// 008d5154  8bd9                 mov ebx, ecx
// 008d5156  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 008d5159  8b01                 mov eax, dword ptr [ecx]
// 008d515b  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008d515e  55                   push ebp
// 008d515f  56                   push esi
// 008d5160  57                   push edi
// 008d5161  ffd2                 call edx
// 008d5163  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 008d5169  8b01                 mov eax, dword ptr [ecx]
// 008d516b  8b4010               mov eax, dword ptr [eax + 0x10]
// 008d516e  8d542424             lea edx, [esp + 0x24]
// 008d5172  52                   push edx
// 008d5173  ffd0                 call eax
// 008d5175  8b730c               mov esi, dword ptr [ebx + 0xc]
// 008d5178  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008d517c  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 008d517f  8b17                 mov edx, dword ptr [edi]
// 008d5181  8b4704               mov eax, dword ptr [edi + 4]
// 008d5184  8b6f08               mov ebp, dword ptr [edi + 8]
// 008d5187  894c2410             mov dword ptr [esp + 0x10], ecx
// 008d518b  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008d518e  89542414             mov dword ptr [esp + 0x14], edx
// 008d5192  8b16                 mov edx, dword ptr [esi]
// 008d5194  89442418             mov dword ptr [esp + 0x18], eax
// 008d5198  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d519b  894c2420             mov dword ptr [esp + 0x20], ecx
// 008d519f  8bce                 mov ecx, esi
// 008d51a1  ffd0                 call eax
// 008d51a3  83f802               cmp eax, 2
// 008d51a6  740d                 je 0x8d51b5
// 008d51a8  8b16                 mov edx, dword ptr [esi]
// 008d51aa  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d51ad  8bce                 mov ecx, esi
// 008d51af  ffd0                 call eax
// 008d51b1  85c0                 test eax, eax
// 008d51b3  7508                 jne 0x8d51bd
// 008d51b5  2b6c2414             sub ebp, dword ptr [esp + 0x14]
// 008d51b9  8bf5                 mov esi, ebp
// 008d51bb  eb08                 jmp 0x8d51c5
// 008d51bd  8b742420             mov esi, dword ptr [esp + 0x20]
// 008d51c1  2b742418             sub esi, dword ptr [esp + 0x18]
// 008d51c5  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 008d51c8  e813f3ffff           call 0x8d44e0
// 008d51cd  2b74242c             sub esi, dword ptr [esp + 0x2c]
// 008d51d1  03442410             add eax, dword ptr [esp + 0x10]
// 008d51d5  2b742424             sub esi, dword ptr [esp + 0x24]
// 008d51d9  33c9                 xor ecx, ecx
// 008d51db  83ee1c               sub esi, 0x1c
// 008d51de  3bc6                 cmp eax, esi
// 008d51e0  0f9fc1               setg cl
// 008d51e3  57                   push edi
// 008d51e4  894b20               mov dword ptr [ebx + 0x20], ecx
// 008d51e7  8bcb                 mov ecx, ebx
// 008d51e9  e892feffff           call 0x8d5080
// 008d51ee  5f                   pop edi
// 008d51ef  5e                   pop esi
// 008d51f0  5d                   pop ebp
// 008d51f1  5b                   pop ebx
// 008d51f2  83c424               add esp, 0x24
// 008d51f5  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CNavigateButtonArrowRight@CXTPTabManager@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
