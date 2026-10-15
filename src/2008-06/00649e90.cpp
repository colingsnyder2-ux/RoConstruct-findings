// roc 2008-06 00649e90  unit: RBX::Ball  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00649e90
//
// 00649e90  83ec1c               sub esp, 0x1c
// 00649e93  53                   push ebx
// 00649e94  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00649e98  56                   push esi
// 00649e99  8b742428             mov esi, dword ptr [esp + 0x28]
// 00649e9d  57                   push edi
// 00649e9e  33ff                 xor edi, edi
// 00649ea0  57                   push edi
// 00649ea1  8d442420             lea eax, [esp + 0x20]
// 00649ea5  50                   push eax
// 00649ea6  8bce                 mov ecx, esi
// 00649ea8  e8e3fdffff           call 0x649c90
// 00649ead  8d4c2418             lea ecx, [esp + 0x18]
// 00649eb1  51                   push ecx
// 00649eb2  8d542414             lea edx, [esp + 0x14]
// 00649eb6  52                   push edx
// 00649eb7  8d442424             lea eax, [esp + 0x24]
// 00649ebb  50                   push eax
// 00649ebc  56                   push esi
// 00649ebd  8bce                 mov ecx, esi
// 00649ebf  e86cfeffff           call 0x649d30
// 00649ec4  8d4c240c             lea ecx, [esp + 0xc]
// 00649ec8  51                   push ecx
// 00649ec9  8d542418             lea edx, [esp + 0x18]
// 00649ecd  52                   push edx
// 00649ece  8d442424             lea eax, [esp + 0x24]
// 00649ed2  50                   push eax
// 00649ed3  56                   push esi
// 00649ed4  8bcb                 mov ecx, ebx
// 00649ed6  e855feffff           call 0x649d30
// 00649edb  d944240c             fld dword ptr [esp + 0xc]
// 00649edf  d9442434             fld dword ptr [esp + 0x34]
// 00649ee3  dce9                 fsub st(1), st(0)
// 00649ee5  d9c9                 fxch st(1)
// 00649ee7  d85c2410             fcomp dword ptr [esp + 0x10]
// 00649eeb  dfe0                 fnstsw ax
// 00649eed  f6c405               test ah, 5
// 00649ef0  7b1e                 jnp 0x649f10
// 00649ef2  d8442414             fadd dword ptr [esp + 0x14]
// 00649ef6  d85c2418             fcomp dword ptr [esp + 0x18]
// 00649efa  dfe0                 fnstsw ax
// 00649efc  f6c441               test ah, 0x41
// 00649eff  7411                 je 0x649f12
// 00649f01  47                   inc edi
// 00649f02  83ff02               cmp edi, 2
// 00649f05  7c99                 jl 0x649ea0
// 00649f07  5f                   pop edi
// 00649f08  5e                   pop esi
// 00649f09  b001                 mov al, 1
// 00649f0b  5b                   pop ebx
// 00649f0c  83c41c               add esp, 0x1c
// 00649f0f  c3                   ret 
// 00649f10  ddd8                 fstp st(0)
// 00649f12  5f                   pop edi
// 00649f13  5e                   pop esi
// 00649f14  32c0                 xor al, al
// 00649f16  5b                   pop ebx
// 00649f17  83c41c               add esp, 0x1c
// 00649f1a  c3                   ret 
// library rbxgs/roc_unit_1113eac196384b7f.cpp (function ?hasOverlap@Face@RBX@@SA_NABV12@0M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_unit_1113eac196384b7f.cpp
