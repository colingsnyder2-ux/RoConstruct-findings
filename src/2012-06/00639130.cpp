// roc 2012-06 00639130  unit: G3D::_internal::DialogTemplate  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00639130
//
// 00639130  83ec18               sub esp, 0x18
// 00639133  56                   push esi
// 00639134  57                   push edi
// 00639135  8bf1                 mov esi, ecx
// 00639137  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0063913a  81e703000080         and edi, 0x80000003
// 00639140  c744240880000000     mov dword ptr [esp + 8], 0x80
// 00639148  7905                 jns 0x63914f
// 0063914a  4f                   dec edi
// 0063914b  83cffc               or edi, 0xfffffffc
// 0063914e  47                   inc edi
// 0063914f  7409                 je 0x63915a
// 00639151  57                   push edi
// 00639152  e819fcffff           call 0x638d70
// 00639157  017e0c               add dword ptr [esi + 0xc], edi
// 0063915a  668b4c2430           mov cx, word ptr [esp + 0x30]
// 0063915f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00639163  668b542434           mov dx, word ptr [esp + 0x34]
// 00639168  66894c2414           mov word ptr [esp + 0x14], cx
// 0063916d  668b4c243c           mov cx, word ptr [esp + 0x3c]
// 00639172  8944240c             mov dword ptr [esp + 0xc], eax
// 00639176  668b442438           mov ax, word ptr [esp + 0x38]
// 0063917b  66894c241a           mov word ptr [esp + 0x1a], cx
// 00639180  6a12                 push 0x12
// 00639182  8d4c2410             lea ecx, [esp + 0x10]
// 00639186  668954241a           mov word ptr [esp + 0x1a], dx
// 0063918b  668b542444           mov dx, word ptr [esp + 0x44]
// 00639190  668944241c           mov word ptr [esp + 0x1c], ax
// 00639195  8b442430             mov eax, dword ptr [esp + 0x30]
// 00639199  51                   push ecx
// 0063919a  8bce                 mov ecx, esi
// 0063919c  6689542424           mov word ptr [esp + 0x24], dx
// 006391a1  89442418             mov dword ptr [esp + 0x18], eax
// 006391a5  e806feffff           call 0x638fb0
// 006391aa  6a02                 push 2
// 006391ac  8d542444             lea edx, [esp + 0x44]
// 006391b0  52                   push edx
// 006391b1  8bce                 mov ecx, esi
// 006391b3  c7442448ffff0000     mov dword ptr [esp + 0x48], 0xffff
// 006391bb  e8f0fdffff           call 0x638fb0
// 006391c0  6a02                 push 2
// 006391c2  8d44240c             lea eax, [esp + 0xc]
// 006391c6  50                   push eax
// 006391c7  8bce                 mov ecx, esi
// 006391c9  e8e2fdffff           call 0x638fb0
// 006391ce  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006391d2  51                   push ecx
// 006391d3  8bce                 mov ecx, esi
// 006391d5  e836feffff           call 0x639010
// 006391da  8b4604               mov eax, dword ptr [esi + 4]
// 006391dd  66ff4008             inc word ptr [eax + 8]
// 006391e1  6a02                 push 2
// 006391e3  8d542444             lea edx, [esp + 0x44]
// 006391e7  52                   push edx
// 006391e8  8bce                 mov ecx, esi
// 006391ea  c744244800000000     mov dword ptr [esp + 0x48], 0
// 006391f2  e8b9fdffff           call 0x638fb0
// 006391f7  5f                   pop edi
// 006391f8  5e                   pop esi
// 006391f9  83c418               add esp, 0x18
// 006391fc  c22000               ret 0x20
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AddButton@DialogTemplate@_internal@G3D@@QAEXPBDKKHHHHG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
