// roc 2007-08 006ff210  unit: CXTPTabManager::CNavigateButtonArrowRight  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ff210
//
// 006ff210  83ec24               sub esp, 0x24
// 006ff213  53                   push ebx
// 006ff214  8bd9                 mov ebx, ecx
// 006ff216  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 006ff219  8b01                 mov eax, dword ptr [ecx]
// 006ff21b  8b502c               mov edx, dword ptr [eax + 0x2c]
// 006ff21e  55                   push ebp
// 006ff21f  56                   push esi
// 006ff220  57                   push edi
// 006ff221  ffd2                 call edx
// 006ff223  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 006ff229  8b01                 mov eax, dword ptr [ecx]
// 006ff22b  8b4010               mov eax, dword ptr [eax + 0x10]
// 006ff22e  8d542424             lea edx, [esp + 0x24]
// 006ff232  52                   push edx
// 006ff233  ffd0                 call eax
// 006ff235  8b730c               mov esi, dword ptr [ebx + 0xc]
// 006ff238  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 006ff23c  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006ff23f  8b17                 mov edx, dword ptr [edi]
// 006ff241  8b4704               mov eax, dword ptr [edi + 4]
// 006ff244  8b6f08               mov ebp, dword ptr [edi + 8]
// 006ff247  894c2410             mov dword ptr [esp + 0x10], ecx
// 006ff24b  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 006ff24e  89542414             mov dword ptr [esp + 0x14], edx
// 006ff252  8b16                 mov edx, dword ptr [esi]
// 006ff254  89442418             mov dword ptr [esp + 0x18], eax
// 006ff258  8b4248               mov eax, dword ptr [edx + 0x48]
// 006ff25b  894c2420             mov dword ptr [esp + 0x20], ecx
// 006ff25f  8bce                 mov ecx, esi
// 006ff261  ffd0                 call eax
// 006ff263  83f802               cmp eax, 2
// 006ff266  740d                 je 0x6ff275
// 006ff268  8b16                 mov edx, dword ptr [esi]
// 006ff26a  8b4248               mov eax, dword ptr [edx + 0x48]
// 006ff26d  8bce                 mov ecx, esi
// 006ff26f  ffd0                 call eax
// 006ff271  85c0                 test eax, eax
// 006ff273  7508                 jne 0x6ff27d
// 006ff275  2b6c2414             sub ebp, dword ptr [esp + 0x14]
// 006ff279  8bf5                 mov esi, ebp
// 006ff27b  eb08                 jmp 0x6ff285
// 006ff27d  8b742420             mov esi, dword ptr [esp + 0x20]
// 006ff281  2b742418             sub esi, dword ptr [esp + 0x18]
// 006ff285  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 006ff288  e843f3ffff           call 0x6fe5d0
// 006ff28d  2b74242c             sub esi, dword ptr [esp + 0x2c]
// 006ff291  03442410             add eax, dword ptr [esp + 0x10]
// 006ff295  2b742424             sub esi, dword ptr [esp + 0x24]
// 006ff299  33c9                 xor ecx, ecx
// 006ff29b  83ee1c               sub esi, 0x1c
// 006ff29e  3bc6                 cmp eax, esi
// 006ff2a0  0f9fc1               setg cl
// 006ff2a3  57                   push edi
// 006ff2a4  894b20               mov dword ptr [ebx + 0x20], ecx
// 006ff2a7  8bcb                 mov ecx, ebx
// 006ff2a9  e892feffff           call 0x6ff140
// 006ff2ae  5f                   pop edi
// 006ff2af  5e                   pop esi
// 006ff2b0  5d                   pop ebp
// 006ff2b1  5b                   pop ebx
// 006ff2b2  83c424               add esp, 0x24
// 006ff2b5  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CNavigateButtonArrowRight@CXTPTabManager@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
