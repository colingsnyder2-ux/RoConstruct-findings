// roc 2009-06 006b0d80  unit: RBX::BallBallContact  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b0d80
//
// 006b0d80  56                   push esi
// 006b0d81  8bf1                 mov esi, ecx
// 006b0d83  8b06                 mov eax, dword ptr [esi]
// 006b0d85  8b5014               mov edx, dword ptr [eax + 0x14]
// 006b0d88  ffd2                 call edx
// 006b0d8a  8bce                 mov ecx, esi
// 006b0d8c  5e                   pop esi
// 006b0d8d  e9ee4e0200           jmp 0x6d5c80
// library openrbx-client/App\v8world\ContactManager.cpp (function ?removeFromKernel@Contact@RBX@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
