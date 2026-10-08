// from server: 100% by auto
// roc 2008-06 0077d820  unit: RBX::KeyboardSecondaryController  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d820
//
// 0077d820  56                   push esi
// 0077d821  8bf1                 mov esi, ecx
// 0077d823  e8583a0000           call 0x781280
// 0077d828  6a00                 push 0
// 0077d82a  6a06                 push 6
// 0077d82c  6a03                 push 3
// 0077d82e  6a02                 push 2
// 0077d830  8d4604               lea eax, [esi + 4]
// 0077d833  50                   push eax
// 0077d834  c70644948600         mov dword ptr [esi], 0x869444
// 0077d83a  ff15102d8000         call dword ptr [0x802d10]
// 0077d840  c7462400000000       mov dword ptr [esi + 0x24], 0
// 0077d847  c70664958600         mov dword ptr [esi], 0x869564
// 0077d84d  c7462001000000       mov dword ptr [esi + 0x20], 1
// 0077d854  8bc6                 mov eax, esi
// 0077d856  5e                   pop esi
// 0077d857  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetVisualStudio2005@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
