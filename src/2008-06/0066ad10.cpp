// from server: 100% by auto
// roc 2008-06 0066ad10  unit: RBX::GroupDragTool  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066ad10
//
// 0066ad10  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066ad14  83f8ff               cmp eax, -1
// 0066ad17  743e                 je 0x66ad57
// 0066ad19  8b542408             mov edx, dword ptr [esp + 8]
// 0066ad1d  8b0a                 mov ecx, dword ptr [edx]
// 0066ad1f  83f9ff               cmp ecx, -1
// 0066ad22  7503                 jne 0x66ad27
// 0066ad24  8902                 mov dword ptr [edx], eax
// 0066ad26  c3                   ret 
// 0066ad27  53                   push ebx
// 0066ad28  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0066ad2c  8b13                 mov edx, dword ptr [ebx]
// 0066ad2e  56                   push esi
// 0066ad2f  8b720c               mov esi, dword ptr [edx + 0xc]
// 0066ad32  8b148e               mov edx, dword ptr [esi + ecx*4]
// 0066ad35  c1ea0e               shr edx, 0xe
// 0066ad38  81eaffff0100         sub edx, 0x1ffff
// 0066ad3e  83faff               cmp edx, -1
// 0066ad41  740d                 je 0x66ad50
// 0066ad43  8d540a01             lea edx, [edx + ecx + 1]
// 0066ad47  83faff               cmp edx, -1
// 0066ad4a  7404                 je 0x66ad50
// 0066ad4c  8bca                 mov ecx, edx
// 0066ad4e  ebe2                 jmp 0x66ad32
// 0066ad50  e82bfdffff           call 0x66aa80
// 0066ad55  5e                   pop esi
// 0066ad56  5b                   pop ebx
// 0066ad57  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_concat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
