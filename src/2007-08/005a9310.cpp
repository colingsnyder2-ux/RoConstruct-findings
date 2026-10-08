// roc 2007-08 005a9310  unit: RBX::VHumanoid::?$SignalDesc  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a9310
//
// 005a9310  56                   push esi
// 005a9311  8b7134               mov esi, dword ptr [ecx + 0x34]
// 005a9314  8b06                 mov eax, dword ptr [esi]
// 005a9316  8b5004               mov edx, dword ptr [eax + 4]
// 005a9319  8bce                 mov ecx, esi
// 005a931b  ffd2                 call edx
// 005a931d  83f801               cmp eax, 1
// 005a9320  7411                 je 0x5a9333
// 005a9322  8b7608               mov esi, dword ptr [esi + 8]
// 005a9325  8b06                 mov eax, dword ptr [esi]
// 005a9327  8b5004               mov edx, dword ptr [eax + 4]
// 005a932a  8bce                 mov ecx, esi
// 005a932c  ffd2                 call edx
// 005a932e  83f801               cmp eax, 1
// 005a9331  75ef                 jne 0x5a9322
// 005a9333  8b442408             mov eax, dword ptr [esp + 8]
// 005a9337  50                   push eax
// 005a9338  8bce                 mov ecx, esi
// 005a933a  e861c60500           call 0x6059a0
// 005a933f  5e                   pop esi
// 005a9340  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?onPrimitiveCanSleepChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
