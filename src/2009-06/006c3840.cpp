// roc 2009-06 006c3840  unit: lua_exception  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c3840
//
// 006c3840  83ec14               sub esp, 0x14
// 006c3843  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006c3847  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006c384b  56                   push esi
// 006c384c  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006c3850  8b5674               mov edx, dword ptr [esi + 0x74]
// 006c3853  57                   push edi
// 006c3854  89442408             mov dword ptr [esp + 8], eax
// 006c3858  8b4608               mov eax, dword ptr [esi + 8]
// 006c385b  2b4620               sub eax, dword ptr [esi + 0x20]
// 006c385e  52                   push edx
// 006c385f  50                   push eax
// 006c3860  894c2420             mov dword ptr [esp + 0x20], ecx
// 006c3864  8d4c2410             lea ecx, [esp + 0x10]
// 006c3868  51                   push ecx
// 006c3869  6880316c00           push 0x6c3180
// 006c386e  56                   push esi
// 006c386f  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006c3877  c744242800000000     mov dword ptr [esp + 0x28], 0
// 006c387f  e8bcfeffff           call 0x6c3740
// 006c3884  8b542428             mov edx, dword ptr [esp + 0x28]
// 006c3888  6a00                 push 0
// 006c388a  8bf8                 mov edi, eax
// 006c388c  8b442424             mov eax, dword ptr [esp + 0x24]
// 006c3890  52                   push edx
// 006c3891  50                   push eax
// 006c3892  56                   push esi
// 006c3893  e8c89e0200           call 0x6ed760
// 006c3898  83c424               add esp, 0x24
// 006c389b  8bc7                 mov eax, edi
// 006c389d  5f                   pop edi
// 006c389e  5e                   pop esi
// 006c389f  83c414               add esp, 0x14
// 006c38a2  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_protectedparser)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
