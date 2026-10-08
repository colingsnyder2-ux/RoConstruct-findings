// from server: 100% by auto
// roc 2007-08 00501510  unit: G3D::Shader  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00501510
//
// 00501510  51                   push ecx
// 00501511  56                   push esi
// 00501512  8bf1                 mov esi, ecx
// 00501514  8b4644               mov eax, dword ptr [esi + 0x44]
// 00501517  8d4804               lea ecx, [eax + 4]
// 0050151a  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0050151d  7e0f                 jle 0x50152e
// 0050151f  8b5634               mov edx, dword ptr [esi + 0x34]
// 00501522  6a04                 push 4
// 00501524  03d0                 add edx, eax
// 00501526  52                   push edx
// 00501527  8bce                 mov ecx, esi
// 00501529  e892a70000           call 0x50bcc0
// 0050152e  83464404             add dword ptr [esi + 0x44], 4
// 00501532  807e2400             cmp byte ptr [esi + 0x24], 0
// 00501536  8b4644               mov eax, dword ptr [esi + 0x44]
// 00501539  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0050153c  7428                 je 0x501566
// 0050153e  0fb65408ff           movzx edx, byte ptr [eax + ecx - 1]
// 00501543  03c1                 add eax, ecx
// 00501545  8a48fe               mov cl, byte ptr [eax - 2]
// 00501548  88542404             mov byte ptr [esp + 4], dl
// 0050154c  0fb650fd             movzx edx, byte ptr [eax - 3]
// 00501550  8a40fc               mov al, byte ptr [eax - 4]
// 00501553  884c2405             mov byte ptr [esp + 5], cl
// 00501557  88542406             mov byte ptr [esp + 6], dl
// 0050155b  88442407             mov byte ptr [esp + 7], al
// 0050155f  8b442404             mov eax, dword ptr [esp + 4]
// 00501563  5e                   pop esi
// 00501564  59                   pop ecx
// 00501565  c3                   ret 
// 00501566  8b4401fc             mov eax, dword ptr [ecx + eax - 4]
// 0050156a  5e                   pop esi
// 0050156b  59                   pop ecx
// 0050156c  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?readUInt32@BinaryInput@G3D@@QAEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
