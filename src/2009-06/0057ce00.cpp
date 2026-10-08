// from server: 100% by auto
// roc 2009-06 0057ce00  unit: G3D::_internal::DialogTemplate  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057ce00
//
// 0057ce00  83ec18               sub esp, 0x18
// 0057ce03  56                   push esi
// 0057ce04  57                   push edi
// 0057ce05  8bf1                 mov esi, ecx
// 0057ce07  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0057ce0a  81e703000080         and edi, 0x80000003
// 0057ce10  c744240881000000     mov dword ptr [esp + 8], 0x81
// 0057ce18  7905                 jns 0x57ce1f
// 0057ce1a  4f                   dec edi
// 0057ce1b  83cffc               or edi, 0xfffffffc
// 0057ce1e  47                   inc edi
// 0057ce1f  7409                 je 0x57ce2a
// 0057ce21  57                   push edi
// 0057ce22  e849fbffff           call 0x57c970
// 0057ce27  017e0c               add dword ptr [esi + 0xc], edi
// 0057ce2a  668b4c2430           mov cx, word ptr [esp + 0x30]
// 0057ce2f  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057ce33  668b542434           mov dx, word ptr [esp + 0x34]
// 0057ce38  66894c2414           mov word ptr [esp + 0x14], cx
// 0057ce3d  668b4c243c           mov cx, word ptr [esp + 0x3c]
// 0057ce42  8944240c             mov dword ptr [esp + 0xc], eax
// 0057ce46  668b442438           mov ax, word ptr [esp + 0x38]
// 0057ce4b  66894c241a           mov word ptr [esp + 0x1a], cx
// 0057ce50  6a12                 push 0x12
// 0057ce52  8d4c2410             lea ecx, [esp + 0x10]
// 0057ce56  668954241a           mov word ptr [esp + 0x1a], dx
// 0057ce5b  668b542444           mov dx, word ptr [esp + 0x44]
// 0057ce60  668944241c           mov word ptr [esp + 0x1c], ax
// 0057ce65  8b442430             mov eax, dword ptr [esp + 0x30]
// 0057ce69  51                   push ecx
// 0057ce6a  8bce                 mov ecx, esi
// 0057ce6c  6689542424           mov word ptr [esp + 0x24], dx
// 0057ce71  89442418             mov dword ptr [esp + 0x18], eax
// 0057ce75  e836fdffff           call 0x57cbb0
// 0057ce7a  6a02                 push 2
// 0057ce7c  8d542444             lea edx, [esp + 0x44]
// 0057ce80  52                   push edx
// 0057ce81  8bce                 mov ecx, esi
// 0057ce83  c7442448ffff0000     mov dword ptr [esp + 0x48], 0xffff
// 0057ce8b  e820fdffff           call 0x57cbb0
// 0057ce90  6a02                 push 2
// 0057ce92  8d44240c             lea eax, [esp + 0xc]
// 0057ce96  50                   push eax
// 0057ce97  8bce                 mov ecx, esi
// 0057ce99  e812fdffff           call 0x57cbb0
// 0057ce9e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057cea2  51                   push ecx
// 0057cea3  8bce                 mov ecx, esi
// 0057cea5  e866fdffff           call 0x57cc10
// 0057ceaa  8b4604               mov eax, dword ptr [esi + 4]
// 0057cead  66ff4008             inc word ptr [eax + 8]
// 0057ceb1  6a02                 push 2
// 0057ceb3  8d542444             lea edx, [esp + 0x44]
// 0057ceb7  52                   push edx
// 0057ceb8  8bce                 mov ecx, esi
// 0057ceba  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0057cec2  e8e9fcffff           call 0x57cbb0
// 0057cec7  5f                   pop edi
// 0057cec8  5e                   pop esi
// 0057cec9  83c418               add esp, 0x18
// 0057cecc  c22000               ret 0x20
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AddEditBox@DialogTemplate@_internal@G3D@@QAEXPBDKKHHHHG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
