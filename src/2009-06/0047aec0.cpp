// from server: 100% by auto
// roc 2009-06 0047aec0  unit: Ogre::VRootManager::?$sp_counted_impl_p  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0047aec0
//
// 0047aec0  51                   push ecx
// 0047aec1  56                   push esi
// 0047aec2  8bf1                 mov esi, ecx
// 0047aec4  8b4644               mov eax, dword ptr [esi + 0x44]
// 0047aec7  8d4802               lea ecx, [eax + 2]
// 0047aeca  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0047aecd  7e0f                 jle 0x47aede
// 0047aecf  8b5634               mov edx, dword ptr [esi + 0x34]
// 0047aed2  6a02                 push 2
// 0047aed4  03d0                 add edx, eax
// 0047aed6  52                   push edx
// 0047aed7  8bce                 mov ecx, esi
// 0047aed9  e872980f00           call 0x574750
// 0047aede  83464402             add dword ptr [esi + 0x44], 2
// 0047aee2  807e2400             cmp byte ptr [esi + 0x24], 0
// 0047aee6  8b4644               mov eax, dword ptr [esi + 0x44]
// 0047aee9  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0047aeec  7419                 je 0x47af07
// 0047aeee  8a5408ff             mov dl, byte ptr [eax + ecx - 1]
// 0047aef2  03c1                 add eax, ecx
// 0047aef4  8a40fe               mov al, byte ptr [eax - 2]
// 0047aef7  88542404             mov byte ptr [esp + 4], dl
// 0047aefb  88442405             mov byte ptr [esp + 5], al
// 0047aeff  668b442404           mov ax, word ptr [esp + 4]
// 0047af04  5e                   pop esi
// 0047af05  59                   pop ecx
// 0047af06  c3                   ret 
// 0047af07  668b4401fe           mov ax, word ptr [ecx + eax - 2]
// 0047af0c  5e                   pop esi
// 0047af0d  59                   pop ecx
// 0047af0e  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?readUInt16@BinaryInput@G3D@@QAEGXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
