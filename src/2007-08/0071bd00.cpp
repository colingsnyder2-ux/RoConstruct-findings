// roc 2007-08 0071bd00  unit: CXTPTabPaintManager::CColorSetVisualStudio  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071bd00
//
// 0071bd00  56                   push esi
// 0071bd01  8bf1                 mov esi, ecx
// 0071bd03  e8e8f5ffff           call 0x71b2f0
// 0071bd08  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0071bd0e  e83d3dfeff           call 0x6ffa50
// 0071bd13  83f807               cmp eax, 7
// 0071bd16  7427                 je 0x71bd3f
// 0071bd18  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0071bd1e  e82d3dfeff           call 0x6ffa50
// 0071bd23  83f804               cmp eax, 4
// 0071bd26  7417                 je 0x71bd3f
// 0071bd28  e843d2f4ff           call 0x668f70
// 0071bd2d  6a30                 push 0x30
// 0071bd2f  8bc8                 mov ecx, eax
// 0071bd31  e83acaf4ff           call 0x668770
// 0071bd36  50                   push eax
// 0071bd37  8d4e04               lea ecx, [esi + 4]
// 0071bd3a  e881d1f4ff           call 0x668ec0
// 0071bd3f  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0071bd45  e8063dfeff           call 0x6ffa50
// 0071bd4a  83f805               cmp eax, 5
// 0071bd4d  7528                 jne 0x71bd77
// 0071bd4f  e81cd2f4ff           call 0x668f70
// 0071bd54  6a31                 push 0x31
// 0071bd56  8bc8                 mov ecx, eax
// 0071bd58  e813caf4ff           call 0x668770
// 0071bd5d  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 0071bd63  e808d2f4ff           call 0x668f70
// 0071bd68  6a31                 push 0x31
// 0071bd6a  8bc8                 mov ecx, eax
// 0071bd6c  e8ffc9f4ff           call 0x668770
// 0071bd71  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 0071bd77  e8c464f6ff           call 0x682240
// 0071bd7c  6a00                 push 0
// 0071bd7e  e8dd3af6ff           call 0x67f860
// 0071bd83  83c404               add esp, 4
// 0071bd86  85c0                 test eax, eax
// 0071bd88  7419                 je 0x71bda3
// 0071bd8a  e8e1d1f4ff           call 0x668f70
// 0071bd8f  6a0f                 push 0xf
// 0071bd91  8bc8                 mov ecx, eax
// 0071bd93  e8d8c9f4ff           call 0x668770
// 0071bd98  50                   push eax
// 0071bd99  8d4e24               lea ecx, [esi + 0x24]
// 0071bd9c  e81fd1f4ff           call 0x668ec0
// 0071bda1  5e                   pop esi
// 0071bda2  c3                   ret 
// 0071bda3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0071bda6  83f8ff               cmp eax, -1
// 0071bda9  7503                 jne 0x71bdae
// 0071bdab  8b4618               mov eax, dword ptr [esi + 0x18]
// 0071bdae  50                   push eax
// 0071bdaf  8d4e24               lea ecx, [esi + 0x24]
// 0071bdb2  e809d1f4ff           call 0x668ec0
// 0071bdb7  5e                   pop esi
// 0071bdb8  c3                   ret 
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?RefreshMetrics@CColorSetVisualStudio@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerColors.cpp
