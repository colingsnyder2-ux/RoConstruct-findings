// roc 2007-03 005acf50  unit: seg_005a0000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005acf50
//
// 005acf50  56                   push esi
// 005acf51  8b7134               mov esi, dword ptr [ecx + 0x34]
// 005acf54  8b06                 mov eax, dword ptr [esi]
// 005acf56  8b5004               mov edx, dword ptr [eax + 4]
// 005acf59  8bce                 mov ecx, esi
// 005acf5b  ffd2                 call edx
// 005acf5d  83f801               cmp eax, 1
// 005acf60  7411                 je 0x5acf73
// 005acf62  8b7608               mov esi, dword ptr [esi + 8]
// 005acf65  8b06                 mov eax, dword ptr [esi]
// 005acf67  8b5004               mov edx, dword ptr [eax + 4]
// 005acf6a  8bce                 mov ecx, esi
// 005acf6c  ffd2                 call edx
// 005acf6e  83f801               cmp eax, 1
// 005acf71  75ef                 jne 0x5acf62
// 005acf73  8b442408             mov eax, dword ptr [esp + 8]
// 005acf77  50                   push eax
// 005acf78  8bce                 mov ecx, esi
// 005acf7a  e821410400           call 0x5f10a0
// 005acf7f  5e                   pop esi
// 005acf80  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?onPrimitiveCanSleepChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
