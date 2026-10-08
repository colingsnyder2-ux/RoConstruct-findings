// roc 2009-12 0061a000  unit: seg_00610000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061a000
//
// 0061a000  56                   push esi
// 0061a001  8b742408             mov esi, dword ptr [esp + 8]
// 0061a005  57                   push edi
// 0061a006  8bbe4c010000         mov edi, dword ptr [esi + 0x14c]
// 0061a00c  68d8000000           push 0xd8
// 0061a011  e8aaf4ffff           call 0x6194c0
// 0061a016  83c404               add esp, 4
// 0061a019  c7471c00000000       mov dword ptr [edi + 0x1c], 0
// 0061a020  80bec400000000       cmp byte ptr [esi + 0xc4], 0
// 0061a027  7407                 je 0x61a030
// 0061a029  8bc6                 mov eax, esi
// 0061a02b  e8f0fbffff           call 0x619c20
// 0061a030  80becc00000000       cmp byte ptr [esi + 0xcc], 0
// 0061a037  5f                   pop edi
// 0061a038  7408                 je 0x61a042
// 0061a03a  8bc6                 mov eax, esi
// 0061a03c  5e                   pop esi
// 0061a03d  e9defdffff           jmp 0x619e20
// 0061a042  5e                   pop esi
// 0061a043  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_file_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
