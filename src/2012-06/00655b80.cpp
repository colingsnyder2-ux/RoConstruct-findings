// from server: 100% by auto
// roc 2012-06 00655b80  unit: seg_00650000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00655b80
//
// 00655b80  53                   push ebx
// 00655b81  56                   push esi
// 00655b82  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00655b86  57                   push edi
// 00655b87  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00655b8b  81fffdff0000         cmp edi, 0xfffd
// 00655b91  7613                 jbe 0x655ba6
// 00655b93  8b06                 mov eax, dword ptr [esi]
// 00655b95  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 00655b9c  8b0e                 mov ecx, dword ptr [esi]
// 00655b9e  8b11                 mov edx, dword ptr [ecx]
// 00655ba0  56                   push esi
// 00655ba1  ffd2                 call edx
// 00655ba3  83c404               add esp, 4
// 00655ba6  8b442414             mov eax, dword ptr [esp + 0x14]
// 00655baa  50                   push eax
// 00655bab  e810f5ffff           call 0x6550c0
// 00655bb0  83c404               add esp, 4
// 00655bb3  8d5f02               lea ebx, [edi + 2]
// 00655bb6  e875f5ffff           call 0x655130
// 00655bbb  5f                   pop edi
// 00655bbc  5e                   pop esi
// 00655bbd  5b                   pop ebx
// 00655bbe  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_marker_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
