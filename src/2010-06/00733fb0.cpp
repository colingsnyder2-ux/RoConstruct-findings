// from server: 100% by auto
// roc 2010-06 00733fb0  unit: seg_00730000  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00733fb0
//
// 00733fb0  53                   push ebx
// 00733fb1  56                   push esi
// 00733fb2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00733fb6  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00733fb9  57                   push edi
// 00733fba  8bfe                 mov edi, esi
// 00733fbc  e86fffffff           call 0x733f30
// 00733fc1  6a02                 push 2
// 00733fc3  6a00                 push 0
// 00733fc5  56                   push esi
// 00733fc6  e815940400           call 0x77d3e0
// 00733fcb  6a02                 push 2
// 00733fcd  894648               mov dword ptr [esi + 0x48], eax
// 00733fd0  c7465005000000       mov dword ptr [esi + 0x50], 5
// 00733fd7  8b7e10               mov edi, dword ptr [esi + 0x10]
// 00733fda  6a00                 push 0
// 00733fdc  56                   push esi
// 00733fdd  83c760               add edi, 0x60
// 00733fe0  e8fb930400           call 0x77d3e0
// 00733fe5  6a20                 push 0x20
// 00733fe7  56                   push esi
// 00733fe8  8907                 mov dword ptr [edi], eax
// 00733fea  c7470805000000       mov dword ptr [edi + 8], 5
// 00733ff1  e88a9c0400           call 0x77dc80
// 00733ff6  56                   push esi
// 00733ff7  e844700400           call 0x77b040
// 00733ffc  56                   push esi
// 00733ffd  e83ee40400           call 0x782440
// 00734002  6a11                 push 0x11
// 00734004  68c8dba400           push 0xa4dbc8
// 00734009  56                   push esi
// 0073400a  e8d19d0400           call 0x77dde0
// 0073400f  80480520             or byte ptr [eax + 5], 0x20
// 00734013  83c005               add eax, 5
// 00734016  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00734019  83c434               add esp, 0x34
// 0073401c  03c0                 add eax, eax
// 0073401e  5f                   pop edi
// 0073401f  03c0                 add eax, eax
// 00734021  5e                   pop esi
// 00734022  894340               mov dword ptr [ebx + 0x40], eax
// 00734025  5b                   pop ebx
// 00734026  c3                   ret 
// library lua-5.1.4/lstate.c (function _f_luaopen)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstate.c
