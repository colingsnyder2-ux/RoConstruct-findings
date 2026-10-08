// from server: 100% by auto
// roc 2010-06 00733dd0  unit: seg_00730000  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00733dd0
//
// 00733dd0  51                   push ecx
// 00733dd1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00733dd5  8b4808               mov ecx, dword ptr [eax + 8]
// 00733dd8  53                   push ebx
// 00733dd9  8b1c8d082ea500       mov ebx, dword ptr [ecx*4 + 0xa52e08]
// 00733de0  56                   push esi
// 00733de1  57                   push edi
// 00733de2  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00733de6  8b5714               mov edx, dword ptr [edi + 0x14]
// 00733de9  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00733df1  8b0a                 mov ecx, dword ptr [edx]
// 00733df3  8b7208               mov esi, dword ptr [edx + 8]
// 00733df6  3bce                 cmp ecx, esi
// 00733df8  7311                 jae 0x733e0b
// 00733dfa  8d9b00000000         lea ebx, [ebx]
// 00733e00  3bc1                 cmp eax, ecx
// 00733e02  7420                 je 0x733e24
// 00733e04  83c110               add ecx, 0x10
// 00733e07  3bce                 cmp ecx, esi
// 00733e09  72f5                 jb 0x733e00
// 00733e0b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00733e0f  53                   push ebx
// 00733e10  51                   push ecx
// 00733e11  6838dea400           push 0xa4de38
// 00733e16  57                   push edi
// 00733e17  e884fdffff           call 0x733ba0
// 00733e1c  83c410               add esp, 0x10
// 00733e1f  5f                   pop edi
// 00733e20  5e                   pop esi
// 00733e21  5b                   pop ebx
// 00733e22  59                   pop ecx
// 00733e23  c3                   ret 
// 00733e24  2b470c               sub eax, dword ptr [edi + 0xc]
// 00733e27  8d4c240c             lea ecx, [esp + 0xc]
// 00733e2b  51                   push ecx
// 00733e2c  52                   push edx
// 00733e2d  c1f804               sar eax, 4
// 00733e30  57                   push edi
// 00733e31  e84afaffff           call 0x733880
// 00733e36  83c40c               add esp, 0xc
// 00733e39  85c0                 test eax, eax
// 00733e3b  74ce                 je 0x733e0b
// 00733e3d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00733e41  53                   push ebx
// 00733e42  52                   push edx
// 00733e43  50                   push eax
// 00733e44  8b442428             mov eax, dword ptr [esp + 0x28]
// 00733e48  50                   push eax
// 00733e49  6814dea400           push 0xa4de14
// 00733e4e  57                   push edi
// 00733e4f  e84cfdffff           call 0x733ba0
// 00733e54  83c418               add esp, 0x18
// 00733e57  5f                   pop edi
// 00733e58  5e                   pop esi
// 00733e59  5b                   pop ebx
// 00733e5a  59                   pop ecx
// 00733e5b  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_typeerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
