// roc 2011-06 0074bb70  unit: RBX::Kernel  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0074bb70
//
// 0074bb70  56                   push esi
// 0074bb71  8b742408             mov esi, dword ptr [esp + 8]
// 0074bb75  85f6                 test esi, esi
// 0074bb77  7416                 je 0x74bb8f
// 0074bb79  834608ff             add dword ptr [esi + 8], -1
// 0074bb7d  7510                 jne 0x74bb8f
// 0074bb7f  56                   push esi
// 0074bb80  e80bfeffff           call 0x74b990
// 0074bb85  8b06                 mov eax, dword ptr [esi]
// 0074bb87  8b10                 mov edx, dword ptr [eax]
// 0074bb89  6a01                 push 1
// 0074bb8b  8bce                 mov ecx, esi
// 0074bb8d  ffd2                 call edx
// 0074bb8f  5e                   pop esi
// 0074bb90  c20400               ret 4
// library openrbx-client/App\v8kernel\Kernel.cpp (function ?deletePoint@Kernel@RBX@@QAEXPAVPoint@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8kernel/Kernel.cpp
