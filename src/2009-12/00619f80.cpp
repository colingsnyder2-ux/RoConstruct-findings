// roc 2009-12 00619f80  unit: seg_00610000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00619f80
//
// 00619f80  53                   push ebx
// 00619f81  56                   push esi
// 00619f82  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00619f86  57                   push edi
// 00619f87  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00619f8b  81fffdff0000         cmp edi, 0xfffd
// 00619f91  7613                 jbe 0x619fa6
// 00619f93  8b06                 mov eax, dword ptr [esi]
// 00619f95  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 00619f9c  8b0e                 mov ecx, dword ptr [esi]
// 00619f9e  8b11                 mov edx, dword ptr [ecx]
// 00619fa0  56                   push esi
// 00619fa1  ffd2                 call edx
// 00619fa3  83c404               add esp, 4
// 00619fa6  8b442414             mov eax, dword ptr [esp + 0x14]
// 00619faa  50                   push eax
// 00619fab  e810f5ffff           call 0x6194c0
// 00619fb0  83c404               add esp, 4
// 00619fb3  8d5f02               lea ebx, [edi + 2]
// 00619fb6  e875f5ffff           call 0x619530
// 00619fbb  5f                   pop edi
// 00619fbc  5e                   pop esi
// 00619fbd  5b                   pop ebx
// 00619fbe  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_marker_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
