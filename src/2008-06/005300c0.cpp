// from server: 100% by auto
// roc 2008-06 005300c0  unit: seg_00530000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005300c0
//
// 005300c0  53                   push ebx
// 005300c1  56                   push esi
// 005300c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005300c6  57                   push edi
// 005300c7  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005300cb  81fffdff0000         cmp edi, 0xfffd
// 005300d1  7613                 jbe 0x5300e6
// 005300d3  8b06                 mov eax, dword ptr [esi]
// 005300d5  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 005300dc  8b0e                 mov ecx, dword ptr [esi]
// 005300de  8b11                 mov edx, dword ptr [ecx]
// 005300e0  56                   push esi
// 005300e1  ffd2                 call edx
// 005300e3  83c404               add esp, 4
// 005300e6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005300ea  50                   push eax
// 005300eb  e810f5ffff           call 0x52f600
// 005300f0  83c404               add esp, 4
// 005300f3  8d5f02               lea ebx, [edi + 2]
// 005300f6  e875f5ffff           call 0x52f670
// 005300fb  5f                   pop edi
// 005300fc  5e                   pop esi
// 005300fd  5b                   pop ebx
// 005300fe  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_marker_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
