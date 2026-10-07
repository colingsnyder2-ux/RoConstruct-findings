// roc 2011-06 008a21e0  unit: CXTPDockBar  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a21e0
//
// 008a21e0  8b442404             mov eax, dword ptr [esp + 4]
// 008a21e4  8b4804               mov ecx, dword ptr [eax + 4]
// 008a21e7  8b542408             mov edx, dword ptr [esp + 8]
// 008a21eb  33c0                 xor eax, eax
// 008a21ed  3b4a04               cmp ecx, dword ptr [edx + 4]
// 008a21f0  0f9dc0               setge al
// 008a21f3  8d4400ff             lea eax, [eax + eax - 1]
// 008a21f7  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPDockBar.cpp (function ?CompareFunc@CDockInfoArray@CXTPDockBar@@SAHPBX0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockBar.cpp
