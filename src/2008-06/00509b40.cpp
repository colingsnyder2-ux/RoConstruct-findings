// roc 2008-06 00509b40  unit: G3D::Shader  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00509b40
//
// 00509b40  51                   push ecx
// 00509b41  56                   push esi
// 00509b42  8bf1                 mov esi, ecx
// 00509b44  8b4644               mov eax, dword ptr [esi + 0x44]
// 00509b47  8d4804               lea ecx, [eax + 4]
// 00509b4a  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00509b4d  7e0f                 jle 0x509b5e
// 00509b4f  8b5634               mov edx, dword ptr [esi + 0x34]
// 00509b52  6a04                 push 4
// 00509b54  03d0                 add edx, eax
// 00509b56  52                   push edx
// 00509b57  8bce                 mov ecx, esi
// 00509b59  e872bc0000           call 0x5157d0
// 00509b5e  83464404             add dword ptr [esi + 0x44], 4
// 00509b62  807e2400             cmp byte ptr [esi + 0x24], 0
// 00509b66  8b4644               mov eax, dword ptr [esi + 0x44]
// 00509b69  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00509b6c  7428                 je 0x509b96
// 00509b6e  0fb65408ff           movzx edx, byte ptr [eax + ecx - 1]
// 00509b73  03c1                 add eax, ecx
// 00509b75  8a48fe               mov cl, byte ptr [eax - 2]
// 00509b78  88542404             mov byte ptr [esp + 4], dl
// 00509b7c  0fb650fd             movzx edx, byte ptr [eax - 3]
// 00509b80  8a40fc               mov al, byte ptr [eax - 4]
// 00509b83  884c2405             mov byte ptr [esp + 5], cl
// 00509b87  88542406             mov byte ptr [esp + 6], dl
// 00509b8b  88442407             mov byte ptr [esp + 7], al
// 00509b8f  8b442404             mov eax, dword ptr [esp + 4]
// 00509b93  5e                   pop esi
// 00509b94  59                   pop ecx
// 00509b95  c3                   ret 
// 00509b96  8b4401fc             mov eax, dword ptr [ecx + eax - 4]
// 00509b9a  5e                   pop esi
// 00509b9b  59                   pop ecx
// 00509b9c  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?readUInt32@BinaryInput@G3D@@QAEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
