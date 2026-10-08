// from server: 100% by auto
// roc 2010-06 0054f240  unit: G3D::Shader  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054f240
//
// 0054f240  51                   push ecx
// 0054f241  56                   push esi
// 0054f242  8bf1                 mov esi, ecx
// 0054f244  8b4644               mov eax, dword ptr [esi + 0x44]
// 0054f247  8d4804               lea ecx, [eax + 4]
// 0054f24a  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0054f24d  7e0f                 jle 0x54f25e
// 0054f24f  8b5634               mov edx, dword ptr [esi + 0x34]
// 0054f252  6a04                 push 4
// 0054f254  03d0                 add edx, eax
// 0054f256  52                   push edx
// 0054f257  8bce                 mov ecx, esi
// 0054f259  e8f2950000           call 0x558850
// 0054f25e  83464404             add dword ptr [esi + 0x44], 4
// 0054f262  807e2400             cmp byte ptr [esi + 0x24], 0
// 0054f266  8b4644               mov eax, dword ptr [esi + 0x44]
// 0054f269  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0054f26c  7428                 je 0x54f296
// 0054f26e  0fb65408ff           movzx edx, byte ptr [eax + ecx - 1]
// 0054f273  03c1                 add eax, ecx
// 0054f275  8a48fe               mov cl, byte ptr [eax - 2]
// 0054f278  88542404             mov byte ptr [esp + 4], dl
// 0054f27c  0fb650fd             movzx edx, byte ptr [eax - 3]
// 0054f280  8a40fc               mov al, byte ptr [eax - 4]
// 0054f283  884c2405             mov byte ptr [esp + 5], cl
// 0054f287  88542406             mov byte ptr [esp + 6], dl
// 0054f28b  88442407             mov byte ptr [esp + 7], al
// 0054f28f  8b442404             mov eax, dword ptr [esp + 4]
// 0054f293  5e                   pop esi
// 0054f294  59                   pop ecx
// 0054f295  c3                   ret 
// 0054f296  8b4401fc             mov eax, dword ptr [ecx + eax - 4]
// 0054f29a  5e                   pop esi
// 0054f29b  59                   pop ecx
// 0054f29c  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?readUInt32@BinaryInput@G3D@@QAEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
