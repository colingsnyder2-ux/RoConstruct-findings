// roc 2008-06 0051ea30  unit: seg_00510000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051ea30
//
// 0051ea30  8b442408             mov eax, dword ptr [esp + 8]
// 0051ea34  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0051ea38  56                   push esi
// 0051ea39  8b31                 mov esi, dword ptr [ecx]
// 0051ea3b  85c0                 test eax, eax
// 0051ea3d  7d1a                 jge 0x51ea59
// 0051ea3f  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 0051ea43  7406                 je 0x51ea4b
// 0051ea45  837e6803             cmp dword ptr [esi + 0x68], 3
// 0051ea49  7c09                 jl 0x51ea54
// 0051ea4b  8b4608               mov eax, dword ptr [esi + 8]
// 0051ea4e  51                   push ecx
// 0051ea4f  ffd0                 call eax
// 0051ea51  83c404               add esp, 4
// 0051ea54  ff466c               inc dword ptr [esi + 0x6c]
// 0051ea57  5e                   pop esi
// 0051ea58  c3                   ret 
// 0051ea59  394668               cmp dword ptr [esi + 0x68], eax
// 0051ea5c  7c09                 jl 0x51ea67
// 0051ea5e  51                   push ecx
// 0051ea5f  8b4e08               mov ecx, dword ptr [esi + 8]
// 0051ea62  ffd1                 call ecx
// 0051ea64  83c404               add esp, 4
// 0051ea67  5e                   pop esi
// 0051ea68  c3                   ret 
// library jpeg-6b/jerror.c (function _emit_message)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jerror.c
