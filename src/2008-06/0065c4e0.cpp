// from server: 100% by auto
// roc 2008-06 0065c4e0  unit: RBX::BallBallContact  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065c4e0
//
// 0065c4e0  8b442404             mov eax, dword ptr [esp + 4]
// 0065c4e4  8b4010               mov eax, dword ptr [eax + 0x10]
// 0065c4e7  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0065c4ea  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0065c4ee  8911                 mov dword ptr [ecx], edx
// 0065c4f0  8a54240c             mov dl, byte ptr [esp + 0xc]
// 0065c4f4  89481c               mov dword ptr [eax + 0x1c], ecx
// 0065c4f7  8a4014               mov al, byte ptr [eax + 0x14]
// 0065c4fa  2403                 and al, 3
// 0065c4fc  884105               mov byte ptr [ecx + 5], al
// 0065c4ff  885104               mov byte ptr [ecx + 4], dl
// 0065c502  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_link)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
