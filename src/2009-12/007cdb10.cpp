// roc 2009-12 007cdb10  unit: RBX::PartDropTool  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007cdb10
//
// 007cdb10  55                   push ebp
// 007cdb11  56                   push esi
// 007cdb12  8bf0                 mov esi, eax
// 007cdb14  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 007cdb17  0fb64515             movzx eax, byte ptr [ebp + 0x15]
// 007cdb1b  57                   push edi
// 007cdb1c  83f804               cmp eax, 4
// 007cdb1f  0f87cd000000         ja 0x7cdbf2
// 007cdb25  ff2485f8db7c00       jmp dword ptr [eax*4 + 0x7cdbf8]
// 007cdb2c  8bfe                 mov edi, esi
// 007cdb2e  e8adfdffff           call 0x7cd8e0
// 007cdb33  5f                   pop edi
// 007cdb34  5e                   pop esi
// 007cdb35  33c0                 xor eax, eax
// 007cdb37  5d                   pop ebp
// 007cdb38  c3                   ret 
// 007cdb39  837d2400             cmp dword ptr [ebp + 0x24], 0
// 007cdb3d  740a                 je 0x7cdb49
// 007cdb3f  5f                   pop edi
// 007cdb40  5e                   pop esi
// 007cdb41  8bc5                 mov eax, ebp
// 007cdb43  5d                   pop ebp
// 007cdb44  e997f8ffff           jmp 0x7cd3e0
// 007cdb49  56                   push esi
// 007cdb4a  e841feffff           call 0x7cd990
// 007cdb4f  83c404               add esp, 4
// 007cdb52  5f                   pop edi
// 007cdb53  5e                   pop esi
// 007cdb54  33c0                 xor eax, eax
// 007cdb56  5d                   pop ebp
// 007cdb57  c3                   ret 
// 007cdb58  8b4518               mov eax, dword ptr [ebp + 0x18]
// 007cdb5b  8b4d00               mov ecx, dword ptr [ebp]
// 007cdb5e  8b7d44               mov edi, dword ptr [ebp + 0x44]
// 007cdb61  8d0c81               lea ecx, [ecx + eax*4]
// 007cdb64  6afd                 push -3
// 007cdb66  51                   push ecx
// 007cdb67  40                   inc eax
// 007cdb68  56                   push esi
// 007cdb69  894518               mov dword ptr [ebp + 0x18], eax
// 007cdb6c  e80ffbffff           call 0x7cd680
// 007cdb71  8b5518               mov edx, dword ptr [ebp + 0x18]
// 007cdb74  83c40c               add esp, 0xc
// 007cdb77  3b5508               cmp edx, dword ptr [ebp + 8]
// 007cdb7a  7c04                 jl 0x7cdb80
// 007cdb7c  c6451503             mov byte ptr [ebp + 0x15], 3
// 007cdb80  8b4544               mov eax, dword ptr [ebp + 0x44]
// 007cdb83  2bc7                 sub eax, edi
// 007cdb85  014548               add dword ptr [ebp + 0x48], eax
// 007cdb88  5f                   pop edi
// 007cdb89  5e                   pop esi
// 007cdb8a  b80a000000           mov eax, 0xa
// 007cdb8f  5d                   pop ebp
// 007cdb90  c3                   ret 
// 007cdb91  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 007cdb94  8b7d44               mov edi, dword ptr [ebp + 0x44]
// 007cdb97  6a28                 push 0x28
// 007cdb99  51                   push ecx
// 007cdb9a  56                   push esi
// 007cdb9b  e8e0faffff           call 0x7cd680
// 007cdba0  83c40c               add esp, 0xc
// 007cdba3  894520               mov dword ptr [ebp + 0x20], eax
// 007cdba6  833800               cmp dword ptr [eax], 0
// 007cdba9  750d                 jne 0x7cdbb8
// 007cdbab  53                   push ebx
// 007cdbac  8bde                 mov ebx, esi
// 007cdbae  e85dfbffff           call 0x7cd710
// 007cdbb3  c6451504             mov byte ptr [ebp + 0x15], 4
// 007cdbb7  5b                   pop ebx
// 007cdbb8  8b5544               mov edx, dword ptr [ebp + 0x44]
// 007cdbbb  2bd7                 sub edx, edi
// 007cdbbd  015548               add dword ptr [ebp + 0x48], edx
// 007cdbc0  5f                   pop edi
// 007cdbc1  5e                   pop esi
// 007cdbc2  b890010000           mov eax, 0x190
// 007cdbc7  5d                   pop ebp
// 007cdbc8  c3                   ret 
// 007cdbc9  33c0                 xor eax, eax
// 007cdbcb  394530               cmp dword ptr [ebp + 0x30], eax
// 007cdbce  741c                 je 0x7cdbec
// 007cdbd0  e8abfbffff           call 0x7cd780
// 007cdbd5  8b4548               mov eax, dword ptr [ebp + 0x48]
// 007cdbd8  83f864               cmp eax, 0x64
// 007cdbdb  7606                 jbe 0x7cdbe3
// 007cdbdd  83c09c               add eax, -0x64
// 007cdbe0  894548               mov dword ptr [ebp + 0x48], eax
// 007cdbe3  5f                   pop edi
// 007cdbe4  5e                   pop esi
// 007cdbe5  b864000000           mov eax, 0x64
// 007cdbea  5d                   pop ebp
// 007cdbeb  c3                   ret 
// 007cdbec  884515               mov byte ptr [ebp + 0x15], al
// 007cdbef  89454c               mov dword ptr [ebp + 0x4c], eax
// 007cdbf2  5f                   pop edi
// 007cdbf3  5e                   pop esi
// 007cdbf4  33c0                 xor eax, eax
// 007cdbf6  5d                   pop ebp
// 007cdbf7  c3                   ret 
// 007cdbf8  2cdb                 sub al, 0xdb
// 007cdbfa  7c00                 jl 0x7cdbfc
// 007cdbfc  39db                 cmp ebx, ebx
// 007cdbfe  7c00                 jl 0x7cdc00
// 007cdc00  58                   pop eax
// 007cdc01  db7c0091             fstp xword ptr [eax + eax - 0x6f]
// 007cdc05  db7c00c9             fstp xword ptr [eax + eax - 0x37]
// library lua-5.1.1/lgc.c (function _singlestep)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 lgc.c
