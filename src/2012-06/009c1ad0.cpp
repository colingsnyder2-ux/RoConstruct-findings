// from server: 100% by auto
// roc 2012-06 009c1ad0  unit: CRobloxTreeCtrl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c1ad0
//
// 009c1ad0  8b442404             mov eax, dword ptr [esp + 4]
// 009c1ad4  8b5014               mov edx, dword ptr [eax + 0x14]
// 009c1ad7  52                   push edx
// 009c1ad8  83c118               add ecx, 0x18
// 009c1adb  e890f4ffff           call 0x9c0f70
// 009c1ae0  8b442408             mov eax, dword ptr [esp + 8]
// 009c1ae4  c70000000000         mov dword ptr [eax], 0
// 009c1aea  33c0                 xor eax, eax
// 009c1aec  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?OnDeleteItem@CXTPTreeBase@@IAEHPAUtagNMHDR@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
