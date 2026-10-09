// roc 2010-06 0070bcd0  unit: RBX::Kernel  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0070bcd0
//
// 0070bcd0  56                   push esi
// 0070bcd1  8b742408             mov esi, dword ptr [esp + 8]
// 0070bcd5  85f6                 test esi, esi
// 0070bcd7  7416                 je 0x70bcef
// 0070bcd9  834608ff             add dword ptr [esi + 8], -1
// 0070bcdd  7510                 jne 0x70bcef
// 0070bcdf  56                   push esi
// 0070bce0  e82bfeffff           call 0x70bb10
// 0070bce5  8b06                 mov eax, dword ptr [esi]
// 0070bce7  8b10                 mov edx, dword ptr [eax]
// 0070bce9  6a01                 push 1
// 0070bceb  8bce                 mov ecx, esi
// 0070bced  ffd2                 call edx
// 0070bcef  5e                   pop esi
// 0070bcf0  c20400               ret 4
// library openrbx-client/App\v8kernel\Kernel.cpp (function ?deletePoint@Kernel@RBX@@QAEXPAVPoint@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8kernel/Kernel.cpp
