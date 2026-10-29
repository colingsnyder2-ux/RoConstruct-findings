// roc 2011-06 0064bbb0  unit: RBX::GameBasicSettings  size: 706 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0064bbb0
//
// 0064bbb0  64a100000000         mov eax, dword ptr fs:[0]
// 0064bbb6  6aff                 push -1
// 0064bbb8  68221b9d00           push 0x9d1b22
// 0064bbbd  50                   push eax
// 0064bbbe  64892500000000       mov dword ptr fs:[0], esp
// 0064bbc5  8b442414             mov eax, dword ptr [esp + 0x14]
// 0064bbc9  83ec48               sub esp, 0x48
// 0064bbcc  80782100             cmp byte ptr [eax + 0x21], 0
// 0064bbd0  55                   push ebp
// 0064bbd1  8be9                 mov ebp, ecx
// 0064bbd3  7459                 je 0x64bc2e
// 0064bbd5  6820b6a500           push 0xa5b620
// 0064bbda  8d4c240c             lea ecx, [esp + 0xc]
// 0064bbde  ff15c404a400         call dword ptr [0xa404c4]
// 0064bbe4  8d4c2424             lea ecx, [esp + 0x24]
// 0064bbe8  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0064bbf0  ff15600aa400         call dword ptr [0xa40a60]
// 0064bbf6  8d442408             lea eax, [esp + 8]
// 0064bbfa  50                   push eax
// 0064bbfb  8d4c2434             lea ecx, [esp + 0x34]
// 0064bbff  c644245801           mov byte ptr [esp + 0x58], 1
// 0064bc04  c7442428c0b5a500     mov dword ptr [esp + 0x28], 0xa5b5c0
// 0064bc0c  ff15c804a400         call dword ptr [0xa404c8]
// 0064bc12  681873b800           push 0xb87318
// 0064bc17  8d4c2428             lea ecx, [esp + 0x28]
// 0064bc1b  51                   push ecx
// 0064bc1c  c644245c00           mov byte ptr [esp + 0x5c], 0
// 0064bc21  c744242cd8b5a500     mov dword ptr [esp + 0x2c], 0xa5b5d8
// 0064bc29  e87ef41b00           call 0x80b0ac
// 0064bc2e  53                   push ebx
// 0064bc2f  56                   push esi
// 0064bc30  8bd8                 mov ebx, eax
// 0064bc32  57                   push edi
// 0064bc33  8d4c246c             lea ecx, [esp + 0x6c]
// 0064bc37  895c2410             mov dword ptr [esp + 0x10], ebx
// 0064bc3b  e8c0fdffff           call 0x64ba00
// 0064bc40  8b0b                 mov ecx, dword ptr [ebx]
// 0064bc42  80792100             cmp byte ptr [ecx + 0x21], 0
// 0064bc46  7405                 je 0x64bc4d
// 0064bc48  8b7b08               mov edi, dword ptr [ebx + 8]
// 0064bc4b  eb1b                 jmp 0x64bc68
// 0064bc4d  8b5308               mov edx, dword ptr [ebx + 8]
// 0064bc50  807a2100             cmp byte ptr [edx + 0x21], 0
// 0064bc54  7404                 je 0x64bc5a
// 0064bc56  8bf9                 mov edi, ecx
// 0064bc58  eb0e                 jmp 0x64bc68
// 0064bc5a  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0064bc5e  8b7808               mov edi, dword ptr [eax + 8]
// 0064bc61  8d5008               lea edx, [eax + 8]
// 0064bc64  3bc3                 cmp eax, ebx
// 0064bc66  756b                 jne 0x64bcd3
// 0064bc68  807f2100             cmp byte ptr [edi + 0x21], 0
// 0064bc6c  8b7304               mov esi, dword ptr [ebx + 4]
// 0064bc6f  7503                 jne 0x64bc74
// 0064bc71  897704               mov dword ptr [edi + 4], esi
// 0064bc74  8b4504               mov eax, dword ptr [ebp + 4]
// 0064bc77  395804               cmp dword ptr [eax + 4], ebx
// 0064bc7a  7505                 jne 0x64bc81
// 0064bc7c  897804               mov dword ptr [eax + 4], edi
// 0064bc7f  eb0b                 jmp 0x64bc8c
// 0064bc81  391e                 cmp dword ptr [esi], ebx
// 0064bc83  7504                 jne 0x64bc89
// 0064bc85  893e                 mov dword ptr [esi], edi
// 0064bc87  eb03                 jmp 0x64bc8c
// 0064bc89  897e08               mov dword ptr [esi + 8], edi
// 0064bc8c  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0064bc8f  8b03                 mov eax, dword ptr [ebx]
// 0064bc91  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0064bc95  7515                 jne 0x64bcac
// 0064bc97  807f2100             cmp byte ptr [edi + 0x21], 0
// 0064bc9b  7404                 je 0x64bca1
// 0064bc9d  8bc6                 mov eax, esi
// 0064bc9f  eb09                 jmp 0x64bcaa
// 0064bca1  57                   push edi
// 0064bca2  e8a984dfff           call 0x444150
// 0064bca7  83c404               add esp, 4
// 0064bcaa  8903                 mov dword ptr [ebx], eax
// 0064bcac  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0064bcaf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0064bcb3  394b08               cmp dword ptr [ebx + 8], ecx
// 0064bcb6  7577                 jne 0x64bd2f
// 0064bcb8  807f2100             cmp byte ptr [edi + 0x21], 0
// 0064bcbc  7407                 je 0x64bcc5
// 0064bcbe  8bc6                 mov eax, esi
// 0064bcc0  894308               mov dword ptr [ebx + 8], eax
// 0064bcc3  eb6a                 jmp 0x64bd2f
// 0064bcc5  57                   push edi
// 0064bcc6  e8659f2f00           call 0x945c30
// 0064bccb  83c404               add esp, 4
// 0064bcce  894308               mov dword ptr [ebx + 8], eax
// 0064bcd1  eb5c                 jmp 0x64bd2f
// 0064bcd3  894104               mov dword ptr [ecx + 4], eax
// 0064bcd6  8b0b                 mov ecx, dword ptr [ebx]
// 0064bcd8  8908                 mov dword ptr [eax], ecx
// 0064bcda  3b4308               cmp eax, dword ptr [ebx + 8]
// 0064bcdd  7504                 jne 0x64bce3
// 0064bcdf  8bf0                 mov esi, eax
// 0064bce1  eb19                 jmp 0x64bcfc
// 0064bce3  807f2100             cmp byte ptr [edi + 0x21], 0
// 0064bce7  8b7004               mov esi, dword ptr [eax + 4]
// 0064bcea  7503                 jne 0x64bcef
// 0064bcec  897704               mov dword ptr [edi + 4], esi
// 0064bcef  893e                 mov dword ptr [esi], edi
// 0064bcf1  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0064bcf4  890a                 mov dword ptr [edx], ecx
// 0064bcf6  8b5308               mov edx, dword ptr [ebx + 8]
// 0064bcf9  894204               mov dword ptr [edx + 4], eax
// 0064bcfc  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0064bcff  395904               cmp dword ptr [ecx + 4], ebx
// 0064bd02  7505                 jne 0x64bd09
// 0064bd04  894104               mov dword ptr [ecx + 4], eax
// 0064bd07  eb0e                 jmp 0x64bd17
// 0064bd09  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0064bd0c  3919                 cmp dword ptr [ecx], ebx
// 0064bd0e  7504                 jne 0x64bd14
// 0064bd10  8901                 mov dword ptr [ecx], eax
// 0064bd12  eb03                 jmp 0x64bd17
// 0064bd14  894108               mov dword ptr [ecx + 8], eax
// 0064bd17  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0064bd1a  894804               mov dword ptr [eax + 4], ecx
// 0064bd1d  8d4b20               lea ecx, [ebx + 0x20]
// 0064bd20  83c020               add eax, 0x20
// 0064bd23  3bc1                 cmp eax, ecx
// 0064bd25  7408                 je 0x64bd2f
// 0064bd27  8a19                 mov bl, byte ptr [ecx]
// 0064bd29  8a10                 mov dl, byte ptr [eax]
// 0064bd2b  8818                 mov byte ptr [eax], bl
// 0064bd2d  8811                 mov byte ptr [ecx], dl
// 0064bd2f  8b542410             mov edx, dword ptr [esp + 0x10]
// 0064bd33  b301                 mov bl, 1
// 0064bd35  385a20               cmp byte ptr [edx + 0x20], bl
// 0064bd38  0f85fd000000         jne 0x64be3b
// 0064bd3e  8b4504               mov eax, dword ptr [ebp + 4]
// 0064bd41  3b7804               cmp edi, dword ptr [eax + 4]
// 0064bd44  0f84ee000000         je 0x64be38
// 0064bd4a  8d9b00000000         lea ebx, [ebx]
// 0064bd50  385f20               cmp byte ptr [edi + 0x20], bl
// 0064bd53  0f85df000000         jne 0x64be38
// 0064bd59  8b06                 mov eax, dword ptr [esi]
// 0064bd5b  3bf8                 cmp edi, eax
// 0064bd5d  7565                 jne 0x64bdc4
// 0064bd5f  8b4608               mov eax, dword ptr [esi + 8]
// 0064bd62  80782000             cmp byte ptr [eax + 0x20], 0
// 0064bd66  7512                 jne 0x64bd7a
// 0064bd68  885820               mov byte ptr [eax + 0x20], bl
// 0064bd6b  56                   push esi
// 0064bd6c  8bcd                 mov ecx, ebp
// 0064bd6e  c6462000             mov byte ptr [esi + 0x20], 0
// 0064bd72  e8198adfff           call 0x444790
// 0064bd77  8b4608               mov eax, dword ptr [esi + 8]
// 0064bd7a  80782100             cmp byte ptr [eax + 0x21], 0
// 0064bd7e  7574                 jne 0x64bdf4
// 0064bd80  8b08                 mov ecx, dword ptr [eax]
// 0064bd82  385920               cmp byte ptr [ecx + 0x20], bl
// 0064bd85  7508                 jne 0x64bd8f
// 0064bd87  8b5008               mov edx, dword ptr [eax + 8]
// 0064bd8a  385a20               cmp byte ptr [edx + 0x20], bl
// 0064bd8d  7461                 je 0x64bdf0
// 0064bd8f  8b4808               mov ecx, dword ptr [eax + 8]
// 0064bd92  385920               cmp byte ptr [ecx + 0x20], bl
// 0064bd95  7514                 jne 0x64bdab
// 0064bd97  8b10                 mov edx, dword ptr [eax]
// 0064bd99  885a20               mov byte ptr [edx + 0x20], bl
// 0064bd9c  50                   push eax
// 0064bd9d  8bcd                 mov ecx, ebp
// 0064bd9f  c6402000             mov byte ptr [eax + 0x20], 0
// 0064bda3  e8f8fbffff           call 0x64b9a0
// 0064bda8  8b4608               mov eax, dword ptr [esi + 8]
// 0064bdab  8a4e20               mov cl, byte ptr [esi + 0x20]
// 0064bdae  884820               mov byte ptr [eax + 0x20], cl
// 0064bdb1  885e20               mov byte ptr [esi + 0x20], bl
// 0064bdb4  8b5008               mov edx, dword ptr [eax + 8]
// 0064bdb7  56                   push esi
// 0064bdb8  8bcd                 mov ecx, ebp
// 0064bdba  885a20               mov byte ptr [edx + 0x20], bl
// 0064bdbd  e8ce89dfff           call 0x444790
// 0064bdc2  eb74                 jmp 0x64be38
// 0064bdc4  80782000             cmp byte ptr [eax + 0x20], 0
// 0064bdc8  7511                 jne 0x64bddb
// 0064bdca  885820               mov byte ptr [eax + 0x20], bl
// 0064bdcd  56                   push esi
// 0064bdce  8bcd                 mov ecx, ebp
// 0064bdd0  c6462000             mov byte ptr [esi + 0x20], 0
// 0064bdd4  e8c7fbffff           call 0x64b9a0
// 0064bdd9  8b06                 mov eax, dword ptr [esi]
// 0064bddb  80782100             cmp byte ptr [eax + 0x21], 0
// 0064bddf  7513                 jne 0x64bdf4
// 0064bde1  8b4808               mov ecx, dword ptr [eax + 8]
// 0064bde4  385920               cmp byte ptr [ecx + 0x20], bl
// 0064bde7  751e                 jne 0x64be07
// 0064bde9  8b10                 mov edx, dword ptr [eax]
// 0064bdeb  385a20               cmp byte ptr [edx + 0x20], bl
// 0064bdee  7517                 jne 0x64be07
// 0064bdf0  c6402000             mov byte ptr [eax + 0x20], 0
// 0064bdf4  8b4504               mov eax, dword ptr [ebp + 4]
// 0064bdf7  8bfe                 mov edi, esi
// 0064bdf9  8b7604               mov esi, dword ptr [esi + 4]
// 0064bdfc  3b7804               cmp edi, dword ptr [eax + 4]
// 0064bdff  0f854bffffff         jne 0x64bd50
// 0064be05  eb31                 jmp 0x64be38
// 0064be07  8b08                 mov ecx, dword ptr [eax]
// 0064be09  385920               cmp byte ptr [ecx + 0x20], bl
// 0064be0c  7514                 jne 0x64be22
// 0064be0e  8b5008               mov edx, dword ptr [eax + 8]
// 0064be11  885a20               mov byte ptr [edx + 0x20], bl
// 0064be14  50                   push eax
// 0064be15  8bcd                 mov ecx, ebp
// 0064be17  c6402000             mov byte ptr [eax + 0x20], 0
// 0064be1b  e87089dfff           call 0x444790
// 0064be20  8b06                 mov eax, dword ptr [esi]
// 0064be22  8a4e20               mov cl, byte ptr [esi + 0x20]
// 0064be25  884820               mov byte ptr [eax + 0x20], cl
// 0064be28  885e20               mov byte ptr [esi + 0x20], bl
// 0064be2b  8b10                 mov edx, dword ptr [eax]
// 0064be2d  56                   push esi
// 0064be2e  8bcd                 mov ecx, ebp
// 0064be30  885a20               mov byte ptr [edx + 0x20], bl
// 0064be33  e868fbffff           call 0x64b9a0
// 0064be38  885f20               mov byte ptr [edi + 0x20], bl
// 0064be3b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0064be3f  50                   push eax
// 0064be40  e813e21b00           call 0x80a058
// 0064be45  8b4508               mov eax, dword ptr [ebp + 8]
// 0064be48  83c404               add esp, 4
// 0064be4b  5f                   pop edi
// 0064be4c  5e                   pop esi
// 0064be4d  5b                   pop ebx
// 0064be4e  85c0                 test eax, eax
// 0064be50  7604                 jbe 0x64be56
// 0064be52  48                   dec eax
// 0064be53  894508               mov dword ptr [ebp + 8], eax
// 0064be56  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0064be5a  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0064be5e  8908                 mov dword ptr [eax], ecx
// 0064be60  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0064be64  5d                   pop ebp
// 0064be65  64890d00000000       mov dword ptr fs:[0], ecx
// 0064be6c  83c454               add esp, 0x54
// 0064be6f  c20800               ret 8
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[4]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;