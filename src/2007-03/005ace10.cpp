// roc 2007-03 005ace10  unit: seg_005a0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ace10
//
// 005ace10  56                   push esi
// 005ace11  8b7134               mov esi, dword ptr [ecx + 0x34]
// 005ace14  8b06                 mov eax, dword ptr [esi]
// 005ace16  8b5004               mov edx, dword ptr [eax + 4]
// 005ace19  8bce                 mov ecx, esi
// 005ace1b  ffd2                 call edx
// 005ace1d  83f807               cmp eax, 7
// 005ace20  7411                 je 0x5ace33
// 005ace22  8b7608               mov esi, dword ptr [esi + 8]
// 005ace25  8b06                 mov eax, dword ptr [esi]
// 005ace27  8b5004               mov edx, dword ptr [eax + 4]
// 005ace2a  8bce                 mov ecx, esi
// 005ace2c  ffd2                 call edx
// 005ace2e  83f807               cmp eax, 7
// 005ace31  75ef                 jne 0x5ace22
// 005ace33  8bc6                 mov eax, esi
// 005ace35  5e                   pop esi
// 005ace36  c3                   ret 
// library openrbx-client/App\v8world\World.cpp (function ?getSimJobStage@World@RBX@@QAEAAVSimJobStage@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
