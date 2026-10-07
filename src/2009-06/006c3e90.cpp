// roc 2009-06 006c3e90  unit: lua_exception  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c3e90
//
// 006c3e90  56                   push esi
// 006c3e91  8b742408             mov esi, dword ptr [esp + 8]
// 006c3e95  6a05                 push 5
// 006c3e97  6a01                 push 1
// 006c3e99  56                   push esi
// 006c3e9a  e8a16dffff           call 0x6bac40
// 006c3e9f  6a06                 push 6
// 006c3ea1  6a02                 push 2
// 006c3ea3  56                   push esi
// 006c3ea4  e8976dffff           call 0x6bac40
// 006c3ea9  56                   push esi
// 006c3eaa  e87154ffff           call 0x6b9320
// 006c3eaf  6a01                 push 1
// 006c3eb1  56                   push esi
// 006c3eb2  e8595effff           call 0x6b9d10
// 006c3eb7  83c424               add esp, 0x24
// 006c3eba  85c0                 test eax, eax
// 006c3ebc  744a                 je 0x6c3f08
// 006c3ebe  8bff                 mov edi, edi
// 006c3ec0  6a02                 push 2
// 006c3ec2  56                   push esi
// 006c3ec3  e87850ffff           call 0x6b8f40
// 006c3ec8  6afd                 push -3
// 006c3eca  56                   push esi
// 006c3ecb  e87050ffff           call 0x6b8f40
// 006c3ed0  6afd                 push -3
// 006c3ed2  56                   push esi
// 006c3ed3  e86850ffff           call 0x6b8f40
// 006c3ed8  6a01                 push 1
// 006c3eda  6a02                 push 2
// 006c3edc  56                   push esi
// 006c3edd  e8be5bffff           call 0x6b9aa0
// 006c3ee2  6aff                 push -1
// 006c3ee4  56                   push esi
// 006c3ee5  e88650ffff           call 0x6b8f70
// 006c3eea  83c42c               add esp, 0x2c
// 006c3eed  85c0                 test eax, eax
// 006c3eef  751b                 jne 0x6c3f0c
// 006c3ef1  6afd                 push -3
// 006c3ef3  56                   push esi
// 006c3ef4  e8974effff           call 0x6b8d90
// 006c3ef9  6a01                 push 1
// 006c3efb  56                   push esi
// 006c3efc  e80f5effff           call 0x6b9d10
// 006c3f01  83c410               add esp, 0x10
// 006c3f04  85c0                 test eax, eax
// 006c3f06  75b8                 jne 0x6c3ec0
// 006c3f08  33c0                 xor eax, eax
// 006c3f0a  5e                   pop esi
// 006c3f0b  c3                   ret 
// 006c3f0c  b801000000           mov eax, 1
// 006c3f11  5e                   pop esi
// 006c3f12  c3                   ret 
// library lua-5.1.4/ltablib.c (function _foreach)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
