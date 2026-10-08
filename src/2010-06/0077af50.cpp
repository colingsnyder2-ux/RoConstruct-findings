// from server: 100% by auto
// roc 2010-06 0077af50  unit: RBX::PartDropTool  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077af50
//
// 0077af50  8b442404             mov eax, dword ptr [esp + 4]
// 0077af54  8b4010               mov eax, dword ptr [eax + 0x10]
// 0077af57  80781501             cmp byte ptr [eax + 0x15], 1
// 0077af5b  750f                 jne 0x77af6c
// 0077af5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0077af61  51                   push ecx
// 0077af62  50                   push eax
// 0077af63  e838f1ffff           call 0x77a0a0
// 0077af68  83c408               add esp, 8
// 0077af6b  c3                   ret 
// 0077af6c  8a5014               mov dl, byte ptr [eax + 0x14]
// 0077af6f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0077af73  8a4105               mov al, byte ptr [ecx + 5]
// 0077af76  80e203               and dl, 3
// 0077af79  24f8                 and al, 0xf8
// 0077af7b  0ad0                 or dl, al
// 0077af7d  885105               mov byte ptr [ecx + 5], dl
// 0077af80  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_barrierf)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
