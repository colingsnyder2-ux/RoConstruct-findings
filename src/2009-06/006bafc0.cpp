// roc 2009-06 006bafc0  unit: RBX::UniversalTool  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bafc0
//
// 006bafc0  53                   push ebx
// 006bafc1  55                   push ebp
// 006bafc2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006bafc6  56                   push esi
// 006bafc7  8b742418             mov esi, dword ptr [esp + 0x18]
// 006bafcb  57                   push edi
// 006bafcc  85f6                 test esi, esi
// 006bafce  741b                 je 0x6bafeb
// 006bafd0  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006bafd4  57                   push edi
// 006bafd5  55                   push ebp
// 006bafd6  e895dfffff           call 0x6b8f70
// 006bafdb  83c408               add esp, 8
// 006bafde  85c0                 test eax, eax
// 006bafe0  7f04                 jg 0x6bafe6
// 006bafe2  8bc6                 mov eax, esi
// 006bafe4  eb15                 jmp 0x6baffb
// 006bafe6  6a00                 push 0
// 006bafe8  57                   push edi
// 006bafe9  eb07                 jmp 0x6baff2
// 006bafeb  8b442418             mov eax, dword ptr [esp + 0x18]
// 006bafef  6a00                 push 0
// 006baff1  50                   push eax
// 006baff2  55                   push ebp
// 006baff3  e8c8fcffff           call 0x6bacc0
// 006baff8  83c40c               add esp, 0xc
// 006baffb  8b742420             mov esi, dword ptr [esp + 0x20]
// 006bafff  8b0e                 mov ecx, dword ptr [esi]
// 006bb001  33ff                 xor edi, edi
// 006bb003  85c9                 test ecx, ecx
// 006bb005  743b                 je 0x6bb042
// 006bb007  8bd0                 mov edx, eax
// 006bb009  8da42400000000       lea esp, [esp]
// 006bb010  8a19                 mov bl, byte ptr [ecx]
// 006bb012  3a1a                 cmp bl, byte ptr [edx]
// 006bb014  751a                 jne 0x6bb030
// 006bb016  84db                 test bl, bl
// 006bb018  7412                 je 0x6bb02c
// 006bb01a  8a5901               mov bl, byte ptr [ecx + 1]
// 006bb01d  3a5a01               cmp bl, byte ptr [edx + 1]
// 006bb020  750e                 jne 0x6bb030
// 006bb022  83c102               add ecx, 2
// 006bb025  83c202               add edx, 2
// 006bb028  84db                 test bl, bl
// 006bb02a  75e4                 jne 0x6bb010
// 006bb02c  33c9                 xor ecx, ecx
// 006bb02e  eb05                 jmp 0x6bb035
// 006bb030  1bc9                 sbb ecx, ecx
// 006bb032  83d9ff               sbb ecx, -1
// 006bb035  85c9                 test ecx, ecx
// 006bb037  7429                 je 0x6bb062
// 006bb039  8b4cbe04             mov ecx, dword ptr [esi + edi*4 + 4]
// 006bb03d  47                   inc edi
// 006bb03e  85c9                 test ecx, ecx
// 006bb040  75c5                 jne 0x6bb007
// 006bb042  50                   push eax
// 006bb043  68f8af8e00           push 0x8eaff8
// 006bb048  55                   push ebp
// 006bb049  e812e4ffff           call 0x6b9460
// 006bb04e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006bb052  50                   push eax
// 006bb053  51                   push ecx
// 006bb054  55                   push ebp
// 006bb055  e876faffff           call 0x6baad0
// 006bb05a  83c418               add esp, 0x18
// 006bb05d  5f                   pop edi
// 006bb05e  5e                   pop esi
// 006bb05f  5d                   pop ebp
// 006bb060  5b                   pop ebx
// 006bb061  c3                   ret 
// 006bb062  8bc7                 mov eax, edi
// 006bb064  5f                   pop edi
// 006bb065  5e                   pop esi
// 006bb066  5d                   pop ebp
// 006bb067  5b                   pop ebx
// 006bb068  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkoption)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
