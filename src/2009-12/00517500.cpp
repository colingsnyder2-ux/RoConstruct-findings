// roc 2009-12 00517500  unit: RBX::VInstance::?$NonFactoryProduct  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00517500
//
// 00517500  56                   push esi
// 00517501  57                   push edi
// 00517502  8bf9                 mov edi, ecx
// 00517504  8b4714               mov eax, dword ptr [edi + 0x14]
// 00517507  8b30                 mov esi, dword ptr [eax]
// 00517509  8900                 mov dword ptr [eax], eax
// 0051750b  8b4714               mov eax, dword ptr [edi + 0x14]
// 0051750e  894004               mov dword ptr [eax + 4], eax
// 00517511  c7471800000000       mov dword ptr [edi + 0x18], 0
// 00517518  3b7714               cmp esi, dword ptr [edi + 0x14]
// 0051751b  741e                 je 0x51753b
// 0051751d  53                   push ebx
// 0051751e  8bff                 mov edi, edi
// 00517520  8b1e                 mov ebx, dword ptr [esi]
// 00517522  8d4e08               lea ecx, [esi + 8]
// 00517525  e866beffff           call 0x513390
// 0051752a  56                   push esi
// 0051752b  e82ac32d00           call 0x7f385a
// 00517530  83c404               add esp, 4
// 00517533  8bf3                 mov esi, ebx
// 00517535  3b5f14               cmp ebx, dword ptr [edi + 0x14]
// 00517538  75e6                 jne 0x517520
// 0051753a  5b                   pop ebx
// 0051753b  5f                   pop edi
// 0051753c  5e                   pop esi
// 0051753d  c3                   ret 
// library boost-1.34.1/libs\signals\src\trackable.cpp (function ?clear@?$list@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/trackable.cpp
