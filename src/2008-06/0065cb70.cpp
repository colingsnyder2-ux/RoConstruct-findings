// roc 2008-06 0065cb70  unit: RBX::BallBallContact  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065cb70
//
// 0065cb70  55                   push ebp
// 0065cb71  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0065cb75  56                   push esi
// 0065cb76  57                   push edi
// 0065cb77  8bf0                 mov esi, eax
// 0065cb79  8b442410             mov eax, dword ptr [esp + 0x10]
// 0065cb7d  55                   push ebp
// 0065cb7e  50                   push eax
// 0065cb7f  56                   push esi
// 0065cb80  e87bfaffff           call 0x65c600
// 0065cb85  8bf8                 mov edi, eax
// 0065cb87  83c40c               add esp, 0xc
// 0065cb8a  837f0800             cmp dword ptr [edi + 8], 0
// 0065cb8e  7507                 jne 0x65cb97
// 0065cb90  5f                   pop edi
// 0065cb91  5e                   pop esi
// 0065cb92  83c8ff               or eax, 0xffffffff
// 0065cb95  5d                   pop ebp
// 0065cb96  c3                   ret 
// 0065cb97  55                   push ebp
// 0065cb98  53                   push ebx
// 0065cb99  56                   push esi
// 0065cb9a  e861faffff           call 0x65c600
// 0065cb9f  50                   push eax
// 0065cba0  57                   push edi
// 0065cba1  e8ca5afcff           call 0x622670
// 0065cba6  83c414               add esp, 0x14
// 0065cba9  85c0                 test eax, eax
// 0065cbab  74e3                 je 0x65cb90
// 0065cbad  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065cbb1  8b4608               mov eax, dword ptr [esi + 8]
// 0065cbb4  57                   push edi
// 0065cbb5  56                   push esi
// 0065cbb6  8bcb                 mov ecx, ebx
// 0065cbb8  e8f3fbffff           call 0x65c7b0
// 0065cbbd  8b7608               mov esi, dword ptr [esi + 8]
// 0065cbc0  8b4608               mov eax, dword ptr [esi + 8]
// 0065cbc3  83c408               add esp, 8
// 0065cbc6  85c0                 test eax, eax
// 0065cbc8  7413                 je 0x65cbdd
// 0065cbca  83f801               cmp eax, 1
// 0065cbcd  7505                 jne 0x65cbd4
// 0065cbcf  833e00               cmp dword ptr [esi], 0
// 0065cbd2  7409                 je 0x65cbdd
// 0065cbd4  5f                   pop edi
// 0065cbd5  5e                   pop esi
// 0065cbd6  b801000000           mov eax, 1
// 0065cbdb  5d                   pop ebp
// 0065cbdc  c3                   ret 
// 0065cbdd  5f                   pop edi
// 0065cbde  5e                   pop esi
// 0065cbdf  33c0                 xor eax, eax
// 0065cbe1  5d                   pop ebp
// 0065cbe2  c3                   ret 
// library lua-5.1.4/lvm.c (function _call_orderTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
