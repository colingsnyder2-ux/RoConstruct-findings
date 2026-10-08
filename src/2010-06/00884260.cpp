// roc 2010-06 00884260  unit: CXTPTabManager::CNavigateButtonArrowRight  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00884260
//
// 00884260  83ec24               sub esp, 0x24
// 00884263  53                   push ebx
// 00884264  8bd9                 mov ebx, ecx
// 00884266  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00884269  8b01                 mov eax, dword ptr [ecx]
// 0088426b  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0088426e  55                   push ebp
// 0088426f  56                   push esi
// 00884270  57                   push edi
// 00884271  ffd2                 call edx
// 00884273  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 00884279  8b01                 mov eax, dword ptr [ecx]
// 0088427b  8b4010               mov eax, dword ptr [eax + 0x10]
// 0088427e  8d542424             lea edx, [esp + 0x24]
// 00884282  52                   push edx
// 00884283  ffd0                 call eax
// 00884285  8b730c               mov esi, dword ptr [ebx + 0xc]
// 00884288  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0088428c  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0088428f  8b17                 mov edx, dword ptr [edi]
// 00884291  8b4704               mov eax, dword ptr [edi + 4]
// 00884294  8b6f08               mov ebp, dword ptr [edi + 8]
// 00884297  894c2410             mov dword ptr [esp + 0x10], ecx
// 0088429b  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0088429e  89542414             mov dword ptr [esp + 0x14], edx
// 008842a2  8b16                 mov edx, dword ptr [esi]
// 008842a4  89442418             mov dword ptr [esp + 0x18], eax
// 008842a8  8b4248               mov eax, dword ptr [edx + 0x48]
// 008842ab  894c2420             mov dword ptr [esp + 0x20], ecx
// 008842af  8bce                 mov ecx, esi
// 008842b1  ffd0                 call eax
// 008842b3  83f802               cmp eax, 2
// 008842b6  740d                 je 0x8842c5
// 008842b8  8b16                 mov edx, dword ptr [esi]
// 008842ba  8b4248               mov eax, dword ptr [edx + 0x48]
// 008842bd  8bce                 mov ecx, esi
// 008842bf  ffd0                 call eax
// 008842c1  85c0                 test eax, eax
// 008842c3  7508                 jne 0x8842cd
// 008842c5  2b6c2414             sub ebp, dword ptr [esp + 0x14]
// 008842c9  8bf5                 mov esi, ebp
// 008842cb  eb08                 jmp 0x8842d5
// 008842cd  8b742420             mov esi, dword ptr [esp + 0x20]
// 008842d1  2b742418             sub esi, dword ptr [esp + 0x18]
// 008842d5  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 008842d8  e813f3ffff           call 0x8835f0
// 008842dd  2b74242c             sub esi, dword ptr [esp + 0x2c]
// 008842e1  03442410             add eax, dword ptr [esp + 0x10]
// 008842e5  2b742424             sub esi, dword ptr [esp + 0x24]
// 008842e9  33c9                 xor ecx, ecx
// 008842eb  83ee1c               sub esi, 0x1c
// 008842ee  3bc6                 cmp eax, esi
// 008842f0  0f9fc1               setg cl
// 008842f3  57                   push edi
// 008842f4  894b20               mov dword ptr [ebx + 0x20], ecx
// 008842f7  8bcb                 mov ecx, ebx
// 008842f9  e892feffff           call 0x884190
// 008842fe  5f                   pop edi
// 008842ff  5e                   pop esi
// 00884300  5d                   pop ebp
// 00884301  5b                   pop ebx
// 00884302  83c424               add esp, 0x24
// 00884305  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CNavigateButtonArrowRight@CXTPTabManager@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
