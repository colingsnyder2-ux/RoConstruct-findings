// roc 2010-06 00560480  unit: G3D::_internal::DialogTemplate  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00560480
//
// 00560480  83ec18               sub esp, 0x18
// 00560483  56                   push esi
// 00560484  57                   push edi
// 00560485  8bf1                 mov esi, ecx
// 00560487  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0056048a  81e703000080         and edi, 0x80000003
// 00560490  c744240880000000     mov dword ptr [esp + 8], 0x80
// 00560498  7905                 jns 0x56049f
// 0056049a  4f                   dec edi
// 0056049b  83cffc               or edi, 0xfffffffc
// 0056049e  47                   inc edi
// 0056049f  7409                 je 0x5604aa
// 005604a1  57                   push edi
// 005604a2  e819fcffff           call 0x5600c0
// 005604a7  017e0c               add dword ptr [esi + 0xc], edi
// 005604aa  668b4c2430           mov cx, word ptr [esp + 0x30]
// 005604af  8b442428             mov eax, dword ptr [esp + 0x28]
// 005604b3  668b542434           mov dx, word ptr [esp + 0x34]
// 005604b8  66894c2414           mov word ptr [esp + 0x14], cx
// 005604bd  668b4c243c           mov cx, word ptr [esp + 0x3c]
// 005604c2  8944240c             mov dword ptr [esp + 0xc], eax
// 005604c6  668b442438           mov ax, word ptr [esp + 0x38]
// 005604cb  66894c241a           mov word ptr [esp + 0x1a], cx
// 005604d0  6a12                 push 0x12
// 005604d2  8d4c2410             lea ecx, [esp + 0x10]
// 005604d6  668954241a           mov word ptr [esp + 0x1a], dx
// 005604db  668b542444           mov dx, word ptr [esp + 0x44]
// 005604e0  668944241c           mov word ptr [esp + 0x1c], ax
// 005604e5  8b442430             mov eax, dword ptr [esp + 0x30]
// 005604e9  51                   push ecx
// 005604ea  8bce                 mov ecx, esi
// 005604ec  6689542424           mov word ptr [esp + 0x24], dx
// 005604f1  89442418             mov dword ptr [esp + 0x18], eax
// 005604f5  e806feffff           call 0x560300
// 005604fa  6a02                 push 2
// 005604fc  8d542444             lea edx, [esp + 0x44]
// 00560500  52                   push edx
// 00560501  8bce                 mov ecx, esi
// 00560503  c7442448ffff0000     mov dword ptr [esp + 0x48], 0xffff
// 0056050b  e8f0fdffff           call 0x560300
// 00560510  6a02                 push 2
// 00560512  8d44240c             lea eax, [esp + 0xc]
// 00560516  50                   push eax
// 00560517  8bce                 mov ecx, esi
// 00560519  e8e2fdffff           call 0x560300
// 0056051e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00560522  51                   push ecx
// 00560523  8bce                 mov ecx, esi
// 00560525  e836feffff           call 0x560360
// 0056052a  8b4604               mov eax, dword ptr [esi + 4]
// 0056052d  66ff4008             inc word ptr [eax + 8]
// 00560531  6a02                 push 2
// 00560533  8d542444             lea edx, [esp + 0x44]
// 00560537  52                   push edx
// 00560538  8bce                 mov ecx, esi
// 0056053a  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00560542  e8b9fdffff           call 0x560300
// 00560547  5f                   pop edi
// 00560548  5e                   pop esi
// 00560549  83c418               add esp, 0x18
// 0056054c  c22000               ret 0x20
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AddButton@DialogTemplate@_internal@G3D@@QAEXPBDKKHHHHG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
