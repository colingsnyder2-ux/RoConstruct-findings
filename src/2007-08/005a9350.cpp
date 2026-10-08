// roc 2007-08 005a9350  unit: RBX::VHumanoid::?$SignalDesc  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a9350
//
// 005a9350  56                   push esi
// 005a9351  8b7134               mov esi, dword ptr [ecx + 0x34]
// 005a9354  8b06                 mov eax, dword ptr [esi]
// 005a9356  8b5004               mov edx, dword ptr [eax + 4]
// 005a9359  8bce                 mov ecx, esi
// 005a935b  ffd2                 call edx
// 005a935d  83f801               cmp eax, 1
// 005a9360  7411                 je 0x5a9373
// 005a9362  8b7608               mov esi, dword ptr [esi + 8]
// 005a9365  8b06                 mov eax, dword ptr [esi]
// 005a9367  8b5004               mov edx, dword ptr [eax + 4]
// 005a936a  8bce                 mov ecx, esi
// 005a936c  ffd2                 call edx
// 005a936e  83f801               cmp eax, 1
// 005a9371  75ef                 jne 0x5a9362
// 005a9373  8bce                 mov ecx, esi
// 005a9375  5e                   pop esi
// 005a9376  e9e5f10500           jmp 0x608560
// library openrbx-client/App\v8world\World.cpp (function ?update@World@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
