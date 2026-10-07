// roc 2011-06 008d5b50  unit: CXTPTabPaintManager::CAppearanceSetStateButtons  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d5b50
//
// 008d5b50  56                   push esi
// 008d5b51  8bf1                 mov esi, ecx
// 008d5b53  e8783a0000           call 0x8d95d0
// 008d5b58  6a00                 push 0
// 008d5b5a  6a06                 push 6
// 008d5b5c  6a03                 push 3
// 008d5b5e  6a02                 push 2
// 008d5b60  8d4604               lea eax, [esi + 4]
// 008d5b63  50                   push eax
// 008d5b64  c7062c7bad00         mov dword ptr [esi], 0xad7b2c
// 008d5b6a  ff15c81ba400         call dword ptr [0xa41bc8]
// 008d5b70  c7462400000000       mov dword ptr [esi + 0x24], 0
// 008d5b77  c7064c7cad00         mov dword ptr [esi], 0xad7c4c
// 008d5b7d  c7462001000000       mov dword ptr [esi + 0x20], 1
// 008d5b84  8bc6                 mov eax, esi
// 008d5b86  5e                   pop esi
// 008d5b87  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetVisualStudio2005@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
