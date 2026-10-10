// roc 2008-06 0076ddf0  unit: CXTPShadowsManager::CShadowWnd  size: 292 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076ddf0
//
// 0076ddf0  83ec20               sub esp, 0x20
// 0076ddf3  56                   push esi
// 0076ddf4  8b742428             mov esi, dword ptr [esp + 0x28]
// 0076ddf8  57                   push edi
// 0076ddf9  8bf9                 mov edi, ecx
// 0076ddfb  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0076de01  e83a70f4ff           call 0x6b4e40
// 0076de06  85c0                 test eax, eax
// 0076de08  0f85fe000000         jne 0x76df0c
// 0076de0e  8bce                 mov ecx, esi
// 0076de10  e82bd4f3ff           call 0x6ab240
// 0076de15  8b8028010000         mov eax, dword ptr [eax + 0x128]
// 0076de1b  83e003               and eax, 3
// 0076de1e  3c03                 cmp al, 3
// 0076de20  0f85e6000000         jne 0x76df0c
// 0076de26  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0076de2c  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 0076de32  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0076de38  894c2408             mov dword ptr [esp + 8], ecx
// 0076de3c  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 0076de42  8954240c             mov dword ptr [esp + 0xc], edx
// 0076de46  8d542408             lea edx, [esp + 8]
// 0076de4a  894c2414             mov dword ptr [esp + 0x14], ecx
// 0076de4e  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0076de54  52                   push edx
// 0076de55  89442414             mov dword ptr [esp + 0x14], eax
// 0076de59  e8d42df3ff           call 0x6a0c32
// 0076de5e  8b06                 mov eax, dword ptr [esi]
// 0076de60  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 0076de66  8bce                 mov ecx, esi
// 0076de68  ffd2                 call edx
// 0076de6a  8d4c2418             lea ecx, [esp + 0x18]
// 0076de6e  8bf0                 mov esi, eax
// 0076de70  e81b9cf8ff           call 0x6f7a90
// 0076de75  8b10                 mov edx, dword ptr [eax]
// 0076de77  6a01                 push 1
// 0076de79  56                   push esi
// 0076de7a  83ec10               sub esp, 0x10
// 0076de7d  8bcc                 mov ecx, esp
// 0076de7f  8911                 mov dword ptr [ecx], edx
// 0076de81  8b5004               mov edx, dword ptr [eax + 4]
// 0076de84  895104               mov dword ptr [ecx + 4], edx
// 0076de87  8b5008               mov edx, dword ptr [eax + 8]
// 0076de8a  8b400c               mov eax, dword ptr [eax + 0xc]
// 0076de8d  895108               mov dword ptr [ecx + 8], edx
// 0076de90  8b542424             mov edx, dword ptr [esp + 0x24]
// 0076de94  89410c               mov dword ptr [ecx + 0xc], eax
// 0076de97  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0076de9b  83ec10               sub esp, 0x10
// 0076de9e  8bc4                 mov eax, esp
// 0076dea0  8908                 mov dword ptr [eax], ecx
// 0076dea2  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0076dea6  895004               mov dword ptr [eax + 4], edx
// 0076dea9  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0076dead  894808               mov dword ptr [eax + 8], ecx
// 0076deb0  6a01                 push 1
// 0076deb2  8bcf                 mov ecx, edi
// 0076deb4  89500c               mov dword ptr [eax + 0xc], edx
// 0076deb7  e894fcffff           call 0x76db50
// 0076debc  8d4c2418             lea ecx, [esp + 0x18]
// 0076dec0  e8cb9bf8ff           call 0x6f7a90
// 0076dec5  8b10                 mov edx, dword ptr [eax]
// 0076dec7  6a01                 push 1
// 0076dec9  56                   push esi
// 0076deca  83ec10               sub esp, 0x10
// 0076decd  8bcc                 mov ecx, esp
// 0076decf  8911                 mov dword ptr [ecx], edx
// 0076ded1  8b5004               mov edx, dword ptr [eax + 4]
// 0076ded4  895104               mov dword ptr [ecx + 4], edx
// 0076ded7  8b5008               mov edx, dword ptr [eax + 8]
// 0076deda  8b400c               mov eax, dword ptr [eax + 0xc]
// 0076dedd  895108               mov dword ptr [ecx + 8], edx
// 0076dee0  8b542424             mov edx, dword ptr [esp + 0x24]
// 0076dee4  89410c               mov dword ptr [ecx + 0xc], eax
// 0076dee7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0076deeb  83ec10               sub esp, 0x10
// 0076deee  8bc4                 mov eax, esp
// 0076def0  8908                 mov dword ptr [eax], ecx
// 0076def2  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0076def6  895004               mov dword ptr [eax + 4], edx
// 0076def9  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0076defd  894808               mov dword ptr [eax + 8], ecx
// 0076df00  6a00                 push 0
// 0076df02  8bcf                 mov ecx, edi
// 0076df04  89500c               mov dword ptr [eax + 0xc], edx
// 0076df07  e844fcffff           call 0x76db50
// 0076df0c  5f                   pop edi
// 0076df0d  5e                   pop esi
// 0076df0e  83c420               add esp, 0x20
// 0076df11  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPShadowsManager.cpp (function ?SetShadow@CXTPShadowsManager@@QAEXPAVCXTPControlPopup@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPShadowsManager.cpp
