// roc 2009-06 00818e60  unit: CXTShadowHook  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00818e60
//
// 00818e60  56                   push esi
// 00818e61  8bf1                 mov esi, ecx
// 00818e63  8b4604               mov eax, dword ptr [esi + 4]
// 00818e66  c706ccf59000         mov dword ptr [esi], 0x90f5cc
// 00818e6c  85c0                 test eax, eax
// 00818e6e  7414                 je 0x818e84
// 00818e70  50                   push eax
// 00818e71  ff15e0ed8900         call dword ptr [0x89ede0]
// 00818e77  85c0                 test eax, eax
// 00818e79  7409                 je 0x818e84
// 00818e7b  6a00                 push 0
// 00818e7d  8bce                 mov ecx, esi
// 00818e7f  e88cffffff           call 0x818e10
// 00818e84  5e                   pop esi
// 00818e85  c3                   ret 
// copied from an identical function in another client (function ??1CXTWndHook@@UAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndHook.cpp