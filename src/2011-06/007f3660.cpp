// from server: 100% by auto
// roc 2011-06 007f3660  unit: RBX::AdvLuaDragTool  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f3660
//
// 007f3660  8b442408             mov eax, dword ptr [esp + 8]
// 007f3664  83f80e               cmp eax, 0xe
// 007f3667  7766                 ja 0x7f36cf
// 007f3669  0fb680f8367f00       movzx eax, byte ptr [eax + 0x7f36f8]
// 007f3670  ff2485e4367f00       jmp dword ptr [eax*4 + 0x7f36e4]
// 007f3677  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f367b  8b542404             mov edx, dword ptr [esp + 4]
// 007f367f  51                   push ecx
// 007f3680  52                   push edx
// 007f3681  e89afbffff           call 0x7f3220
// 007f3686  83c408               add esp, 8
// 007f3689  c3                   ret 
// 007f368a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f368e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007f3692  e929fcffff           jmp 0x7f32c0
// 007f3697  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f369b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007f369f  50                   push eax
// 007f36a0  51                   push ecx
// 007f36a1  e82af7ffff           call 0x7f2dd0
// 007f36a6  83c408               add esp, 8
// 007f36a9  c3                   ret 
// 007f36aa  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f36ae  833805               cmp dword ptr [eax], 5
// 007f36b1  750d                 jne 0x7f36c0
// 007f36b3  83c9ff               or ecx, 0xffffffff
// 007f36b6  394810               cmp dword ptr [eax + 0x10], ecx
// 007f36b9  7505                 jne 0x7f36c0
// 007f36bb  394814               cmp dword ptr [eax + 0x14], ecx
// 007f36be  7421                 je 0x7f36e1
// 007f36c0  8b542404             mov edx, dword ptr [esp + 4]
// 007f36c4  50                   push eax
// 007f36c5  52                   push edx
// 007f36c6  e8f5f7ffff           call 0x7f2ec0
// 007f36cb  83c408               add esp, 8
// 007f36ce  c3                   ret 
// 007f36cf  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f36d3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007f36d7  50                   push eax
// 007f36d8  51                   push ecx
// 007f36d9  e8e2f7ffff           call 0x7f2ec0
// 007f36de  83c408               add esp, 8
// 007f36e1  c3                   ret 
// 007f36e2  8bff                 mov edi, edi
// 007f36e4  aa                   stosb byte ptr es:[edi], al
// 007f36e5  367f00               jg 0x7f36e8
// 007f36e8  97                   xchg edi, eax
// 007f36e9  367f00               jg 0x7f36ec
// 007f36ec  7736                 ja 0x7f3724
// 007f36ee  7f00                 jg 0x7f36f0
// 007f36f0  8a36                 mov dh, byte ptr [esi]
// 007f36f2  7f00                 jg 0x7f36f4
// 007f36f4  cf                   iretd 
// 007f36f5  367f00               jg 0x7f36f8
// 007f36f8  0000                 add byte ptr [eax], al
// 007f36fa  0000                 add byte ptr [eax], al
// 007f36fc  0000                 add byte ptr [eax], al
// 007f36fe  010404               add dword ptr [esp + eax], eax
// 007f3701  0404                 add al, 4
// 007f3703  0404                 add al, 4
// 007f3705  0203                 add al, byte ptr [ebx]
// library lua-5.1.4/lcode.c (function _luaK_infix)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
