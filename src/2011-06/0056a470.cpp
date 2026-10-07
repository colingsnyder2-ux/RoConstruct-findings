// roc 2011-06 0056a470  unit: seg_00560000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0056a470
//
// 0056a470  53                   push ebx
// 0056a471  56                   push esi
// 0056a472  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056a476  57                   push edi
// 0056a477  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0056a47b  81fffdff0000         cmp edi, 0xfffd
// 0056a481  7613                 jbe 0x56a496
// 0056a483  8b06                 mov eax, dword ptr [esi]
// 0056a485  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 0056a48c  8b0e                 mov ecx, dword ptr [esi]
// 0056a48e  8b11                 mov edx, dword ptr [ecx]
// 0056a490  56                   push esi
// 0056a491  ffd2                 call edx
// 0056a493  83c404               add esp, 4
// 0056a496  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056a49a  50                   push eax
// 0056a49b  e810f5ffff           call 0x5699b0
// 0056a4a0  83c404               add esp, 4
// 0056a4a3  8d5f02               lea ebx, [edi + 2]
// 0056a4a6  e875f5ffff           call 0x569a20
// 0056a4ab  5f                   pop edi
// 0056a4ac  5e                   pop esi
// 0056a4ad  5b                   pop ebx
// 0056a4ae  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_marker_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
