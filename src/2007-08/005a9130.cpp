// roc 2007-08 005a9130  unit: RBX::VHumanoid::?$SignalDesc  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a9130
//
// 005a9130  56                   push esi
// 005a9131  8b7134               mov esi, dword ptr [ecx + 0x34]
// 005a9134  8b06                 mov eax, dword ptr [esi]
// 005a9136  8b5004               mov edx, dword ptr [eax + 4]
// 005a9139  8bce                 mov ecx, esi
// 005a913b  ffd2                 call edx
// 005a913d  83f807               cmp eax, 7
// 005a9140  7411                 je 0x5a9153
// 005a9142  8b7608               mov esi, dword ptr [esi + 8]
// 005a9145  8b06                 mov eax, dword ptr [esi]
// 005a9147  8b5004               mov edx, dword ptr [eax + 4]
// 005a914a  8bce                 mov ecx, esi
// 005a914c  ffd2                 call edx
// 005a914e  83f807               cmp eax, 7
// 005a9151  75ef                 jne 0x5a9142
// 005a9153  8bc6                 mov eax, esi
// 005a9155  5e                   pop esi
// 005a9156  c3                   ret 
// library openrbx-client/App\v8world\World.cpp (function ?getSimJobStage@World@RBX@@QAEAAVSimJobStage@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
