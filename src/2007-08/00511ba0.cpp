// roc 2007-08 00511ba0  unit: G3D::_internal::DialogTemplate  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00511ba0
//
// 00511ba0  83ec18               sub esp, 0x18
// 00511ba3  56                   push esi
// 00511ba4  57                   push edi
// 00511ba5  8bf1                 mov esi, ecx
// 00511ba7  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00511baa  81e703000080         and edi, 0x80000003
// 00511bb0  c744240881000000     mov dword ptr [esp + 8], 0x81
// 00511bb8  7905                 jns 0x511bbf
// 00511bba  4f                   dec edi
// 00511bbb  83cffc               or edi, 0xfffffffc
// 00511bbe  47                   inc edi
// 00511bbf  7409                 je 0x511bca
// 00511bc1  57                   push edi
// 00511bc2  e839fbffff           call 0x511700
// 00511bc7  017e0c               add dword ptr [esi + 0xc], edi
// 00511bca  668b4c2430           mov cx, word ptr [esp + 0x30]
// 00511bcf  8b442428             mov eax, dword ptr [esp + 0x28]
// 00511bd3  668b542434           mov dx, word ptr [esp + 0x34]
// 00511bd8  66894c2414           mov word ptr [esp + 0x14], cx
// 00511bdd  668b4c243c           mov cx, word ptr [esp + 0x3c]
// 00511be2  8944240c             mov dword ptr [esp + 0xc], eax
// 00511be6  668b442438           mov ax, word ptr [esp + 0x38]
// 00511beb  66894c241a           mov word ptr [esp + 0x1a], cx
// 00511bf0  6a12                 push 0x12
// 00511bf2  8d4c2410             lea ecx, [esp + 0x10]
// 00511bf6  668954241a           mov word ptr [esp + 0x1a], dx
// 00511bfb  668b542444           mov dx, word ptr [esp + 0x44]
// 00511c00  668944241c           mov word ptr [esp + 0x1c], ax
// 00511c05  8b442430             mov eax, dword ptr [esp + 0x30]
// 00511c09  51                   push ecx
// 00511c0a  8bce                 mov ecx, esi
// 00511c0c  6689542424           mov word ptr [esp + 0x24], dx
// 00511c11  89442418             mov dword ptr [esp + 0x18], eax
// 00511c15  e826fdffff           call 0x511940
// 00511c1a  6a02                 push 2
// 00511c1c  8d542444             lea edx, [esp + 0x44]
// 00511c20  52                   push edx
// 00511c21  8bce                 mov ecx, esi
// 00511c23  c7442448ffff0000     mov dword ptr [esp + 0x48], 0xffff
// 00511c2b  e810fdffff           call 0x511940
// 00511c30  6a02                 push 2
// 00511c32  8d44240c             lea eax, [esp + 0xc]
// 00511c36  50                   push eax
// 00511c37  8bce                 mov ecx, esi
// 00511c39  e802fdffff           call 0x511940
// 00511c3e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00511c42  51                   push ecx
// 00511c43  8bce                 mov ecx, esi
// 00511c45  e856fdffff           call 0x5119a0
// 00511c4a  8b4604               mov eax, dword ptr [esi + 4]
// 00511c4d  6683400801           add word ptr [eax + 8], 1
// 00511c52  6a02                 push 2
// 00511c54  8d542444             lea edx, [esp + 0x44]
// 00511c58  52                   push edx
// 00511c59  8bce                 mov ecx, esi
// 00511c5b  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00511c63  e8d8fcffff           call 0x511940
// 00511c68  5f                   pop edi
// 00511c69  5e                   pop esi
// 00511c6a  83c418               add esp, 0x18
// 00511c6d  c22000               ret 0x20
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AddEditBox@DialogTemplate@_internal@G3D@@QAEXPBDKKHHHHG@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
