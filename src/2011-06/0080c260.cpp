// from server: 100% by auto
// roc 2011-06 0080c260  unit: boost::exception  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080c260
//
// 0080c260  8b442404             mov eax, dword ptr [esp + 4]
// 0080c264  83f802               cmp eax, 2
// 0080c267  7408                 je 0x80c271
// 0080c269  83f803               cmp eax, 3
// 0080c26c  7403                 je 0x80c271
// 0080c26e  33c0                 xor eax, eax
// 0080c270  c3                   ret 
// 0080c271  b801000000           mov eax, 1
// 0080c276  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControl.cpp (function ?IsKeyboardSelected@@YAHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControl.cpp
