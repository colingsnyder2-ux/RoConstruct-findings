// from server: 100% by auto
// roc 2010-06 00743bc0  unit: RBX::VHttp::?$sp_counted_impl_p  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00743bc0
//
// 00743bc0  56                   push esi
// 00743bc1  57                   push edi
// 00743bc2  8bf9                 mov edi, ecx
// 00743bc4  8b4714               mov eax, dword ptr [edi + 0x14]
// 00743bc7  8b30                 mov esi, dword ptr [eax]
// 00743bc9  8900                 mov dword ptr [eax], eax
// 00743bcb  8b4714               mov eax, dword ptr [edi + 0x14]
// 00743bce  894004               mov dword ptr [eax + 4], eax
// 00743bd1  c7471800000000       mov dword ptr [edi + 0x18], 0
// 00743bd8  3b7714               cmp esi, dword ptr [edi + 0x14]
// 00743bdb  741e                 je 0x743bfb
// 00743bdd  53                   push ebx
// 00743bde  8bff                 mov edi, edi
// 00743be0  8b1e                 mov ebx, dword ptr [esi]
// 00743be2  8d4e08               lea ecx, [esi + 8]
// 00743be5  e836f7ffff           call 0x743320
// 00743bea  56                   push esi
// 00743beb  e8aa3d0600           call 0x7a799a
// 00743bf0  83c404               add esp, 4
// 00743bf3  8bf3                 mov esi, ebx
// 00743bf5  3b5f14               cmp ebx, dword ptr [edi + 0x14]
// 00743bf8  75e6                 jne 0x743be0
// 00743bfa  5b                   pop ebx
// 00743bfb  5f                   pop edi
// 00743bfc  5e                   pop esi
// 00743bfd  c3                   ret 
// library boost-1.34.1/libs\signals\src\trackable.cpp (function ?clear@?$list@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/trackable.cpp
