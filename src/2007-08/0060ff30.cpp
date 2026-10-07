// roc 2007-08 0060ff30  unit: RBX::Ball  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060ff30
//
// 0060ff30  8b442404             mov eax, dword ptr [esp + 4]
// 0060ff34  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0060ff37  8b442408             mov eax, dword ptr [esp + 8]
// 0060ff3b  806005fb             and byte ptr [eax + 5], 0xfb
// 0060ff3f  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0060ff42  895018               mov dword ptr [eax + 0x18], edx
// 0060ff45  894128               mov dword ptr [ecx + 0x28], eax
// 0060ff48  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_barrierback)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
