// from server: 100% by auto
// roc 2011-06 0077ee40  unit: lua_exception  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077ee40
//
// 0077ee40  53                   push ebx
// 0077ee41  56                   push esi
// 0077ee42  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0077ee46  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0077ee49  57                   push edi
// 0077ee4a  8bfe                 mov edi, esi
// 0077ee4c  e86fffffff           call 0x77edc0
// 0077ee51  6a02                 push 2
// 0077ee53  6a00                 push 0
// 0077ee55  56                   push esi
// 0077ee56  e8b5a90500           call 0x7d9810
// 0077ee5b  6a02                 push 2
// 0077ee5d  894648               mov dword ptr [esi + 0x48], eax
// 0077ee60  c7465005000000       mov dword ptr [esi + 0x50], 5
// 0077ee67  8b7e10               mov edi, dword ptr [esi + 0x10]
// 0077ee6a  6a00                 push 0
// 0077ee6c  56                   push esi
// 0077ee6d  83c760               add edi, 0x60
// 0077ee70  e89ba90500           call 0x7d9810
// 0077ee75  6a20                 push 0x20
// 0077ee77  56                   push esi
// 0077ee78  8907                 mov dword ptr [edi], eax
// 0077ee7a  c7470805000000       mov dword ptr [edi + 8], 5
// 0077ee81  e83ab20500           call 0x7da0c0
// 0077ee86  56                   push esi
// 0077ee87  e8f4840500           call 0x7d7380
// 0077ee8c  56                   push esi
// 0077ee8d  e88efa0500           call 0x7de920
// 0077ee92  6a11                 push 0x11
// 0077ee94  681478ab00           push 0xab7814
// 0077ee99  56                   push esi
// 0077ee9a  e881b30500           call 0x7da220
// 0077ee9f  80480520             or byte ptr [eax + 5], 0x20
// 0077eea3  83c005               add eax, 5
// 0077eea6  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0077eea9  83c434               add esp, 0x34
// 0077eeac  03c0                 add eax, eax
// 0077eeae  5f                   pop edi
// 0077eeaf  03c0                 add eax, eax
// 0077eeb1  5e                   pop esi
// 0077eeb2  894340               mov dword ptr [ebx + 0x40], eax
// 0077eeb5  5b                   pop ebx
// 0077eeb6  c3                   ret 
// library lua-5.1.4/lstate.c (function _f_luaopen)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstate.c
