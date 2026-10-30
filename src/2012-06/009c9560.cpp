// from server: 100% by auto
// roc 2012-06 009c9560  unit: CXTPToolBar::CControlButtonExpand  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9560
//
// 009c9560  56                   push esi
// 009c9561  6894000000           push 0x94
// 009c9566  8bf1                 mov esi, ecx
// 009c9568  6a00                 push 0
// 009c956a  56                   push esi
// 009c956b  e8049efbff           call 0x983374
// 009c9570  83c40c               add esp, 0xc
// 009c9573  56                   push esi
// 009c9574  c70694000000         mov dword ptr [esi], 0x94
// 009c957a  ff15fc21b200         call dword ptr [0xb221fc]
// 009c9580  8bc6                 mov eax, esi
// 009c9582  5e                   pop esi
// 009c9583  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ??0CXTPSystemVersion@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
