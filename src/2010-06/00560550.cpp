// roc 2010-06 00560550  unit: G3D::_internal::DialogTemplate  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00560550
//
// 00560550  83ec18               sub esp, 0x18
// 00560553  56                   push esi
// 00560554  57                   push edi
// 00560555  8bf1                 mov esi, ecx
// 00560557  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0056055a  81e703000080         and edi, 0x80000003
// 00560560  c744240881000000     mov dword ptr [esp + 8], 0x81
// 00560568  7905                 jns 0x56056f
// 0056056a  4f                   dec edi
// 0056056b  83cffc               or edi, 0xfffffffc
// 0056056e  47                   inc edi
// 0056056f  7409                 je 0x56057a
// 00560571  57                   push edi
// 00560572  e849fbffff           call 0x5600c0
// 00560577  017e0c               add dword ptr [esi + 0xc], edi
// 0056057a  668b4c2430           mov cx, word ptr [esp + 0x30]
// 0056057f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00560583  668b542434           mov dx, word ptr [esp + 0x34]
// 00560588  66894c2414           mov word ptr [esp + 0x14], cx
// 0056058d  668b4c243c           mov cx, word ptr [esp + 0x3c]
// 00560592  8944240c             mov dword ptr [esp + 0xc], eax
// 00560596  668b442438           mov ax, word ptr [esp + 0x38]
// 0056059b  66894c241a           mov word ptr [esp + 0x1a], cx
// 005605a0  6a12                 push 0x12
// 005605a2  8d4c2410             lea ecx, [esp + 0x10]
// 005605a6  668954241a           mov word ptr [esp + 0x1a], dx
// 005605ab  668b542444           mov dx, word ptr [esp + 0x44]
// 005605b0  668944241c           mov word ptr [esp + 0x1c], ax
// 005605b5  8b442430             mov eax, dword ptr [esp + 0x30]
// 005605b9  51                   push ecx
// 005605ba  8bce                 mov ecx, esi
// 005605bc  6689542424           mov word ptr [esp + 0x24], dx
// 005605c1  89442418             mov dword ptr [esp + 0x18], eax
// 005605c5  e836fdffff           call 0x560300
// 005605ca  6a02                 push 2
// 005605cc  8d542444             lea edx, [esp + 0x44]
// 005605d0  52                   push edx
// 005605d1  8bce                 mov ecx, esi
// 005605d3  c7442448ffff0000     mov dword ptr [esp + 0x48], 0xffff
// 005605db  e820fdffff           call 0x560300
// 005605e0  6a02                 push 2
// 005605e2  8d44240c             lea eax, [esp + 0xc]
// 005605e6  50                   push eax
// 005605e7  8bce                 mov ecx, esi
// 005605e9  e812fdffff           call 0x560300
// 005605ee  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005605f2  51                   push ecx
// 005605f3  8bce                 mov ecx, esi
// 005605f5  e866fdffff           call 0x560360
// 005605fa  8b4604               mov eax, dword ptr [esi + 4]
// 005605fd  66ff4008             inc word ptr [eax + 8]
// 00560601  6a02                 push 2
// 00560603  8d542444             lea edx, [esp + 0x44]
// 00560607  52                   push edx
// 00560608  8bce                 mov ecx, esi
// 0056060a  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00560612  e8e9fcffff           call 0x560300
// 00560617  5f                   pop edi
// 00560618  5e                   pop esi
// 00560619  83c418               add esp, 0x18
// 0056061c  c22000               ret 0x20
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AddEditBox@DialogTemplate@_internal@G3D@@QAEXPBDKKHHHHG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
