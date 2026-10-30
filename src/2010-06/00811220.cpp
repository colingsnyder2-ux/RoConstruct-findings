// roc 2010-06 00811220  unit: CXTPDockingPane  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00811220
//
// 00811220  56                   push esi
// 00811221  8bf1                 mov esi, ecx
// 00811223  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00811229  85c0                 test eax, eax
// 0081122b  7436                 je 0x811263
// 0081122d  6a00                 push 0
// 0081122f  50                   push eax
// 00811230  ff1518bc9e00         call dword ptr [0x9ebc18]
// 00811236  8d4e20               lea ecx, [esi + 0x20]
// 00811239  e8d2360500           call 0x864910
// 0081123e  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 00811244  85c0                 test eax, eax
// 00811246  7403                 je 0x81124b
// 00811248  8b4020               mov eax, dword ptr [eax + 0x20]
// 0081124b  50                   push eax
// 0081124c  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00811252  50                   push eax
// 00811253  ff15f0b99e00         call dword ptr [0x9eb9f0]
// 00811259  c786b400000000000000 mov dword ptr [esi + 0xb4], 0
// 00811263  8d4e20               lea ecx, [esi + 0x20]
// 00811266  e8a5360500           call 0x864910
// 0081126b  8bc8                 mov ecx, eax
// 0081126d  5e                   pop esi
// 0081126e  e93dcbfdff           jmp 0x7eddb0
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?Detach@CXTPDockingPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
