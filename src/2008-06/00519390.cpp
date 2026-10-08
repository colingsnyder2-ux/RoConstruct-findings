// from server: 100% by auto
// roc 2008-06 00519390  unit: G3D::_internal::DialogTemplate  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00519390
//
// 00519390  83ec18               sub esp, 0x18
// 00519393  56                   push esi
// 00519394  57                   push edi
// 00519395  8bf1                 mov esi, ecx
// 00519397  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0051939a  81e703000080         and edi, 0x80000003
// 005193a0  c744240880000000     mov dword ptr [esp + 8], 0x80
// 005193a8  7905                 jns 0x5193af
// 005193aa  4f                   dec edi
// 005193ab  83cffc               or edi, 0xfffffffc
// 005193ae  47                   inc edi
// 005193af  7409                 je 0x5193ba
// 005193b1  57                   push edi
// 005193b2  e819fcffff           call 0x518fd0
// 005193b7  017e0c               add dword ptr [esi + 0xc], edi
// 005193ba  668b4c2430           mov cx, word ptr [esp + 0x30]
// 005193bf  8b442428             mov eax, dword ptr [esp + 0x28]
// 005193c3  668b542434           mov dx, word ptr [esp + 0x34]
// 005193c8  66894c2414           mov word ptr [esp + 0x14], cx
// 005193cd  668b4c243c           mov cx, word ptr [esp + 0x3c]
// 005193d2  8944240c             mov dword ptr [esp + 0xc], eax
// 005193d6  668b442438           mov ax, word ptr [esp + 0x38]
// 005193db  66894c241a           mov word ptr [esp + 0x1a], cx
// 005193e0  6a12                 push 0x12
// 005193e2  8d4c2410             lea ecx, [esp + 0x10]
// 005193e6  668954241a           mov word ptr [esp + 0x1a], dx
// 005193eb  668b542444           mov dx, word ptr [esp + 0x44]
// 005193f0  668944241c           mov word ptr [esp + 0x1c], ax
// 005193f5  8b442430             mov eax, dword ptr [esp + 0x30]
// 005193f9  51                   push ecx
// 005193fa  8bce                 mov ecx, esi
// 005193fc  6689542424           mov word ptr [esp + 0x24], dx
// 00519401  89442418             mov dword ptr [esp + 0x18], eax
// 00519405  e806feffff           call 0x519210
// 0051940a  6a02                 push 2
// 0051940c  8d542444             lea edx, [esp + 0x44]
// 00519410  52                   push edx
// 00519411  8bce                 mov ecx, esi
// 00519413  c7442448ffff0000     mov dword ptr [esp + 0x48], 0xffff
// 0051941b  e8f0fdffff           call 0x519210
// 00519420  6a02                 push 2
// 00519422  8d44240c             lea eax, [esp + 0xc]
// 00519426  50                   push eax
// 00519427  8bce                 mov ecx, esi
// 00519429  e8e2fdffff           call 0x519210
// 0051942e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00519432  51                   push ecx
// 00519433  8bce                 mov ecx, esi
// 00519435  e836feffff           call 0x519270
// 0051943a  8b4604               mov eax, dword ptr [esi + 4]
// 0051943d  66ff4008             inc word ptr [eax + 8]
// 00519441  6a02                 push 2
// 00519443  8d542444             lea edx, [esp + 0x44]
// 00519447  52                   push edx
// 00519448  8bce                 mov ecx, esi
// 0051944a  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00519452  e8b9fdffff           call 0x519210
// 00519457  5f                   pop edi
// 00519458  5e                   pop esi
// 00519459  83c418               add esp, 0x18
// 0051945c  c22000               ret 0x20
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AddButton@DialogTemplate@_internal@G3D@@QAEXPBDKKHHHHG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
