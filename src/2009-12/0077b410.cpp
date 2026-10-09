// roc 2009-12 0077b410  unit: RBX::BallBallContact  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0077b410
//
// 0077b410  56                   push esi
// 0077b411  8bf1                 mov esi, ecx
// 0077b413  8b06                 mov eax, dword ptr [esi]
// 0077b415  8b5014               mov edx, dword ptr [eax + 0x14]
// 0077b418  ffd2                 call edx
// 0077b41a  8bce                 mov ecx, esi
// 0077b41c  5e                   pop esi
// 0077b41d  e93e7b0300           jmp 0x7b2f60
// library openrbx-client/App\v8world\ContactManager.cpp (function ?removeFromKernel@Contact@RBX@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
