// from server: 100% by auto
// roc 2008-06 006fa5d0  unit: CXTPPropertyGridToolBar  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fa5d0
//
// 006fa5d0  8b442408             mov eax, dword ptr [esp + 8]
// 006fa5d4  53                   push ebx
// 006fa5d5  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006fa5d9  c70000000000         mov dword ptr [eax], 0
// 006fa5df  8b430c               mov eax, dword ptr [ebx + 0xc]
// 006fa5e2  83e801               sub eax, 1
// 006fa5e5  7556                 jne 0x6fa63d
// 006fa5e7  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 006fa5ea  56                   push esi
// 006fa5eb  57                   push edi
// 006fa5ec  8b3df82d8000         mov edi, dword ptr [0x802df8]
// 006fa5f2  51                   push ecx
// 006fa5f3  ffd7                 call edi
// 006fa5f5  50                   push eax
// 006fa5f6  e8e365faff           call 0x6a0bde
// 006fa5fb  8bf0                 mov esi, eax
// 006fa5fd  8b5620               mov edx, dword ptr [esi + 0x20]
// 006fa600  52                   push edx
// 006fa601  ffd7                 call edi
// 006fa603  50                   push eax
// 006fa604  e8d565faff           call 0x6a0bde
// 006fa609  8b7620               mov esi, dword ptr [esi + 0x20]
// 006fa60c  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 006fa60f  8b4020               mov eax, dword ptr [eax + 0x20]
// 006fa612  56                   push esi
// 006fa613  51                   push ecx
// 006fa614  6838010000           push 0x138
// 006fa619  50                   push eax
// 006fa61a  ff15142e8000         call dword ptr [0x802e14]
// 006fa620  5f                   pop edi
// 006fa621  5e                   pop esi
// 006fa622  85c0                 test eax, eax
// 006fa624  7508                 jne 0x6fa62e
// 006fa626  6a0f                 push 0xf
// 006fa628  ff15e42b8000         call dword ptr [0x802be4]
// 006fa62e  8b5310               mov edx, dword ptr [ebx + 0x10]
// 006fa631  50                   push eax
// 006fa632  8d4b14               lea ecx, [ebx + 0x14]
// 006fa635  51                   push ecx
// 006fa636  52                   push edx
// 006fa637  ff15e02b8000         call dword ptr [0x802be0]
// 006fa63d  5b                   pop ebx
// 006fa63e  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnCustomDraw@CXTPPropertyGridToolBar@@IAEXPAUtagNMHDR@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
