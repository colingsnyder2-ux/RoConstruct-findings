// roc 2007-03 005acfd0  unit: seg_005a0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005acfd0
//
// 005acfd0  56                   push esi
// 005acfd1  8b7134               mov esi, dword ptr [ecx + 0x34]
// 005acfd4  8b06                 mov eax, dword ptr [esi]
// 005acfd6  8b5004               mov edx, dword ptr [eax + 4]
// 005acfd9  8bce                 mov ecx, esi
// 005acfdb  ffd2                 call edx
// 005acfdd  83f801               cmp eax, 1
// 005acfe0  7411                 je 0x5acff3
// 005acfe2  8b7608               mov esi, dword ptr [esi + 8]
// 005acfe5  8b06                 mov eax, dword ptr [esi]
// 005acfe7  8b5004               mov edx, dword ptr [eax + 4]
// 005acfea  8bce                 mov ecx, esi
// 005acfec  ffd2                 call edx
// 005acfee  83f801               cmp eax, 1
// 005acff1  75ef                 jne 0x5acfe2
// 005acff3  8bce                 mov ecx, esi
// 005acff5  5e                   pop esi
// 005acff6  e9b57f0400           jmp 0x5f4fb0
// library openrbx-client/App\v8world\World.cpp (function ?update@World@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
