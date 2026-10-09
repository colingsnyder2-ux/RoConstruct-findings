// roc 2010-06 007112b0  unit: RBX::BallBallContact  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007112b0
//
// 007112b0  56                   push esi
// 007112b1  8bf1                 mov esi, ecx
// 007112b3  8b06                 mov eax, dword ptr [esi]
// 007112b5  8b5014               mov edx, dword ptr [eax + 0x14]
// 007112b8  ffd2                 call edx
// 007112ba  8bce                 mov ecx, esi
// 007112bc  5e                   pop esi
// 007112bd  e91ef80300           jmp 0x750ae0
// library openrbx-client/App\v8world\ContactManager.cpp (function ?removeFromKernel@Contact@RBX@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
