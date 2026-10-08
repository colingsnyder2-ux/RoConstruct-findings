// from server: 100% by auto
// roc 2009-06 0057cc70  unit: G3D::_internal::DialogTemplate  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057cc70
//
// 0057cc70  56                   push esi
// 0057cc71  b812000000           mov eax, 0x12
// 0057cc76  8bf1                 mov esi, ecx
// 0057cc78  57                   push edi
// 0057cc79  50                   push eax
// 0057cc7a  c7067cc08c00         mov dword ptr [esi], 0x8cc07c
// 0057cc80  89460c               mov dword ptr [esi + 0xc], eax
// 0057cc83  894608               mov dword ptr [esi + 8], eax
// 0057cc86  ff1594e98900         call dword ptr [0x89e994]
// 0057cc8c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0057cc90  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057cc94  83c404               add esp, 4
// 0057cc97  894604               mov dword ptr [esi + 4], eax
// 0057cc9a  8908                 mov dword ptr [eax], ecx
// 0057cc9c  85ff                 test edi, edi
// 0057cc9e  7406                 je 0x57cca6
// 0057cca0  8b4604               mov eax, dword ptr [esi + 4]
// 0057cca3  830840               or dword ptr [eax], 0x40
// 0057cca6  8b5604               mov edx, dword ptr [esi + 4]
// 0057cca9  668b442414           mov ax, word ptr [esp + 0x14]
// 0057ccae  6689420a             mov word ptr [edx + 0xa], ax
// 0057ccb2  8b4e04               mov ecx, dword ptr [esi + 4]
// 0057ccb5  668b542418           mov dx, word ptr [esp + 0x18]
// 0057ccba  6689510c             mov word ptr [ecx + 0xc], dx
// 0057ccbe  8b4604               mov eax, dword ptr [esi + 4]
// 0057ccc1  668b4c241c           mov cx, word ptr [esp + 0x1c]
// 0057ccc6  6689480e             mov word ptr [eax + 0xe], cx
// 0057ccca  8b5604               mov edx, dword ptr [esi + 4]
// 0057cccd  668b442420           mov ax, word ptr [esp + 0x20]
// 0057ccd2  66894210             mov word ptr [edx + 0x10], ax
// 0057ccd6  8b4e04               mov ecx, dword ptr [esi + 4]
// 0057ccd9  33d2                 xor edx, edx
// 0057ccdb  66895108             mov word ptr [ecx + 8], dx
// 0057ccdf  8b4604               mov eax, dword ptr [esi + 4]
// 0057cce2  6a02                 push 2
// 0057cce4  680c728b00           push 0x8b720c
// 0057cce9  8bce                 mov ecx, esi
// 0057cceb  895004               mov dword ptr [eax + 4], edx
// 0057ccee  e8bdfeffff           call 0x57cbb0
// 0057ccf3  6a02                 push 2
// 0057ccf5  680c728b00           push 0x8b720c
// 0057ccfa  8bce                 mov ecx, esi
// 0057ccfc  e8affeffff           call 0x57cbb0
// 0057cd01  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057cd05  51                   push ecx
// 0057cd06  8bce                 mov ecx, esi
// 0057cd08  e803ffffff           call 0x57cc10
// 0057cd0d  85ff                 test edi, edi
// 0057cd0f  7416                 je 0x57cd27
// 0057cd11  6a02                 push 2
// 0057cd13  8d54242c             lea edx, [esp + 0x2c]
// 0057cd17  52                   push edx
// 0057cd18  8bce                 mov ecx, esi
// 0057cd1a  e891feffff           call 0x57cbb0
// 0057cd1f  57                   push edi
// 0057cd20  8bce                 mov ecx, esi
// 0057cd22  e8e9feffff           call 0x57cc10
// 0057cd27  5f                   pop edi
// 0057cd28  8bc6                 mov eax, esi
// 0057cd2a  5e                   pop esi
// 0057cd2b  c22000               ret 0x20
// library g3d-6.09/G3Dcpp\prompt.cpp (function ??0DialogTemplate@_internal@G3D@@QAE@PBDKHHHH0G@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
