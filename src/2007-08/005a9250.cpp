// roc 2007-08 005a9250  unit: RBX::VHumanoid::?$SignalDesc  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a9250
//
// 005a9250  56                   push esi
// 005a9251  8b7134               mov esi, dword ptr [ecx + 0x34]
// 005a9254  8b06                 mov eax, dword ptr [esi]
// 005a9256  8b5004               mov edx, dword ptr [eax + 4]
// 005a9259  8bce                 mov ecx, esi
// 005a925b  ffd2                 call edx
// 005a925d  83f801               cmp eax, 1
// 005a9260  7411                 je 0x5a9273
// 005a9262  8b7608               mov esi, dword ptr [esi + 8]
// 005a9265  8b06                 mov eax, dword ptr [esi]
// 005a9267  8b5004               mov edx, dword ptr [eax + 4]
// 005a926a  8bce                 mov ecx, esi
// 005a926c  ffd2                 call edx
// 005a926e  83f801               cmp eax, 1
// 005a9271  75ef                 jne 0x5a9262
// 005a9273  8b442408             mov eax, dword ptr [esp + 8]
// 005a9277  50                   push eax
// 005a9278  8bce                 mov ecx, esi
// 005a927a  e811c70500           call 0x605990
// 005a927f  5e                   pop esi
// 005a9280  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?onPrimitiveCanSleepChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
