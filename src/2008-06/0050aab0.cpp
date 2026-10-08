// from server: 100% by auto
// roc 2008-06 0050aab0  unit: G3D::Log  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050aab0
//
// 0050aab0  51                   push ecx
// 0050aab1  56                   push esi
// 0050aab2  8bf1                 mov esi, ecx
// 0050aab4  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050aab7  8d4802               lea ecx, [eax + 2]
// 0050aaba  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0050aabd  7e0f                 jle 0x50aace
// 0050aabf  8b5634               mov edx, dword ptr [esi + 0x34]
// 0050aac2  6a02                 push 2
// 0050aac4  03d0                 add edx, eax
// 0050aac6  52                   push edx
// 0050aac7  8bce                 mov ecx, esi
// 0050aac9  e802ad0000           call 0x5157d0
// 0050aace  83464402             add dword ptr [esi + 0x44], 2
// 0050aad2  807e2400             cmp byte ptr [esi + 0x24], 0
// 0050aad6  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050aad9  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0050aadc  7419                 je 0x50aaf7
// 0050aade  8a5408ff             mov dl, byte ptr [eax + ecx - 1]
// 0050aae2  03c1                 add eax, ecx
// 0050aae4  8a40fe               mov al, byte ptr [eax - 2]
// 0050aae7  88542404             mov byte ptr [esp + 4], dl
// 0050aaeb  88442405             mov byte ptr [esp + 5], al
// 0050aaef  668b442404           mov ax, word ptr [esp + 4]
// 0050aaf4  5e                   pop esi
// 0050aaf5  59                   pop ecx
// 0050aaf6  c3                   ret 
// 0050aaf7  668b4401fe           mov ax, word ptr [ecx + eax - 2]
// 0050aafc  5e                   pop esi
// 0050aafd  59                   pop ecx
// 0050aafe  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?readUInt16@BinaryInput@G3D@@QAEGXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
