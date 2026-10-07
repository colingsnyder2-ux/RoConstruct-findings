// roc 2011-06 008d95d0  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d95d0
//
// 008d95d0  56                   push esi
// 008d95d1  6a00                 push 0
// 008d95d3  6a00                 push 0
// 008d95d5  8bf1                 mov esi, ecx
// 008d95d7  6a00                 push 0
// 008d95d9  6a00                 push 0
// 008d95db  8d4604               lea eax, [esi + 4]
// 008d95de  50                   push eax
// 008d95df  c7061c7ead00         mov dword ptr [esi], 0xad7e1c
// 008d95e5  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 008d95ec  ff15c81ba400         call dword ptr [0xa41bc8]
// 008d95f2  c74614feffffff       mov dword ptr [esi + 0x14], 0xfffffffe
// 008d95f9  c7462000000000       mov dword ptr [esi + 0x20], 0
// 008d9600  8bc6                 mov eax, esi
// 008d9602  5e                   pop esi
// 008d9603  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ??0CXTPTabPaintManagerAppearanceSet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerAppearance.cpp
