// from server: 100% by auto
// roc 2009-06 006f9cb0  unit: RBX::GroupDragTool  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f9cb0
//
// 006f9cb0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006f9cb4  83f8ff               cmp eax, -1
// 006f9cb7  743e                 je 0x6f9cf7
// 006f9cb9  8b542408             mov edx, dword ptr [esp + 8]
// 006f9cbd  8b0a                 mov ecx, dword ptr [edx]
// 006f9cbf  83f9ff               cmp ecx, -1
// 006f9cc2  7503                 jne 0x6f9cc7
// 006f9cc4  8902                 mov dword ptr [edx], eax
// 006f9cc6  c3                   ret 
// 006f9cc7  53                   push ebx
// 006f9cc8  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006f9ccc  8b13                 mov edx, dword ptr [ebx]
// 006f9cce  56                   push esi
// 006f9ccf  8b720c               mov esi, dword ptr [edx + 0xc]
// 006f9cd2  8b148e               mov edx, dword ptr [esi + ecx*4]
// 006f9cd5  c1ea0e               shr edx, 0xe
// 006f9cd8  81eaffff0100         sub edx, 0x1ffff
// 006f9cde  83faff               cmp edx, -1
// 006f9ce1  740d                 je 0x6f9cf0
// 006f9ce3  8d540a01             lea edx, [edx + ecx + 1]
// 006f9ce7  83faff               cmp edx, -1
// 006f9cea  7404                 je 0x6f9cf0
// 006f9cec  8bca                 mov ecx, edx
// 006f9cee  ebe2                 jmp 0x6f9cd2
// 006f9cf0  e82bfdffff           call 0x6f9a20
// 006f9cf5  5e                   pop esi
// 006f9cf6  5b                   pop ebx
// 006f9cf7  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_concat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
