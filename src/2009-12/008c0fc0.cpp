// roc 2009-12 008c0fc0  unit: CXTPShadowsManager::CShadowWnd  size: 292 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c0fc0
//
// 008c0fc0  83ec20               sub esp, 0x20
// 008c0fc3  56                   push esi
// 008c0fc4  8b742428             mov esi, dword ptr [esp + 0x28]
// 008c0fc8  57                   push edi
// 008c0fc9  8bf9                 mov edi, ecx
// 008c0fcb  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008c0fd1  e82a35f4ff           call 0x804500
// 008c0fd6  85c0                 test eax, eax
// 008c0fd8  0f85fe000000         jne 0x8c10dc
// 008c0fde  8bce                 mov ecx, esi
// 008c0fe0  e85b4ff3ff           call 0x7f5f40
// 008c0fe5  8b8028010000         mov eax, dword ptr [eax + 0x128]
// 008c0feb  83e003               and eax, 3
// 008c0fee  3c03                 cmp al, 3
// 008c0ff0  0f85e6000000         jne 0x8c10dc
// 008c0ff6  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 008c0ffc  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 008c1002  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 008c1008  894c2408             mov dword ptr [esp + 8], ecx
// 008c100c  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 008c1012  8954240c             mov dword ptr [esp + 0xc], edx
// 008c1016  8d542408             lea edx, [esp + 8]
// 008c101a  894c2414             mov dword ptr [esp + 0x14], ecx
// 008c101e  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008c1024  52                   push edx
// 008c1025  89442414             mov dword ptr [esp + 0x14], eax
// 008c1029  e8cc2df3ff           call 0x7f3dfa
// 008c102e  8b06                 mov eax, dword ptr [esi]
// 008c1030  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 008c1036  8bce                 mov ecx, esi
// 008c1038  ffd2                 call edx
// 008c103a  8d4c2418             lea ecx, [esp + 0x18]
// 008c103e  8bf0                 mov esi, eax
// 008c1040  e8eba1f8ff           call 0x84b230
// 008c1045  8b10                 mov edx, dword ptr [eax]
// 008c1047  6a01                 push 1
// 008c1049  56                   push esi
// 008c104a  83ec10               sub esp, 0x10
// 008c104d  8bcc                 mov ecx, esp
// 008c104f  8911                 mov dword ptr [ecx], edx
// 008c1051  8b5004               mov edx, dword ptr [eax + 4]
// 008c1054  895104               mov dword ptr [ecx + 4], edx
// 008c1057  8b5008               mov edx, dword ptr [eax + 8]
// 008c105a  8b400c               mov eax, dword ptr [eax + 0xc]
// 008c105d  895108               mov dword ptr [ecx + 8], edx
// 008c1060  8b542424             mov edx, dword ptr [esp + 0x24]
// 008c1064  89410c               mov dword ptr [ecx + 0xc], eax
// 008c1067  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008c106b  83ec10               sub esp, 0x10
// 008c106e  8bc4                 mov eax, esp
// 008c1070  8908                 mov dword ptr [eax], ecx
// 008c1072  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008c1076  895004               mov dword ptr [eax + 4], edx
// 008c1079  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008c107d  894808               mov dword ptr [eax + 8], ecx
// 008c1080  6a01                 push 1
// 008c1082  8bcf                 mov ecx, edi
// 008c1084  89500c               mov dword ptr [eax + 0xc], edx
// 008c1087  e894fcffff           call 0x8c0d20
// 008c108c  8d4c2418             lea ecx, [esp + 0x18]
// 008c1090  e89ba1f8ff           call 0x84b230
// 008c1095  8b10                 mov edx, dword ptr [eax]
// 008c1097  6a01                 push 1
// 008c1099  56                   push esi
// 008c109a  83ec10               sub esp, 0x10
// 008c109d  8bcc                 mov ecx, esp
// 008c109f  8911                 mov dword ptr [ecx], edx
// 008c10a1  8b5004               mov edx, dword ptr [eax + 4]
// 008c10a4  895104               mov dword ptr [ecx + 4], edx
// 008c10a7  8b5008               mov edx, dword ptr [eax + 8]
// 008c10aa  8b400c               mov eax, dword ptr [eax + 0xc]
// 008c10ad  895108               mov dword ptr [ecx + 8], edx
// 008c10b0  8b542424             mov edx, dword ptr [esp + 0x24]
// 008c10b4  89410c               mov dword ptr [ecx + 0xc], eax
// 008c10b7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008c10bb  83ec10               sub esp, 0x10
// 008c10be  8bc4                 mov eax, esp
// 008c10c0  8908                 mov dword ptr [eax], ecx
// 008c10c2  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008c10c6  895004               mov dword ptr [eax + 4], edx
// 008c10c9  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008c10cd  894808               mov dword ptr [eax + 8], ecx
// 008c10d0  6a00                 push 0
// 008c10d2  8bcf                 mov ecx, edi
// 008c10d4  89500c               mov dword ptr [eax + 0xc], edx
// 008c10d7  e844fcffff           call 0x8c0d20
// 008c10dc  5f                   pop edi
// 008c10dd  5e                   pop esi
// 008c10de  83c420               add esp, 0x20
// 008c10e1  c20400               ret 4
// copied from an identical function in another client (function ?SetShadow@CXTPShadowsManager@@QAEXPAVCXTPControlPopup@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPShadowsManager.cpp