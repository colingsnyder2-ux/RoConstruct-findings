// roc 2007-08 006199d0  unit: RBX::ContactConnector  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006199d0
//
// 006199d0  8b4114               mov eax, dword ptr [ecx + 0x14]
// 006199d3  80782400             cmp byte ptr [eax + 0x24], 0
// 006199d7  740f                 je 0x6199e8
// 006199d9  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 006199dc  80792400             cmp byte ptr [ecx + 0x24], 0
// 006199e0  7406                 je 0x6199e8
// 006199e2  b801000000           mov eax, 1
// 006199e7  c3                   ret 
// 006199e8  33c0                 xor eax, eax
// 006199ea  c3                   ret 
// library rbxgs/v8kernel\Connector.cpp (function ?canThrottle@ContactConnector@RBX@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Connector.cpp
