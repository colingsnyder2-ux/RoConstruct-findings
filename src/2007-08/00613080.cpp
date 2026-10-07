// roc 2007-08 00613080  unit: seg_00610000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00613080
//
// 00613080  8b442408             mov eax, dword ptr [esp + 8]
// 00613084  8d4810               lea ecx, [eax + 0x10]
// 00613087  394808               cmp dword ptr [eax + 8], ecx
// 0061308a  7412                 je 0x61309e
// 0061308c  8b5014               mov edx, dword ptr [eax + 0x14]
// 0061308f  56                   push esi
// 00613090  8b31                 mov esi, dword ptr [ecx]
// 00613092  897210               mov dword ptr [edx + 0x10], esi
// 00613095  8b09                 mov ecx, dword ptr [ecx]
// 00613097  8b5014               mov edx, dword ptr [eax + 0x14]
// 0061309a  895114               mov dword ptr [ecx + 0x14], edx
// 0061309d  5e                   pop esi
// 0061309e  6a00                 push 0
// 006130a0  6a20                 push 0x20
// 006130a2  50                   push eax
// 006130a3  8b442410             mov eax, dword ptr [esp + 0x10]
// 006130a7  50                   push eax
// 006130a8  e843090000           call 0x6139f0
// 006130ad  83c410               add esp, 0x10
// 006130b0  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_freeupval)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
