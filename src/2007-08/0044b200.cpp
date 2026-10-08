// roc 2007-08 0044b200  unit: ErrorUploader::Udata::?$sp_counted_impl_p  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044b200
//
// 0044b200  53                   push ebx
// 0044b201  55                   push ebp
// 0044b202  56                   push esi
// 0044b203  57                   push edi
// 0044b204  6a04                 push 4
// 0044b206  8be9                 mov ebp, ecx
// 0044b208  e8e94c1e00           call 0x62fef6
// 0044b20d  83c404               add esp, 4
// 0044b210  85c0                 test eax, eax
// 0044b212  740a                 je 0x44b21e
// 0044b214  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0044b218  8908                 mov dword ptr [eax], ecx
// 0044b21a  8bd8                 mov ebx, eax
// 0044b21c  eb02                 jmp 0x44b220
// 0044b21e  33db                 xor ebx, ebx
// 0044b220  e86bffffff           call 0x44b190
// 0044b225  8bf8                 mov edi, eax
// 0044b227  8bcf                 mov ecx, edi
// 0044b229  e842ad2d00           call 0x725f70
// 0044b22e  8bf0                 mov esi, eax
// 0044b230  85f6                 test esi, esi
// 0044b232  7409                 je 0x44b23d
// 0044b234  6a00                 push 0
// 0044b236  8bcf                 mov ecx, edi
// 0044b238  e8d3af2d00           call 0x726210
// 0044b23d  897500               mov dword ptr [ebp], esi
// 0044b240  e84bffffff           call 0x44b190
// 0044b245  8bf0                 mov esi, eax
// 0044b247  8bce                 mov ecx, esi
// 0044b249  e822ad2d00           call 0x725f70
// 0044b24e  8bf8                 mov edi, eax
// 0044b250  3bfb                 cmp edi, ebx
// 0044b252  7414                 je 0x44b268
// 0044b254  53                   push ebx
// 0044b255  8bce                 mov ecx, esi
// 0044b257  e8b4af2d00           call 0x726210
// 0044b25c  85ff                 test edi, edi
// 0044b25e  7408                 je 0x44b268
// 0044b260  57                   push edi
// 0044b261  8bce                 mov ecx, esi
// 0044b263  e8b8a72d00           call 0x725a20
// 0044b268  5f                   pop edi
// 0044b269  5e                   pop esi
// 0044b26a  8bc5                 mov eax, ebp
// 0044b26c  5d                   pop ebp
// 0044b26d  5b                   pop ebx
// 0044b26e  c20400               ret 4
// library rbxgs/script\ScriptContext.cpp (function ??0Impersonator@Security@RBX@@QAE@W4Identities@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
