// from server: 100% by auto
// roc 2011-06 0054bbc0  unit: G3D::_internal::DialogTemplate  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0054bbc0
//
// 0054bbc0  83ec18               sub esp, 0x18
// 0054bbc3  56                   push esi
// 0054bbc4  57                   push edi
// 0054bbc5  8bf1                 mov esi, ecx
// 0054bbc7  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0054bbca  81e703000080         and edi, 0x80000003
// 0054bbd0  c744240881000000     mov dword ptr [esp + 8], 0x81
// 0054bbd8  7905                 jns 0x54bbdf
// 0054bbda  4f                   dec edi
// 0054bbdb  83cffc               or edi, 0xfffffffc
// 0054bbde  47                   inc edi
// 0054bbdf  7409                 je 0x54bbea
// 0054bbe1  57                   push edi
// 0054bbe2  e849fbffff           call 0x54b730
// 0054bbe7  017e0c               add dword ptr [esi + 0xc], edi
// 0054bbea  668b4c2430           mov cx, word ptr [esp + 0x30]
// 0054bbef  8b442428             mov eax, dword ptr [esp + 0x28]
// 0054bbf3  668b542434           mov dx, word ptr [esp + 0x34]
// 0054bbf8  66894c2414           mov word ptr [esp + 0x14], cx
// 0054bbfd  668b4c243c           mov cx, word ptr [esp + 0x3c]
// 0054bc02  8944240c             mov dword ptr [esp + 0xc], eax
// 0054bc06  668b442438           mov ax, word ptr [esp + 0x38]
// 0054bc0b  66894c241a           mov word ptr [esp + 0x1a], cx
// 0054bc10  6a12                 push 0x12
// 0054bc12  8d4c2410             lea ecx, [esp + 0x10]
// 0054bc16  668954241a           mov word ptr [esp + 0x1a], dx
// 0054bc1b  668b542444           mov dx, word ptr [esp + 0x44]
// 0054bc20  668944241c           mov word ptr [esp + 0x1c], ax
// 0054bc25  8b442430             mov eax, dword ptr [esp + 0x30]
// 0054bc29  51                   push ecx
// 0054bc2a  8bce                 mov ecx, esi
// 0054bc2c  6689542424           mov word ptr [esp + 0x24], dx
// 0054bc31  89442418             mov dword ptr [esp + 0x18], eax
// 0054bc35  e836fdffff           call 0x54b970
// 0054bc3a  6a02                 push 2
// 0054bc3c  8d542444             lea edx, [esp + 0x44]
// 0054bc40  52                   push edx
// 0054bc41  8bce                 mov ecx, esi
// 0054bc43  c7442448ffff0000     mov dword ptr [esp + 0x48], 0xffff
// 0054bc4b  e820fdffff           call 0x54b970
// 0054bc50  6a02                 push 2
// 0054bc52  8d44240c             lea eax, [esp + 0xc]
// 0054bc56  50                   push eax
// 0054bc57  8bce                 mov ecx, esi
// 0054bc59  e812fdffff           call 0x54b970
// 0054bc5e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054bc62  51                   push ecx
// 0054bc63  8bce                 mov ecx, esi
// 0054bc65  e866fdffff           call 0x54b9d0
// 0054bc6a  8b4604               mov eax, dword ptr [esi + 4]
// 0054bc6d  66ff4008             inc word ptr [eax + 8]
// 0054bc71  6a02                 push 2
// 0054bc73  8d542444             lea edx, [esp + 0x44]
// 0054bc77  52                   push edx
// 0054bc78  8bce                 mov ecx, esi
// 0054bc7a  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0054bc82  e8e9fcffff           call 0x54b970
// 0054bc87  5f                   pop edi
// 0054bc88  5e                   pop esi
// 0054bc89  83c418               add esp, 0x18
// 0054bc8c  c22000               ret 0x20
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AddEditBox@DialogTemplate@_internal@G3D@@QAEXPBDKKHHHHG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
