// roc 2011-06 007aa7a0  unit: RBX::CornerWedgePoly  size: 706 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007aa7a0
//
// 007aa7a0  64a100000000         mov eax, dword ptr fs:[0]
// 007aa7a6  6aff                 push -1
// 007aa7a8  68221b9d00           push 0x9d1b22
// 007aa7ad  50                   push eax
// 007aa7ae  64892500000000       mov dword ptr fs:[0], esp
// 007aa7b5  8b442414             mov eax, dword ptr [esp + 0x14]
// 007aa7b9  83ec48               sub esp, 0x48
// 007aa7bc  80781d00             cmp byte ptr [eax + 0x1d], 0
// 007aa7c0  55                   push ebp
// 007aa7c1  8be9                 mov ebp, ecx
// 007aa7c3  7459                 je 0x7aa81e
// 007aa7c5  6820b6a500           push 0xa5b620
// 007aa7ca  8d4c240c             lea ecx, [esp + 0xc]
// 007aa7ce  ff15c404a400         call dword ptr [0xa404c4]
// 007aa7d4  8d4c2424             lea ecx, [esp + 0x24]
// 007aa7d8  c744245400000000     mov dword ptr [esp + 0x54], 0
// 007aa7e0  ff15600aa400         call dword ptr [0xa40a60]
// 007aa7e6  8d442408             lea eax, [esp + 8]
// 007aa7ea  50                   push eax
// 007aa7eb  8d4c2434             lea ecx, [esp + 0x34]
// 007aa7ef  c644245801           mov byte ptr [esp + 0x58], 1
// 007aa7f4  c7442428c0b5a500     mov dword ptr [esp + 0x28], 0xa5b5c0
// 007aa7fc  ff15c804a400         call dword ptr [0xa404c8]
// 007aa802  681873b800           push 0xb87318
// 007aa807  8d4c2428             lea ecx, [esp + 0x28]
// 007aa80b  51                   push ecx
// 007aa80c  c644245c00           mov byte ptr [esp + 0x5c], 0
// 007aa811  c744242cd8b5a500     mov dword ptr [esp + 0x2c], 0xa5b5d8
// 007aa819  e88e080600           call 0x80b0ac
// 007aa81e  53                   push ebx
// 007aa81f  56                   push esi
// 007aa820  8bd8                 mov ebx, eax
// 007aa822  57                   push edi
// 007aa823  8d4c246c             lea ecx, [esp + 0x6c]
// 007aa827  895c2410             mov dword ptr [esp + 0x10], ebx
// 007aa82b  e8107c1700           call 0x922440
// 007aa830  8b0b                 mov ecx, dword ptr [ebx]
// 007aa832  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 007aa836  7405                 je 0x7aa83d
// 007aa838  8b7b08               mov edi, dword ptr [ebx + 8]
// 007aa83b  eb1b                 jmp 0x7aa858
// 007aa83d  8b5308               mov edx, dword ptr [ebx + 8]
// 007aa840  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 007aa844  7404                 je 0x7aa84a
// 007aa846  8bf9                 mov edi, ecx
// 007aa848  eb0e                 jmp 0x7aa858
// 007aa84a  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007aa84e  8b7808               mov edi, dword ptr [eax + 8]
// 007aa851  8d5008               lea edx, [eax + 8]
// 007aa854  3bc3                 cmp eax, ebx
// 007aa856  756b                 jne 0x7aa8c3
// 007aa858  807f1d00             cmp byte ptr [edi + 0x1d], 0
// 007aa85c  8b7304               mov esi, dword ptr [ebx + 4]
// 007aa85f  7503                 jne 0x7aa864
// 007aa861  897704               mov dword ptr [edi + 4], esi
// 007aa864  8b4504               mov eax, dword ptr [ebp + 4]
// 007aa867  395804               cmp dword ptr [eax + 4], ebx
// 007aa86a  7505                 jne 0x7aa871
// 007aa86c  897804               mov dword ptr [eax + 4], edi
// 007aa86f  eb0b                 jmp 0x7aa87c
// 007aa871  391e                 cmp dword ptr [esi], ebx
// 007aa873  7504                 jne 0x7aa879
// 007aa875  893e                 mov dword ptr [esi], edi
// 007aa877  eb03                 jmp 0x7aa87c
// 007aa879  897e08               mov dword ptr [esi + 8], edi
// 007aa87c  8b5d04               mov ebx, dword ptr [ebp + 4]
// 007aa87f  8b03                 mov eax, dword ptr [ebx]
// 007aa881  3b442410             cmp eax, dword ptr [esp + 0x10]
// 007aa885  7515                 jne 0x7aa89c
// 007aa887  807f1d00             cmp byte ptr [edi + 0x1d], 0
// 007aa88b  7404                 je 0x7aa891
// 007aa88d  8bc6                 mov eax, esi
// 007aa88f  eb09                 jmp 0x7aa89a
// 007aa891  57                   push edi
// 007aa892  e8e982f7ff           call 0x722b80
// 007aa897  83c404               add esp, 4
// 007aa89a  8903                 mov dword ptr [ebx], eax
// 007aa89c  8b5d04               mov ebx, dword ptr [ebp + 4]
// 007aa89f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007aa8a3  394b08               cmp dword ptr [ebx + 8], ecx
// 007aa8a6  7577                 jne 0x7aa91f
// 007aa8a8  807f1d00             cmp byte ptr [edi + 0x1d], 0
// 007aa8ac  7407                 je 0x7aa8b5
// 007aa8ae  8bc6                 mov eax, esi
// 007aa8b0  894308               mov dword ptr [ebx + 8], eax
// 007aa8b3  eb6a                 jmp 0x7aa91f
// 007aa8b5  57                   push edi
// 007aa8b6  e8c5feffff           call 0x7aa780
// 007aa8bb  83c404               add esp, 4
// 007aa8be  894308               mov dword ptr [ebx + 8], eax
// 007aa8c1  eb5c                 jmp 0x7aa91f
// 007aa8c3  894104               mov dword ptr [ecx + 4], eax
// 007aa8c6  8b0b                 mov ecx, dword ptr [ebx]
// 007aa8c8  8908                 mov dword ptr [eax], ecx
// 007aa8ca  3b4308               cmp eax, dword ptr [ebx + 8]
// 007aa8cd  7504                 jne 0x7aa8d3
// 007aa8cf  8bf0                 mov esi, eax
// 007aa8d1  eb19                 jmp 0x7aa8ec
// 007aa8d3  807f1d00             cmp byte ptr [edi + 0x1d], 0
// 007aa8d7  8b7004               mov esi, dword ptr [eax + 4]
// 007aa8da  7503                 jne 0x7aa8df
// 007aa8dc  897704               mov dword ptr [edi + 4], esi
// 007aa8df  893e                 mov dword ptr [esi], edi
// 007aa8e1  8b4b08               mov ecx, dword ptr [ebx + 8]
// 007aa8e4  890a                 mov dword ptr [edx], ecx
// 007aa8e6  8b5308               mov edx, dword ptr [ebx + 8]
// 007aa8e9  894204               mov dword ptr [edx + 4], eax
// 007aa8ec  8b4d04               mov ecx, dword ptr [ebp + 4]
// 007aa8ef  395904               cmp dword ptr [ecx + 4], ebx
// 007aa8f2  7505                 jne 0x7aa8f9
// 007aa8f4  894104               mov dword ptr [ecx + 4], eax
// 007aa8f7  eb0e                 jmp 0x7aa907
// 007aa8f9  8b4b04               mov ecx, dword ptr [ebx + 4]
// 007aa8fc  3919                 cmp dword ptr [ecx], ebx
// 007aa8fe  7504                 jne 0x7aa904
// 007aa900  8901                 mov dword ptr [ecx], eax
// 007aa902  eb03                 jmp 0x7aa907
// 007aa904  894108               mov dword ptr [ecx + 8], eax
// 007aa907  8b4b04               mov ecx, dword ptr [ebx + 4]
// 007aa90a  894804               mov dword ptr [eax + 4], ecx
// 007aa90d  8d4b1c               lea ecx, [ebx + 0x1c]
// 007aa910  83c01c               add eax, 0x1c
// 007aa913  3bc1                 cmp eax, ecx
// 007aa915  7408                 je 0x7aa91f
// 007aa917  8a19                 mov bl, byte ptr [ecx]
// 007aa919  8a10                 mov dl, byte ptr [eax]
// 007aa91b  8818                 mov byte ptr [eax], bl
// 007aa91d  8811                 mov byte ptr [ecx], dl
// 007aa91f  8b542410             mov edx, dword ptr [esp + 0x10]
// 007aa923  b301                 mov bl, 1
// 007aa925  385a1c               cmp byte ptr [edx + 0x1c], bl
// 007aa928  0f85fd000000         jne 0x7aaa2b
// 007aa92e  8b4504               mov eax, dword ptr [ebp + 4]
// 007aa931  3b7804               cmp edi, dword ptr [eax + 4]
// 007aa934  0f84ee000000         je 0x7aaa28
// 007aa93a  8d9b00000000         lea ebx, [ebx]
// 007aa940  385f1c               cmp byte ptr [edi + 0x1c], bl
// 007aa943  0f85df000000         jne 0x7aaa28
// 007aa949  8b06                 mov eax, dword ptr [esi]
// 007aa94b  3bf8                 cmp edi, eax
// 007aa94d  7565                 jne 0x7aa9b4
// 007aa94f  8b4608               mov eax, dword ptr [esi + 8]
// 007aa952  80781c00             cmp byte ptr [eax + 0x1c], 0
// 007aa956  7512                 jne 0x7aa96a
// 007aa958  88581c               mov byte ptr [eax + 0x1c], bl
// 007aa95b  56                   push esi
// 007aa95c  8bcd                 mov ecx, ebp
// 007aa95e  c6461c00             mov byte ptr [esi + 0x1c], 0
// 007aa962  e83982f7ff           call 0x722ba0
// 007aa967  8b4608               mov eax, dword ptr [esi + 8]
// 007aa96a  80781d00             cmp byte ptr [eax + 0x1d], 0
// 007aa96e  7574                 jne 0x7aa9e4
// 007aa970  8b08                 mov ecx, dword ptr [eax]
// 007aa972  38591c               cmp byte ptr [ecx + 0x1c], bl
// 007aa975  7508                 jne 0x7aa97f
// 007aa977  8b5008               mov edx, dword ptr [eax + 8]
// 007aa97a  385a1c               cmp byte ptr [edx + 0x1c], bl
// 007aa97d  7461                 je 0x7aa9e0
// 007aa97f  8b4808               mov ecx, dword ptr [eax + 8]
// 007aa982  38591c               cmp byte ptr [ecx + 0x1c], bl
// 007aa985  7514                 jne 0x7aa99b
// 007aa987  8b10                 mov edx, dword ptr [eax]
// 007aa989  885a1c               mov byte ptr [edx + 0x1c], bl
// 007aa98c  50                   push eax
// 007aa98d  8bcd                 mov ecx, ebp
// 007aa98f  c6401c00             mov byte ptr [eax + 0x1c], 0
// 007aa993  e828bff8ff           call 0x7368c0
// 007aa998  8b4608               mov eax, dword ptr [esi + 8]
// 007aa99b  8a4e1c               mov cl, byte ptr [esi + 0x1c]
// 007aa99e  88481c               mov byte ptr [eax + 0x1c], cl
// 007aa9a1  885e1c               mov byte ptr [esi + 0x1c], bl
// 007aa9a4  8b5008               mov edx, dword ptr [eax + 8]
// 007aa9a7  56                   push esi
// 007aa9a8  8bcd                 mov ecx, ebp
// 007aa9aa  885a1c               mov byte ptr [edx + 0x1c], bl
// 007aa9ad  e8ee81f7ff           call 0x722ba0
// 007aa9b2  eb74                 jmp 0x7aaa28
// 007aa9b4  80781c00             cmp byte ptr [eax + 0x1c], 0
// 007aa9b8  7511                 jne 0x7aa9cb
// 007aa9ba  88581c               mov byte ptr [eax + 0x1c], bl
// 007aa9bd  56                   push esi
// 007aa9be  8bcd                 mov ecx, ebp
// 007aa9c0  c6461c00             mov byte ptr [esi + 0x1c], 0
// 007aa9c4  e8f7bef8ff           call 0x7368c0
// 007aa9c9  8b06                 mov eax, dword ptr [esi]
// 007aa9cb  80781d00             cmp byte ptr [eax + 0x1d], 0
// 007aa9cf  7513                 jne 0x7aa9e4
// 007aa9d1  8b4808               mov ecx, dword ptr [eax + 8]
// 007aa9d4  38591c               cmp byte ptr [ecx + 0x1c], bl
// 007aa9d7  751e                 jne 0x7aa9f7
// 007aa9d9  8b10                 mov edx, dword ptr [eax]
// 007aa9db  385a1c               cmp byte ptr [edx + 0x1c], bl
// 007aa9de  7517                 jne 0x7aa9f7
// 007aa9e0  c6401c00             mov byte ptr [eax + 0x1c], 0
// 007aa9e4  8b4504               mov eax, dword ptr [ebp + 4]
// 007aa9e7  8bfe                 mov edi, esi
// 007aa9e9  8b7604               mov esi, dword ptr [esi + 4]
// 007aa9ec  3b7804               cmp edi, dword ptr [eax + 4]
// 007aa9ef  0f854bffffff         jne 0x7aa940
// 007aa9f5  eb31                 jmp 0x7aaa28
// 007aa9f7  8b08                 mov ecx, dword ptr [eax]
// 007aa9f9  38591c               cmp byte ptr [ecx + 0x1c], bl
// 007aa9fc  7514                 jne 0x7aaa12
// 007aa9fe  8b5008               mov edx, dword ptr [eax + 8]
// 007aaa01  885a1c               mov byte ptr [edx + 0x1c], bl
// 007aaa04  50                   push eax
// 007aaa05  8bcd                 mov ecx, ebp
// 007aaa07  c6401c00             mov byte ptr [eax + 0x1c], 0
// 007aaa0b  e89081f7ff           call 0x722ba0
// 007aaa10  8b06                 mov eax, dword ptr [esi]
// 007aaa12  8a4e1c               mov cl, byte ptr [esi + 0x1c]
// 007aaa15  88481c               mov byte ptr [eax + 0x1c], cl
// 007aaa18  885e1c               mov byte ptr [esi + 0x1c], bl
// 007aaa1b  8b10                 mov edx, dword ptr [eax]
// 007aaa1d  56                   push esi
// 007aaa1e  8bcd                 mov ecx, ebp
// 007aaa20  885a1c               mov byte ptr [edx + 0x1c], bl
// 007aaa23  e898bef8ff           call 0x7368c0
// 007aaa28  885f1c               mov byte ptr [edi + 0x1c], bl
// 007aaa2b  8b442410             mov eax, dword ptr [esp + 0x10]
// 007aaa2f  50                   push eax
// 007aaa30  e823f60500           call 0x80a058
// 007aaa35  8b4508               mov eax, dword ptr [ebp + 8]
// 007aaa38  83c404               add esp, 4
// 007aaa3b  5f                   pop edi
// 007aaa3c  5e                   pop esi
// 007aaa3d  5b                   pop ebx
// 007aaa3e  85c0                 test eax, eax
// 007aaa40  7604                 jbe 0x7aaa46
// 007aaa42  48                   dec eax
// 007aaa43  894508               mov dword ptr [ebp + 8], eax
// 007aaa46  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007aaa4a  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 007aaa4e  8908                 mov dword ptr [eax], ecx
// 007aaa50  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007aaa54  5d                   pop ebp
// 007aaa55  64890d00000000       mov dword ptr fs:[0], ecx
// 007aaa5c  83c454               add esp, 0x54
// 007aaa5f  c20800               ret 8
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x1d) - 0xd bytes.
struct Value { int words[3]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;