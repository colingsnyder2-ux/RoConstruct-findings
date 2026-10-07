// roc 2009-06 006c3930  unit: lua_exception  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c3930
//
// 006c3930  53                   push ebx
// 006c3931  56                   push esi
// 006c3932  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c3936  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 006c3939  57                   push edi
// 006c393a  8bfe                 mov edi, esi
// 006c393c  e86fffffff           call 0x6c38b0
// 006c3941  6a02                 push 2
// 006c3943  6a00                 push 0
// 006c3945  56                   push esi
// 006c3946  e805880200           call 0x6ec150
// 006c394b  6a02                 push 2
// 006c394d  894648               mov dword ptr [esi + 0x48], eax
// 006c3950  c7465005000000       mov dword ptr [esi + 0x50], 5
// 006c3957  8b7e10               mov edi, dword ptr [esi + 0x10]
// 006c395a  6a00                 push 0
// 006c395c  56                   push esi
// 006c395d  83c760               add edi, 0x60
// 006c3960  e8eb870200           call 0x6ec150
// 006c3965  6a20                 push 0x20
// 006c3967  56                   push esi
// 006c3968  8907                 mov dword ptr [edi], eax
// 006c396a  c7470805000000       mov dword ptr [edi + 8], 5
// 006c3971  e86a900200           call 0x6ec9e0
// 006c3976  56                   push esi
// 006c3977  e824640200           call 0x6e9da0
// 006c397c  56                   push esi
// 006c397d  e81ed80200           call 0x6f11a0
// 006c3982  6a11                 push 0x11
// 006c3984  6894b68e00           push 0x8eb694
// 006c3989  56                   push esi
// 006c398a  e8b1910200           call 0x6ecb40
// 006c398f  80480520             or byte ptr [eax + 5], 0x20
// 006c3993  83c005               add eax, 5
// 006c3996  8b4344               mov eax, dword ptr [ebx + 0x44]
// 006c3999  83c434               add esp, 0x34
// 006c399c  03c0                 add eax, eax
// 006c399e  5f                   pop edi
// 006c399f  03c0                 add eax, eax
// 006c39a1  5e                   pop esi
// 006c39a2  894340               mov dword ptr [ebx + 0x40], eax
// 006c39a5  5b                   pop ebx
// 006c39a6  c3                   ret 
// library lua-5.1.4/lstate.c (function _f_luaopen)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstate.c
