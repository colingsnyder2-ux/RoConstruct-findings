// from server: 100% by auto
// roc 2008-06 0065f530  unit: seg_00650000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065f530
//
// 0065f530  8b542404             mov edx, dword ptr [esp + 4]
// 0065f534  8b4268               mov eax, dword ptr [edx + 0x68]
// 0065f537  53                   push ebx
// 0065f538  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0065f53c  56                   push esi
// 0065f53d  8b7210               mov esi, dword ptr [edx + 0x10]
// 0065f540  57                   push edi
// 0065f541  8d7a68               lea edi, [edx + 0x68]
// 0065f544  85c0                 test eax, eax
// 0065f546  7411                 je 0x65f559
// 0065f548  8b4808               mov ecx, dword ptr [eax + 8]
// 0065f54b  3bcb                 cmp ecx, ebx
// 0065f54d  720a                 jb 0x65f559
// 0065f54f  7449                 je 0x65f59a
// 0065f551  8bf8                 mov edi, eax
// 0065f553  8b00                 mov eax, dword ptr [eax]
// 0065f555  85c0                 test eax, eax
// 0065f557  75ef                 jne 0x65f548
// 0065f559  6a20                 push 0x20
// 0065f55b  6a00                 push 0
// 0065f55d  6a00                 push 0
// 0065f55f  52                   push edx
// 0065f560  e88b110000           call 0x6606f0
// 0065f565  c640040a             mov byte ptr [eax + 4], 0xa
// 0065f569  8a4e14               mov cl, byte ptr [esi + 0x14]
// 0065f56c  895808               mov dword ptr [eax + 8], ebx
// 0065f56f  83c410               add esp, 0x10
// 0065f572  80e103               and cl, 3
// 0065f575  884805               mov byte ptr [eax + 5], cl
// 0065f578  8b17                 mov edx, dword ptr [edi]
// 0065f57a  8910                 mov dword ptr [eax], edx
// 0065f57c  8907                 mov dword ptr [edi], eax
// 0065f57e  8d4e78               lea ecx, [esi + 0x78]
// 0065f581  894810               mov dword ptr [eax + 0x10], ecx
// 0065f584  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0065f58a  894814               mov dword ptr [eax + 0x14], ecx
// 0065f58d  894110               mov dword ptr [ecx + 0x10], eax
// 0065f590  89868c000000         mov dword ptr [esi + 0x8c], eax
// 0065f596  5f                   pop edi
// 0065f597  5e                   pop esi
// 0065f598  5b                   pop ebx
// 0065f599  c3                   ret 
// 0065f59a  8a4805               mov cl, byte ptr [eax + 5]
// 0065f59d  0fb65e14             movzx ebx, byte ptr [esi + 0x14]
// 0065f5a1  0fb6d1               movzx edx, cl
// 0065f5a4  83e203               and edx, 3
// 0065f5a7  f7d3                 not ebx
// 0065f5a9  84d3                 test bl, dl
// 0065f5ab  74e9                 je 0x65f596
// 0065f5ad  5f                   pop edi
// 0065f5ae  80f103               xor cl, 3
// 0065f5b1  5e                   pop esi
// 0065f5b2  884805               mov byte ptr [eax + 5], cl
// 0065f5b5  5b                   pop ebx
// 0065f5b6  c3                   ret 
// library lua-5.1.1/lfunc.c (function _luaF_findupval)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 lfunc.c
