// roc 2011-06 007c8d70  unit: RBX::ChatLine  size: 706 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007c8d70
//
// 007c8d70  64a100000000         mov eax, dword ptr fs:[0]
// 007c8d76  6aff                 push -1
// 007c8d78  68221b9d00           push 0x9d1b22
// 007c8d7d  50                   push eax
// 007c8d7e  64892500000000       mov dword ptr fs:[0], esp
// 007c8d85  8b442414             mov eax, dword ptr [esp + 0x14]
// 007c8d89  83ec48               sub esp, 0x48
// 007c8d8c  80785900             cmp byte ptr [eax + 0x59], 0
// 007c8d90  55                   push ebp
// 007c8d91  8be9                 mov ebp, ecx
// 007c8d93  7459                 je 0x7c8dee
// 007c8d95  6820b6a500           push 0xa5b620
// 007c8d9a  8d4c240c             lea ecx, [esp + 0xc]
// 007c8d9e  ff15c404a400         call dword ptr [0xa404c4]
// 007c8da4  8d4c2424             lea ecx, [esp + 0x24]
// 007c8da8  c744245400000000     mov dword ptr [esp + 0x54], 0
// 007c8db0  ff15600aa400         call dword ptr [0xa40a60]
// 007c8db6  8d442408             lea eax, [esp + 8]
// 007c8dba  50                   push eax
// 007c8dbb  8d4c2434             lea ecx, [esp + 0x34]
// 007c8dbf  c644245801           mov byte ptr [esp + 0x58], 1
// 007c8dc4  c7442428c0b5a500     mov dword ptr [esp + 0x28], 0xa5b5c0
// 007c8dcc  ff15c804a400         call dword ptr [0xa404c8]
// 007c8dd2  681873b800           push 0xb87318
// 007c8dd7  8d4c2428             lea ecx, [esp + 0x28]
// 007c8ddb  51                   push ecx
// 007c8ddc  c644245c00           mov byte ptr [esp + 0x5c], 0
// 007c8de1  c744242cd8b5a500     mov dword ptr [esp + 0x2c], 0xa5b5d8
// 007c8de9  e8be220400           call 0x80b0ac
// 007c8dee  53                   push ebx
// 007c8def  56                   push esi
// 007c8df0  8bd8                 mov ebx, eax
// 007c8df2  57                   push edi
// 007c8df3  8d4c246c             lea ecx, [esp + 0x6c]
// 007c8df7  895c2410             mov dword ptr [esp + 0x10], ebx
// 007c8dfb  e800f8ffff           call 0x7c8600
// 007c8e00  8b0b                 mov ecx, dword ptr [ebx]
// 007c8e02  80795900             cmp byte ptr [ecx + 0x59], 0
// 007c8e06  7405                 je 0x7c8e0d
// 007c8e08  8b7b08               mov edi, dword ptr [ebx + 8]
// 007c8e0b  eb1b                 jmp 0x7c8e28
// 007c8e0d  8b5308               mov edx, dword ptr [ebx + 8]
// 007c8e10  807a5900             cmp byte ptr [edx + 0x59], 0
// 007c8e14  7404                 je 0x7c8e1a
// 007c8e16  8bf9                 mov edi, ecx
// 007c8e18  eb0e                 jmp 0x7c8e28
// 007c8e1a  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007c8e1e  8b7808               mov edi, dword ptr [eax + 8]
// 007c8e21  8d5008               lea edx, [eax + 8]
// 007c8e24  3bc3                 cmp eax, ebx
// 007c8e26  756b                 jne 0x7c8e93
// 007c8e28  807f5900             cmp byte ptr [edi + 0x59], 0
// 007c8e2c  8b7304               mov esi, dword ptr [ebx + 4]
// 007c8e2f  7503                 jne 0x7c8e34
// 007c8e31  897704               mov dword ptr [edi + 4], esi
// 007c8e34  8b4504               mov eax, dword ptr [ebp + 4]
// 007c8e37  395804               cmp dword ptr [eax + 4], ebx
// 007c8e3a  7505                 jne 0x7c8e41
// 007c8e3c  897804               mov dword ptr [eax + 4], edi
// 007c8e3f  eb0b                 jmp 0x7c8e4c
// 007c8e41  391e                 cmp dword ptr [esi], ebx
// 007c8e43  7504                 jne 0x7c8e49
// 007c8e45  893e                 mov dword ptr [esi], edi
// 007c8e47  eb03                 jmp 0x7c8e4c
// 007c8e49  897e08               mov dword ptr [esi + 8], edi
// 007c8e4c  8b5d04               mov ebx, dword ptr [ebp + 4]
// 007c8e4f  8b03                 mov eax, dword ptr [ebx]
// 007c8e51  3b442410             cmp eax, dword ptr [esp + 0x10]
// 007c8e55  7515                 jne 0x7c8e6c
// 007c8e57  807f5900             cmp byte ptr [edi + 0x59], 0
// 007c8e5b  7404                 je 0x7c8e61
// 007c8e5d  8bc6                 mov eax, esi
// 007c8e5f  eb09                 jmp 0x7c8e6a
// 007c8e61  57                   push edi
// 007c8e62  e819f7ffff           call 0x7c8580
// 007c8e67  83c404               add esp, 4
// 007c8e6a  8903                 mov dword ptr [ebx], eax
// 007c8e6c  8b5d04               mov ebx, dword ptr [ebp + 4]
// 007c8e6f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007c8e73  394b08               cmp dword ptr [ebx + 8], ecx
// 007c8e76  7577                 jne 0x7c8eef
// 007c8e78  807f5900             cmp byte ptr [edi + 0x59], 0
// 007c8e7c  7407                 je 0x7c8e85
// 007c8e7e  8bc6                 mov eax, esi
// 007c8e80  894308               mov dword ptr [ebx + 8], eax
// 007c8e83  eb6a                 jmp 0x7c8eef
// 007c8e85  57                   push edi
// 007c8e86  e8d5f6ffff           call 0x7c8560
// 007c8e8b  83c404               add esp, 4
// 007c8e8e  894308               mov dword ptr [ebx + 8], eax
// 007c8e91  eb5c                 jmp 0x7c8eef
// 007c8e93  894104               mov dword ptr [ecx + 4], eax
// 007c8e96  8b0b                 mov ecx, dword ptr [ebx]
// 007c8e98  8908                 mov dword ptr [eax], ecx
// 007c8e9a  3b4308               cmp eax, dword ptr [ebx + 8]
// 007c8e9d  7504                 jne 0x7c8ea3
// 007c8e9f  8bf0                 mov esi, eax
// 007c8ea1  eb19                 jmp 0x7c8ebc
// 007c8ea3  807f5900             cmp byte ptr [edi + 0x59], 0
// 007c8ea7  8b7004               mov esi, dword ptr [eax + 4]
// 007c8eaa  7503                 jne 0x7c8eaf
// 007c8eac  897704               mov dword ptr [edi + 4], esi
// 007c8eaf  893e                 mov dword ptr [esi], edi
// 007c8eb1  8b4b08               mov ecx, dword ptr [ebx + 8]
// 007c8eb4  890a                 mov dword ptr [edx], ecx
// 007c8eb6  8b5308               mov edx, dword ptr [ebx + 8]
// 007c8eb9  894204               mov dword ptr [edx + 4], eax
// 007c8ebc  8b4d04               mov ecx, dword ptr [ebp + 4]
// 007c8ebf  395904               cmp dword ptr [ecx + 4], ebx
// 007c8ec2  7505                 jne 0x7c8ec9
// 007c8ec4  894104               mov dword ptr [ecx + 4], eax
// 007c8ec7  eb0e                 jmp 0x7c8ed7
// 007c8ec9  8b4b04               mov ecx, dword ptr [ebx + 4]
// 007c8ecc  3919                 cmp dword ptr [ecx], ebx
// 007c8ece  7504                 jne 0x7c8ed4
// 007c8ed0  8901                 mov dword ptr [ecx], eax
// 007c8ed2  eb03                 jmp 0x7c8ed7
// 007c8ed4  894108               mov dword ptr [ecx + 8], eax
// 007c8ed7  8b4b04               mov ecx, dword ptr [ebx + 4]
// 007c8eda  894804               mov dword ptr [eax + 4], ecx
// 007c8edd  8d4b58               lea ecx, [ebx + 0x58]
// 007c8ee0  83c058               add eax, 0x58
// 007c8ee3  3bc1                 cmp eax, ecx
// 007c8ee5  7408                 je 0x7c8eef
// 007c8ee7  8a19                 mov bl, byte ptr [ecx]
// 007c8ee9  8a10                 mov dl, byte ptr [eax]
// 007c8eeb  8818                 mov byte ptr [eax], bl
// 007c8eed  8811                 mov byte ptr [ecx], dl
// 007c8eef  8b542410             mov edx, dword ptr [esp + 0x10]
// 007c8ef3  b301                 mov bl, 1
// 007c8ef5  385a58               cmp byte ptr [edx + 0x58], bl
// 007c8ef8  0f85fd000000         jne 0x7c8ffb
// 007c8efe  8b4504               mov eax, dword ptr [ebp + 4]
// 007c8f01  3b7804               cmp edi, dword ptr [eax + 4]
// 007c8f04  0f84ee000000         je 0x7c8ff8
// 007c8f0a  8d9b00000000         lea ebx, [ebx]
// 007c8f10  385f58               cmp byte ptr [edi + 0x58], bl
// 007c8f13  0f85df000000         jne 0x7c8ff8
// 007c8f19  8b06                 mov eax, dword ptr [esi]
// 007c8f1b  3bf8                 cmp edi, eax
// 007c8f1d  7565                 jne 0x7c8f84
// 007c8f1f  8b4608               mov eax, dword ptr [esi + 8]
// 007c8f22  80785800             cmp byte ptr [eax + 0x58], 0
// 007c8f26  7512                 jne 0x7c8f3a
// 007c8f28  885858               mov byte ptr [eax + 0x58], bl
// 007c8f2b  56                   push esi
// 007c8f2c  8bcd                 mov ecx, ebp
// 007c8f2e  c6465800             mov byte ptr [esi + 0x58], 0
// 007c8f32  e8d9f5ffff           call 0x7c8510
// 007c8f37  8b4608               mov eax, dword ptr [esi + 8]
// 007c8f3a  80785900             cmp byte ptr [eax + 0x59], 0
// 007c8f3e  7574                 jne 0x7c8fb4
// 007c8f40  8b08                 mov ecx, dword ptr [eax]
// 007c8f42  385958               cmp byte ptr [ecx + 0x58], bl
// 007c8f45  7508                 jne 0x7c8f4f
// 007c8f47  8b5008               mov edx, dword ptr [eax + 8]
// 007c8f4a  385a58               cmp byte ptr [edx + 0x58], bl
// 007c8f4d  7461                 je 0x7c8fb0
// 007c8f4f  8b4808               mov ecx, dword ptr [eax + 8]
// 007c8f52  385958               cmp byte ptr [ecx + 0x58], bl
// 007c8f55  7514                 jne 0x7c8f6b
// 007c8f57  8b10                 mov edx, dword ptr [eax]
// 007c8f59  885a58               mov byte ptr [edx + 0x58], bl
// 007c8f5c  50                   push eax
// 007c8f5d  8bcd                 mov ecx, ebp
// 007c8f5f  c6405800             mov byte ptr [eax + 0x58], 0
// 007c8f63  e838f6ffff           call 0x7c85a0
// 007c8f68  8b4608               mov eax, dword ptr [esi + 8]
// 007c8f6b  8a4e58               mov cl, byte ptr [esi + 0x58]
// 007c8f6e  884858               mov byte ptr [eax + 0x58], cl
// 007c8f71  885e58               mov byte ptr [esi + 0x58], bl
// 007c8f74  8b5008               mov edx, dword ptr [eax + 8]
// 007c8f77  56                   push esi
// 007c8f78  8bcd                 mov ecx, ebp
// 007c8f7a  885a58               mov byte ptr [edx + 0x58], bl
// 007c8f7d  e88ef5ffff           call 0x7c8510
// 007c8f82  eb74                 jmp 0x7c8ff8
// 007c8f84  80785800             cmp byte ptr [eax + 0x58], 0
// 007c8f88  7511                 jne 0x7c8f9b
// 007c8f8a  885858               mov byte ptr [eax + 0x58], bl
// 007c8f8d  56                   push esi
// 007c8f8e  8bcd                 mov ecx, ebp
// 007c8f90  c6465800             mov byte ptr [esi + 0x58], 0
// 007c8f94  e807f6ffff           call 0x7c85a0
// 007c8f99  8b06                 mov eax, dword ptr [esi]
// 007c8f9b  80785900             cmp byte ptr [eax + 0x59], 0
// 007c8f9f  7513                 jne 0x7c8fb4
// 007c8fa1  8b4808               mov ecx, dword ptr [eax + 8]
// 007c8fa4  385958               cmp byte ptr [ecx + 0x58], bl
// 007c8fa7  751e                 jne 0x7c8fc7
// 007c8fa9  8b10                 mov edx, dword ptr [eax]
// 007c8fab  385a58               cmp byte ptr [edx + 0x58], bl
// 007c8fae  7517                 jne 0x7c8fc7
// 007c8fb0  c6405800             mov byte ptr [eax + 0x58], 0
// 007c8fb4  8b4504               mov eax, dword ptr [ebp + 4]
// 007c8fb7  8bfe                 mov edi, esi
// 007c8fb9  8b7604               mov esi, dword ptr [esi + 4]
// 007c8fbc  3b7804               cmp edi, dword ptr [eax + 4]
// 007c8fbf  0f854bffffff         jne 0x7c8f10
// 007c8fc5  eb31                 jmp 0x7c8ff8
// 007c8fc7  8b08                 mov ecx, dword ptr [eax]
// 007c8fc9  385958               cmp byte ptr [ecx + 0x58], bl
// 007c8fcc  7514                 jne 0x7c8fe2
// 007c8fce  8b5008               mov edx, dword ptr [eax + 8]
// 007c8fd1  885a58               mov byte ptr [edx + 0x58], bl
// 007c8fd4  50                   push eax
// 007c8fd5  8bcd                 mov ecx, ebp
// 007c8fd7  c6405800             mov byte ptr [eax + 0x58], 0
// 007c8fdb  e830f5ffff           call 0x7c8510
// 007c8fe0  8b06                 mov eax, dword ptr [esi]
// 007c8fe2  8a4e58               mov cl, byte ptr [esi + 0x58]
// 007c8fe5  884858               mov byte ptr [eax + 0x58], cl
// 007c8fe8  885e58               mov byte ptr [esi + 0x58], bl
// 007c8feb  8b10                 mov edx, dword ptr [eax]
// 007c8fed  56                   push esi
// 007c8fee  8bcd                 mov ecx, ebp
// 007c8ff0  885a58               mov byte ptr [edx + 0x58], bl
// 007c8ff3  e8a8f5ffff           call 0x7c85a0
// 007c8ff8  885f58               mov byte ptr [edi + 0x58], bl
// 007c8ffb  8b442410             mov eax, dword ptr [esp + 0x10]
// 007c8fff  50                   push eax
// 007c9000  e853100400           call 0x80a058
// 007c9005  8b4508               mov eax, dword ptr [ebp + 8]
// 007c9008  83c404               add esp, 4
// 007c900b  5f                   pop edi
// 007c900c  5e                   pop esi
// 007c900d  5b                   pop ebx
// 007c900e  85c0                 test eax, eax
// 007c9010  7604                 jbe 0x7c9016
// 007c9012  48                   dec eax
// 007c9013  894508               mov dword ptr [ebp + 8], eax
// 007c9016  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007c901a  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 007c901e  8908                 mov dword ptr [eax], ecx
// 007c9020  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007c9024  5d                   pop ebp
// 007c9025  64890d00000000       mov dword ptr fs:[0], ecx
// 007c902c  83c454               add esp, 0x54
// 007c902f  c20800               ret 8
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x59) - 0xd bytes.
struct Value { int words[18]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;