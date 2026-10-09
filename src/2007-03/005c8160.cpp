// roc 2007-03 005c8160  unit: seg_005c0000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c8160
//
// 005c8160  56                   push esi
// 005c8161  8b742408             mov esi, dword ptr [esp + 8]
// 005c8165  85f6                 test esi, esi
// 005c8167  7416                 je 0x5c817f
// 005c8169  834608ff             add dword ptr [esi + 8], -1
// 005c816d  7510                 jne 0x5c817f
// 005c816f  56                   push esi
// 005c8170  e84bfeffff           call 0x5c7fc0
// 005c8175  8b06                 mov eax, dword ptr [esi]
// 005c8177  8b10                 mov edx, dword ptr [eax]
// 005c8179  6a01                 push 1
// 005c817b  8bce                 mov ecx, esi
// 005c817d  ffd2                 call edx
// 005c817f  5e                   pop esi
// 005c8180  c20400               ret 4
// library openrbx-client/App\v8kernel\Kernel.cpp (function ?deletePoint@Kernel@RBX@@QAEXPAVPoint@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8kernel/Kernel.cpp
