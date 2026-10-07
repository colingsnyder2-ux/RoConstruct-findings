// roc 2012-06 00a1a620  unit: CXTPDockBar  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1a620
//
// 00a1a620  8b442404             mov eax, dword ptr [esp + 4]
// 00a1a624  8b4804               mov ecx, dword ptr [eax + 4]
// 00a1a627  8b542408             mov edx, dword ptr [esp + 8]
// 00a1a62b  33c0                 xor eax, eax
// 00a1a62d  3b4a04               cmp ecx, dword ptr [edx + 4]
// 00a1a630  0f9dc0               setge al
// 00a1a633  8d4400ff             lea eax, [eax + eax - 1]
// 00a1a637  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPDockBar.cpp (function ?CompareFunc@CDockInfoArray@CXTPDockBar@@SAHPBX0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockBar.cpp
