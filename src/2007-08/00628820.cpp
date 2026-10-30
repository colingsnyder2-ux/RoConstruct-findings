// from server: 100% by auto
// roc 2007-08 00628820  unit: RBX::AssemblyStage  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00628820
//
// 00628820  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00628824  83f8ff               cmp eax, -1
// 00628827  743e                 je 0x628867
// 00628829  8b542408             mov edx, dword ptr [esp + 8]
// 0062882d  8b0a                 mov ecx, dword ptr [edx]
// 0062882f  83f9ff               cmp ecx, -1
// 00628832  7503                 jne 0x628837
// 00628834  8902                 mov dword ptr [edx], eax
// 00628836  c3                   ret 
// 00628837  53                   push ebx
// 00628838  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0062883c  8b13                 mov edx, dword ptr [ebx]
// 0062883e  56                   push esi
// 0062883f  8b720c               mov esi, dword ptr [edx + 0xc]
// 00628842  8b148e               mov edx, dword ptr [esi + ecx*4]
// 00628845  c1ea0e               shr edx, 0xe
// 00628848  81eaffff0100         sub edx, 0x1ffff
// 0062884e  83faff               cmp edx, -1
// 00628851  740d                 je 0x628860
// 00628853  8d540a01             lea edx, [edx + ecx + 1]
// 00628857  83faff               cmp edx, -1
// 0062885a  7404                 je 0x628860
// 0062885c  8bca                 mov ecx, edx
// 0062885e  ebe2                 jmp 0x628842
// 00628860  e82bfdffff           call 0x628590
// 00628865  5e                   pop esi
// 00628866  5b                   pop ebx
// 00628867  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_concat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
