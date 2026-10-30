// from server: 100% by auto
// roc 2007-08 0060ff50  unit: RBX::Ball  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060ff50
//
// 0060ff50  8b442404             mov eax, dword ptr [esp + 4]
// 0060ff54  8b4010               mov eax, dword ptr [eax + 0x10]
// 0060ff57  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0060ff5a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060ff5e  8911                 mov dword ptr [ecx], edx
// 0060ff60  8a54240c             mov dl, byte ptr [esp + 0xc]
// 0060ff64  89481c               mov dword ptr [eax + 0x1c], ecx
// 0060ff67  8a4014               mov al, byte ptr [eax + 0x14]
// 0060ff6a  2403                 and al, 3
// 0060ff6c  884105               mov byte ptr [ecx + 5], al
// 0060ff6f  885104               mov byte ptr [ecx + 4], dl
// 0060ff72  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_link)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
