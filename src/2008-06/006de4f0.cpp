// roc 2008-06 006de4f0  unit: CRobloxTreeCtrl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006de4f0
//
// 006de4f0  8b442404             mov eax, dword ptr [esp + 4]
// 006de4f4  8b5014               mov edx, dword ptr [eax + 0x14]
// 006de4f7  52                   push edx
// 006de4f8  83c118               add ecx, 0x18
// 006de4fb  e890f4ffff           call 0x6dd990
// 006de500  8b442408             mov eax, dword ptr [esp + 8]
// 006de504  c70000000000         mov dword ptr [eax], 0
// 006de50a  33c0                 xor eax, eax
// 006de50c  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?OnDeleteItem@CXTTreeBase@@IAEHPAUtagNMHDR@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
