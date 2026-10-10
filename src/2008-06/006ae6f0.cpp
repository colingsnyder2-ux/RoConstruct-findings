// roc 2008-06 006ae6f0  unit: CXTPPaintManager  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ae6f0
//
// 006ae6f0  83ec08               sub esp, 8
// 006ae6f3  53                   push ebx
// 006ae6f4  56                   push esi
// 006ae6f5  8b742414             mov esi, dword ptr [esp + 0x14]
// 006ae6f9  57                   push edi
// 006ae6fa  bf02000000           mov edi, 2
// 006ae6ff  8bd9                 mov ebx, ecx
// 006ae701  39bef8000000         cmp dword ptr [esi + 0xf8], edi
// 006ae707  740b                 je 0x6ae714
// 006ae709  5f                   pop edi
// 006ae70a  5e                   pop esi
// 006ae70b  33c0                 xor eax, eax
// 006ae70d  5b                   pop ebx
// 006ae70e  83c408               add esp, 8
// 006ae711  c20400               ret 4
// 006ae714  8b06                 mov eax, dword ptr [esi]
// 006ae716  8b90a0010000         mov edx, dword ptr [eax + 0x1a0]
// 006ae71c  8bce                 mov ecx, esi
// 006ae71e  ffd2                 call edx
// 006ae720  85c0                 test eax, eax
// 006ae722  7409                 je 0x6ae72d
// 006ae724  83be1002000000       cmp dword ptr [esi + 0x210], 0
// 006ae72b  7505                 jne 0x6ae732
// 006ae72d  bf01000000           mov edi, 1
// 006ae732  8b03                 mov eax, dword ptr [ebx]
// 006ae734  8b9010010000         mov edx, dword ptr [eax + 0x110]
// 006ae73a  56                   push esi
// 006ae73b  8d4c2410             lea ecx, [esp + 0x10]
// 006ae73f  51                   push ecx
// 006ae740  8bcb                 mov ecx, ebx
// 006ae742  ffd2                 call edx
// 006ae744  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ae748  0fafc7               imul eax, edi
// 006ae74b  5f                   pop edi
// 006ae74c  5e                   pop esi
// 006ae74d  40                   inc eax
// 006ae74e  5b                   pop ebx
// 006ae74f  83c408               add esp, 8
// 006ae752  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPaintManager.cpp (function ?GetPopupBarGripperWidth@CXTPPaintManager@@UAEHPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPaintManager.cpp
