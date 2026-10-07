// roc 2008-06 0065c4c0  unit: RBX::BallBallContact  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065c4c0
//
// 0065c4c0  8b442404             mov eax, dword ptr [esp + 4]
// 0065c4c4  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0065c4c7  8b442408             mov eax, dword ptr [esp + 8]
// 0065c4cb  806005fb             and byte ptr [eax + 5], 0xfb
// 0065c4cf  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0065c4d2  895018               mov dword ptr [eax + 0x18], edx
// 0065c4d5  894128               mov dword ptr [ecx + 0x28], eax
// 0065c4d8  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_barrierback)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
