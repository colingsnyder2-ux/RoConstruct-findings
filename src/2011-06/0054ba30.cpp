// roc 2011-06 0054ba30  unit: G3D::_internal::DialogTemplate  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0054ba30
//
// 0054ba30  56                   push esi
// 0054ba31  b812000000           mov eax, 0x12
// 0054ba36  8bf1                 mov esi, ecx
// 0054ba38  57                   push edi
// 0054ba39  50                   push eax
// 0054ba3a  c706e0ffa700         mov dword ptr [esi], 0xa7ffe0
// 0054ba40  89460c               mov dword ptr [esi + 0xc], eax
// 0054ba43  894608               mov dword ptr [esi + 8], eax
// 0054ba46  ff15400aa400         call dword ptr [0xa40a40]
// 0054ba4c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0054ba50  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0054ba54  83c404               add esp, 4
// 0054ba57  894604               mov dword ptr [esi + 4], eax
// 0054ba5a  8908                 mov dword ptr [eax], ecx
// 0054ba5c  85ff                 test edi, edi
// 0054ba5e  7406                 je 0x54ba66
// 0054ba60  8b4604               mov eax, dword ptr [esi + 4]
// 0054ba63  830840               or dword ptr [eax], 0x40
// 0054ba66  8b5604               mov edx, dword ptr [esi + 4]
// 0054ba69  668b442414           mov ax, word ptr [esp + 0x14]
// 0054ba6e  6689420a             mov word ptr [edx + 0xa], ax
// 0054ba72  8b4e04               mov ecx, dword ptr [esi + 4]
// 0054ba75  668b542418           mov dx, word ptr [esp + 0x18]
// 0054ba7a  6689510c             mov word ptr [ecx + 0xc], dx
// 0054ba7e  8b4604               mov eax, dword ptr [esi + 4]
// 0054ba81  668b4c241c           mov cx, word ptr [esp + 0x1c]
// 0054ba86  6689480e             mov word ptr [eax + 0xe], cx
// 0054ba8a  8b5604               mov edx, dword ptr [esi + 4]
// 0054ba8d  668b442420           mov ax, word ptr [esp + 0x20]
// 0054ba92  66894210             mov word ptr [edx + 0x10], ax
// 0054ba96  8b4e04               mov ecx, dword ptr [esi + 4]
// 0054ba99  33d2                 xor edx, edx
// 0054ba9b  66895108             mov word ptr [ecx + 8], dx
// 0054ba9f  8b4604               mov eax, dword ptr [esi + 4]
// 0054baa2  6a02                 push 2
// 0054baa4  68fcf3a700           push 0xa7f3fc
// 0054baa9  8bce                 mov ecx, esi
// 0054baab  895004               mov dword ptr [eax + 4], edx
// 0054baae  e8bdfeffff           call 0x54b970
// 0054bab3  6a02                 push 2
// 0054bab5  68fcf3a700           push 0xa7f3fc
// 0054baba  8bce                 mov ecx, esi
// 0054babc  e8affeffff           call 0x54b970
// 0054bac1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054bac5  51                   push ecx
// 0054bac6  8bce                 mov ecx, esi
// 0054bac8  e803ffffff           call 0x54b9d0
// 0054bacd  85ff                 test edi, edi
// 0054bacf  7416                 je 0x54bae7
// 0054bad1  6a02                 push 2
// 0054bad3  8d54242c             lea edx, [esp + 0x2c]
// 0054bad7  52                   push edx
// 0054bad8  8bce                 mov ecx, esi
// 0054bada  e891feffff           call 0x54b970
// 0054badf  57                   push edi
// 0054bae0  8bce                 mov ecx, esi
// 0054bae2  e8e9feffff           call 0x54b9d0
// 0054bae7  5f                   pop edi
// 0054bae8  8bc6                 mov eax, esi
// 0054baea  5e                   pop esi
// 0054baeb  c22000               ret 0x20
// library g3d-6.09/G3Dcpp\prompt.cpp (function ??0DialogTemplate@_internal@G3D@@QAE@PBDKHHHH0G@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
