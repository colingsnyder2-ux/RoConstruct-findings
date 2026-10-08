// roc 2007-08 005a9190  unit: RBX::VHumanoid::?$SignalDesc  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a9190
//
// 005a9190  56                   push esi
// 005a9191  8b7134               mov esi, dword ptr [ecx + 0x34]
// 005a9194  8b06                 mov eax, dword ptr [esi]
// 005a9196  8b5004               mov edx, dword ptr [eax + 4]
// 005a9199  8bce                 mov ecx, esi
// 005a919b  ffd2                 call edx
// 005a919d  83f805               cmp eax, 5
// 005a91a0  7411                 je 0x5a91b3
// 005a91a2  8b7608               mov esi, dword ptr [esi + 8]
// 005a91a5  8b06                 mov eax, dword ptr [esi]
// 005a91a7  8b5004               mov edx, dword ptr [eax + 4]
// 005a91aa  8bce                 mov ecx, esi
// 005a91ac  ffd2                 call edx
// 005a91ae  83f805               cmp eax, 5
// 005a91b1  75ef                 jne 0x5a91a2
// 005a91b3  8bc6                 mov eax, esi
// 005a91b5  5e                   pop esi
// 005a91b6  c3                   ret 
// library openrbx-client/App\v8world\World.cpp (function ?getSleepStage@World@RBX@@QAEPAVSleepStage@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
