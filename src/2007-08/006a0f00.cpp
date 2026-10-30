// from server: 100% by auto
// roc 2007-08 006a0f00  unit: CXTPDockBar  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a0f00
//
// 006a0f00  8b442404             mov eax, dword ptr [esp + 4]
// 006a0f04  8b4804               mov ecx, dword ptr [eax + 4]
// 006a0f07  8b542408             mov edx, dword ptr [esp + 8]
// 006a0f0b  33c0                 xor eax, eax
// 006a0f0d  3b4a04               cmp ecx, dword ptr [edx + 4]
// 006a0f10  0f9dc0               setge al
// 006a0f13  8d4400ff             lea eax, [eax + eax - 1]
// 006a0f17  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockBar.cpp (function ?CompareFunc@CDockInfoArray@CXTPDockBar@@SAHPBX0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockBar.cpp
