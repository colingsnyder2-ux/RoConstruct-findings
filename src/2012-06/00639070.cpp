// from server: 100% by auto
// roc 2012-06 00639070  unit: G3D::_internal::DialogTemplate  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00639070
//
// 00639070  56                   push esi
// 00639071  b812000000           mov eax, 0x12
// 00639076  8bf1                 mov esi, ecx
// 00639078  57                   push edi
// 00639079  50                   push eax
// 0063907a  c706403eb800         mov dword ptr [esi], 0xb83e40
// 00639080  89460c               mov dword ptr [esi + 0xc], eax
// 00639083  894608               mov dword ptr [esi + 8], eax
// 00639086  ff15f829b200         call dword ptr [0xb229f8]
// 0063908c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00639090  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00639094  83c404               add esp, 4
// 00639097  894604               mov dword ptr [esi + 4], eax
// 0063909a  8908                 mov dword ptr [eax], ecx
// 0063909c  85ff                 test edi, edi
// 0063909e  7406                 je 0x6390a6
// 006390a0  8b4604               mov eax, dword ptr [esi + 4]
// 006390a3  830840               or dword ptr [eax], 0x40
// 006390a6  8b5604               mov edx, dword ptr [esi + 4]
// 006390a9  668b442414           mov ax, word ptr [esp + 0x14]
// 006390ae  6689420a             mov word ptr [edx + 0xa], ax
// 006390b2  8b4e04               mov ecx, dword ptr [esi + 4]
// 006390b5  668b542418           mov dx, word ptr [esp + 0x18]
// 006390ba  6689510c             mov word ptr [ecx + 0xc], dx
// 006390be  8b4604               mov eax, dword ptr [esi + 4]
// 006390c1  668b4c241c           mov cx, word ptr [esp + 0x1c]
// 006390c6  6689480e             mov word ptr [eax + 0xe], cx
// 006390ca  8b5604               mov edx, dword ptr [esi + 4]
// 006390cd  668b442420           mov ax, word ptr [esp + 0x20]
// 006390d2  66894210             mov word ptr [edx + 0x10], ax
// 006390d6  8b4e04               mov ecx, dword ptr [esi + 4]
// 006390d9  33d2                 xor edx, edx
// 006390db  66895108             mov word ptr [ecx + 8], dx
// 006390df  8b4604               mov eax, dword ptr [esi + 4]
// 006390e2  6a02                 push 2
// 006390e4  6824c9b400           push 0xb4c924
// 006390e9  8bce                 mov ecx, esi
// 006390eb  895004               mov dword ptr [eax + 4], edx
// 006390ee  e8bdfeffff           call 0x638fb0
// 006390f3  6a02                 push 2
// 006390f5  6824c9b400           push 0xb4c924
// 006390fa  8bce                 mov ecx, esi
// 006390fc  e8affeffff           call 0x638fb0
// 00639101  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00639105  51                   push ecx
// 00639106  8bce                 mov ecx, esi
// 00639108  e803ffffff           call 0x639010
// 0063910d  85ff                 test edi, edi
// 0063910f  7416                 je 0x639127
// 00639111  6a02                 push 2
// 00639113  8d54242c             lea edx, [esp + 0x2c]
// 00639117  52                   push edx
// 00639118  8bce                 mov ecx, esi
// 0063911a  e891feffff           call 0x638fb0
// 0063911f  57                   push edi
// 00639120  8bce                 mov ecx, esi
// 00639122  e8e9feffff           call 0x639010
// 00639127  5f                   pop edi
// 00639128  8bc6                 mov eax, esi
// 0063912a  5e                   pop esi
// 0063912b  c22000               ret 0x20
// library g3d-6.09/G3Dcpp\prompt.cpp (function ??0DialogTemplate@_internal@G3D@@QAE@PBDKHHHH0G@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
