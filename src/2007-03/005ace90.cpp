// roc 2007-03 005ace90  unit: seg_005a0000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ace90
//
// 005ace90  56                   push esi
// 005ace91  8b7134               mov esi, dword ptr [ecx + 0x34]
// 005ace94  8b06                 mov eax, dword ptr [esi]
// 005ace96  8b5004               mov edx, dword ptr [eax + 4]
// 005ace99  8bce                 mov ecx, esi
// 005ace9b  ffd2                 call edx
// 005ace9d  83f801               cmp eax, 1
// 005acea0  7411                 je 0x5aceb3
// 005acea2  8b7608               mov esi, dword ptr [esi + 8]
// 005acea5  8b06                 mov eax, dword ptr [esi]
// 005acea7  8b5004               mov edx, dword ptr [eax + 4]
// 005aceaa  8bce                 mov ecx, esi
// 005aceac  ffd2                 call edx
// 005aceae  83f801               cmp eax, 1
// 005aceb1  75ef                 jne 0x5acea2
// 005aceb3  8b442408             mov eax, dword ptr [esp + 8]
// 005aceb7  50                   push eax
// 005aceb8  8bce                 mov ecx, esi
// 005aceba  e841810400           call 0x5f5000
// 005acebf  5e                   pop esi
// 005acec0  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?onPrimitiveCanSleepChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
