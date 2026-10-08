// from server: 100% by auto
// roc 2012-06 009678e0  unit: RBX::CellContact  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009678e0
//
// 009678e0  56                   push esi
// 009678e1  8b742408             mov esi, dword ptr [esp + 8]
// 009678e5  8b460c               mov eax, dword ptr [esi + 0xc]
// 009678e8  57                   push edi
// 009678e9  8b7e20               mov edi, dword ptr [esi + 0x20]
// 009678ec  c74620ffffffff       mov dword ptr [esi + 0x20], 0xffffffff
// 009678f3  8b4808               mov ecx, dword ptr [eax + 8]
// 009678f6  51                   push ecx
// 009678f7  681680ff7f           push 0x7fff8016
// 009678fc  e8affdffff           call 0x9676b0
// 00967901  57                   push edi
// 00967902  8d542418             lea edx, [esp + 0x18]
// 00967906  52                   push edx
// 00967907  56                   push esi
// 00967908  89442420             mov dword ptr [esp + 0x20], eax
// 0096790c  e8dff8ffff           call 0x9671f0
// 00967911  8b442420             mov eax, dword ptr [esp + 0x20]
// 00967915  83c414               add esp, 0x14
// 00967918  5f                   pop edi
// 00967919  5e                   pop esi
// 0096791a  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_jump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
