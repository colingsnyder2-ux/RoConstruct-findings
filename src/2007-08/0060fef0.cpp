// from server: 100% by auto
// roc 2007-08 0060fef0  unit: RBX::Ball  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060fef0
//
// 0060fef0  8b442404             mov eax, dword ptr [esp + 4]
// 0060fef4  8b4010               mov eax, dword ptr [eax + 0x10]
// 0060fef7  80781501             cmp byte ptr [eax + 0x15], 1
// 0060fefb  750f                 jne 0x60ff0c
// 0060fefd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060ff01  51                   push ecx
// 0060ff02  50                   push eax
// 0060ff03  e808f1ffff           call 0x60f010
// 0060ff08  83c408               add esp, 8
// 0060ff0b  c3                   ret 
// 0060ff0c  8a5014               mov dl, byte ptr [eax + 0x14]
// 0060ff0f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060ff13  8a4105               mov al, byte ptr [ecx + 5]
// 0060ff16  80e203               and dl, 3
// 0060ff19  24f8                 and al, 0xf8
// 0060ff1b  0ad0                 or dl, al
// 0060ff1d  885105               mov byte ptr [ecx + 5], dl
// 0060ff20  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_barrierf)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
