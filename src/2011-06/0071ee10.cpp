// roc 2011-06 0071ee10  unit: RBX::AdvLuaDragger  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071ee10
//
// 0071ee10  56                   push esi
// 0071ee11  8bf1                 mov esi, ecx
// 0071ee13  8d4e08               lea ecx, [esi + 8]
// 0071ee16  e895fa0300           call 0x75e8b0
// 0071ee1b  83f804               cmp eax, 4
// 0071ee1e  7534                 jne 0x71ee54
// 0071ee20  8d4e20               lea ecx, [esi + 0x20]
// 0071ee23  e888fa0300           call 0x75e8b0
// 0071ee28  85c0                 test eax, eax
// 0071ee2a  7528                 jne 0x71ee54
// 0071ee2c  8d4e28               lea ecx, [esi + 0x28]
// 0071ee2f  e87cfa0300           call 0x75e8b0
// 0071ee34  85c0                 test eax, eax
// 0071ee36  751c                 jne 0x71ee54
// 0071ee38  8d4e10               lea ecx, [esi + 0x10]
// 0071ee3b  e870fa0300           call 0x75e8b0
// 0071ee40  85c0                 test eax, eax
// 0071ee42  7510                 jne 0x71ee54
// 0071ee44  8d4e18               lea ecx, [esi + 0x18]
// 0071ee47  e864fa0300           call 0x75e8b0
// 0071ee4c  85c0                 test eax, eax
// 0071ee4e  7504                 jne 0x71ee54
// 0071ee50  b001                 mov al, 1
// 0071ee52  5e                   pop esi
// 0071ee53  c3                   ret 
// 0071ee54  32c0                 xor al, al
// 0071ee56  5e                   pop esi
// 0071ee57  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?isStandardPart@Surfaces@RBX@@QBE?B_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
