// from server: 100% by auto
// roc 2011-06 0054baf0  unit: G3D::_internal::DialogTemplate  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0054baf0
//
// 0054baf0  83ec18               sub esp, 0x18
// 0054baf3  56                   push esi
// 0054baf4  57                   push edi
// 0054baf5  8bf1                 mov esi, ecx
// 0054baf7  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0054bafa  81e703000080         and edi, 0x80000003
// 0054bb00  c744240880000000     mov dword ptr [esp + 8], 0x80
// 0054bb08  7905                 jns 0x54bb0f
// 0054bb0a  4f                   dec edi
// 0054bb0b  83cffc               or edi, 0xfffffffc
// 0054bb0e  47                   inc edi
// 0054bb0f  7409                 je 0x54bb1a
// 0054bb11  57                   push edi
// 0054bb12  e819fcffff           call 0x54b730
// 0054bb17  017e0c               add dword ptr [esi + 0xc], edi
// 0054bb1a  668b4c2430           mov cx, word ptr [esp + 0x30]
// 0054bb1f  8b442428             mov eax, dword ptr [esp + 0x28]
// 0054bb23  668b542434           mov dx, word ptr [esp + 0x34]
// 0054bb28  66894c2414           mov word ptr [esp + 0x14], cx
// 0054bb2d  668b4c243c           mov cx, word ptr [esp + 0x3c]
// 0054bb32  8944240c             mov dword ptr [esp + 0xc], eax
// 0054bb36  668b442438           mov ax, word ptr [esp + 0x38]
// 0054bb3b  66894c241a           mov word ptr [esp + 0x1a], cx
// 0054bb40  6a12                 push 0x12
// 0054bb42  8d4c2410             lea ecx, [esp + 0x10]
// 0054bb46  668954241a           mov word ptr [esp + 0x1a], dx
// 0054bb4b  668b542444           mov dx, word ptr [esp + 0x44]
// 0054bb50  668944241c           mov word ptr [esp + 0x1c], ax
// 0054bb55  8b442430             mov eax, dword ptr [esp + 0x30]
// 0054bb59  51                   push ecx
// 0054bb5a  8bce                 mov ecx, esi
// 0054bb5c  6689542424           mov word ptr [esp + 0x24], dx
// 0054bb61  89442418             mov dword ptr [esp + 0x18], eax
// 0054bb65  e806feffff           call 0x54b970
// 0054bb6a  6a02                 push 2
// 0054bb6c  8d542444             lea edx, [esp + 0x44]
// 0054bb70  52                   push edx
// 0054bb71  8bce                 mov ecx, esi
// 0054bb73  c7442448ffff0000     mov dword ptr [esp + 0x48], 0xffff
// 0054bb7b  e8f0fdffff           call 0x54b970
// 0054bb80  6a02                 push 2
// 0054bb82  8d44240c             lea eax, [esp + 0xc]
// 0054bb86  50                   push eax
// 0054bb87  8bce                 mov ecx, esi
// 0054bb89  e8e2fdffff           call 0x54b970
// 0054bb8e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054bb92  51                   push ecx
// 0054bb93  8bce                 mov ecx, esi
// 0054bb95  e836feffff           call 0x54b9d0
// 0054bb9a  8b4604               mov eax, dword ptr [esi + 4]
// 0054bb9d  66ff4008             inc word ptr [eax + 8]
// 0054bba1  6a02                 push 2
// 0054bba3  8d542444             lea edx, [esp + 0x44]
// 0054bba7  52                   push edx
// 0054bba8  8bce                 mov ecx, esi
// 0054bbaa  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0054bbb2  e8b9fdffff           call 0x54b970
// 0054bbb7  5f                   pop edi
// 0054bbb8  5e                   pop esi
// 0054bbb9  83c418               add esp, 0x18
// 0054bbbc  c22000               ret 0x20
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AddButton@DialogTemplate@_internal@G3D@@QAEXPBDKKHHHHG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
