// roc 2010-06 005603c0  unit: G3D::_internal::DialogTemplate  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005603c0
//
// 005603c0  56                   push esi
// 005603c1  b812000000           mov eax, 0x12
// 005603c6  8bf1                 mov esi, ecx
// 005603c8  57                   push edi
// 005603c9  50                   push eax
// 005603ca  c7067c0ca200         mov dword ptr [esi], 0xa20c7c
// 005603d0  89460c               mov dword ptr [esi + 0xc], eax
// 005603d3  894608               mov dword ptr [esi + 8], eax
// 005603d6  ff15c8a89e00         call dword ptr [0x9ea8c8]
// 005603dc  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005603e0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005603e4  83c404               add esp, 4
// 005603e7  894604               mov dword ptr [esi + 4], eax
// 005603ea  8908                 mov dword ptr [eax], ecx
// 005603ec  85ff                 test edi, edi
// 005603ee  7406                 je 0x5603f6
// 005603f0  8b4604               mov eax, dword ptr [esi + 4]
// 005603f3  830840               or dword ptr [eax], 0x40
// 005603f6  8b5604               mov edx, dword ptr [esi + 4]
// 005603f9  668b442414           mov ax, word ptr [esp + 0x14]
// 005603fe  6689420a             mov word ptr [edx + 0xa], ax
// 00560402  8b4e04               mov ecx, dword ptr [esi + 4]
// 00560405  668b542418           mov dx, word ptr [esp + 0x18]
// 0056040a  6689510c             mov word ptr [ecx + 0xc], dx
// 0056040e  8b4604               mov eax, dword ptr [esi + 4]
// 00560411  668b4c241c           mov cx, word ptr [esp + 0x1c]
// 00560416  6689480e             mov word ptr [eax + 0xe], cx
// 0056041a  8b5604               mov edx, dword ptr [esi + 4]
// 0056041d  668b442420           mov ax, word ptr [esp + 0x20]
// 00560422  66894210             mov word ptr [edx + 0x10], ax
// 00560426  8b4e04               mov ecx, dword ptr [esi + 4]
// 00560429  33d2                 xor edx, edx
// 0056042b  66895108             mov word ptr [ecx + 8], dx
// 0056042f  8b4604               mov eax, dword ptr [esi + 4]
// 00560432  6a02                 push 2
// 00560434  6844c2a000           push 0xa0c244
// 00560439  8bce                 mov ecx, esi
// 0056043b  895004               mov dword ptr [eax + 4], edx
// 0056043e  e8bdfeffff           call 0x560300
// 00560443  6a02                 push 2
// 00560445  6844c2a000           push 0xa0c244
// 0056044a  8bce                 mov ecx, esi
// 0056044c  e8affeffff           call 0x560300
// 00560451  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00560455  51                   push ecx
// 00560456  8bce                 mov ecx, esi
// 00560458  e803ffffff           call 0x560360
// 0056045d  85ff                 test edi, edi
// 0056045f  7416                 je 0x560477
// 00560461  6a02                 push 2
// 00560463  8d54242c             lea edx, [esp + 0x2c]
// 00560467  52                   push edx
// 00560468  8bce                 mov ecx, esi
// 0056046a  e891feffff           call 0x560300
// 0056046f  57                   push edi
// 00560470  8bce                 mov ecx, esi
// 00560472  e8e9feffff           call 0x560360
// 00560477  5f                   pop edi
// 00560478  8bc6                 mov eax, esi
// 0056047a  5e                   pop esi
// 0056047b  c22000               ret 0x20
// library g3d-6.09/G3Dcpp\prompt.cpp (function ??0DialogTemplate@_internal@G3D@@QAE@PBDKHHHH0G@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
