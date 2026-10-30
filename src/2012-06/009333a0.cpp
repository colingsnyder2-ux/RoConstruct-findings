// from server: 100% by auto
// roc 2012-06 009333a0  unit: RBX::BallCellContact  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009333a0
//
// 009333a0  8b442404             mov eax, dword ptr [esp + 4]
// 009333a4  8b4010               mov eax, dword ptr [eax + 0x10]
// 009333a7  80781501             cmp byte ptr [eax + 0x15], 1
// 009333ab  750f                 jne 0x9333bc
// 009333ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009333b1  51                   push ecx
// 009333b2  50                   push eax
// 009333b3  e818f1ffff           call 0x9324d0
// 009333b8  83c408               add esp, 8
// 009333bb  c3                   ret 
// 009333bc  8a5014               mov dl, byte ptr [eax + 0x14]
// 009333bf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009333c3  8a4105               mov al, byte ptr [ecx + 5]
// 009333c6  80e203               and dl, 3
// 009333c9  24f8                 and al, 0xf8
// 009333cb  0ad0                 or dl, al
// 009333cd  885105               mov byte ptr [ecx + 5], dl
// 009333d0  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_barrierf)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
