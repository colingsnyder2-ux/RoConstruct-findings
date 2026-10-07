// roc 2008-06 006e81a0  unit: CXTPToolBar::CControlButtonExpand  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e81a0
//
// 006e81a0  8b4108               mov eax, dword ptr [ecx + 8]
// 006e81a3  85c0                 test eax, eax
// 006e81a5  7501                 jne 0x6e81a8
// 006e81a7  c3                   ret 
// 006e81a8  56                   push esi
// 006e81a9  68546e8500           push 0x856e54
// 006e81ae  8d7110               lea esi, [ecx + 0x10]
// 006e81b1  50                   push eax
// 006e81b2  c70614000000         mov dword ptr [esi], 0x14
// 006e81b8  ff15c0218000         call dword ptr [0x8021c0]
// 006e81be  85c0                 test eax, eax
// 006e81c0  740b                 je 0x6e81cd
// 006e81c2  56                   push esi
// 006e81c3  ffd0                 call eax
// 006e81c5  f7d8                 neg eax
// 006e81c7  1bc0                 sbb eax, eax
// 006e81c9  f7d8                 neg eax
// 006e81cb  5e                   pop esi
// 006e81cc  c3                   ret 
// 006e81cd  33c0                 xor eax, eax
// 006e81cf  5e                   pop esi
// 006e81d0  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?GetVersionInfo@CXTPModuleHandle@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
