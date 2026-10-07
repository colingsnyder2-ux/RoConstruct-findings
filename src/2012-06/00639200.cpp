// roc 2012-06 00639200  unit: G3D::_internal::DialogTemplate  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00639200
//
// 00639200  83ec18               sub esp, 0x18
// 00639203  56                   push esi
// 00639204  57                   push edi
// 00639205  8bf1                 mov esi, ecx
// 00639207  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0063920a  81e703000080         and edi, 0x80000003
// 00639210  c744240881000000     mov dword ptr [esp + 8], 0x81
// 00639218  7905                 jns 0x63921f
// 0063921a  4f                   dec edi
// 0063921b  83cffc               or edi, 0xfffffffc
// 0063921e  47                   inc edi
// 0063921f  7409                 je 0x63922a
// 00639221  57                   push edi
// 00639222  e849fbffff           call 0x638d70
// 00639227  017e0c               add dword ptr [esi + 0xc], edi
// 0063922a  668b4c2430           mov cx, word ptr [esp + 0x30]
// 0063922f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00639233  668b542434           mov dx, word ptr [esp + 0x34]
// 00639238  66894c2414           mov word ptr [esp + 0x14], cx
// 0063923d  668b4c243c           mov cx, word ptr [esp + 0x3c]
// 00639242  8944240c             mov dword ptr [esp + 0xc], eax
// 00639246  668b442438           mov ax, word ptr [esp + 0x38]
// 0063924b  66894c241a           mov word ptr [esp + 0x1a], cx
// 00639250  6a12                 push 0x12
// 00639252  8d4c2410             lea ecx, [esp + 0x10]
// 00639256  668954241a           mov word ptr [esp + 0x1a], dx
// 0063925b  668b542444           mov dx, word ptr [esp + 0x44]
// 00639260  668944241c           mov word ptr [esp + 0x1c], ax
// 00639265  8b442430             mov eax, dword ptr [esp + 0x30]
// 00639269  51                   push ecx
// 0063926a  8bce                 mov ecx, esi
// 0063926c  6689542424           mov word ptr [esp + 0x24], dx
// 00639271  89442418             mov dword ptr [esp + 0x18], eax
// 00639275  e836fdffff           call 0x638fb0
// 0063927a  6a02                 push 2
// 0063927c  8d542444             lea edx, [esp + 0x44]
// 00639280  52                   push edx
// 00639281  8bce                 mov ecx, esi
// 00639283  c7442448ffff0000     mov dword ptr [esp + 0x48], 0xffff
// 0063928b  e820fdffff           call 0x638fb0
// 00639290  6a02                 push 2
// 00639292  8d44240c             lea eax, [esp + 0xc]
// 00639296  50                   push eax
// 00639297  8bce                 mov ecx, esi
// 00639299  e812fdffff           call 0x638fb0
// 0063929e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006392a2  51                   push ecx
// 006392a3  8bce                 mov ecx, esi
// 006392a5  e866fdffff           call 0x639010
// 006392aa  8b4604               mov eax, dword ptr [esi + 4]
// 006392ad  66ff4008             inc word ptr [eax + 8]
// 006392b1  6a02                 push 2
// 006392b3  8d542444             lea edx, [esp + 0x44]
// 006392b7  52                   push edx
// 006392b8  8bce                 mov ecx, esi
// 006392ba  c744244800000000     mov dword ptr [esp + 0x48], 0
// 006392c2  e8e9fcffff           call 0x638fb0
// 006392c7  5f                   pop edi
// 006392c8  5e                   pop esi
// 006392c9  83c418               add esp, 0x18
// 006392cc  c22000               ret 0x20
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AddEditBox@DialogTemplate@_internal@G3D@@QAEXPBDKKHHHHG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
