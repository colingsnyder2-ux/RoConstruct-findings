// roc 2008-06 00623bd0  unit: lua_exception  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00623bd0
//
// 00623bd0  53                   push ebx
// 00623bd1  56                   push esi
// 00623bd2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00623bd6  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00623bd9  57                   push edi
// 00623bda  8bfe                 mov edi, esi
// 00623bdc  e86fffffff           call 0x623b50
// 00623be1  6a02                 push 2
// 00623be3  6a00                 push 0
// 00623be5  56                   push esi
// 00623be6  e825ad0300           call 0x65e910
// 00623beb  6a02                 push 2
// 00623bed  894648               mov dword ptr [esi + 0x48], eax
// 00623bf0  c7465005000000       mov dword ptr [esi + 0x50], 5
// 00623bf7  8b7e10               mov edi, dword ptr [esi + 0x10]
// 00623bfa  6a00                 push 0
// 00623bfc  56                   push esi
// 00623bfd  83c760               add edi, 0x60
// 00623c00  e80bad0300           call 0x65e910
// 00623c05  6a20                 push 0x20
// 00623c07  56                   push esi
// 00623c08  8907                 mov dword ptr [edi], eax
// 00623c0a  c7470805000000       mov dword ptr [edi + 8], 5
// 00623c11  e88ab50300           call 0x65f1a0
// 00623c16  56                   push esi
// 00623c17  e854890300           call 0x65c570
// 00623c1c  56                   push esi
// 00623c1d  e89e040400           call 0x6640c0
// 00623c22  6a11                 push 0x11
// 00623c24  68b4478400           push 0x8447b4
// 00623c29  56                   push esi
// 00623c2a  e8d1b60300           call 0x65f300
// 00623c2f  80480520             or byte ptr [eax + 5], 0x20
// 00623c33  83c005               add eax, 5
// 00623c36  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00623c39  83c434               add esp, 0x34
// 00623c3c  03c0                 add eax, eax
// 00623c3e  5f                   pop edi
// 00623c3f  03c0                 add eax, eax
// 00623c41  5e                   pop esi
// 00623c42  894340               mov dword ptr [ebx + 0x40], eax
// 00623c45  5b                   pop ebx
// 00623c46  c3                   ret 
// library lua-5.1.4/lstate.c (function _f_luaopen)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstate.c
