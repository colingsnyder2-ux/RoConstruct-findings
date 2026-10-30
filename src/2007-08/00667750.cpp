// from server: 100% by auto
// roc 2007-08 00667750  unit: CRobloxTreeCtrl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00667750
//
// 00667750  8b442404             mov eax, dword ptr [esp + 4]
// 00667754  8b5014               mov edx, dword ptr [eax + 0x14]
// 00667757  52                   push edx
// 00667758  83c118               add ecx, 0x18
// 0066775b  e890f4ffff           call 0x666bf0
// 00667760  8b442408             mov eax, dword ptr [esp + 8]
// 00667764  c70000000000         mov dword ptr [eax], 0
// 0066776a  33c0                 xor eax, eax
// 0066776c  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?OnDeleteItem@CXTTreeBase@@IAEHPAUtagNMHDR@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
