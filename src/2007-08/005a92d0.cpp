// roc 2007-08 005a92d0  unit: RBX::VHumanoid::?$SignalDesc  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a92d0
//
// 005a92d0  56                   push esi
// 005a92d1  8b7134               mov esi, dword ptr [ecx + 0x34]
// 005a92d4  8b06                 mov eax, dword ptr [esi]
// 005a92d6  8b5004               mov edx, dword ptr [eax + 4]
// 005a92d9  8bce                 mov ecx, esi
// 005a92db  ffd2                 call edx
// 005a92dd  83f801               cmp eax, 1
// 005a92e0  7411                 je 0x5a92f3
// 005a92e2  8b7608               mov esi, dword ptr [esi + 8]
// 005a92e5  8b06                 mov eax, dword ptr [esi]
// 005a92e7  8b5004               mov edx, dword ptr [eax + 4]
// 005a92ea  8bce                 mov ecx, esi
// 005a92ec  ffd2                 call edx
// 005a92ee  83f801               cmp eax, 1
// 005a92f1  75ef                 jne 0x5a92e2
// 005a92f3  8b442408             mov eax, dword ptr [esp + 8]
// 005a92f7  50                   push eax
// 005a92f8  8bce                 mov ecx, esi
// 005a92fa  e841b70500           call 0x604a40
// 005a92ff  5e                   pop esi
// 005a9300  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?onPrimitiveCanSleepChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
