// roc 2007-08 005a9290  unit: RBX::VHumanoid::?$SignalDesc  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a9290
//
// 005a9290  56                   push esi
// 005a9291  8b7134               mov esi, dword ptr [ecx + 0x34]
// 005a9294  8b06                 mov eax, dword ptr [esi]
// 005a9296  8b5004               mov edx, dword ptr [eax + 4]
// 005a9299  8bce                 mov ecx, esi
// 005a929b  ffd2                 call edx
// 005a929d  83f801               cmp eax, 1
// 005a92a0  7411                 je 0x5a92b3
// 005a92a2  8b7608               mov esi, dword ptr [esi + 8]
// 005a92a5  8b06                 mov eax, dword ptr [esi]
// 005a92a7  8b5004               mov edx, dword ptr [eax + 4]
// 005a92aa  8bce                 mov ecx, esi
// 005a92ac  ffd2                 call edx
// 005a92ae  83f801               cmp eax, 1
// 005a92b1  75ef                 jne 0x5a92a2
// 005a92b3  8b442408             mov eax, dword ptr [esp + 8]
// 005a92b7  50                   push eax
// 005a92b8  8bce                 mov ecx, esi
// 005a92ba  e801f20500           call 0x6084c0
// 005a92bf  5e                   pop esi
// 005a92c0  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?onPrimitiveCanSleepChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
