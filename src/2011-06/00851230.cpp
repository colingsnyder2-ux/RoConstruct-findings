// roc 2011-06 00851230  unit: CXTPToolBar::CControlButtonExpand  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851230
//
// 00851230  8b4108               mov eax, dword ptr [ecx + 8]
// 00851233  85c0                 test eax, eax
// 00851235  7501                 jne 0x851238
// 00851237  c3                   ret 
// 00851238  56                   push esi
// 00851239  685c82ac00           push 0xac825c
// 0085123e  8d7110               lea esi, [ecx + 0x10]
// 00851241  50                   push eax
// 00851242  c70614000000         mov dword ptr [esi], 0x14
// 00851248  ff156c03a400         call dword ptr [0xa4036c]
// 0085124e  85c0                 test eax, eax
// 00851250  740b                 je 0x85125d
// 00851252  56                   push esi
// 00851253  ffd0                 call eax
// 00851255  f7d8                 neg eax
// 00851257  1bc0                 sbb eax, eax
// 00851259  f7d8                 neg eax
// 0085125b  5e                   pop esi
// 0085125c  c3                   ret 
// 0085125d  33c0                 xor eax, eax
// 0085125f  5e                   pop esi
// 00851260  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GetVersionInfo@CXTPModuleHandle@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
