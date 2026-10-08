// roc 2007-03 0051e570  unit: seg_00510000  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051e570
//
// 0051e570  56                   push esi
// 0051e571  68e0000000           push 0xe0
// 0051e576  8bf0                 mov esi, eax
// 0051e578  e803fcffff           call 0x51e180
// 0051e57d  b810000000           mov eax, 0x10
// 0051e582  8bce                 mov ecx, esi
// 0051e584  e817fcffff           call 0x51e1a0
// 0051e589  6a4a                 push 0x4a
// 0051e58b  e8b0fbffff           call 0x51e140
// 0051e590  6a46                 push 0x46
// 0051e592  e8a9fbffff           call 0x51e140
// 0051e597  6a49                 push 0x49
// 0051e599  e8a2fbffff           call 0x51e140
// 0051e59e  6a46                 push 0x46
// 0051e5a0  e89bfbffff           call 0x51e140
// 0051e5a5  6a00                 push 0
// 0051e5a7  e894fbffff           call 0x51e140
// 0051e5ac  0fb686c5000000       movzx eax, byte ptr [esi + 0xc5]
// 0051e5b3  50                   push eax
// 0051e5b4  e887fbffff           call 0x51e140
// 0051e5b9  0fb68ec6000000       movzx ecx, byte ptr [esi + 0xc6]
// 0051e5c0  51                   push ecx
// 0051e5c1  e87afbffff           call 0x51e140
// 0051e5c6  0fb696c7000000       movzx edx, byte ptr [esi + 0xc7]
// 0051e5cd  52                   push edx
// 0051e5ce  e86dfbffff           call 0x51e140
// 0051e5d3  0fb786c8000000       movzx eax, word ptr [esi + 0xc8]
// 0051e5da  8bce                 mov ecx, esi
// 0051e5dc  e8bffbffff           call 0x51e1a0
// 0051e5e1  0fb786ca000000       movzx eax, word ptr [esi + 0xca]
// 0051e5e8  8bce                 mov ecx, esi
// 0051e5ea  e8b1fbffff           call 0x51e1a0
// 0051e5ef  6a00                 push 0
// 0051e5f1  e84afbffff           call 0x51e140
// 0051e5f6  6a00                 push 0
// 0051e5f8  e843fbffff           call 0x51e140
// 0051e5fd  83c42c               add esp, 0x2c
// 0051e600  5e                   pop esi
// 0051e601  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_jfif_app0)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
