// roc 2007-08 00511ad0  unit: G3D::_internal::DialogTemplate  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00511ad0
//
// 00511ad0  83ec18               sub esp, 0x18
// 00511ad3  56                   push esi
// 00511ad4  57                   push edi
// 00511ad5  8bf1                 mov esi, ecx
// 00511ad7  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00511ada  81e703000080         and edi, 0x80000003
// 00511ae0  c744240880000000     mov dword ptr [esp + 8], 0x80
// 00511ae8  7905                 jns 0x511aef
// 00511aea  4f                   dec edi
// 00511aeb  83cffc               or edi, 0xfffffffc
// 00511aee  47                   inc edi
// 00511aef  7409                 je 0x511afa
// 00511af1  57                   push edi
// 00511af2  e809fcffff           call 0x511700
// 00511af7  017e0c               add dword ptr [esi + 0xc], edi
// 00511afa  668b4c2430           mov cx, word ptr [esp + 0x30]
// 00511aff  8b442428             mov eax, dword ptr [esp + 0x28]
// 00511b03  668b542434           mov dx, word ptr [esp + 0x34]
// 00511b08  66894c2414           mov word ptr [esp + 0x14], cx
// 00511b0d  668b4c243c           mov cx, word ptr [esp + 0x3c]
// 00511b12  8944240c             mov dword ptr [esp + 0xc], eax
// 00511b16  668b442438           mov ax, word ptr [esp + 0x38]
// 00511b1b  66894c241a           mov word ptr [esp + 0x1a], cx
// 00511b20  6a12                 push 0x12
// 00511b22  8d4c2410             lea ecx, [esp + 0x10]
// 00511b26  668954241a           mov word ptr [esp + 0x1a], dx
// 00511b2b  668b542444           mov dx, word ptr [esp + 0x44]
// 00511b30  668944241c           mov word ptr [esp + 0x1c], ax
// 00511b35  8b442430             mov eax, dword ptr [esp + 0x30]
// 00511b39  51                   push ecx
// 00511b3a  8bce                 mov ecx, esi
// 00511b3c  6689542424           mov word ptr [esp + 0x24], dx
// 00511b41  89442418             mov dword ptr [esp + 0x18], eax
// 00511b45  e8f6fdffff           call 0x511940
// 00511b4a  6a02                 push 2
// 00511b4c  8d542444             lea edx, [esp + 0x44]
// 00511b50  52                   push edx
// 00511b51  8bce                 mov ecx, esi
// 00511b53  c7442448ffff0000     mov dword ptr [esp + 0x48], 0xffff
// 00511b5b  e8e0fdffff           call 0x511940
// 00511b60  6a02                 push 2
// 00511b62  8d44240c             lea eax, [esp + 0xc]
// 00511b66  50                   push eax
// 00511b67  8bce                 mov ecx, esi
// 00511b69  e8d2fdffff           call 0x511940
// 00511b6e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00511b72  51                   push ecx
// 00511b73  8bce                 mov ecx, esi
// 00511b75  e826feffff           call 0x5119a0
// 00511b7a  8b4604               mov eax, dword ptr [esi + 4]
// 00511b7d  6683400801           add word ptr [eax + 8], 1
// 00511b82  6a02                 push 2
// 00511b84  8d542444             lea edx, [esp + 0x44]
// 00511b88  52                   push edx
// 00511b89  8bce                 mov ecx, esi
// 00511b8b  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00511b93  e8a8fdffff           call 0x511940
// 00511b98  5f                   pop edi
// 00511b99  5e                   pop esi
// 00511b9a  83c418               add esp, 0x18
// 00511b9d  c22000               ret 0x20
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AddButton@DialogTemplate@_internal@G3D@@QAEXPBDKKHHHHG@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
