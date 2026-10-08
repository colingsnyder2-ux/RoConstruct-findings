// roc 2009-12 00498ed0  unit: Ogre::RbxSceneNode  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00498ed0
//
// 00498ed0  51                   push ecx
// 00498ed1  56                   push esi
// 00498ed2  8bf1                 mov esi, ecx
// 00498ed4  8b4644               mov eax, dword ptr [esi + 0x44]
// 00498ed7  8d4802               lea ecx, [eax + 2]
// 00498eda  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00498edd  7e0f                 jle 0x498eee
// 00498edf  8b5634               mov edx, dword ptr [esi + 0x34]
// 00498ee2  6a02                 push 2
// 00498ee4  03d0                 add edx, eax
// 00498ee6  52                   push edx
// 00498ee7  8bce                 mov ecx, esi
// 00498ee9  e8d2c21500           call 0x5f51c0
// 00498eee  83464402             add dword ptr [esi + 0x44], 2
// 00498ef2  807e2400             cmp byte ptr [esi + 0x24], 0
// 00498ef6  8b4644               mov eax, dword ptr [esi + 0x44]
// 00498ef9  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00498efc  7419                 je 0x498f17
// 00498efe  8a5408ff             mov dl, byte ptr [eax + ecx - 1]
// 00498f02  03c1                 add eax, ecx
// 00498f04  8a40fe               mov al, byte ptr [eax - 2]
// 00498f07  88542404             mov byte ptr [esp + 4], dl
// 00498f0b  88442405             mov byte ptr [esp + 5], al
// 00498f0f  668b442404           mov ax, word ptr [esp + 4]
// 00498f14  5e                   pop esi
// 00498f15  59                   pop ecx
// 00498f16  c3                   ret 
// 00498f17  668b4401fe           mov ax, word ptr [ecx + eax - 2]
// 00498f1c  5e                   pop esi
// 00498f1d  59                   pop ecx
// 00498f1e  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?readUInt16@BinaryInput@G3D@@QAEGXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
