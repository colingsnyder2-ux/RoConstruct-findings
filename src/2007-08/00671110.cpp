// roc 2007-08 00671110  unit: CXTPToolBar::CControlButtonExpand  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671110
//
// 00671110  56                   push esi
// 00671111  6894000000           push 0x94
// 00671116  8bf1                 mov esi, ecx
// 00671118  6a00                 push 0
// 0067111a  56                   push esi
// 0067111b  e86cfafbff           call 0x630b8c
// 00671120  83c40c               add esp, 0xc
// 00671123  56                   push esi
// 00671124  c70694000000         mov dword ptr [esi], 0x94
// 0067112a  ff1518d27700         call dword ptr [0x77d218]
// 00671130  8bc6                 mov eax, esi
// 00671132  5e                   pop esi
// 00671133  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ??0CXTPSystemVersion@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
