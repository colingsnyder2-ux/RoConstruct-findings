// from server: 100% by auto
// roc 2008-06 0071a750  unit: CXTPDockBar  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071a750
//
// 0071a750  8b442404             mov eax, dword ptr [esp + 4]
// 0071a754  8b4804               mov ecx, dword ptr [eax + 4]
// 0071a757  8b542408             mov edx, dword ptr [esp + 8]
// 0071a75b  33c0                 xor eax, eax
// 0071a75d  3b4a04               cmp ecx, dword ptr [edx + 4]
// 0071a760  0f9dc0               setge al
// 0071a763  8d4400ff             lea eax, [eax + eax - 1]
// 0071a767  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDockBar.cpp (function ?CompareFunc@CDockInfoArray@CXTPDockBar@@SAHPBX0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockBar.cpp
