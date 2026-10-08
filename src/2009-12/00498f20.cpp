// roc 2009-12 00498f20  unit: Ogre::RbxSceneNode  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00498f20
//
// 00498f20  51                   push ecx
// 00498f21  56                   push esi
// 00498f22  8bf1                 mov esi, ecx
// 00498f24  8b4644               mov eax, dword ptr [esi + 0x44]
// 00498f27  8d4804               lea ecx, [eax + 4]
// 00498f2a  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00498f2d  7e0f                 jle 0x498f3e
// 00498f2f  8b5634               mov edx, dword ptr [esi + 0x34]
// 00498f32  6a04                 push 4
// 00498f34  03d0                 add edx, eax
// 00498f36  52                   push edx
// 00498f37  8bce                 mov ecx, esi
// 00498f39  e882c21500           call 0x5f51c0
// 00498f3e  83464404             add dword ptr [esi + 0x44], 4
// 00498f42  807e2400             cmp byte ptr [esi + 0x24], 0
// 00498f46  8b4644               mov eax, dword ptr [esi + 0x44]
// 00498f49  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00498f4c  7428                 je 0x498f76
// 00498f4e  0fb65408ff           movzx edx, byte ptr [eax + ecx - 1]
// 00498f53  03c1                 add eax, ecx
// 00498f55  8a48fe               mov cl, byte ptr [eax - 2]
// 00498f58  88542404             mov byte ptr [esp + 4], dl
// 00498f5c  0fb650fd             movzx edx, byte ptr [eax - 3]
// 00498f60  8a40fc               mov al, byte ptr [eax - 4]
// 00498f63  884c2405             mov byte ptr [esp + 5], cl
// 00498f67  88542406             mov byte ptr [esp + 6], dl
// 00498f6b  88442407             mov byte ptr [esp + 7], al
// 00498f6f  8b442404             mov eax, dword ptr [esp + 4]
// 00498f73  5e                   pop esi
// 00498f74  59                   pop ecx
// 00498f75  c3                   ret 
// 00498f76  8b4401fc             mov eax, dword ptr [ecx + eax - 4]
// 00498f7a  5e                   pop esi
// 00498f7b  59                   pop ecx
// 00498f7c  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?readUInt32@BinaryInput@G3D@@QAEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
