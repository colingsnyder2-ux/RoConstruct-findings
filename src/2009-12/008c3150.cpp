// roc 2009-12 008c3150  unit: CXTPImageEditorDlg::CDlgToolBar  size: 471 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c3150
//
// 008c3150  6aff                 push -1
// 008c3152  68a9419600           push 0x9641a9
// 008c3157  64a100000000         mov eax, dword ptr fs:[0]
// 008c315d  50                   push eax
// 008c315e  51                   push ecx
// 008c315f  56                   push esi
// 008c3160  57                   push edi
// 008c3161  a10052b600           mov eax, dword ptr [0xb65200]
// 008c3166  33c4                 xor eax, esp
// 008c3168  50                   push eax
// 008c3169  8d442410             lea eax, [esp + 0x10]
// 008c316d  64a300000000         mov dword ptr fs:[0], eax
// 008c3173  8bf1                 mov esi, ecx
// 008c3175  8974240c             mov dword ptr [esp + 0xc], esi
// 008c3179  e81c380600           call 0x92699a
// 008c317e  8d7e74               lea edi, [esi + 0x74]
// 008c3181  8bcf                 mov ecx, edi
// 008c3183  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008c318b  c7068c90a000         mov dword ptr [esi], 0xa0908c
// 008c3191  e8b20ff3ff           call 0x7f4148
// 008c3196  c70754439f00         mov dword ptr [edi], 0x9f4354
// 008c319c  8dbec8000000         lea edi, [esi + 0xc8]
// 008c31a2  8bcf                 mov ecx, edi
// 008c31a4  c644241801           mov byte ptr [esp + 0x18], 1
// 008c31a9  e89a0ff3ff           call 0x7f4148
// 008c31ae  c70754439f00         mov dword ptr [edi], 0x9f4354
// 008c31b4  8dbe1c010000         lea edi, [esi + 0x11c]
// 008c31ba  8bcf                 mov ecx, edi
// 008c31bc  c644241802           mov byte ptr [esp + 0x18], 2
// 008c31c1  e8da370600           call 0x9269a0
// 008c31c6  b810000000           mov eax, 0x10
// 008c31cb  8bc8                 mov ecx, eax
// 008c31cd  8987a8000000         mov dword ptr [edi + 0xa8], eax
// 008c31d3  b817000000           mov eax, 0x17
// 008c31d8  898fac000000         mov dword ptr [edi + 0xac], ecx
// 008c31de  8bc8                 mov ecx, eax
// 008c31e0  c7072c8aa000         mov dword ptr [edi], 0xa08a2c
// 008c31e6  8987b0000000         mov dword ptr [edi + 0xb0], eax
// 008c31ec  898fb4000000         mov dword ptr [edi + 0xb4], ecx
// 008c31f2  8d8ed8010000         lea ecx, [esi + 0x1d8]
// 008c31f8  c644241803           mov byte ptr [esp + 0x18], 3
// 008c31fd  e80e0ef3ff           call 0x7f4010
// 008c3202  8dbee0010000         lea edi, [esi + 0x1e0]
// 008c3208  8bcf                 mov ecx, edi
// 008c320a  c644241804           mov byte ptr [esp + 0x18], 4
// 008c320f  e88c370600           call 0x9269a0
// 008c3214  b810000000           mov eax, 0x10
// 008c3219  8bc8                 mov ecx, eax
// 008c321b  8987a8000000         mov dword ptr [edi + 0xa8], eax
// 008c3221  b817000000           mov eax, 0x17
// 008c3226  898fac000000         mov dword ptr [edi + 0xac], ecx
// 008c322c  8bc8                 mov ecx, eax
// 008c322e  c7072c8aa000         mov dword ptr [edi], 0xa08a2c
// 008c3234  8987b0000000         mov dword ptr [edi + 0xb0], eax
// 008c323a  898fb4000000         mov dword ptr [edi + 0xb4], ecx
// 008c3240  8d8e9c020000         lea ecx, [esi + 0x29c]
// 008c3246  c644241805           mov byte ptr [esp + 0x18], 5
// 008c324b  e8c00df3ff           call 0x7f4010
// 008c3250  6890dd8300           push 0x83dd90
// 008c3255  68101f8c00           push 0x8c1f10
// 008c325a  6a10                 push 0x10
// 008c325c  6a5c                 push 0x5c
// 008c325e  8d86a4020000         lea eax, [esi + 0x2a4]
// 008c3264  50                   push eax
// 008c3265  c644242c06           mov byte ptr [esp + 0x2c], 6
// 008c326a  e84118f3ff           call 0x7f4ab0
// 008c326f  8d8e64080000         lea ecx, [esi + 0x864]
// 008c3275  c644241807           mov byte ptr [esp + 0x18], 7
// 008c327a  e891ecffff           call 0x8c1f10
// 008c327f  8d8ec0080000         lea ecx, [esi + 0x8c0]
// 008c3285  c644241808           mov byte ptr [esp + 0x18], 8
// 008c328a  e881ecffff           call 0x8c1f10
// 008c328f  8d8e1c090000         lea ecx, [esi + 0x91c]
// 008c3295  c644241809           mov byte ptr [esp + 0x18], 9
// 008c329a  e8b1f8ffff           call 0x8c2b50
// 008c329f  8d8ef4090000         lea ecx, [esi + 0x9f4]
// 008c32a5  c64424180a           mov byte ptr [esp + 0x18], 0xa
// 008c32aa  e8f1eeffff           call 0x8c21a0
// 008c32af  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008c32b3  c64424180b           mov byte ptr [esp + 0x18], 0xb
// 008c32b8  898e680a0000         mov dword ptr [esi + 0xa68], ecx
// 008c32be  e8ddb5faff           call 0x86e8a0
// 008c32c3  6a00                 push 0
// 008c32c5  8b542424             mov edx, dword ptr [esp + 0x24]
// 008c32c9  52                   push edx
// 008c32ca  8b10                 mov edx, dword ptr [eax]
// 008c32cc  8bc8                 mov ecx, eax
// 008c32ce  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008c32d1  689b230000           push 0x239b
// 008c32d6  ffd0                 call eax
// 008c32d8  50                   push eax
// 008c32d9  8bce                 mov ecx, esi
// 008c32db  e8ae390600           call 0x926c8e
// 008c32e0  b810000000           mov eax, 0x10
// 008c32e5  8bc8                 mov ecx, eax
// 008c32e7  8986600a0000         mov dword ptr [esi + 0xa60], eax
// 008c32ed  c786580a000000000000 mov dword ptr [esi + 0xa58], 0
// 008c32f7  c786540a000000000000 mov dword ptr [esi + 0xa54], 0
// 008c3301  898e640a0000         mov dword ptr [esi + 0xa64], ecx
// 008c3307  c7865c0a0000ffffffff mov dword ptr [esi + 0xa5c], 0xffffffff
// 008c3311  8bc6                 mov eax, esi
// 008c3313  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008c3317  64890d00000000       mov dword ptr fs:[0], ecx
// 008c331e  59                   pop ecx
// 008c331f  5f                   pop edi
// 008c3320  5e                   pop esi
// 008c3321  83c410               add esp, 0x10
// 008c3324  c20800               ret 8
// copied from an identical function in another client (function ??0CXTPImageEditorDlg@@QAE@PAVCWnd@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPImageEditor.cpp