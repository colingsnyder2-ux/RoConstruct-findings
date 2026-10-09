// roc 2009-12 008d0080  unit: CXTPTabManager::CNavigateButtonArrowRight  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d0080
//
// 008d0080  83ec24               sub esp, 0x24
// 008d0083  53                   push ebx
// 008d0084  8bd9                 mov ebx, ecx
// 008d0086  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 008d0089  8b01                 mov eax, dword ptr [ecx]
// 008d008b  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008d008e  55                   push ebp
// 008d008f  56                   push esi
// 008d0090  57                   push edi
// 008d0091  ffd2                 call edx
// 008d0093  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 008d0099  8b01                 mov eax, dword ptr [ecx]
// 008d009b  8b4010               mov eax, dword ptr [eax + 0x10]
// 008d009e  8d542424             lea edx, [esp + 0x24]
// 008d00a2  52                   push edx
// 008d00a3  ffd0                 call eax
// 008d00a5  8b730c               mov esi, dword ptr [ebx + 0xc]
// 008d00a8  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008d00ac  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 008d00af  8b17                 mov edx, dword ptr [edi]
// 008d00b1  8b4704               mov eax, dword ptr [edi + 4]
// 008d00b4  8b6f08               mov ebp, dword ptr [edi + 8]
// 008d00b7  894c2410             mov dword ptr [esp + 0x10], ecx
// 008d00bb  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008d00be  89542414             mov dword ptr [esp + 0x14], edx
// 008d00c2  8b16                 mov edx, dword ptr [esi]
// 008d00c4  89442418             mov dword ptr [esp + 0x18], eax
// 008d00c8  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d00cb  894c2420             mov dword ptr [esp + 0x20], ecx
// 008d00cf  8bce                 mov ecx, esi
// 008d00d1  ffd0                 call eax
// 008d00d3  83f802               cmp eax, 2
// 008d00d6  740d                 je 0x8d00e5
// 008d00d8  8b16                 mov edx, dword ptr [esi]
// 008d00da  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d00dd  8bce                 mov ecx, esi
// 008d00df  ffd0                 call eax
// 008d00e1  85c0                 test eax, eax
// 008d00e3  7508                 jne 0x8d00ed
// 008d00e5  2b6c2414             sub ebp, dword ptr [esp + 0x14]
// 008d00e9  8bf5                 mov esi, ebp
// 008d00eb  eb08                 jmp 0x8d00f5
// 008d00ed  8b742420             mov esi, dword ptr [esp + 0x20]
// 008d00f1  2b742418             sub esi, dword ptr [esp + 0x18]
// 008d00f5  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 008d00f8  e813f3ffff           call 0x8cf410
// 008d00fd  2b74242c             sub esi, dword ptr [esp + 0x2c]
// 008d0101  03442410             add eax, dword ptr [esp + 0x10]
// 008d0105  2b742424             sub esi, dword ptr [esp + 0x24]
// 008d0109  33c9                 xor ecx, ecx
// 008d010b  83ee1c               sub esi, 0x1c
// 008d010e  3bc6                 cmp eax, esi
// 008d0110  0f9fc1               setg cl
// 008d0113  57                   push edi
// 008d0114  894b20               mov dword ptr [ebx + 0x20], ecx
// 008d0117  8bcb                 mov ecx, ebx
// 008d0119  e892feffff           call 0x8cffb0
// 008d011e  5f                   pop edi
// 008d011f  5e                   pop esi
// 008d0120  5d                   pop ebp
// 008d0121  5b                   pop ebx
// 008d0122  83c424               add esp, 0x24
// 008d0125  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CNavigateButtonArrowRight@CXTPTabManager@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
