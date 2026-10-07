// roc 2011-06 00849650  unit: CRobloxTreeCtrl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00849650
//
// 00849650  8b442404             mov eax, dword ptr [esp + 4]
// 00849654  8b5014               mov edx, dword ptr [eax + 0x14]
// 00849657  52                   push edx
// 00849658  83c118               add ecx, 0x18
// 0084965b  e890f4ffff           call 0x848af0
// 00849660  8b442408             mov eax, dword ptr [esp + 8]
// 00849664  c70000000000         mov dword ptr [eax], 0
// 0084966a  33c0                 xor eax, eax
// 0084966c  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?OnDeleteItem@CXTPTreeBase@@IAEHPAUtagNMHDR@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
