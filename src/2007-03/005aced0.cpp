// roc 2007-03 005aced0  unit: seg_005a0000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005aced0
//
// 005aced0  56                   push esi
// 005aced1  8b7134               mov esi, dword ptr [ecx + 0x34]
// 005aced4  8b06                 mov eax, dword ptr [esi]
// 005aced6  8b5004               mov edx, dword ptr [eax + 4]
// 005aced9  8bce                 mov ecx, esi
// 005acedb  ffd2                 call edx
// 005acedd  83f801               cmp eax, 1
// 005acee0  7411                 je 0x5acef3
// 005acee2  8b7608               mov esi, dword ptr [esi + 8]
// 005acee5  8b06                 mov eax, dword ptr [esi]
// 005acee7  8b5004               mov edx, dword ptr [eax + 4]
// 005aceea  8bce                 mov ecx, esi
// 005aceec  ffd2                 call edx
// 005aceee  83f801               cmp eax, 1
// 005acef1  75ef                 jne 0x5acee2
// 005acef3  8b442408             mov eax, dword ptr [esp + 8]
// 005acef7  50                   push eax
// 005acef8  8bce                 mov ecx, esi
// 005acefa  e811550400           call 0x5f2410
// 005aceff  5e                   pop esi
// 005acf00  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?onPrimitiveCanSleepChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
