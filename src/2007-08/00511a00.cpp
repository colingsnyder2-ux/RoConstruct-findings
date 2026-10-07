// roc 2007-08 00511a00  unit: G3D::_internal::DialogTemplate  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00511a00
//
// 00511a00  56                   push esi
// 00511a01  b812000000           mov eax, 0x12
// 00511a06  8bf1                 mov esi, ecx
// 00511a08  57                   push edi
// 00511a09  50                   push eax
// 00511a0a  c706000f7a00         mov dword ptr [esi], 0x7a0f00
// 00511a10  89460c               mov dword ptr [esi + 0xc], eax
// 00511a13  894608               mov dword ptr [esi + 8], eax
// 00511a16  ff15d0e67700         call dword ptr [0x77e6d0]
// 00511a1c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00511a20  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00511a24  83c404               add esp, 4
// 00511a27  85ff                 test edi, edi
// 00511a29  894604               mov dword ptr [esi + 4], eax
// 00511a2c  8908                 mov dword ptr [eax], ecx
// 00511a2e  7406                 je 0x511a36
// 00511a30  8b4604               mov eax, dword ptr [esi + 4]
// 00511a33  830840               or dword ptr [eax], 0x40
// 00511a36  8b5604               mov edx, dword ptr [esi + 4]
// 00511a39  668b442414           mov ax, word ptr [esp + 0x14]
// 00511a3e  6689420a             mov word ptr [edx + 0xa], ax
// 00511a42  8b4e04               mov ecx, dword ptr [esi + 4]
// 00511a45  668b542418           mov dx, word ptr [esp + 0x18]
// 00511a4a  6689510c             mov word ptr [ecx + 0xc], dx
// 00511a4e  8b4604               mov eax, dword ptr [esi + 4]
// 00511a51  668b4c241c           mov cx, word ptr [esp + 0x1c]
// 00511a56  6689480e             mov word ptr [eax + 0xe], cx
// 00511a5a  8b5604               mov edx, dword ptr [esi + 4]
// 00511a5d  668b442420           mov ax, word ptr [esp + 0x20]
// 00511a62  66894210             mov word ptr [edx + 0x10], ax
// 00511a66  8b4e04               mov ecx, dword ptr [esi + 4]
// 00511a69  66c741080000         mov word ptr [ecx + 8], 0
// 00511a6f  8b5604               mov edx, dword ptr [esi + 4]
// 00511a72  6a02                 push 2
// 00511a74  68bcef7900           push 0x79efbc
// 00511a79  8bce                 mov ecx, esi
// 00511a7b  c7420400000000       mov dword ptr [edx + 4], 0
// 00511a82  e8b9feffff           call 0x511940
// 00511a87  6a02                 push 2
// 00511a89  68bcef7900           push 0x79efbc
// 00511a8e  8bce                 mov ecx, esi
// 00511a90  e8abfeffff           call 0x511940
// 00511a95  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00511a99  50                   push eax
// 00511a9a  8bce                 mov ecx, esi
// 00511a9c  e8fffeffff           call 0x5119a0
// 00511aa1  85ff                 test edi, edi
// 00511aa3  7416                 je 0x511abb
// 00511aa5  6a02                 push 2
// 00511aa7  8d4c242c             lea ecx, [esp + 0x2c]
// 00511aab  51                   push ecx
// 00511aac  8bce                 mov ecx, esi
// 00511aae  e88dfeffff           call 0x511940
// 00511ab3  57                   push edi
// 00511ab4  8bce                 mov ecx, esi
// 00511ab6  e8e5feffff           call 0x5119a0
// 00511abb  5f                   pop edi
// 00511abc  8bc6                 mov eax, esi
// 00511abe  5e                   pop esi
// 00511abf  c22000               ret 0x20
// library g3d-6.09/G3Dcpp\prompt.cpp (function ??0DialogTemplate@_internal@G3D@@QAE@PBDKHHHH0G@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
