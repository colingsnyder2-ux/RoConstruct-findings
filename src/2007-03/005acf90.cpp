// roc 2007-03 005acf90  unit: seg_005a0000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005acf90
//
// 005acf90  56                   push esi
// 005acf91  8b7134               mov esi, dword ptr [ecx + 0x34]
// 005acf94  8b06                 mov eax, dword ptr [esi]
// 005acf96  8b5004               mov edx, dword ptr [eax + 4]
// 005acf99  8bce                 mov ecx, esi
// 005acf9b  ffd2                 call edx
// 005acf9d  83f801               cmp eax, 1
// 005acfa0  7411                 je 0x5acfb3
// 005acfa2  8b7608               mov esi, dword ptr [esi + 8]
// 005acfa5  8b06                 mov eax, dword ptr [esi]
// 005acfa7  8b5004               mov edx, dword ptr [eax + 4]
// 005acfaa  8bce                 mov ecx, esi
// 005acfac  ffd2                 call edx
// 005acfae  83f801               cmp eax, 1
// 005acfb1  75ef                 jne 0x5acfa2
// 005acfb3  8b442408             mov eax, dword ptr [esp + 8]
// 005acfb7  50                   push eax
// 005acfb8  8bce                 mov ecx, esi
// 005acfba  e861540400           call 0x5f2420
// 005acfbf  5e                   pop esi
// 005acfc0  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?onPrimitiveCanSleepChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
