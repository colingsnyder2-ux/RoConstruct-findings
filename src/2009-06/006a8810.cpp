// roc 2009-06 006a8810  unit: RBX::Kernel  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a8810
//
// 006a8810  56                   push esi
// 006a8811  8b742408             mov esi, dword ptr [esp + 8]
// 006a8815  85f6                 test esi, esi
// 006a8817  7416                 je 0x6a882f
// 006a8819  834608ff             add dword ptr [esi + 8], -1
// 006a881d  7510                 jne 0x6a882f
// 006a881f  56                   push esi
// 006a8820  e82bfeffff           call 0x6a8650
// 006a8825  8b06                 mov eax, dword ptr [esi]
// 006a8827  8b10                 mov edx, dword ptr [eax]
// 006a8829  6a01                 push 1
// 006a882b  8bce                 mov ecx, esi
// 006a882d  ffd2                 call edx
// 006a882f  5e                   pop esi
// 006a8830  c20400               ret 4
// library openrbx-client/App\v8kernel\Kernel.cpp (function ?deletePoint@Kernel@RBX@@QAEXPAVPoint@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8kernel/Kernel.cpp
