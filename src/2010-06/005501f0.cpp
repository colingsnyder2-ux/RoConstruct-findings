// from server: 100% by auto
// roc 2010-06 005501f0  unit: G3D::Log  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005501f0
//
// 005501f0  51                   push ecx
// 005501f1  56                   push esi
// 005501f2  8bf1                 mov esi, ecx
// 005501f4  8b4644               mov eax, dword ptr [esi + 0x44]
// 005501f7  8d4802               lea ecx, [eax + 2]
// 005501fa  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005501fd  7e0f                 jle 0x55020e
// 005501ff  8b5634               mov edx, dword ptr [esi + 0x34]
// 00550202  6a02                 push 2
// 00550204  03d0                 add edx, eax
// 00550206  52                   push edx
// 00550207  8bce                 mov ecx, esi
// 00550209  e842860000           call 0x558850
// 0055020e  83464402             add dword ptr [esi + 0x44], 2
// 00550212  807e2400             cmp byte ptr [esi + 0x24], 0
// 00550216  8b4644               mov eax, dword ptr [esi + 0x44]
// 00550219  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0055021c  7419                 je 0x550237
// 0055021e  8a5408ff             mov dl, byte ptr [eax + ecx - 1]
// 00550222  03c1                 add eax, ecx
// 00550224  8a40fe               mov al, byte ptr [eax - 2]
// 00550227  88542404             mov byte ptr [esp + 4], dl
// 0055022b  88442405             mov byte ptr [esp + 5], al
// 0055022f  668b442404           mov ax, word ptr [esp + 4]
// 00550234  5e                   pop esi
// 00550235  59                   pop ecx
// 00550236  c3                   ret 
// 00550237  668b4401fe           mov ax, word ptr [ecx + eax - 2]
// 0055023c  5e                   pop esi
// 0055023d  59                   pop ecx
// 0055023e  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?readUInt16@BinaryInput@G3D@@QAEGXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
