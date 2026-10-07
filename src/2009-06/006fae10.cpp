// roc 2009-06 006fae10  unit: RBX::GroupDragTool  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fae10
//
// 006fae10  8b442404             mov eax, dword ptr [esp + 4]
// 006fae14  55                   push ebp
// 006fae15  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006fae19  56                   push esi
// 006fae1a  50                   push eax
// 006fae1b  8bc5                 mov eax, ebp
// 006fae1d  8bf3                 mov esi, ebx
// 006fae1f  e8fcf1ffff           call 0x6fa020
// 006fae24  83c404               add esp, 4
// 006fae27  85c0                 test eax, eax
// 006fae29  0f85c6000000         jne 0x6faef5
// 006fae2f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006fae33  83f812               cmp eax, 0x12
// 006fae36  7413                 je 0x6fae4b
// 006fae38  83f814               cmp eax, 0x14
// 006fae3b  740e                 je 0x6fae4b
// 006fae3d  55                   push ebp
// 006fae3e  57                   push edi
// 006fae3f  e88cfaffff           call 0x6fa8d0
// 006fae44  83c408               add esp, 8
// 006fae47  8bf0                 mov esi, eax
// 006fae49  eb02                 jmp 0x6fae4d
// 006fae4b  33f6                 xor esi, esi
// 006fae4d  53                   push ebx
// 006fae4e  57                   push edi
// 006fae4f  e87cfaffff           call 0x6fa8d0
// 006fae54  83c408               add esp, 8
// 006fae57  3bc6                 cmp eax, esi
// 006fae59  7e39                 jle 0x6fae94
// 006fae5b  833b0c               cmp dword ptr [ebx], 0xc
// 006fae5e  7516                 jne 0x6fae76
// 006fae60  8b4b08               mov ecx, dword ptr [ebx + 8]
// 006fae63  f7c100010000         test ecx, 0x100
// 006fae69  750b                 jne 0x6fae76
// 006fae6b  0fb65732             movzx edx, byte ptr [edi + 0x32]
// 006fae6f  3bca                 cmp ecx, edx
// 006fae71  7c03                 jl 0x6fae76
// 006fae73  ff4f24               dec dword ptr [edi + 0x24]
// 006fae76  837d000c             cmp dword ptr [ebp], 0xc
// 006fae7a  7552                 jne 0x6faece
// 006fae7c  8b6d08               mov ebp, dword ptr [ebp + 8]
// 006fae7f  f7c500010000         test ebp, 0x100
// 006fae85  7547                 jne 0x6faece
// 006fae87  0fb64f32             movzx ecx, byte ptr [edi + 0x32]
// 006fae8b  3be9                 cmp ebp, ecx
// 006fae8d  7c3f                 jl 0x6faece
// 006fae8f  ff4f24               dec dword ptr [edi + 0x24]
// 006fae92  eb3a                 jmp 0x6faece
// 006fae94  83caff               or edx, 0xffffffff
// 006fae97  837d000c             cmp dword ptr [ebp], 0xc
// 006fae9b  7516                 jne 0x6faeb3
// 006fae9d  8b6d08               mov ebp, dword ptr [ebp + 8]
// 006faea0  f7c500010000         test ebp, 0x100
// 006faea6  750b                 jne 0x6faeb3
// 006faea8  0fb64f32             movzx ecx, byte ptr [edi + 0x32]
// 006faeac  3be9                 cmp ebp, ecx
// 006faeae  7c03                 jl 0x6faeb3
// 006faeb0  015724               add dword ptr [edi + 0x24], edx
// 006faeb3  833b0c               cmp dword ptr [ebx], 0xc
// 006faeb6  7516                 jne 0x6faece
// 006faeb8  8b4b08               mov ecx, dword ptr [ebx + 8]
// 006faebb  f7c100010000         test ecx, 0x100
// 006faec1  750b                 jne 0x6faece
// 006faec3  0fb66f32             movzx ebp, byte ptr [edi + 0x32]
// 006faec7  3bcd                 cmp ecx, ebp
// 006faec9  7c03                 jl 0x6faece
// 006faecb  015724               add dword ptr [edi + 0x24], edx
// 006faece  8b570c               mov edx, dword ptr [edi + 0xc]
// 006faed1  8b4a08               mov ecx, dword ptr [edx + 8]
// 006faed4  c1e009               shl eax, 9
// 006faed7  0bc6                 or eax, esi
// 006faed9  c1e00e               shl eax, 0xe
// 006faedc  0b44240c             or eax, dword ptr [esp + 0xc]
// 006faee0  51                   push ecx
// 006faee1  50                   push eax
// 006faee2  8bf7                 mov esi, edi
// 006faee4  e847f2ffff           call 0x6fa130
// 006faee9  83c408               add esp, 8
// 006faeec  894308               mov dword ptr [ebx + 8], eax
// 006faeef  c7030b000000         mov dword ptr [ebx], 0xb
// 006faef5  5e                   pop esi
// 006faef6  5d                   pop ebp
// 006faef7  c3                   ret 
// library lua-5.1.4/lcode.c (function _codearith)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
