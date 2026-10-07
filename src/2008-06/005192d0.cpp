// roc 2008-06 005192d0  unit: G3D::_internal::DialogTemplate  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005192d0
//
// 005192d0  56                   push esi
// 005192d1  b812000000           mov eax, 0x12
// 005192d6  8bf1                 mov esi, ecx
// 005192d8  57                   push edi
// 005192d9  50                   push eax
// 005192da  c7069c8b8200         mov dword ptr [esi], 0x828b9c
// 005192e0  89460c               mov dword ptr [esi + 0xc], eax
// 005192e3  894608               mov dword ptr [esi + 8], eax
// 005192e6  ff15b0288000         call dword ptr [0x8028b0]
// 005192ec  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005192f0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005192f4  83c404               add esp, 4
// 005192f7  894604               mov dword ptr [esi + 4], eax
// 005192fa  8908                 mov dword ptr [eax], ecx
// 005192fc  85ff                 test edi, edi
// 005192fe  7406                 je 0x519306
// 00519300  8b4604               mov eax, dword ptr [esi + 4]
// 00519303  830840               or dword ptr [eax], 0x40
// 00519306  8b5604               mov edx, dword ptr [esi + 4]
// 00519309  668b442414           mov ax, word ptr [esp + 0x14]
// 0051930e  6689420a             mov word ptr [edx + 0xa], ax
// 00519312  8b4e04               mov ecx, dword ptr [esi + 4]
// 00519315  668b542418           mov dx, word ptr [esp + 0x18]
// 0051931a  6689510c             mov word ptr [ecx + 0xc], dx
// 0051931e  8b4604               mov eax, dword ptr [esi + 4]
// 00519321  668b4c241c           mov cx, word ptr [esp + 0x1c]
// 00519326  6689480e             mov word ptr [eax + 0xe], cx
// 0051932a  8b5604               mov edx, dword ptr [esi + 4]
// 0051932d  668b442420           mov ax, word ptr [esp + 0x20]
// 00519332  66894210             mov word ptr [edx + 0x10], ax
// 00519336  8b4e04               mov ecx, dword ptr [esi + 4]
// 00519339  33d2                 xor edx, edx
// 0051933b  66895108             mov word ptr [ecx + 8], dx
// 0051933f  8b4604               mov eax, dword ptr [esi + 4]
// 00519342  6a02                 push 2
// 00519344  680c6b8200           push 0x826b0c
// 00519349  8bce                 mov ecx, esi
// 0051934b  895004               mov dword ptr [eax + 4], edx
// 0051934e  e8bdfeffff           call 0x519210
// 00519353  6a02                 push 2
// 00519355  680c6b8200           push 0x826b0c
// 0051935a  8bce                 mov ecx, esi
// 0051935c  e8affeffff           call 0x519210
// 00519361  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00519365  51                   push ecx
// 00519366  8bce                 mov ecx, esi
// 00519368  e803ffffff           call 0x519270
// 0051936d  85ff                 test edi, edi
// 0051936f  7416                 je 0x519387
// 00519371  6a02                 push 2
// 00519373  8d54242c             lea edx, [esp + 0x2c]
// 00519377  52                   push edx
// 00519378  8bce                 mov ecx, esi
// 0051937a  e891feffff           call 0x519210
// 0051937f  57                   push edi
// 00519380  8bce                 mov ecx, esi
// 00519382  e8e9feffff           call 0x519270
// 00519387  5f                   pop edi
// 00519388  8bc6                 mov eax, esi
// 0051938a  5e                   pop esi
// 0051938b  c22000               ret 0x20
// library g3d-6.09/G3Dcpp\prompt.cpp (function ??0DialogTemplate@_internal@G3D@@QAE@PBDKHHHH0G@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
