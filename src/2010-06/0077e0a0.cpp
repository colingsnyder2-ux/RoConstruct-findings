// from server: 100% by auto
// roc 2010-06 0077e0a0  unit: seg_00770000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077e0a0
//
// 0077e0a0  8b442408             mov eax, dword ptr [esp + 8]
// 0077e0a4  8d4810               lea ecx, [eax + 0x10]
// 0077e0a7  394808               cmp dword ptr [eax + 8], ecx
// 0077e0aa  7412                 je 0x77e0be
// 0077e0ac  8b5014               mov edx, dword ptr [eax + 0x14]
// 0077e0af  56                   push esi
// 0077e0b0  8b31                 mov esi, dword ptr [ecx]
// 0077e0b2  897210               mov dword ptr [edx + 0x10], esi
// 0077e0b5  8b09                 mov ecx, dword ptr [ecx]
// 0077e0b7  8b5014               mov edx, dword ptr [eax + 0x14]
// 0077e0ba  895114               mov dword ptr [ecx + 0x14], edx
// 0077e0bd  5e                   pop esi
// 0077e0be  6a00                 push 0
// 0077e0c0  6a20                 push 0x20
// 0077e0c2  50                   push eax
// 0077e0c3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0077e0c7  50                   push eax
// 0077e0c8  e833090000           call 0x77ea00
// 0077e0cd  83c410               add esp, 0x10
// 0077e0d0  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_freeupval)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
