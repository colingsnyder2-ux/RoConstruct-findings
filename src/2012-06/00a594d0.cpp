// roc 2012-06 00a594d0  unit: VCEdit::?$CXTMaskEditT  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a594d0
//
// 00a594d0  8b542404             mov edx, dword ptr [esp + 4]
// 00a594d4  0fb7c2               movzx eax, dx
// 00a594d7  05e01effff           add eax, 0xffff1ee0
// 00a594dc  83f80b               cmp eax, 0xb
// 00a594df  7755                 ja 0xa59536
// 00a594e1  ff24854095a500       jmp dword ptr [eax*4 + 0xa59540]
// 00a594e8  e803faffff           call 0xa58ef0
// 00a594ed  b801000000           mov eax, 1
// 00a594f2  c20800               ret 8
// 00a594f5  e856eeffff           call 0xa58350
// 00a594fa  b801000000           mov eax, 1
// 00a594ff  c20800               ret 8
// 00a59502  e849faffff           call 0xa58f50
// 00a59507  b801000000           mov eax, 1
// 00a5950c  c20800               ret 8
// 00a5950f  e84cf4ffff           call 0xa58960
// 00a59514  b801000000           mov eax, 1
// 00a59519  c20800               ret 8
// 00a5951c  e8cfe6ffff           call 0xa57bf0
// 00a59521  b801000000           mov eax, 1
// 00a59526  c20800               ret 8
// 00a59529  e8f2f0ffff           call 0xa58620
// 00a5952e  b801000000           mov eax, 1
// 00a59533  c20800               ret 8
// 00a59536  89542404             mov dword ptr [esp + 4], edx
// 00a5953a  e9318df2ff           jmp 0x982270
// 00a5953f  90                   nop 
// 00a59540  0f95a5003695a5       setne byte ptr [ebp - 0x5a6aca00]
// 00a59547  00f5                 add ch, dh
// 00a59549  94                   xchg esp, eax
// 00a5954a  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a5954b  00e8                 add al, ch
// 00a5954d  94                   xchg esp, eax
// 00a5954e  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a5954f  0036                 add byte ptr [esi], dh
// 00a59551  95                   xchg ebp, eax
// 00a59552  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a59553  0002                 add byte ptr [edx], al
// 00a59555  95                   xchg ebp, eax
// 00a59556  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a59557  0036                 add byte ptr [esi], dh
// 00a59559  95                   xchg ebp, eax
// 00a5955a  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a5955b  0036                 add byte ptr [esi], dh
// 00a5955d  95                   xchg ebp, eax
// 00a5955e  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a5955f  0036                 add byte ptr [esi], dh
// 00a59561  95                   xchg ebp, eax
// 00a59562  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a59563  0036                 add byte ptr [esi], dh
// 00a59565  95                   xchg ebp, eax
// 00a59566  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a59567  0029                 add byte ptr [ecx], ch
// 00a59569  95                   xchg ebp, eax
// 00a5956a  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// copied from an identical function in another client (function ?OnCommand@?$CXTPMaskEditT@VCEdit@@@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTOutBarCtrl.cpp