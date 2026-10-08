// from server: 100% by auto
// roc 2011-06 0077ed50  unit: lua_exception  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077ed50
//
// 0077ed50  83ec14               sub esp, 0x14
// 0077ed53  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0077ed57  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0077ed5b  56                   push esi
// 0077ed5c  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0077ed60  8b5674               mov edx, dword ptr [esi + 0x74]
// 0077ed63  57                   push edi
// 0077ed64  89442408             mov dword ptr [esp + 8], eax
// 0077ed68  8b4608               mov eax, dword ptr [esi + 8]
// 0077ed6b  2b4620               sub eax, dword ptr [esi + 0x20]
// 0077ed6e  52                   push edx
// 0077ed6f  50                   push eax
// 0077ed70  894c2420             mov dword ptr [esp + 0x20], ecx
// 0077ed74  8d4c2410             lea ecx, [esp + 0x10]
// 0077ed78  51                   push ecx
// 0077ed79  6890e67700           push 0x77e690
// 0077ed7e  56                   push esi
// 0077ed7f  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0077ed87  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0077ed8f  e8bcfeffff           call 0x77ec50
// 0077ed94  8b542428             mov edx, dword ptr [esp + 0x28]
// 0077ed98  6a00                 push 0
// 0077ed9a  8bf8                 mov edi, eax
// 0077ed9c  8b442424             mov eax, dword ptr [esp + 0x24]
// 0077eda0  52                   push edx
// 0077eda1  50                   push eax
// 0077eda2  56                   push esi
// 0077eda3  e898c00500           call 0x7dae40
// 0077eda8  83c424               add esp, 0x24
// 0077edab  8bc7                 mov eax, edi
// 0077edad  5f                   pop edi
// 0077edae  5e                   pop esi
// 0077edaf  83c414               add esp, 0x14
// 0077edb2  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_protectedparser)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
