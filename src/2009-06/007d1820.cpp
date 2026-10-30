// roc 2009-06 007d1820  unit: CXTPDockingPaneWindowSelect  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d1820
//
// 007d1820  83ec20               sub esp, 0x20
// 007d1823  56                   push esi
// 007d1824  8bf1                 mov esi, ecx
// 007d1826  57                   push edi
// 007d1827  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 007d182b  8d8640010000         lea eax, [esi + 0x140]
// 007d1831  50                   push eax
// 007d1832  57                   push edi
// 007d1833  8d4c2420             lea ecx, [esp + 0x20]
// 007d1837  e824f0f9ff           call 0x770860
// 007d183c  8b5708               mov edx, dword ptr [edi + 8]
// 007d183f  8d4c2408             lea ecx, [esp + 8]
// 007d1843  51                   push ecx
// 007d1844  6a01                 push 1
// 007d1846  68f8338b00           push 0x8b33f8
// 007d184b  52                   push edx
// 007d184c  ff1550e18900         call dword ptr [0x89e150]
// 007d1852  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 007d1858  8b88d4000000         mov ecx, dword ptr [eax + 0xd4]
// 007d185e  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 007d1864  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 007d186a  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 007d1870  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007d1874  83c004               add eax, 4
// 007d1877  83c104               add ecx, 4
// 007d187a  3bc1                 cmp eax, ecx
// 007d187c  89542410             mov dword ptr [esp + 0x10], edx
// 007d1880  8bf0                 mov esi, eax
// 007d1882  7f02                 jg 0x7d1886
// 007d1884  8bf1                 mov esi, ecx
// 007d1886  8d4c2418             lea ecx, [esp + 0x18]
// 007d188a  e851f0f9ff           call 0x7708e0
// 007d188f  5f                   pop edi
// 007d1890  8bc6                 mov eax, esi
// 007d1892  5e                   pop esi
// 007d1893  83c420               add esp, 0x20
// 007d1896  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?CalcItemHeight@CXTPDockingPaneWindowSelect@@AAEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
