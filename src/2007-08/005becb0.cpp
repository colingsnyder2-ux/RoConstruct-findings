// from server: 100% by auto
// roc 2007-08 005becb0  unit: boost::detail::H::?$sp_counted_impl_p  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005becb0
//
// 005becb0  53                   push ebx
// 005becb1  56                   push esi
// 005becb2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005becb6  57                   push edi
// 005becb7  8b7e08               mov edi, dword ptr [esi + 8]
// 005becba  8d442410             lea eax, [esp + 0x10]
// 005becbe  50                   push eax
// 005becbf  6aff                 push -1
// 005becc1  57                   push edi
// 005becc2  e8b9ecffff           call 0x5bd980
// 005becc7  8b0e                 mov ecx, dword ptr [esi]
// 005becc9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005beccd  8bde                 mov ebx, esi
// 005beccf  2bd9                 sub ebx, ecx
// 005becd1  81c30c020000         add ebx, 0x20c
// 005becd7  83c40c               add esp, 0xc
// 005becda  3bd3                 cmp edx, ebx
// 005becdc  771d                 ja 0x5becfb
// 005becde  52                   push edx
// 005becdf  50                   push eax
// 005bece0  51                   push ecx
// 005bece1  e866200700           call 0x630d4c
// 005bece6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005becea  010e                 add dword ptr [esi], ecx
// 005becec  6afe                 push -2
// 005becee  57                   push edi
// 005becef  e89ce8ffff           call 0x5bd590
// 005becf4  83c414               add esp, 0x14
// 005becf7  5f                   pop edi
// 005becf8  5e                   pop esi
// 005becf9  5b                   pop ebx
// 005becfa  c3                   ret 
// 005becfb  2bce                 sub ecx, esi
// 005becfd  83e90c               sub ecx, 0xc
// 005bed00  741f                 je 0x5bed21
// 005bed02  8b5608               mov edx, dword ptr [esi + 8]
// 005bed05  51                   push ecx
// 005bed06  8d5e0c               lea ebx, [esi + 0xc]
// 005bed09  53                   push ebx
// 005bed0a  52                   push edx
// 005bed0b  e8a0eeffff           call 0x5bdbb0
// 005bed10  83460401             add dword ptr [esi + 4], 1
// 005bed14  6afe                 push -2
// 005bed16  57                   push edi
// 005bed17  891e                 mov dword ptr [esi], ebx
// 005bed19  e812e9ffff           call 0x5bd630
// 005bed1e  83c414               add esp, 0x14
// 005bed21  83460401             add dword ptr [esi + 4], 1
// 005bed25  56                   push esi
// 005bed26  e825feffff           call 0x5beb50
// 005bed2b  83c404               add esp, 4
// 005bed2e  5f                   pop edi
// 005bed2f  5e                   pop esi
// 005bed30  5b                   pop ebx
// 005bed31  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_addvalue)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
