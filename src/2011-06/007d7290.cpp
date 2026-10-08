// from server: 100% by auto
// roc 2011-06 007d7290  unit: RBX::EquationDisplay  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d7290
//
// 007d7290  8b442404             mov eax, dword ptr [esp + 4]
// 007d7294  8b4010               mov eax, dword ptr [eax + 0x10]
// 007d7297  80781501             cmp byte ptr [eax + 0x15], 1
// 007d729b  750f                 jne 0x7d72ac
// 007d729d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007d72a1  51                   push ecx
// 007d72a2  50                   push eax
// 007d72a3  e828f1ffff           call 0x7d63d0
// 007d72a8  83c408               add esp, 8
// 007d72ab  c3                   ret 
// 007d72ac  8a5014               mov dl, byte ptr [eax + 0x14]
// 007d72af  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007d72b3  8a4105               mov al, byte ptr [ecx + 5]
// 007d72b6  80e203               and dl, 3
// 007d72b9  24f8                 and al, 0xf8
// 007d72bb  0ad0                 or dl, al
// 007d72bd  885105               mov byte ptr [ecx + 5], dl
// 007d72c0  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_barrierf)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
