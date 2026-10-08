// roc 2007-08 005a9210  unit: RBX::VHumanoid::?$SignalDesc  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a9210
//
// 005a9210  56                   push esi
// 005a9211  8b7134               mov esi, dword ptr [ecx + 0x34]
// 005a9214  8b06                 mov eax, dword ptr [esi]
// 005a9216  8b5004               mov edx, dword ptr [eax + 4]
// 005a9219  8bce                 mov ecx, esi
// 005a921b  ffd2                 call edx
// 005a921d  83f801               cmp eax, 1
// 005a9220  7411                 je 0x5a9233
// 005a9222  8b7608               mov esi, dword ptr [esi + 8]
// 005a9225  8b06                 mov eax, dword ptr [esi]
// 005a9227  8b5004               mov edx, dword ptr [eax + 4]
// 005a922a  8bce                 mov ecx, esi
// 005a922c  ffd2                 call edx
// 005a922e  83f801               cmp eax, 1
// 005a9231  75ef                 jne 0x5a9222
// 005a9233  8b442408             mov eax, dword ptr [esp + 8]
// 005a9237  50                   push eax
// 005a9238  8bce                 mov ecx, esi
// 005a923a  e871f30500           call 0x6085b0
// 005a923f  5e                   pop esi
// 005a9240  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?onPrimitiveCanSleepChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
