// from server: 100% by auto
// roc 2009-06 00597f50  unit: seg_00590000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00597f50
//
// 00597f50  53                   push ebx
// 00597f51  56                   push esi
// 00597f52  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00597f56  57                   push edi
// 00597f57  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00597f5b  81fffdff0000         cmp edi, 0xfffd
// 00597f61  7613                 jbe 0x597f76
// 00597f63  8b06                 mov eax, dword ptr [esi]
// 00597f65  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 00597f6c  8b0e                 mov ecx, dword ptr [esi]
// 00597f6e  8b11                 mov edx, dword ptr [ecx]
// 00597f70  56                   push esi
// 00597f71  ffd2                 call edx
// 00597f73  83c404               add esp, 4
// 00597f76  8b442414             mov eax, dword ptr [esp + 0x14]
// 00597f7a  50                   push eax
// 00597f7b  e810f5ffff           call 0x597490
// 00597f80  83c404               add esp, 4
// 00597f83  8d5f02               lea ebx, [edi + 2]
// 00597f86  e875f5ffff           call 0x597500
// 00597f8b  5f                   pop edi
// 00597f8c  5e                   pop esi
// 00597f8d  5b                   pop ebx
// 00597f8e  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_marker_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
