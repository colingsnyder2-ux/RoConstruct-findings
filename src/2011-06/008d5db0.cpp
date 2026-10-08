// from server: 100% by auto
// roc 2011-06 008d5db0  unit: CXTPTabPaintManager::CColorSetDefault  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d5db0
//
// 008d5db0  56                   push esi
// 008d5db1  8bf1                 mov esi, ecx
// 008d5db3  e818380000           call 0x8d95d0
// 008d5db8  6a00                 push 0
// 008d5dba  6a06                 push 6
// 008d5dbc  6a03                 push 3
// 008d5dbe  6a02                 push 2
// 008d5dc0  8d4604               lea eax, [esi + 4]
// 008d5dc3  50                   push eax
// 008d5dc4  c706e47aad00         mov dword ptr [esi], 0xad7ae4
// 008d5dca  ff15c81ba400         call dword ptr [0xa41bc8]
// 008d5dd0  c7063c7dad00         mov dword ptr [esi], 0xad7d3c
// 008d5dd6  8bc6                 mov eax, esi
// 008d5dd8  5e                   pop esi
// 008d5dd9  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetPropertyPageSelected@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
