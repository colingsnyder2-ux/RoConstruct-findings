// from server: 100% by auto
// roc 2012-06 009c9700  unit: CXTPToolBar::CControlButtonExpand  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9700
//
// 009c9700  8b4108               mov eax, dword ptr [ecx + 8]
// 009c9703  85c0                 test eax, eax
// 009c9705  7501                 jne 0x9c9708
// 009c9707  c3                   ret 
// 009c9708  56                   push esi
// 009c9709  685439c100           push 0xc13954
// 009c970e  8d7110               lea esi, [ecx + 0x10]
// 009c9711  50                   push eax
// 009c9712  c70614000000         mov dword ptr [esi], 0x14
// 009c9718  ff15b021b200         call dword ptr [0xb221b0]
// 009c971e  85c0                 test eax, eax
// 009c9720  740b                 je 0x9c972d
// 009c9722  56                   push esi
// 009c9723  ffd0                 call eax
// 009c9725  f7d8                 neg eax
// 009c9727  1bc0                 sbb eax, eax
// 009c9729  f7d8                 neg eax
// 009c972b  5e                   pop esi
// 009c972c  c3                   ret 
// 009c972d  33c0                 xor eax, eax
// 009c972f  5e                   pop esi
// 009c9730  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GetVersionInfo@CXTPModuleHandle@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
