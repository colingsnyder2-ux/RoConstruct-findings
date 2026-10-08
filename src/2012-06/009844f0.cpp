// from server: 100% by auto
// roc 2012-06 009844f0  unit: boost::exception  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009844f0
//
// 009844f0  8b442404             mov eax, dword ptr [esp + 4]
// 009844f4  83f802               cmp eax, 2
// 009844f7  7408                 je 0x984501
// 009844f9  83f803               cmp eax, 3
// 009844fc  7403                 je 0x984501
// 009844fe  33c0                 xor eax, eax
// 00984500  c3                   ret 
// 00984501  b801000000           mov eax, 1
// 00984506  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControl.cpp (function ?IsKeyboardSelected@@YAHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControl.cpp
