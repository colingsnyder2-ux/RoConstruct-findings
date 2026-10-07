// roc 2009-06 0049d640  unit: G3D::Texture  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049d640
//
// 0049d640  56                   push esi
// 0049d641  8bf1                 mov esi, ecx
// 0049d643  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0049d647  57                   push edi
// 0049d648  8d7e0c               lea edi, [esi + 0xc]
// 0049d64b  7438                 je 0x49d685
// 0049d64d  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0049d650  57                   push edi
// 0049d651  e86a290000           call 0x49ffc0
// 0049d656  8b07                 mov eax, dword ptr [edi]
// 0049d658  85c0                 test eax, eax
// 0049d65a  7429                 je 0x49d685
// 0049d65c  83c004               add eax, 4
// 0049d65f  50                   push eax
// 0049d660  ff15a4e18900         call dword ptr [0x89e1a4]
// 0049d666  85c0                 test eax, eax
// 0049d668  7515                 jne 0x49d67f
// 0049d66a  8b0f                 mov ecx, dword ptr [edi]
// 0049d66c  e80f77faff           call 0x444d80
// 0049d671  8b0f                 mov ecx, dword ptr [edi]
// 0049d673  85c9                 test ecx, ecx
// 0049d675  7408                 je 0x49d67f
// 0049d677  8b01                 mov eax, dword ptr [ecx]
// 0049d679  8b10                 mov edx, dword ptr [eax]
// 0049d67b  6a01                 push 1
// 0049d67d  ffd2                 call edx
// 0049d67f  c70700000000         mov dword ptr [edi], 0
// 0049d685  83461801             add dword ptr [esi + 0x18], 1
// 0049d689  5f                   pop edi
// 0049d68a  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0049d691  83561c00             adc dword ptr [esi + 0x1c], 0
// 0049d695  5e                   pop esi
// 0049d696  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VARArea.cpp (function ?reset@VARArea@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VARArea.cpp
