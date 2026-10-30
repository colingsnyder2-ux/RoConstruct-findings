// from server: 100% by auto
// roc 2012-06 008336a0  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008336a0
//
// 008336a0  8b442408             mov eax, dword ptr [esp + 8]
// 008336a4  8b4804               mov ecx, dword ptr [eax + 4]
// 008336a7  85c9                 test ecx, ecx
// 008336a9  7503                 jne 0x8336ae
// 008336ab  33c0                 xor eax, eax
// 008336ad  c3                   ret 
// 008336ae  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008336b2  890a                 mov dword ptr [edx], ecx
// 008336b4  c7400400000000       mov dword ptr [eax + 4], 0
// 008336bb  8b00                 mov eax, dword ptr [eax]
// 008336bd  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _getS)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
