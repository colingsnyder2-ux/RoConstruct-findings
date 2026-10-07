// roc 2008-06 00519460  unit: G3D::_internal::DialogTemplate  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00519460
//
// 00519460  83ec18               sub esp, 0x18
// 00519463  56                   push esi
// 00519464  57                   push edi
// 00519465  8bf1                 mov esi, ecx
// 00519467  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0051946a  81e703000080         and edi, 0x80000003
// 00519470  c744240881000000     mov dword ptr [esp + 8], 0x81
// 00519478  7905                 jns 0x51947f
// 0051947a  4f                   dec edi
// 0051947b  83cffc               or edi, 0xfffffffc
// 0051947e  47                   inc edi
// 0051947f  7409                 je 0x51948a
// 00519481  57                   push edi
// 00519482  e849fbffff           call 0x518fd0
// 00519487  017e0c               add dword ptr [esi + 0xc], edi
// 0051948a  668b4c2430           mov cx, word ptr [esp + 0x30]
// 0051948f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00519493  668b542434           mov dx, word ptr [esp + 0x34]
// 00519498  66894c2414           mov word ptr [esp + 0x14], cx
// 0051949d  668b4c243c           mov cx, word ptr [esp + 0x3c]
// 005194a2  8944240c             mov dword ptr [esp + 0xc], eax
// 005194a6  668b442438           mov ax, word ptr [esp + 0x38]
// 005194ab  66894c241a           mov word ptr [esp + 0x1a], cx
// 005194b0  6a12                 push 0x12
// 005194b2  8d4c2410             lea ecx, [esp + 0x10]
// 005194b6  668954241a           mov word ptr [esp + 0x1a], dx
// 005194bb  668b542444           mov dx, word ptr [esp + 0x44]
// 005194c0  668944241c           mov word ptr [esp + 0x1c], ax
// 005194c5  8b442430             mov eax, dword ptr [esp + 0x30]
// 005194c9  51                   push ecx
// 005194ca  8bce                 mov ecx, esi
// 005194cc  6689542424           mov word ptr [esp + 0x24], dx
// 005194d1  89442418             mov dword ptr [esp + 0x18], eax
// 005194d5  e836fdffff           call 0x519210
// 005194da  6a02                 push 2
// 005194dc  8d542444             lea edx, [esp + 0x44]
// 005194e0  52                   push edx
// 005194e1  8bce                 mov ecx, esi
// 005194e3  c7442448ffff0000     mov dword ptr [esp + 0x48], 0xffff
// 005194eb  e820fdffff           call 0x519210
// 005194f0  6a02                 push 2
// 005194f2  8d44240c             lea eax, [esp + 0xc]
// 005194f6  50                   push eax
// 005194f7  8bce                 mov ecx, esi
// 005194f9  e812fdffff           call 0x519210
// 005194fe  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00519502  51                   push ecx
// 00519503  8bce                 mov ecx, esi
// 00519505  e866fdffff           call 0x519270
// 0051950a  8b4604               mov eax, dword ptr [esi + 4]
// 0051950d  66ff4008             inc word ptr [eax + 8]
// 00519511  6a02                 push 2
// 00519513  8d542444             lea edx, [esp + 0x44]
// 00519517  52                   push edx
// 00519518  8bce                 mov ecx, esi
// 0051951a  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00519522  e8e9fcffff           call 0x519210
// 00519527  5f                   pop edi
// 00519528  5e                   pop esi
// 00519529  83c418               add esp, 0x18
// 0051952c  c22000               ret 0x20
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AddEditBox@DialogTemplate@_internal@G3D@@QAEXPBDKKHHHHG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
