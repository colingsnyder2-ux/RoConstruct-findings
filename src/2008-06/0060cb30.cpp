// roc 2008-06 0060cb30  unit: RBX::BallBallContact  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060cb30
//
// 0060cb30  56                   push esi
// 0060cb31  8bf1                 mov esi, ecx
// 0060cb33  8b06                 mov eax, dword ptr [esi]
// 0060cb35  8b5014               mov edx, dword ptr [eax + 0x14]
// 0060cb38  ffd2                 call edx
// 0060cb3a  8bce                 mov ecx, esi
// 0060cb3c  5e                   pop esi
// 0060cb3d  e91e8d0300           jmp 0x645860
// library openrbx-client/App\v8world\ContactManager.cpp (function ?removeFromKernel@Contact@RBX@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
