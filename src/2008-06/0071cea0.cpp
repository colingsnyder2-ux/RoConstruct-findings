// roc 2008-06 0071cea0  unit: CXTPKeyboardManager  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071cea0
//
// 0071cea0  83c8ff               or eax, 0xffffffff
// 0071cea3  0bc8                 or ecx, eax
// 0071cea5  a3a0ed9700           mov dword ptr [0x97eda0], eax
// 0071ceaa  83ec08               sub esp, 8
// 0071cead  8d0424               lea eax, [esp]
// 0071ceb0  50                   push eax
// 0071ceb1  890da4ed9700         mov dword ptr [0x97eda4], ecx
// 0071ceb7  ff159c2d8000         call dword ptr [0x802d9c]
// 0071cebd  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0071cec1  8b1424               mov edx, dword ptr [esp]
// 0071cec4  51                   push ecx
// 0071cec5  52                   push edx
// 0071cec6  ff15002d8000         call dword ptr [0x802d00]
// 0071cecc  83c408               add esp, 8
// 0071cecf  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPMouseManager.cpp (function ?RefreshCursor@CXTPMouseManager@@SAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMouseManager.cpp
