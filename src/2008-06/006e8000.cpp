// roc 2008-06 006e8000  unit: CXTPToolBar::CControlButtonExpand  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8000
//
// 006e8000  56                   push esi
// 006e8001  6894000000           push 0x94
// 006e8006  8bf1                 mov esi, ecx
// 006e8008  6a00                 push 0
// 006e800a  56                   push esi
// 006e800b  e8f496fbff           call 0x6a1704
// 006e8010  83c40c               add esp, 0xc
// 006e8013  56                   push esi
// 006e8014  c70694000000         mov dword ptr [esi], 0x94
// 006e801a  ff159c218000         call dword ptr [0x80219c]
// 006e8020  8bc6                 mov eax, esi
// 006e8022  5e                   pop esi
// 006e8023  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ??0CXTPSystemVersion@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
