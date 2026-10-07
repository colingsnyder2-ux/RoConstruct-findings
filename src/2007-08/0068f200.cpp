// roc 2007-08 0068f200  unit: CXTPDockingPane  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f200
//
// 0068f200  56                   push esi
// 0068f201  8bf1                 mov esi, ecx
// 0068f203  ff15d4ec7700         call dword ptr [0x77ecd4]
// 0068f209  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 0068f20f  85c9                 test ecx, ecx
// 0068f211  5e                   pop esi
// 0068f212  7416                 je 0x68f22a
// 0068f214  3bc1                 cmp eax, ecx
// 0068f216  740c                 je 0x68f224
// 0068f218  50                   push eax
// 0068f219  51                   push ecx
// 0068f21a  ff1574ee7700         call dword ptr [0x77ee74]
// 0068f220  85c0                 test eax, eax
// 0068f222  7406                 je 0x68f22a
// 0068f224  b801000000           mov eax, 1
// 0068f229  c3                   ret 
// 0068f22a  33c0                 xor eax, eax
// 0068f22c  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?IsFocus@CXTPDockingPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
