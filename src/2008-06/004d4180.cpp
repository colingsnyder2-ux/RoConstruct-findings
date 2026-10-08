// roc 2008-06 004d4180  unit: seg_004d0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d4180
//
// 004d4180  668b44240c           mov ax, word ptr [esp + 0xc]
// 004d4185  56                   push esi
// 004d4186  8bf1                 mov esi, ecx
// 004d4188  b9ffff0000           mov ecx, 0xffff
// 004d418d  663bc1               cmp ax, cx
// 004d4190  7443                 je 0x4d41d5
// 004d4192  0fb7d0               movzx edx, ax
// 004d4195  8b4610               mov eax, dword ptr [esi + 0x10]
// 004d4198  833c9000             cmp dword ptr [eax + edx*4], 0
// 004d419c  8d0490               lea eax, [eax + edx*4]
// 004d419f  7434                 je 0x4d41d5
// 004d41a1  8b00                 mov eax, dword ptr [eax]
// 004d41a3  8b10                 mov edx, dword ptr [eax]
// 004d41a5  8bc8                 mov ecx, eax
// 004d41a7  8b4218               mov eax, dword ptr [edx + 0x18]
// 004d41aa  ffd0                 call eax
// 004d41ac  85c0                 test eax, eax
// 004d41ae  7416                 je 0x4d41c6
// 004d41b0  0fb74c2410           movzx ecx, word ptr [esp + 0x10]
// 004d41b5  8b5610               mov edx, dword ptr [esi + 0x10]
// 004d41b8  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 004d41bb  8b01                 mov eax, dword ptr [ecx]
// 004d41bd  8b5018               mov edx, dword ptr [eax + 0x18]
// 004d41c0  ffd2                 call edx
// 004d41c2  5e                   pop esi
// 004d41c3  c20c00               ret 0xc
// 004d41c6  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 004d41cb  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004d41ce  8b0481               mov eax, dword ptr [ecx + eax*4]
// 004d41d1  5e                   pop esi
// 004d41d2  c20c00               ret 0xc
// 004d41d5  33c0                 xor eax, eax
// 004d41d7  5e                   pop esi
// 004d41d8  c20c00               ret 0xc
// library rbxgs-raknet/NetworkIDManager.cpp (function ?GET_OBJECT_FROM_ID@NetworkIDManager@@QAEPAXUNetworkID@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet NetworkIDManager.cpp
