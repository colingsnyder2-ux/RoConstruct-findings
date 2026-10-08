// from server: 100% by auto
// roc 2012-06 00a4de40  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4de40
//
// 00a4de40  56                   push esi
// 00a4de41  8bf1                 mov esi, ecx
// 00a4de43  e8983a0000           call 0xa518e0
// 00a4de48  6a02                 push 2
// 00a4de4a  6a04                 push 4
// 00a4de4c  6a02                 push 2
// 00a4de4e  6a02                 push 2
// 00a4de50  8d4604               lea eax, [esi + 4]
// 00a4de53  50                   push eax
// 00a4de54  c7065432c200         mov dword ptr [esi], 0xc23254
// 00a4de5a  ff156c3bb200         call dword ptr [0xb23b6c]
// 00a4de60  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00a4de67  8bc6                 mov eax, esi
// 00a4de69  5e                   pop esi
// 00a4de6a  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetStateButtons@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
