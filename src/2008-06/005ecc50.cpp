// roc 2008-06 005ecc50  unit: RBX::Sky  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ecc50
//
// 005ecc50  56                   push esi
// 005ecc51  8bf1                 mov esi, ecx
// 005ecc53  8d4e08               lea ecx, [esi + 8]
// 005ecc56  e835460000           call 0x5f1290
// 005ecc5b  83f804               cmp eax, 4
// 005ecc5e  7534                 jne 0x5ecc94
// 005ecc60  8d4e20               lea ecx, [esi + 0x20]
// 005ecc63  e828460000           call 0x5f1290
// 005ecc68  85c0                 test eax, eax
// 005ecc6a  7528                 jne 0x5ecc94
// 005ecc6c  8d4e28               lea ecx, [esi + 0x28]
// 005ecc6f  e81c460000           call 0x5f1290
// 005ecc74  85c0                 test eax, eax
// 005ecc76  751c                 jne 0x5ecc94
// 005ecc78  8d4e10               lea ecx, [esi + 0x10]
// 005ecc7b  e810460000           call 0x5f1290
// 005ecc80  85c0                 test eax, eax
// 005ecc82  7510                 jne 0x5ecc94
// 005ecc84  8d4e18               lea ecx, [esi + 0x18]
// 005ecc87  e804460000           call 0x5f1290
// 005ecc8c  85c0                 test eax, eax
// 005ecc8e  7504                 jne 0x5ecc94
// 005ecc90  b001                 mov al, 1
// 005ecc92  5e                   pop esi
// 005ecc93  c3                   ret 
// 005ecc94  32c0                 xor al, al
// 005ecc96  5e                   pop esi
// 005ecc97  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?isStandardPart@Surfaces@RBX@@QBE?B_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
