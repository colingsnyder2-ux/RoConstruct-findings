// roc 2008-06 00598fa0  unit: RBX::PartInstance  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598fa0
//
// 00598fa0  56                   push esi
// 00598fa1  8bf1                 mov esi, ecx
// 00598fa3  8b06                 mov eax, dword ptr [esi]
// 00598fa5  57                   push edi
// 00598fa6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00598faa  3bf8                 cmp edi, eax
// 00598fac  743d                 je 0x598feb
// 00598fae  85c0                 test eax, eax
// 00598fb0  7429                 je 0x598fdb
// 00598fb2  83c004               add eax, 4
// 00598fb5  50                   push eax
// 00598fb6  ff15ac218000         call dword ptr [0x8021ac]
// 00598fbc  85c0                 test eax, eax
// 00598fbe  7515                 jne 0x598fd5
// 00598fc0  8b0e                 mov ecx, dword ptr [esi]
// 00598fc2  e8c91decff           call 0x45ad90
// 00598fc7  8b0e                 mov ecx, dword ptr [esi]
// 00598fc9  85c9                 test ecx, ecx
// 00598fcb  7408                 je 0x598fd5
// 00598fcd  8b01                 mov eax, dword ptr [ecx]
// 00598fcf  8b10                 mov edx, dword ptr [eax]
// 00598fd1  6a01                 push 1
// 00598fd3  ffd2                 call edx
// 00598fd5  c70600000000         mov dword ptr [esi], 0
// 00598fdb  85ff                 test edi, edi
// 00598fdd  740c                 je 0x598feb
// 00598fdf  893e                 mov dword ptr [esi], edi
// 00598fe1  83c704               add edi, 4
// 00598fe4  57                   push edi
// 00598fe5  ff15b0218000         call dword ptr [0x8021b0]
// 00598feb  5f                   pop edi
// 00598fec  5e                   pop esi
// 00598fed  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?setPointer@?$ReferenceCountedPointer@VRenderbuffer@G3D@@@G3D@@AAEXPAVRenderbuffer@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
