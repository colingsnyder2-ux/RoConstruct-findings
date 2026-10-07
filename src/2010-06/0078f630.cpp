// roc 2010-06 0078f630  unit: RBX::GroupDragTool  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078f630
//
// 0078f630  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0078f634  83f8ff               cmp eax, -1
// 0078f637  743e                 je 0x78f677
// 0078f639  8b542408             mov edx, dword ptr [esp + 8]
// 0078f63d  8b0a                 mov ecx, dword ptr [edx]
// 0078f63f  83f9ff               cmp ecx, -1
// 0078f642  7503                 jne 0x78f647
// 0078f644  8902                 mov dword ptr [edx], eax
// 0078f646  c3                   ret 
// 0078f647  53                   push ebx
// 0078f648  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0078f64c  8b13                 mov edx, dword ptr [ebx]
// 0078f64e  56                   push esi
// 0078f64f  8b720c               mov esi, dword ptr [edx + 0xc]
// 0078f652  8b148e               mov edx, dword ptr [esi + ecx*4]
// 0078f655  c1ea0e               shr edx, 0xe
// 0078f658  81eaffff0100         sub edx, 0x1ffff
// 0078f65e  83faff               cmp edx, -1
// 0078f661  740d                 je 0x78f670
// 0078f663  8d540a01             lea edx, [edx + ecx + 1]
// 0078f667  83faff               cmp edx, -1
// 0078f66a  7404                 je 0x78f670
// 0078f66c  8bca                 mov ecx, edx
// 0078f66e  ebe2                 jmp 0x78f652
// 0078f670  e82bfdffff           call 0x78f3a0
// 0078f675  5e                   pop esi
// 0078f676  5b                   pop ebx
// 0078f677  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_concat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
