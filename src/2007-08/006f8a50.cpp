// roc 2007-08 006f8a50  unit: VCEdit::?$CXTMaskEditT  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f8a50
//
// 006f8a50  8b542404             mov edx, dword ptr [esp + 4]
// 006f8a54  0fb7c2               movzx eax, dx
// 006f8a57  05e01effff           add eax, 0xffff1ee0
// 006f8a5c  83f80b               cmp eax, 0xb
// 006f8a5f  7755                 ja 0x6f8ab6
// 006f8a61  ff2485c08a6f00       jmp dword ptr [eax*4 + 0x6f8ac0]
// 006f8a68  e8f3f9ffff           call 0x6f8460
// 006f8a6d  b801000000           mov eax, 1
// 006f8a72  c20800               ret 8
// 006f8a75  e896eeffff           call 0x6f7910
// 006f8a7a  b801000000           mov eax, 1
// 006f8a7f  c20800               ret 8
// 006f8a82  e839faffff           call 0x6f84c0
// 006f8a87  b801000000           mov eax, 1
// 006f8a8c  c20800               ret 8
// 006f8a8f  e85cf4ffff           call 0x6f7ef0
// 006f8a94  b801000000           mov eax, 1
// 006f8a99  c20800               ret 8
// 006f8a9c  e80fe7ffff           call 0x6f71b0
// 006f8aa1  b801000000           mov eax, 1
// 006f8aa6  c20800               ret 8
// 006f8aa9  e832f1ffff           call 0x6f7be0
// 006f8aae  b801000000           mov eax, 1
// 006f8ab3  c20800               ret 8
// 006f8ab6  89542404             mov dword ptr [esp + 4], edx
// 006f8aba  e9f972f3ff           jmp 0x62fdb8
// 006f8abf  90                   nop 
// copied from an identical function in another client (function ?OnCommand@?$CXTMaskEditT@VCEdit@@@@MAEHIJ@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp