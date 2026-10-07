// roc 2010-06 0057b8a0  unit: seg_00570000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057b8a0
//
// 0057b8a0  53                   push ebx
// 0057b8a1  56                   push esi
// 0057b8a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057b8a6  57                   push edi
// 0057b8a7  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0057b8ab  81fffdff0000         cmp edi, 0xfffd
// 0057b8b1  7613                 jbe 0x57b8c6
// 0057b8b3  8b06                 mov eax, dword ptr [esi]
// 0057b8b5  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 0057b8bc  8b0e                 mov ecx, dword ptr [esi]
// 0057b8be  8b11                 mov edx, dword ptr [ecx]
// 0057b8c0  56                   push esi
// 0057b8c1  ffd2                 call edx
// 0057b8c3  83c404               add esp, 4
// 0057b8c6  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057b8ca  50                   push eax
// 0057b8cb  e810f5ffff           call 0x57ade0
// 0057b8d0  83c404               add esp, 4
// 0057b8d3  8d5f02               lea ebx, [edi + 2]
// 0057b8d6  e875f5ffff           call 0x57ae50
// 0057b8db  5f                   pop edi
// 0057b8dc  5e                   pop esi
// 0057b8dd  5b                   pop ebx
// 0057b8de  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_marker_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
