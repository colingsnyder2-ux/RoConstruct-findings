// roc 2012-06 00a4d4a0  unit: CXTPTabManager::CNavigateButtonArrowRight  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4d4a0
//
// 00a4d4a0  83ec24               sub esp, 0x24
// 00a4d4a3  53                   push ebx
// 00a4d4a4  8bd9                 mov ebx, ecx
// 00a4d4a6  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00a4d4a9  8b01                 mov eax, dword ptr [ecx]
// 00a4d4ab  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00a4d4ae  55                   push ebp
// 00a4d4af  56                   push esi
// 00a4d4b0  57                   push edi
// 00a4d4b1  ffd2                 call edx
// 00a4d4b3  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 00a4d4b9  8b01                 mov eax, dword ptr [ecx]
// 00a4d4bb  8b4010               mov eax, dword ptr [eax + 0x10]
// 00a4d4be  8d542424             lea edx, [esp + 0x24]
// 00a4d4c2  52                   push edx
// 00a4d4c3  ffd0                 call eax
// 00a4d4c5  8b730c               mov esi, dword ptr [ebx + 0xc]
// 00a4d4c8  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00a4d4cc  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00a4d4cf  8b17                 mov edx, dword ptr [edi]
// 00a4d4d1  8b4704               mov eax, dword ptr [edi + 4]
// 00a4d4d4  8b6f08               mov ebp, dword ptr [edi + 8]
// 00a4d4d7  894c2410             mov dword ptr [esp + 0x10], ecx
// 00a4d4db  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00a4d4de  89542414             mov dword ptr [esp + 0x14], edx
// 00a4d4e2  8b16                 mov edx, dword ptr [esi]
// 00a4d4e4  89442418             mov dword ptr [esp + 0x18], eax
// 00a4d4e8  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a4d4eb  894c2420             mov dword ptr [esp + 0x20], ecx
// 00a4d4ef  8bce                 mov ecx, esi
// 00a4d4f1  ffd0                 call eax
// 00a4d4f3  83f802               cmp eax, 2
// 00a4d4f6  740d                 je 0xa4d505
// 00a4d4f8  8b16                 mov edx, dword ptr [esi]
// 00a4d4fa  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a4d4fd  8bce                 mov ecx, esi
// 00a4d4ff  ffd0                 call eax
// 00a4d501  85c0                 test eax, eax
// 00a4d503  7508                 jne 0xa4d50d
// 00a4d505  2b6c2414             sub ebp, dword ptr [esp + 0x14]
// 00a4d509  8bf5                 mov esi, ebp
// 00a4d50b  eb08                 jmp 0xa4d515
// 00a4d50d  8b742420             mov esi, dword ptr [esp + 0x20]
// 00a4d511  2b742418             sub esi, dword ptr [esp + 0x18]
// 00a4d515  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00a4d518  e813f3ffff           call 0xa4c830
// 00a4d51d  2b74242c             sub esi, dword ptr [esp + 0x2c]
// 00a4d521  03442410             add eax, dword ptr [esp + 0x10]
// 00a4d525  2b742424             sub esi, dword ptr [esp + 0x24]
// 00a4d529  33c9                 xor ecx, ecx
// 00a4d52b  83ee1c               sub esi, 0x1c
// 00a4d52e  3bc6                 cmp eax, esi
// 00a4d530  0f9fc1               setg cl
// 00a4d533  57                   push edi
// 00a4d534  894b20               mov dword ptr [ebx + 0x20], ecx
// 00a4d537  8bcb                 mov ecx, ebx
// 00a4d539  e892feffff           call 0xa4d3d0
// 00a4d53e  5f                   pop edi
// 00a4d53f  5e                   pop esi
// 00a4d540  5d                   pop ebp
// 00a4d541  5b                   pop ebx
// 00a4d542  83c424               add esp, 0x24
// 00a4d545  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CNavigateButtonArrowRight@CXTPTabManager@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
