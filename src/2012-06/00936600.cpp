// from server: 100% by auto
// roc 2012-06 00936600  unit: seg_00930000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00936600
//
// 00936600  8b442408             mov eax, dword ptr [esp + 8]
// 00936604  8d4810               lea ecx, [eax + 0x10]
// 00936607  394808               cmp dword ptr [eax + 8], ecx
// 0093660a  7412                 je 0x93661e
// 0093660c  8b5014               mov edx, dword ptr [eax + 0x14]
// 0093660f  56                   push esi
// 00936610  8b31                 mov esi, dword ptr [ecx]
// 00936612  897210               mov dword ptr [edx + 0x10], esi
// 00936615  8b09                 mov ecx, dword ptr [ecx]
// 00936617  8b5014               mov edx, dword ptr [eax + 0x14]
// 0093661a  895114               mov dword ptr [ecx + 0x14], edx
// 0093661d  5e                   pop esi
// 0093661e  6a00                 push 0
// 00936620  6a20                 push 0x20
// 00936622  50                   push eax
// 00936623  8b442410             mov eax, dword ptr [esp + 0x10]
// 00936627  50                   push eax
// 00936628  e833090000           call 0x936f60
// 0093662d  83c410               add esp, 0x10
// 00936630  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_freeupval)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
