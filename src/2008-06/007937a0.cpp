// from server: 100% by auto
// roc 2008-06 007937a0  unit: CXTCaptionPopupWnd  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007937a0
//
// 007937a0  83ec30               sub esp, 0x30
// 007937a3  53                   push ebx
// 007937a4  55                   push ebp
// 007937a5  56                   push esi
// 007937a6  8bf1                 mov esi, ecx
// 007937a8  57                   push edi
// 007937a9  56                   push esi
// 007937aa  8d4c2424             lea ecx, [esp + 0x24]
// 007937ae  e87d43f6ff           call 0x6f7b30
// 007937b3  6afe                 push -2
// 007937b5  6afe                 push -2
// 007937b7  8d442428             lea eax, [esp + 0x28]
// 007937bb  50                   push eax
// 007937bc  ff15282d8000         call dword ptr [0x802d28]
// 007937c2  8b442424             mov eax, dword ptr [esp + 0x24]
// 007937c6  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007937ca  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007937ce  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007937d2  8bf8                 mov edi, eax
// 007937d4  83c013               add eax, 0x13
// 007937d7  6a01                 push 1
// 007937d9  89542440             mov dword ptr [esp + 0x40], edx
// 007937dd  894c243c             mov dword ptr [esp + 0x3c], ecx
// 007937e1  2bd0                 sub edx, eax
// 007937e3  52                   push edx
// 007937e4  2bcb                 sub ecx, ebx
// 007937e6  51                   push ecx
// 007937e7  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007937ea  50                   push eax
// 007937eb  53                   push ebx
// 007937ec  89442438             mov dword ptr [esp + 0x38], eax
// 007937f0  e857d2f0ff           call 0x6a0a4c
// 007937f5  8b542438             mov edx, dword ptr [esp + 0x38]
// 007937f9  8d6f13               lea ebp, [edi + 0x13]
// 007937fc  6a01                 push 1
// 007937fe  8bcd                 mov ecx, ebp
// 00793800  2bcf                 sub ecx, edi
// 00793802  51                   push ecx
// 00793803  2bd3                 sub edx, ebx
// 00793805  52                   push edx
// 00793806  57                   push edi
// 00793807  53                   push ebx
// 00793808  8d4e60               lea ecx, [esi + 0x60]
// 0079380b  e83cd2f0ff           call 0x6a0a4c
// 00793810  8b442438             mov eax, dword ptr [esp + 0x38]
// 00793814  6afe                 push -2
// 00793816  6afe                 push -2
// 00793818  8d4c2418             lea ecx, [esp + 0x18]
// 0079381c  51                   push ecx
// 0079381d  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00793821  897c2420             mov dword ptr [esp + 0x20], edi
// 00793825  89442424             mov dword ptr [esp + 0x24], eax
// 00793829  896c2428             mov dword ptr [esp + 0x28], ebp
// 0079382d  ff15282d8000         call dword ptr [0x802d28]
// 00793833  8b442418             mov eax, dword ptr [esp + 0x18]
// 00793837  8b542414             mov edx, dword ptr [esp + 0x14]
// 0079383b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0079383f  8d48f0               lea ecx, [eax - 0x10]
// 00793842  6a01                 push 1
// 00793844  2bfa                 sub edi, edx
// 00793846  57                   push edi
// 00793847  2bc1                 sub eax, ecx
// 00793849  50                   push eax
// 0079384a  52                   push edx
// 0079384b  894c2420             mov dword ptr [esp + 0x20], ecx
// 0079384f  51                   push ecx
// 00793850  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 00793856  e8f1d1f0ff           call 0x6a0a4c
// 0079385b  5f                   pop edi
// 0079385c  5e                   pop esi
// 0079385d  5d                   pop ebp
// 0079385e  5b                   pop ebx
// 0079385f  83c430               add esp, 0x30
// 00793862  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTCaptionPopupWnd.cpp (function ?RecalcLayout@CXTCaptionPopupWnd@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionPopupWnd.cpp
