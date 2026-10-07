// roc 2012-06 009c1130  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c1130
//
// 009c1130  53                   push ebx
// 009c1131  56                   push esi
// 009c1132  8bf1                 mov esi, ecx
// 009c1134  33db                 xor ebx, ebx
// 009c1136  6a0a                 push 0xa
// 009c1138  8d4e18               lea ecx, [esi + 0x18]
// 009c113b  c706bc1bc100         mov dword ptr [esi], 0xc11bbc
// 009c1141  895e04               mov dword ptr [esi + 4], ebx
// 009c1144  c7460801000000       mov dword ptr [esi + 8], 1
// 009c114b  895e0c               mov dword ptr [esi + 0xc], ebx
// 009c114e  895e10               mov dword ptr [esi + 0x10], ebx
// 009c1151  895e14               mov dword ptr [esi + 0x14], ebx
// 009c1154  e8e7fdffff           call 0x9c0f40
// 009c1159  885e38               mov byte ptr [esi + 0x38], bl
// 009c115c  895e34               mov dword ptr [esi + 0x34], ebx
// 009c115f  c6463901             mov byte ptr [esi + 0x39], 1
// 009c1163  8bc6                 mov eax, esi
// 009c1165  5e                   pop esi
// 009c1166  5b                   pop ebx
// 009c1167  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ??0CXTPTreeBase@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
