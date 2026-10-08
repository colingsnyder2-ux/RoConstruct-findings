// roc 2009-12 005fea50  unit: G3D::_internal::DialogTemplate  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fea50
//
// 005fea50  56                   push esi
// 005fea51  b812000000           mov eax, 0x12
// 005fea56  8bf1                 mov esi, ecx
// 005fea58  57                   push edi
// 005fea59  50                   push eax
// 005fea5a  c706242f9c00         mov dword ptr [esi], 0x9c2f24
// 005fea60  89460c               mov dword ptr [esi + 0xc], eax
// 005fea63  894608               mov dword ptr [esi + 8], eax
// 005fea66  ff1578b79800         call dword ptr [0x98b778]
// 005fea6c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005fea70  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005fea74  83c404               add esp, 4
// 005fea77  894604               mov dword ptr [esi + 4], eax
// 005fea7a  8908                 mov dword ptr [eax], ecx
// 005fea7c  85ff                 test edi, edi
// 005fea7e  7406                 je 0x5fea86
// 005fea80  8b4604               mov eax, dword ptr [esi + 4]
// 005fea83  830840               or dword ptr [eax], 0x40
// 005fea86  8b5604               mov edx, dword ptr [esi + 4]
// 005fea89  668b442414           mov ax, word ptr [esp + 0x14]
// 005fea8e  6689420a             mov word ptr [edx + 0xa], ax
// 005fea92  8b4e04               mov ecx, dword ptr [esi + 4]
// 005fea95  668b542418           mov dx, word ptr [esp + 0x18]
// 005fea9a  6689510c             mov word ptr [ecx + 0xc], dx
// 005fea9e  8b4604               mov eax, dword ptr [esi + 4]
// 005feaa1  668b4c241c           mov cx, word ptr [esp + 0x1c]
// 005feaa6  6689480e             mov word ptr [eax + 0xe], cx
// 005feaaa  8b5604               mov edx, dword ptr [esi + 4]
// 005feaad  668b442420           mov ax, word ptr [esp + 0x20]
// 005feab2  66894210             mov word ptr [edx + 0x10], ax
// 005feab6  8b4e04               mov ecx, dword ptr [esi + 4]
// 005feab9  33d2                 xor edx, edx
// 005feabb  66895108             mov word ptr [ecx + 8], dx
// 005feabf  8b4604               mov eax, dword ptr [esi + 4]
// 005feac2  6a02                 push 2
// 005feac4  687cb49a00           push 0x9ab47c
// 005feac9  8bce                 mov ecx, esi
// 005feacb  895004               mov dword ptr [eax + 4], edx
// 005feace  e8bdfeffff           call 0x5fe990
// 005fead3  6a02                 push 2
// 005fead5  687cb49a00           push 0x9ab47c
// 005feada  8bce                 mov ecx, esi
// 005feadc  e8affeffff           call 0x5fe990
// 005feae1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005feae5  51                   push ecx
// 005feae6  8bce                 mov ecx, esi
// 005feae8  e803ffffff           call 0x5fe9f0
// 005feaed  85ff                 test edi, edi
// 005feaef  7416                 je 0x5feb07
// 005feaf1  6a02                 push 2
// 005feaf3  8d54242c             lea edx, [esp + 0x2c]
// 005feaf7  52                   push edx
// 005feaf8  8bce                 mov ecx, esi
// 005feafa  e891feffff           call 0x5fe990
// 005feaff  57                   push edi
// 005feb00  8bce                 mov ecx, esi
// 005feb02  e8e9feffff           call 0x5fe9f0
// 005feb07  5f                   pop edi
// 005feb08  8bc6                 mov eax, esi
// 005feb0a  5e                   pop esi
// 005feb0b  c22000               ret 0x20
// library g3d-6.09/G3Dcpp\prompt.cpp (function ??0DialogTemplate@_internal@G3D@@QAE@PBDKHHHH0G@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
