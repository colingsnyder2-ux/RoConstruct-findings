// roc 2009-12 008c9340  unit: VCEdit::?$CXTMaskEditT  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c9340
//
// 008c9340  8b542404             mov edx, dword ptr [esp + 4]
// 008c9344  0fb7c2               movzx eax, dx
// 008c9347  05e01effff           add eax, 0xffff1ee0
// 008c934c  83f80b               cmp eax, 0xb
// 008c934f  7755                 ja 0x8c93a6
// 008c9351  ff2485b0938c00       jmp dword ptr [eax*4 + 0x8c93b0]
// 008c9358  e803faffff           call 0x8c8d60
// 008c935d  b801000000           mov eax, 1
// 008c9362  c20800               ret 8
// 008c9365  e866eeffff           call 0x8c81d0
// 008c936a  b801000000           mov eax, 1
// 008c936f  c20800               ret 8
// 008c9372  e849faffff           call 0x8c8dc0
// 008c9377  b801000000           mov eax, 1
// 008c937c  c20800               ret 8
// 008c937f  e85cf4ffff           call 0x8c87e0
// 008c9384  b801000000           mov eax, 1
// 008c9389  c20800               ret 8
// 008c938c  e8dfe6ffff           call 0x8c7a70
// 008c9391  b801000000           mov eax, 1
// 008c9396  c20800               ret 8
// 008c9399  e802f1ffff           call 0x8c84a0
// 008c939e  b801000000           mov eax, 1
// 008c93a3  c20800               ret 8
// 008c93a6  89542404             mov dword ptr [esp + 4], edx
// 008c93aa  e907a6f2ff           jmp 0x7f39b6
// 008c93af  90                   nop 
// 008c93b0  7f93                 jg 0x8c9345
// 008c93b2  8c00                 mov word ptr [eax], es
// 008c93b4  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 008c93b5  93                   xchg ebx, eax
// 008c93b6  8c00                 mov word ptr [eax], es
// 008c93b8  6593                 xchg ebx, eax
// 008c93ba  8c00                 mov word ptr [eax], es
// 008c93bc  58                   pop eax
// 008c93bd  93                   xchg ebx, eax
// 008c93be  8c00                 mov word ptr [eax], es
// 008c93c0  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 008c93c1  93                   xchg ebx, eax
// 008c93c2  8c00                 mov word ptr [eax], es
// 008c93c4  7293                 jb 0x8c9359
// 008c93c6  8c00                 mov word ptr [eax], es
// 008c93c8  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 008c93c9  93                   xchg ebx, eax
// 008c93ca  8c00                 mov word ptr [eax], es
// 008c93cc  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 008c93cd  93                   xchg ebx, eax
// 008c93ce  8c00                 mov word ptr [eax], es
// 008c93d0  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 008c93d1  93                   xchg ebx, eax
// 008c93d2  8c00                 mov word ptr [eax], es
// 008c93d4  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 008c93d5  93                   xchg ebx, eax
// 008c93d6  8c00                 mov word ptr [eax], es
// 008c93d8  99                   cdq 
// 008c93d9  93                   xchg ebx, eax
// 008c93da  8c00                 mov word ptr [eax], es
// copied from an identical function in another client (function ?OnCommand@?$CXTMaskEditT@VCEdit@@@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp