// from server: 100% by auto
// roc 2009-06 0056cb30  unit: G3D::Shader  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056cb30
//
// 0056cb30  51                   push ecx
// 0056cb31  56                   push esi
// 0056cb32  8bf1                 mov esi, ecx
// 0056cb34  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056cb37  8d4804               lea ecx, [eax + 4]
// 0056cb3a  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0056cb3d  7e0f                 jle 0x56cb4e
// 0056cb3f  8b5634               mov edx, dword ptr [esi + 0x34]
// 0056cb42  6a04                 push 4
// 0056cb44  03d0                 add edx, eax
// 0056cb46  52                   push edx
// 0056cb47  8bce                 mov ecx, esi
// 0056cb49  e8027c0000           call 0x574750
// 0056cb4e  83464404             add dword ptr [esi + 0x44], 4
// 0056cb52  807e2400             cmp byte ptr [esi + 0x24], 0
// 0056cb56  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056cb59  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0056cb5c  7428                 je 0x56cb86
// 0056cb5e  0fb65408ff           movzx edx, byte ptr [eax + ecx - 1]
// 0056cb63  03c1                 add eax, ecx
// 0056cb65  8a48fe               mov cl, byte ptr [eax - 2]
// 0056cb68  88542404             mov byte ptr [esp + 4], dl
// 0056cb6c  0fb650fd             movzx edx, byte ptr [eax - 3]
// 0056cb70  8a40fc               mov al, byte ptr [eax - 4]
// 0056cb73  884c2405             mov byte ptr [esp + 5], cl
// 0056cb77  88542406             mov byte ptr [esp + 6], dl
// 0056cb7b  88442407             mov byte ptr [esp + 7], al
// 0056cb7f  8b442404             mov eax, dword ptr [esp + 4]
// 0056cb83  5e                   pop esi
// 0056cb84  59                   pop ecx
// 0056cb85  c3                   ret 
// 0056cb86  8b4401fc             mov eax, dword ptr [ecx + eax - 4]
// 0056cb8a  5e                   pop esi
// 0056cb8b  59                   pop ecx
// 0056cb8c  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?readUInt32@BinaryInput@G3D@@QAEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
