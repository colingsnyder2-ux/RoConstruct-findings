// roc 2007-08 005cf9d0  unit: RBX::Kernel  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cf9d0
//
// 005cf9d0  56                   push esi
// 005cf9d1  8b742408             mov esi, dword ptr [esp + 8]
// 005cf9d5  85f6                 test esi, esi
// 005cf9d7  7416                 je 0x5cf9ef
// 005cf9d9  834608ff             add dword ptr [esi + 8], -1
// 005cf9dd  7510                 jne 0x5cf9ef
// 005cf9df  56                   push esi
// 005cf9e0  e84bfeffff           call 0x5cf830
// 005cf9e5  8b06                 mov eax, dword ptr [esi]
// 005cf9e7  8b10                 mov edx, dword ptr [eax]
// 005cf9e9  6a01                 push 1
// 005cf9eb  8bce                 mov ecx, esi
// 005cf9ed  ffd2                 call edx
// 005cf9ef  5e                   pop esi
// 005cf9f0  c20400               ret 4
// library openrbx-client/App\v8kernel\Kernel.cpp (function ?deletePoint@Kernel@RBX@@QAEXPAVPoint@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8kernel/Kernel.cpp
