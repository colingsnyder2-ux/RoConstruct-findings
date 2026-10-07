// roc 2007-08 005029f0  unit: G3D::Log  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005029f0
//
// 005029f0  51                   push ecx
// 005029f1  56                   push esi
// 005029f2  8bf1                 mov esi, ecx
// 005029f4  8b4644               mov eax, dword ptr [esi + 0x44]
// 005029f7  8d4802               lea ecx, [eax + 2]
// 005029fa  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005029fd  7e0f                 jle 0x502a0e
// 005029ff  8b5634               mov edx, dword ptr [esi + 0x34]
// 00502a02  6a02                 push 2
// 00502a04  03d0                 add edx, eax
// 00502a06  52                   push edx
// 00502a07  8bce                 mov ecx, esi
// 00502a09  e8b2920000           call 0x50bcc0
// 00502a0e  83464402             add dword ptr [esi + 0x44], 2
// 00502a12  807e2400             cmp byte ptr [esi + 0x24], 0
// 00502a16  8b4644               mov eax, dword ptr [esi + 0x44]
// 00502a19  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00502a1c  7419                 je 0x502a37
// 00502a1e  8a5408ff             mov dl, byte ptr [eax + ecx - 1]
// 00502a22  03c1                 add eax, ecx
// 00502a24  8a40fe               mov al, byte ptr [eax - 2]
// 00502a27  88542404             mov byte ptr [esp + 4], dl
// 00502a2b  88442405             mov byte ptr [esp + 5], al
// 00502a2f  668b442404           mov ax, word ptr [esp + 4]
// 00502a34  5e                   pop esi
// 00502a35  59                   pop ecx
// 00502a36  c3                   ret 
// 00502a37  668b4401fe           mov ax, word ptr [ecx + eax - 2]
// 00502a3c  5e                   pop esi
// 00502a3d  59                   pop ecx
// 00502a3e  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?readUInt16@BinaryInput@G3D@@QAEGXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
