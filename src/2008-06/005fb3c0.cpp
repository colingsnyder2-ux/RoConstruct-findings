// roc 2008-06 005fb3c0  unit: RBX::Kernel  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fb3c0
//
// 005fb3c0  56                   push esi
// 005fb3c1  8b742408             mov esi, dword ptr [esp + 8]
// 005fb3c5  85f6                 test esi, esi
// 005fb3c7  7416                 je 0x5fb3df
// 005fb3c9  834608ff             add dword ptr [esi + 8], -1
// 005fb3cd  7510                 jne 0x5fb3df
// 005fb3cf  56                   push esi
// 005fb3d0  e8cbfdffff           call 0x5fb1a0
// 005fb3d5  8b06                 mov eax, dword ptr [esi]
// 005fb3d7  8b10                 mov edx, dword ptr [eax]
// 005fb3d9  6a01                 push 1
// 005fb3db  8bce                 mov ecx, esi
// 005fb3dd  ffd2                 call edx
// 005fb3df  5e                   pop esi
// 005fb3e0  c20400               ret 4
// library openrbx-client/App\v8kernel\Kernel.cpp (function ?deletePoint@Kernel@RBX@@QAEXPAVPoint@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8kernel/Kernel.cpp
