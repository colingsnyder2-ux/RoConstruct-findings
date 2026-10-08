// roc 2007-03 0051e610  unit: seg_00510000  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051e610
//
// 0051e610  56                   push esi
// 0051e611  68ee000000           push 0xee
// 0051e616  8bf0                 mov esi, eax
// 0051e618  e863fbffff           call 0x51e180
// 0051e61d  b80e000000           mov eax, 0xe
// 0051e622  8bce                 mov ecx, esi
// 0051e624  e877fbffff           call 0x51e1a0
// 0051e629  6a41                 push 0x41
// 0051e62b  e810fbffff           call 0x51e140
// 0051e630  6a64                 push 0x64
// 0051e632  e809fbffff           call 0x51e140
// 0051e637  6a6f                 push 0x6f
// 0051e639  e802fbffff           call 0x51e140
// 0051e63e  6a62                 push 0x62
// 0051e640  e8fbfaffff           call 0x51e140
// 0051e645  6a65                 push 0x65
// 0051e647  e8f4faffff           call 0x51e140
// 0051e64c  83c418               add esp, 0x18
// 0051e64f  b864000000           mov eax, 0x64
// 0051e654  8bce                 mov ecx, esi
// 0051e656  e845fbffff           call 0x51e1a0
// 0051e65b  33c0                 xor eax, eax
// 0051e65d  8bce                 mov ecx, esi
// 0051e65f  e83cfbffff           call 0x51e1a0
// 0051e664  33c0                 xor eax, eax
// 0051e666  8bce                 mov ecx, esi
// 0051e668  e833fbffff           call 0x51e1a0
// 0051e66d  8b4640               mov eax, dword ptr [esi + 0x40]
// 0051e670  83e803               sub eax, 3
// 0051e673  741d                 je 0x51e692
// 0051e675  83e802               sub eax, 2
// 0051e678  740c                 je 0x51e686
// 0051e67a  6a00                 push 0
// 0051e67c  e8bffaffff           call 0x51e140
// 0051e681  83c404               add esp, 4
// 0051e684  5e                   pop esi
// 0051e685  c3                   ret 
// 0051e686  6a02                 push 2
// 0051e688  e8b3faffff           call 0x51e140
// 0051e68d  83c404               add esp, 4
// 0051e690  5e                   pop esi
// 0051e691  c3                   ret 
// 0051e692  6a01                 push 1
// 0051e694  e8a7faffff           call 0x51e140
// 0051e699  83c404               add esp, 4
// 0051e69c  5e                   pop esi
// 0051e69d  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_adobe_app14)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
