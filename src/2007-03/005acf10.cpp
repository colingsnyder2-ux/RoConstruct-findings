// roc 2007-03 005acf10  unit: seg_005a0000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005acf10
//
// 005acf10  56                   push esi
// 005acf11  8b7134               mov esi, dword ptr [ecx + 0x34]
// 005acf14  8b06                 mov eax, dword ptr [esi]
// 005acf16  8b5004               mov edx, dword ptr [eax + 4]
// 005acf19  8bce                 mov ecx, esi
// 005acf1b  ffd2                 call edx
// 005acf1d  83f801               cmp eax, 1
// 005acf20  7411                 je 0x5acf33
// 005acf22  8b7608               mov esi, dword ptr [esi + 8]
// 005acf25  8b06                 mov eax, dword ptr [esi]
// 005acf27  8b5004               mov edx, dword ptr [eax + 4]
// 005acf2a  8bce                 mov ecx, esi
// 005acf2c  ffd2                 call edx
// 005acf2e  83f801               cmp eax, 1
// 005acf31  75ef                 jne 0x5acf22
// 005acf33  8b442408             mov eax, dword ptr [esp + 8]
// 005acf37  50                   push eax
// 005acf38  8bce                 mov ecx, esi
// 005acf3a  e8d17f0400           call 0x5f4f10
// 005acf3f  5e                   pop esi
// 005acf40  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?onPrimitiveCanSleepChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
