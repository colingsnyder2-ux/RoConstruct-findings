// from server: 100% by auto
// roc 2008-06 0065c480  unit: RBX::BallBallContact  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065c480
//
// 0065c480  8b442404             mov eax, dword ptr [esp + 4]
// 0065c484  8b4010               mov eax, dword ptr [eax + 0x10]
// 0065c487  80781501             cmp byte ptr [eax + 0x15], 1
// 0065c48b  750f                 jne 0x65c49c
// 0065c48d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065c491  51                   push ecx
// 0065c492  50                   push eax
// 0065c493  e838f1ffff           call 0x65b5d0
// 0065c498  83c408               add esp, 8
// 0065c49b  c3                   ret 
// 0065c49c  8a5014               mov dl, byte ptr [eax + 0x14]
// 0065c49f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0065c4a3  8a4105               mov al, byte ptr [ecx + 5]
// 0065c4a6  80e203               and dl, 3
// 0065c4a9  24f8                 and al, 0xf8
// 0065c4ab  0ad0                 or dl, al
// 0065c4ad  885105               mov byte ptr [ecx + 5], dl
// 0065c4b0  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_barrierf)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
