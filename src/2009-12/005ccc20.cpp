// roc 2009-12 005ccc20  unit: RBX::PartChunk  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ccc20
//
// 005ccc20  56                   push esi
// 005ccc21  8bf1                 mov esi, ecx
// 005ccc23  8b06                 mov eax, dword ptr [esi]
// 005ccc25  85c0                 test eax, eax
// 005ccc27  7429                 je 0x5ccc52
// 005ccc29  83c004               add eax, 4
// 005ccc2c  50                   push eax
// 005ccc2d  ff1508b29800         call dword ptr [0x98b208]
// 005ccc33  85c0                 test eax, eax
// 005ccc35  7515                 jne 0x5ccc4c
// 005ccc37  8b0e                 mov ecx, dword ptr [esi]
// 005ccc39  e8e2e3e7ff           call 0x44b020
// 005ccc3e  8b0e                 mov ecx, dword ptr [esi]
// 005ccc40  85c9                 test ecx, ecx
// 005ccc42  7408                 je 0x5ccc4c
// 005ccc44  8b01                 mov eax, dword ptr [ecx]
// 005ccc46  8b10                 mov edx, dword ptr [eax]
// 005ccc48  6a01                 push 1
// 005ccc4a  ffd2                 call edx
// 005ccc4c  c70600000000         mov dword ptr [esi], 0
// 005ccc52  5e                   pop esi
// 005ccc53  c3                   ret 
// library rbxgs-appdraw/AdornG3D.cpp (function ?zeroPointer@?$ReferenceCountedPointer@VTexture@G3D@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
