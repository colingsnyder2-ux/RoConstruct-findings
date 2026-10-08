// from server: 100% by auto
// roc 2009-06 0057cd30  unit: G3D::_internal::DialogTemplate  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057cd30
//
// 0057cd30  83ec18               sub esp, 0x18
// 0057cd33  56                   push esi
// 0057cd34  57                   push edi
// 0057cd35  8bf1                 mov esi, ecx
// 0057cd37  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0057cd3a  81e703000080         and edi, 0x80000003
// 0057cd40  c744240880000000     mov dword ptr [esp + 8], 0x80
// 0057cd48  7905                 jns 0x57cd4f
// 0057cd4a  4f                   dec edi
// 0057cd4b  83cffc               or edi, 0xfffffffc
// 0057cd4e  47                   inc edi
// 0057cd4f  7409                 je 0x57cd5a
// 0057cd51  57                   push edi
// 0057cd52  e819fcffff           call 0x57c970
// 0057cd57  017e0c               add dword ptr [esi + 0xc], edi
// 0057cd5a  668b4c2430           mov cx, word ptr [esp + 0x30]
// 0057cd5f  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057cd63  668b542434           mov dx, word ptr [esp + 0x34]
// 0057cd68  66894c2414           mov word ptr [esp + 0x14], cx
// 0057cd6d  668b4c243c           mov cx, word ptr [esp + 0x3c]
// 0057cd72  8944240c             mov dword ptr [esp + 0xc], eax
// 0057cd76  668b442438           mov ax, word ptr [esp + 0x38]
// 0057cd7b  66894c241a           mov word ptr [esp + 0x1a], cx
// 0057cd80  6a12                 push 0x12
// 0057cd82  8d4c2410             lea ecx, [esp + 0x10]
// 0057cd86  668954241a           mov word ptr [esp + 0x1a], dx
// 0057cd8b  668b542444           mov dx, word ptr [esp + 0x44]
// 0057cd90  668944241c           mov word ptr [esp + 0x1c], ax
// 0057cd95  8b442430             mov eax, dword ptr [esp + 0x30]
// 0057cd99  51                   push ecx
// 0057cd9a  8bce                 mov ecx, esi
// 0057cd9c  6689542424           mov word ptr [esp + 0x24], dx
// 0057cda1  89442418             mov dword ptr [esp + 0x18], eax
// 0057cda5  e806feffff           call 0x57cbb0
// 0057cdaa  6a02                 push 2
// 0057cdac  8d542444             lea edx, [esp + 0x44]
// 0057cdb0  52                   push edx
// 0057cdb1  8bce                 mov ecx, esi
// 0057cdb3  c7442448ffff0000     mov dword ptr [esp + 0x48], 0xffff
// 0057cdbb  e8f0fdffff           call 0x57cbb0
// 0057cdc0  6a02                 push 2
// 0057cdc2  8d44240c             lea eax, [esp + 0xc]
// 0057cdc6  50                   push eax
// 0057cdc7  8bce                 mov ecx, esi
// 0057cdc9  e8e2fdffff           call 0x57cbb0
// 0057cdce  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057cdd2  51                   push ecx
// 0057cdd3  8bce                 mov ecx, esi
// 0057cdd5  e836feffff           call 0x57cc10
// 0057cdda  8b4604               mov eax, dword ptr [esi + 4]
// 0057cddd  66ff4008             inc word ptr [eax + 8]
// 0057cde1  6a02                 push 2
// 0057cde3  8d542444             lea edx, [esp + 0x44]
// 0057cde7  52                   push edx
// 0057cde8  8bce                 mov ecx, esi
// 0057cdea  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0057cdf2  e8b9fdffff           call 0x57cbb0
// 0057cdf7  5f                   pop edi
// 0057cdf8  5e                   pop esi
// 0057cdf9  83c418               add esp, 0x18
// 0057cdfc  c22000               ret 0x20
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AddButton@DialogTemplate@_internal@G3D@@QAEXPBDKKHHHHG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
