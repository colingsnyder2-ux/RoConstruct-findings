// roc 2008-06 00475ec0  unit: G3D::Texture  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00475ec0
//
// 00475ec0  56                   push esi
// 00475ec1  8bf1                 mov esi, ecx
// 00475ec3  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00475ec7  57                   push edi
// 00475ec8  8d7e0c               lea edi, [esi + 0xc]
// 00475ecb  7438                 je 0x475f05
// 00475ecd  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00475ed0  57                   push edi
// 00475ed1  e80a2b0000           call 0x4789e0
// 00475ed6  8b07                 mov eax, dword ptr [edi]
// 00475ed8  85c0                 test eax, eax
// 00475eda  7429                 je 0x475f05
// 00475edc  83c004               add eax, 4
// 00475edf  50                   push eax
// 00475ee0  ff15ac218000         call dword ptr [0x8021ac]
// 00475ee6  85c0                 test eax, eax
// 00475ee8  7515                 jne 0x475eff
// 00475eea  8b0f                 mov ecx, dword ptr [edi]
// 00475eec  e89f4efeff           call 0x45ad90
// 00475ef1  8b0f                 mov ecx, dword ptr [edi]
// 00475ef3  85c9                 test ecx, ecx
// 00475ef5  7408                 je 0x475eff
// 00475ef7  8b01                 mov eax, dword ptr [ecx]
// 00475ef9  8b10                 mov edx, dword ptr [eax]
// 00475efb  6a01                 push 1
// 00475efd  ffd2                 call edx
// 00475eff  c70700000000         mov dword ptr [edi], 0
// 00475f05  83461801             add dword ptr [esi + 0x18], 1
// 00475f09  5f                   pop edi
// 00475f0a  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00475f11  83561c00             adc dword ptr [esi + 0x1c], 0
// 00475f15  5e                   pop esi
// 00475f16  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VARArea.cpp (function ?reset@VARArea@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VARArea.cpp
