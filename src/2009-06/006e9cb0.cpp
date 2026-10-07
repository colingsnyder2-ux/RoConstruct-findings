// roc 2009-06 006e9cb0  unit: RBX::PartDropTool  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e9cb0
//
// 006e9cb0  8b442404             mov eax, dword ptr [esp + 4]
// 006e9cb4  8b4010               mov eax, dword ptr [eax + 0x10]
// 006e9cb7  80781501             cmp byte ptr [eax + 0x15], 1
// 006e9cbb  750f                 jne 0x6e9ccc
// 006e9cbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e9cc1  51                   push ecx
// 006e9cc2  50                   push eax
// 006e9cc3  e838f1ffff           call 0x6e8e00
// 006e9cc8  83c408               add esp, 8
// 006e9ccb  c3                   ret 
// 006e9ccc  8a5014               mov dl, byte ptr [eax + 0x14]
// 006e9ccf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e9cd3  8a4105               mov al, byte ptr [ecx + 5]
// 006e9cd6  80e203               and dl, 3
// 006e9cd9  24f8                 and al, 0xf8
// 006e9cdb  0ad0                 or dl, al
// 006e9cdd  885105               mov byte ptr [ecx + 5], dl
// 006e9ce0  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_barrierf)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
