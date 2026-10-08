// from server: 100% by auto
// roc 2008-06 006e0170  unit: CXTPColorManager  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e0170
//
// 006e0170  8b442408             mov eax, dword ptr [esp + 8]
// 006e0174  8b542404             mov edx, dword ptr [esp + 4]
// 006e0178  50                   push eax
// 006e0179  52                   push edx
// 006e017a  e851ffffff           call 0x6e00d0
// 006e017f  e8b2c80d00           call 0x7bca36
// 006e0184  d95c2408             fstp dword ptr [esp + 8]
// 006e0188  d9442408             fld dword ptr [esp + 8]
// 006e018c  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPColorManager.cpp (function ?Length@CXTPColorManager@@AAEMKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPColorManager.cpp
