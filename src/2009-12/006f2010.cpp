// roc 2009-12 006f2010  unit: RBX::BasicPartInstance  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f2010
//
// 006f2010  56                   push esi
// 006f2011  8bf1                 mov esi, ecx
// 006f2013  8d4e08               lea ecx, [esi + 8]
// 006f2016  e8c5b10200           call 0x71d1e0
// 006f201b  83f804               cmp eax, 4
// 006f201e  7534                 jne 0x6f2054
// 006f2020  8d4e20               lea ecx, [esi + 0x20]
// 006f2023  e8b8b10200           call 0x71d1e0
// 006f2028  85c0                 test eax, eax
// 006f202a  7528                 jne 0x6f2054
// 006f202c  8d4e28               lea ecx, [esi + 0x28]
// 006f202f  e8acb10200           call 0x71d1e0
// 006f2034  85c0                 test eax, eax
// 006f2036  751c                 jne 0x6f2054
// 006f2038  8d4e10               lea ecx, [esi + 0x10]
// 006f203b  e8a0b10200           call 0x71d1e0
// 006f2040  85c0                 test eax, eax
// 006f2042  7510                 jne 0x6f2054
// 006f2044  8d4e18               lea ecx, [esi + 0x18]
// 006f2047  e894b10200           call 0x71d1e0
// 006f204c  85c0                 test eax, eax
// 006f204e  7504                 jne 0x6f2054
// 006f2050  b001                 mov al, 1
// 006f2052  5e                   pop esi
// 006f2053  c3                   ret 
// 006f2054  32c0                 xor al, al
// 006f2056  5e                   pop esi
// 006f2057  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?isStandardPart@Surfaces@RBX@@QBE?B_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
