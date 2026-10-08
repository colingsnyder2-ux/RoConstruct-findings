// roc 2009-12 005febe0  unit: G3D::_internal::DialogTemplate  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005febe0
//
// 005febe0  83ec18               sub esp, 0x18
// 005febe3  56                   push esi
// 005febe4  57                   push edi
// 005febe5  8bf1                 mov esi, ecx
// 005febe7  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005febea  81e703000080         and edi, 0x80000003
// 005febf0  c744240881000000     mov dword ptr [esp + 8], 0x81
// 005febf8  7905                 jns 0x5febff
// 005febfa  4f                   dec edi
// 005febfb  83cffc               or edi, 0xfffffffc
// 005febfe  47                   inc edi
// 005febff  7409                 je 0x5fec0a
// 005fec01  57                   push edi
// 005fec02  e849fbffff           call 0x5fe750
// 005fec07  017e0c               add dword ptr [esi + 0xc], edi
// 005fec0a  668b4c2430           mov cx, word ptr [esp + 0x30]
// 005fec0f  8b442428             mov eax, dword ptr [esp + 0x28]
// 005fec13  668b542434           mov dx, word ptr [esp + 0x34]
// 005fec18  66894c2414           mov word ptr [esp + 0x14], cx
// 005fec1d  668b4c243c           mov cx, word ptr [esp + 0x3c]
// 005fec22  8944240c             mov dword ptr [esp + 0xc], eax
// 005fec26  668b442438           mov ax, word ptr [esp + 0x38]
// 005fec2b  66894c241a           mov word ptr [esp + 0x1a], cx
// 005fec30  6a12                 push 0x12
// 005fec32  8d4c2410             lea ecx, [esp + 0x10]
// 005fec36  668954241a           mov word ptr [esp + 0x1a], dx
// 005fec3b  668b542444           mov dx, word ptr [esp + 0x44]
// 005fec40  668944241c           mov word ptr [esp + 0x1c], ax
// 005fec45  8b442430             mov eax, dword ptr [esp + 0x30]
// 005fec49  51                   push ecx
// 005fec4a  8bce                 mov ecx, esi
// 005fec4c  6689542424           mov word ptr [esp + 0x24], dx
// 005fec51  89442418             mov dword ptr [esp + 0x18], eax
// 005fec55  e836fdffff           call 0x5fe990
// 005fec5a  6a02                 push 2
// 005fec5c  8d542444             lea edx, [esp + 0x44]
// 005fec60  52                   push edx
// 005fec61  8bce                 mov ecx, esi
// 005fec63  c7442448ffff0000     mov dword ptr [esp + 0x48], 0xffff
// 005fec6b  e820fdffff           call 0x5fe990
// 005fec70  6a02                 push 2
// 005fec72  8d44240c             lea eax, [esp + 0xc]
// 005fec76  50                   push eax
// 005fec77  8bce                 mov ecx, esi
// 005fec79  e812fdffff           call 0x5fe990
// 005fec7e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005fec82  51                   push ecx
// 005fec83  8bce                 mov ecx, esi
// 005fec85  e866fdffff           call 0x5fe9f0
// 005fec8a  8b4604               mov eax, dword ptr [esi + 4]
// 005fec8d  66ff4008             inc word ptr [eax + 8]
// 005fec91  6a02                 push 2
// 005fec93  8d542444             lea edx, [esp + 0x44]
// 005fec97  52                   push edx
// 005fec98  8bce                 mov ecx, esi
// 005fec9a  c744244800000000     mov dword ptr [esp + 0x48], 0
// 005feca2  e8e9fcffff           call 0x5fe990
// 005feca7  5f                   pop edi
// 005feca8  5e                   pop esi
// 005feca9  83c418               add esp, 0x18
// 005fecac  c22000               ret 0x20
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AddEditBox@DialogTemplate@_internal@G3D@@QAEXPBDKKHHHHG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
