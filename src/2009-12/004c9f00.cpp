// roc 2009-12 004c9f00  unit: G3D::Texture  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c9f00
//
// 004c9f00  56                   push esi
// 004c9f01  8bf1                 mov esi, ecx
// 004c9f03  837e0c00             cmp dword ptr [esi + 0xc], 0
// 004c9f07  57                   push edi
// 004c9f08  8d7e0c               lea edi, [esi + 0xc]
// 004c9f0b  7438                 je 0x4c9f45
// 004c9f0d  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 004c9f10  57                   push edi
// 004c9f11  e8ba270000           call 0x4cc6d0
// 004c9f16  8b07                 mov eax, dword ptr [edi]
// 004c9f18  85c0                 test eax, eax
// 004c9f1a  7429                 je 0x4c9f45
// 004c9f1c  83c004               add eax, 4
// 004c9f1f  50                   push eax
// 004c9f20  ff1508b29800         call dword ptr [0x98b208]
// 004c9f26  85c0                 test eax, eax
// 004c9f28  7515                 jne 0x4c9f3f
// 004c9f2a  8b0f                 mov ecx, dword ptr [edi]
// 004c9f2c  e8ef10f8ff           call 0x44b020
// 004c9f31  8b0f                 mov ecx, dword ptr [edi]
// 004c9f33  85c9                 test ecx, ecx
// 004c9f35  7408                 je 0x4c9f3f
// 004c9f37  8b01                 mov eax, dword ptr [ecx]
// 004c9f39  8b10                 mov edx, dword ptr [eax]
// 004c9f3b  6a01                 push 1
// 004c9f3d  ffd2                 call edx
// 004c9f3f  c70700000000         mov dword ptr [edi], 0
// 004c9f45  83461801             add dword ptr [esi + 0x18], 1
// 004c9f49  5f                   pop edi
// 004c9f4a  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004c9f51  83561c00             adc dword ptr [esi + 0x1c], 0
// 004c9f55  5e                   pop esi
// 004c9f56  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VARArea.cpp (function ?reset@VARArea@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VARArea.cpp
