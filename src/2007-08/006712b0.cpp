// roc 2007-08 006712b0  unit: CXTPToolBar::CControlButtonExpand  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006712b0
//
// 006712b0  8b4108               mov eax, dword ptr [ecx + 8]
// 006712b3  85c0                 test eax, eax
// 006712b5  7501                 jne 0x6712b8
// 006712b7  c3                   ret 
// 006712b8  56                   push esi
// 006712b9  6874b67c00           push 0x7cb674
// 006712be  8d7110               lea esi, [ecx + 0x10]
// 006712c1  50                   push eax
// 006712c2  c70614000000         mov dword ptr [esi], 0x14
// 006712c8  ff1588d27700         call dword ptr [0x77d288]
// 006712ce  85c0                 test eax, eax
// 006712d0  740b                 je 0x6712dd
// 006712d2  56                   push esi
// 006712d3  ffd0                 call eax
// 006712d5  f7d8                 neg eax
// 006712d7  1bc0                 sbb eax, eax
// 006712d9  f7d8                 neg eax
// 006712db  5e                   pop esi
// 006712dc  c3                   ret 
// 006712dd  33c0                 xor eax, eax
// 006712df  5e                   pop esi
// 006712e0  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?GetVersionInfo@CXTPModuleHandle@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
