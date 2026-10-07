// roc 2008-06 006c1f90  unit: CXTPToolBar  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c1f90
//
// 006c1f90  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006c1f94  56                   push esi
// 006c1f95  8bf1                 mov esi, ecx
// 006c1f97  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c1f9b  50                   push eax
// 006c1f9c  51                   push ecx
// 006c1f9d  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 006c1fa3  e858ff0200           call 0x6f1f00
// 006c1fa8  85c0                 test eax, eax
// 006c1faa  7515                 jne 0x6c1fc1
// 006c1fac  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 006c1fb2  85c9                 test ecx, ecx
// 006c1fb4  740b                 je 0x6c1fc1
// 006c1fb6  8b11                 mov edx, dword ptr [ecx]
// 006c1fb8  8b420c               mov eax, dword ptr [edx + 0xc]
// 006c1fbb  ffd0                 call eax
// 006c1fbd  5e                   pop esi
// 006c1fbe  c20c00               ret 0xc
// 006c1fc1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006c1fc5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006c1fc9  8b442408             mov eax, dword ptr [esp + 8]
// 006c1fcd  51                   push ecx
// 006c1fce  52                   push edx
// 006c1fcf  50                   push eax
// 006c1fd0  8bce                 mov ecx, esi
// 006c1fd2  e80939ffff           call 0x6b58e0
// 006c1fd7  5e                   pop esi
// 006c1fd8  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnLButtonDblClk@CXTPToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
