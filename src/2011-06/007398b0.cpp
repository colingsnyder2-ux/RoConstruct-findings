// roc 2011-06 007398b0  unit: RBX::VInstance::?$NonFactoryProduct  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007398b0
//
// 007398b0  64a100000000         mov eax, dword ptr fs:[0]
// 007398b6  6aff                 push -1
// 007398b8  68221b9d00           push 0x9d1b22
// 007398bd  50                   push eax
// 007398be  64892500000000       mov dword ptr fs:[0], esp
// 007398c5  83ec44               sub esp, 0x44
// 007398c8  57                   push edi
// 007398c9  8bf9                 mov edi, ecx
// 007398cb  817f08feffff0f       cmp dword ptr [edi + 8], 0xffffffe
// 007398d2  7259                 jb 0x73992d
// 007398d4  683cb6a500           push 0xa5b63c
// 007398d9  8d4c2408             lea ecx, [esp + 8]
// 007398dd  ff15c404a400         call dword ptr [0xa404c4]
// 007398e3  8d4c2420             lea ecx, [esp + 0x20]
// 007398e7  c744245000000000     mov dword ptr [esp + 0x50], 0
// 007398ef  ff15600aa400         call dword ptr [0xa40a60]
// 007398f5  8d442404             lea eax, [esp + 4]
// 007398f9  50                   push eax
// 007398fa  8d4c2430             lea ecx, [esp + 0x30]
// 007398fe  c644245401           mov byte ptr [esp + 0x54], 1
// 00739903  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 0073990b  ff15c804a400         call dword ptr [0xa404c8]
// 00739911  687073b800           push 0xb87370
// 00739916  8d4c2424             lea ecx, [esp + 0x24]
// 0073991a  51                   push ecx
// 0073991b  c644245800           mov byte ptr [esp + 0x58], 0
// 00739920  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 00739928  e87f170d00           call 0x80b0ac
// 0073992d  8b542464             mov edx, dword ptr [esp + 0x64]
// 00739931  8b4704               mov eax, dword ptr [edi + 4]
// 00739934  53                   push ebx
// 00739935  55                   push ebp
// 00739936  56                   push esi
// 00739937  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0073993b  6a00                 push 0
// 0073993d  52                   push edx
// 0073993e  50                   push eax
// 0073993f  56                   push esi
// 00739940  50                   push eax
// 00739941  e8fafbffff           call 0x739540
// 00739946  8be8                 mov ebp, eax
// 00739948  8b4704               mov eax, dword ptr [edi + 4]
// 0073994b  bb01000000           mov ebx, 1
// 00739950  015f08               add dword ptr [edi + 8], ebx
// 00739953  3bf0                 cmp esi, eax
// 00739955  7510                 jne 0x739967
// 00739957  896804               mov dword ptr [eax + 4], ebp
// 0073995a  8b4704               mov eax, dword ptr [edi + 4]
// 0073995d  8928                 mov dword ptr [eax], ebp
// 0073995f  8b4f04               mov ecx, dword ptr [edi + 4]
// 00739962  896908               mov dword ptr [ecx + 8], ebp
// 00739965  eb22                 jmp 0x739989
// 00739967  807c246800           cmp byte ptr [esp + 0x68], 0
// 0073996c  740d                 je 0x73997b
// 0073996e  892e                 mov dword ptr [esi], ebp
// 00739970  8b4704               mov eax, dword ptr [edi + 4]
// 00739973  3b30                 cmp esi, dword ptr [eax]
// 00739975  7512                 jne 0x739989
// 00739977  8928                 mov dword ptr [eax], ebp
// 00739979  eb0e                 jmp 0x739989
// 0073997b  896e08               mov dword ptr [esi + 8], ebp
// 0073997e  8b4704               mov eax, dword ptr [edi + 4]
// 00739981  3b7008               cmp esi, dword ptr [eax + 8]
// 00739984  7503                 jne 0x739989
// 00739986  896808               mov dword ptr [eax + 8], ebp
// 00739989  8b5504               mov edx, dword ptr [ebp + 4]
// 0073998c  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 00739990  8d4504               lea eax, [ebp + 4]
// 00739993  8bf5                 mov esi, ebp
// 00739995  0f85ea000000         jne 0x739a85
// 0073999b  eb03                 jmp 0x7399a0
// 0073999d  8d4900               lea ecx, [ecx]
// 007399a0  8b08                 mov ecx, dword ptr [eax]
// 007399a2  8b5104               mov edx, dword ptr [ecx + 4]
// 007399a5  3b0a                 cmp ecx, dword ptr [edx]
// 007399a7  7551                 jne 0x7399fa
// 007399a9  8b5208               mov edx, dword ptr [edx + 8]
// 007399ac  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 007399b0  7519                 jne 0x7399cb
// 007399b2  88591c               mov byte ptr [ecx + 0x1c], bl
// 007399b5  885a1c               mov byte ptr [edx + 0x1c], bl
// 007399b8  8b10                 mov edx, dword ptr [eax]
// 007399ba  8b4a04               mov ecx, dword ptr [edx + 4]
// 007399bd  c6411c00             mov byte ptr [ecx + 0x1c], 0
// 007399c1  8b10                 mov edx, dword ptr [eax]
// 007399c3  8b7204               mov esi, dword ptr [edx + 4]
// 007399c6  e9aa000000           jmp 0x739a75
// 007399cb  3b7108               cmp esi, dword ptr [ecx + 8]
// 007399ce  750a                 jne 0x7399da
// 007399d0  8bf1                 mov esi, ecx
// 007399d2  56                   push esi
// 007399d3  8bcf                 mov ecx, edi
// 007399d5  e8c691feff           call 0x722ba0
// 007399da  8b4604               mov eax, dword ptr [esi + 4]
// 007399dd  88581c               mov byte ptr [eax + 0x1c], bl
// 007399e0  8b4e04               mov ecx, dword ptr [esi + 4]
// 007399e3  8b5104               mov edx, dword ptr [ecx + 4]
// 007399e6  c6421c00             mov byte ptr [edx + 0x1c], 0
// 007399ea  8b4604               mov eax, dword ptr [esi + 4]
// 007399ed  8b4804               mov ecx, dword ptr [eax + 4]
// 007399f0  51                   push ecx
// 007399f1  8bcf                 mov ecx, edi
// 007399f3  e8c8ceffff           call 0x7368c0
// 007399f8  eb7b                 jmp 0x739a75
// 007399fa  8b12                 mov edx, dword ptr [edx]
// 007399fc  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 00739a00  7516                 jne 0x739a18
// 00739a02  88591c               mov byte ptr [ecx + 0x1c], bl
// 00739a05  885a1c               mov byte ptr [edx + 0x1c], bl
// 00739a08  8b10                 mov edx, dword ptr [eax]
// 00739a0a  8b4a04               mov ecx, dword ptr [edx + 4]
// 00739a0d  c6411c00             mov byte ptr [ecx + 0x1c], 0
// 00739a11  8b10                 mov edx, dword ptr [eax]
// 00739a13  8b7204               mov esi, dword ptr [edx + 4]
// 00739a16  eb5d                 jmp 0x739a75
// 00739a18  3b31                 cmp esi, dword ptr [ecx]
// 00739a1a  750a                 jne 0x739a26
// 00739a1c  8bf1                 mov esi, ecx
// 00739a1e  56                   push esi
// 00739a1f  8bcf                 mov ecx, edi
// 00739a21  e89aceffff           call 0x7368c0
// 00739a26  8b4604               mov eax, dword ptr [esi + 4]
// 00739a29  88581c               mov byte ptr [eax + 0x1c], bl
// 00739a2c  8b4e04               mov ecx, dword ptr [esi + 4]
// 00739a2f  8b5104               mov edx, dword ptr [ecx + 4]
// 00739a32  c6421c00             mov byte ptr [edx + 0x1c], 0
// 00739a36  8b4604               mov eax, dword ptr [esi + 4]
// 00739a39  8b4004               mov eax, dword ptr [eax + 4]
// 00739a3c  8b4808               mov ecx, dword ptr [eax + 8]
// 00739a3f  8b11                 mov edx, dword ptr [ecx]
// 00739a41  895008               mov dword ptr [eax + 8], edx
// 00739a44  8b11                 mov edx, dword ptr [ecx]
// 00739a46  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 00739a4a  7503                 jne 0x739a4f
// 00739a4c  894204               mov dword ptr [edx + 4], eax
// 00739a4f  8b5004               mov edx, dword ptr [eax + 4]
// 00739a52  895104               mov dword ptr [ecx + 4], edx
// 00739a55  8b5704               mov edx, dword ptr [edi + 4]
// 00739a58  3b4204               cmp eax, dword ptr [edx + 4]
// 00739a5b  7505                 jne 0x739a62
// 00739a5d  894a04               mov dword ptr [edx + 4], ecx
// 00739a60  eb0e                 jmp 0x739a70
// 00739a62  8b5004               mov edx, dword ptr [eax + 4]
// 00739a65  3b02                 cmp eax, dword ptr [edx]
// 00739a67  7504                 jne 0x739a6d
// 00739a69  890a                 mov dword ptr [edx], ecx
// 00739a6b  eb03                 jmp 0x739a70
// 00739a6d  894a08               mov dword ptr [edx + 8], ecx
// 00739a70  8901                 mov dword ptr [ecx], eax
// 00739a72  894804               mov dword ptr [eax + 4], ecx
// 00739a75  8b4e04               mov ecx, dword ptr [esi + 4]
// 00739a78  80791c00             cmp byte ptr [ecx + 0x1c], 0
// 00739a7c  8d4604               lea eax, [esi + 4]
// 00739a7f  0f841bffffff         je 0x7399a0
// 00739a85  8b5704               mov edx, dword ptr [edi + 4]
// 00739a88  8b4204               mov eax, dword ptr [edx + 4]
// 00739a8b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00739a8f  88581c               mov byte ptr [eax + 0x1c], bl
// 00739a92  8b442464             mov eax, dword ptr [esp + 0x64]
// 00739a96  5e                   pop esi
// 00739a97  8928                 mov dword ptr [eax], ebp
// 00739a99  5d                   pop ebp
// 00739a9a  5b                   pop ebx
// 00739a9b  5f                   pop edi
// 00739a9c  64890d00000000       mov dword ptr fs:[0], ecx
// 00739aa3  83c450               add esp, 0x50
// 00739aa6  c21000               ret 0x10
// copied from an identical function in another client (function ?_Insert@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@ABU?$pair@$$CBHUValue@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x1d) - 0xd bytes.
struct Value { int words[3]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;