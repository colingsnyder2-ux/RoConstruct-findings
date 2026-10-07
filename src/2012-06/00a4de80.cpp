// roc 2012-06 00a4de80  unit: CXTPTabPaintManager::CAppearanceSetStateButtons  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4de80
//
// 00a4de80  56                   push esi
// 00a4de81  8bf1                 mov esi, ecx
// 00a4de83  e8583a0000           call 0xa518e0
// 00a4de88  6a00                 push 0
// 00a4de8a  6a06                 push 6
// 00a4de8c  6a03                 push 3
// 00a4de8e  6a02                 push 2
// 00a4de90  8d4604               lea eax, [esi + 4]
// 00a4de93  50                   push eax
// 00a4de94  c706c431c200         mov dword ptr [esi], 0xc231c4
// 00a4de9a  ff156c3bb200         call dword ptr [0xb23b6c]
// 00a4dea0  c7462400000000       mov dword ptr [esi + 0x24], 0
// 00a4dea7  c706e432c200         mov dword ptr [esi], 0xc232e4
// 00a4dead  c7462001000000       mov dword ptr [esi + 0x20], 1
// 00a4deb4  8bc6                 mov eax, esi
// 00a4deb6  5e                   pop esi
// 00a4deb7  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetVisualStudio2005@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
