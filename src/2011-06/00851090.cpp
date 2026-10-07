// roc 2011-06 00851090  unit: CXTPToolBar::CControlButtonExpand  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851090
//
// 00851090  56                   push esi
// 00851091  6894000000           push 0x94
// 00851096  8bf1                 mov esi, ecx
// 00851098  6a00                 push 0
// 0085109a  56                   push esi
// 0085109b  e844a2fbff           call 0x80b2e4
// 008510a0  83c40c               add esp, 0xc
// 008510a3  56                   push esi
// 008510a4  c70694000000         mov dword ptr [esi], 0x94
// 008510aa  ff153003a400         call dword ptr [0xa40330]
// 008510b0  8bc6                 mov eax, esi
// 008510b2  5e                   pop esi
// 008510b3  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ??0CXTPSystemVersion@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
