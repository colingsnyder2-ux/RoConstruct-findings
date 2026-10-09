// roc 2009-12 00775ed0  unit: RBX::Kernel  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00775ed0
//
// 00775ed0  56                   push esi
// 00775ed1  8b742408             mov esi, dword ptr [esp + 8]
// 00775ed5  85f6                 test esi, esi
// 00775ed7  7416                 je 0x775eef
// 00775ed9  834608ff             add dword ptr [esi + 8], -1
// 00775edd  7510                 jne 0x775eef
// 00775edf  56                   push esi
// 00775ee0  e82bfeffff           call 0x775d10
// 00775ee5  8b06                 mov eax, dword ptr [esi]
// 00775ee7  8b10                 mov edx, dword ptr [eax]
// 00775ee9  6a01                 push 1
// 00775eeb  8bce                 mov ecx, esi
// 00775eed  ffd2                 call edx
// 00775eef  5e                   pop esi
// 00775ef0  c20400               ret 4
// library openrbx-client/App\v8kernel\Kernel.cpp (function ?deletePoint@Kernel@RBX@@QAEXPAVPoint@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8kernel/Kernel.cpp
