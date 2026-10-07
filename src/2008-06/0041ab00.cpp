// roc 2008-06 0041ab00  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041ab00
//
// 0041ab00  56                   push esi
// 0041ab01  57                   push edi
// 0041ab02  8bf9                 mov edi, ecx
// 0041ab04  8b4714               mov eax, dword ptr [edi + 0x14]
// 0041ab07  8b30                 mov esi, dword ptr [eax]
// 0041ab09  8900                 mov dword ptr [eax], eax
// 0041ab0b  8b4714               mov eax, dword ptr [edi + 0x14]
// 0041ab0e  894004               mov dword ptr [eax + 4], eax
// 0041ab11  c7471800000000       mov dword ptr [edi + 0x18], 0
// 0041ab18  3b7714               cmp esi, dword ptr [edi + 0x14]
// 0041ab1b  741e                 je 0x41ab3b
// 0041ab1d  53                   push ebx
// 0041ab1e  8bff                 mov edi, edi
// 0041ab20  8b1e                 mov ebx, dword ptr [esi]
// 0041ab22  8d4e08               lea ecx, [esi + 8]
// 0041ab25  e846a81700           call 0x595370
// 0041ab2a  56                   push esi
// 0041ab2b  e84a5b2800           call 0x6a067a
// 0041ab30  83c404               add esp, 4
// 0041ab33  8bf3                 mov esi, ebx
// 0041ab35  3b5f14               cmp ebx, dword ptr [edi + 0x14]
// 0041ab38  75e6                 jne 0x41ab20
// 0041ab3a  5b                   pop ebx
// 0041ab3b  5f                   pop edi
// 0041ab3c  5e                   pop esi
// 0041ab3d  c3                   ret 
// library boost-1.34.1/libs\signals\src\trackable.cpp (function ?clear@?$list@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/trackable.cpp
