// roc 2007-08 005ccc50  unit: RBX::Contact  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ccc50
//
// 005ccc50  56                   push esi
// 005ccc51  8bf1                 mov esi, ecx
// 005ccc53  8b06                 mov eax, dword ptr [esi]
// 005ccc55  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ccc58  ffd2                 call edx
// 005ccc5a  8bce                 mov ecx, esi
// 005ccc5c  5e                   pop esi
// 005ccc5d  e9fec40300           jmp 0x609160
// library openrbx-client/App\v8world\ContactManager.cpp (function ?removeFromKernel@Contact@RBX@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
