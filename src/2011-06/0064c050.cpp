// roc 2011-06 0064c050  unit: RBX::GameBasicSettings  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0064c050
//
// 0064c050  64a100000000         mov eax, dword ptr fs:[0]
// 0064c056  6aff                 push -1
// 0064c058  68221b9d00           push 0x9d1b22
// 0064c05d  50                   push eax
// 0064c05e  64892500000000       mov dword ptr fs:[0], esp
// 0064c065  83ec44               sub esp, 0x44
// 0064c068  57                   push edi
// 0064c069  8bf9                 mov edi, ecx
// 0064c06b  817f08cbcccc0c       cmp dword ptr [edi + 8], 0xccccccb
// 0064c072  7259                 jb 0x64c0cd
// 0064c074  683cb6a500           push 0xa5b63c
// 0064c079  8d4c2408             lea ecx, [esp + 8]
// 0064c07d  ff15c404a400         call dword ptr [0xa404c4]
// 0064c083  8d4c2420             lea ecx, [esp + 0x20]
// 0064c087  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0064c08f  ff15600aa400         call dword ptr [0xa40a60]
// 0064c095  8d442404             lea eax, [esp + 4]
// 0064c099  50                   push eax
// 0064c09a  8d4c2430             lea ecx, [esp + 0x30]
// 0064c09e  c644245401           mov byte ptr [esp + 0x54], 1
// 0064c0a3  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 0064c0ab  ff15c804a400         call dword ptr [0xa404c8]
// 0064c0b1  687073b800           push 0xb87370
// 0064c0b6  8d4c2424             lea ecx, [esp + 0x24]
// 0064c0ba  51                   push ecx
// 0064c0bb  c644245800           mov byte ptr [esp + 0x58], 0
// 0064c0c0  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 0064c0c8  e8dfef1b00           call 0x80b0ac
// 0064c0cd  8b542464             mov edx, dword ptr [esp + 0x64]
// 0064c0d1  8b4704               mov eax, dword ptr [edi + 4]
// 0064c0d4  53                   push ebx
// 0064c0d5  55                   push ebp
// 0064c0d6  56                   push esi
// 0064c0d7  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0064c0db  6a00                 push 0
// 0064c0dd  52                   push edx
// 0064c0de  50                   push eax
// 0064c0df  56                   push esi
// 0064c0e0  50                   push eax
// 0064c0e1  e8caf9ffff           call 0x64bab0
// 0064c0e6  8be8                 mov ebp, eax
// 0064c0e8  8b4704               mov eax, dword ptr [edi + 4]
// 0064c0eb  bb01000000           mov ebx, 1
// 0064c0f0  015f08               add dword ptr [edi + 8], ebx
// 0064c0f3  3bf0                 cmp esi, eax
// 0064c0f5  7510                 jne 0x64c107
// 0064c0f7  896804               mov dword ptr [eax + 4], ebp
// 0064c0fa  8b4704               mov eax, dword ptr [edi + 4]
// 0064c0fd  8928                 mov dword ptr [eax], ebp
// 0064c0ff  8b4f04               mov ecx, dword ptr [edi + 4]
// 0064c102  896908               mov dword ptr [ecx + 8], ebp
// 0064c105  eb22                 jmp 0x64c129
// 0064c107  807c246800           cmp byte ptr [esp + 0x68], 0
// 0064c10c  740d                 je 0x64c11b
// 0064c10e  892e                 mov dword ptr [esi], ebp
// 0064c110  8b4704               mov eax, dword ptr [edi + 4]
// 0064c113  3b30                 cmp esi, dword ptr [eax]
// 0064c115  7512                 jne 0x64c129
// 0064c117  8928                 mov dword ptr [eax], ebp
// 0064c119  eb0e                 jmp 0x64c129
// 0064c11b  896e08               mov dword ptr [esi + 8], ebp
// 0064c11e  8b4704               mov eax, dword ptr [edi + 4]
// 0064c121  3b7008               cmp esi, dword ptr [eax + 8]
// 0064c124  7503                 jne 0x64c129
// 0064c126  896808               mov dword ptr [eax + 8], ebp
// 0064c129  8b5504               mov edx, dword ptr [ebp + 4]
// 0064c12c  807a2000             cmp byte ptr [edx + 0x20], 0
// 0064c130  8d4504               lea eax, [ebp + 4]
// 0064c133  8bf5                 mov esi, ebp
// 0064c135  0f85ea000000         jne 0x64c225
// 0064c13b  eb03                 jmp 0x64c140
// 0064c13d  8d4900               lea ecx, [ecx]
// 0064c140  8b08                 mov ecx, dword ptr [eax]
// 0064c142  8b5104               mov edx, dword ptr [ecx + 4]
// 0064c145  3b0a                 cmp ecx, dword ptr [edx]
// 0064c147  7551                 jne 0x64c19a
// 0064c149  8b5208               mov edx, dword ptr [edx + 8]
// 0064c14c  807a2000             cmp byte ptr [edx + 0x20], 0
// 0064c150  7519                 jne 0x64c16b
// 0064c152  885920               mov byte ptr [ecx + 0x20], bl
// 0064c155  885a20               mov byte ptr [edx + 0x20], bl
// 0064c158  8b10                 mov edx, dword ptr [eax]
// 0064c15a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0064c15d  c6412000             mov byte ptr [ecx + 0x20], 0
// 0064c161  8b10                 mov edx, dword ptr [eax]
// 0064c163  8b7204               mov esi, dword ptr [edx + 4]
// 0064c166  e9aa000000           jmp 0x64c215
// 0064c16b  3b7108               cmp esi, dword ptr [ecx + 8]
// 0064c16e  750a                 jne 0x64c17a
// 0064c170  8bf1                 mov esi, ecx
// 0064c172  56                   push esi
// 0064c173  8bcf                 mov ecx, edi
// 0064c175  e81686dfff           call 0x444790
// 0064c17a  8b4604               mov eax, dword ptr [esi + 4]
// 0064c17d  885820               mov byte ptr [eax + 0x20], bl
// 0064c180  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064c183  8b5104               mov edx, dword ptr [ecx + 4]
// 0064c186  c6422000             mov byte ptr [edx + 0x20], 0
// 0064c18a  8b4604               mov eax, dword ptr [esi + 4]
// 0064c18d  8b4804               mov ecx, dword ptr [eax + 4]
// 0064c190  51                   push ecx
// 0064c191  8bcf                 mov ecx, edi
// 0064c193  e808f8ffff           call 0x64b9a0
// 0064c198  eb7b                 jmp 0x64c215
// 0064c19a  8b12                 mov edx, dword ptr [edx]
// 0064c19c  807a2000             cmp byte ptr [edx + 0x20], 0
// 0064c1a0  7516                 jne 0x64c1b8
// 0064c1a2  885920               mov byte ptr [ecx + 0x20], bl
// 0064c1a5  885a20               mov byte ptr [edx + 0x20], bl
// 0064c1a8  8b10                 mov edx, dword ptr [eax]
// 0064c1aa  8b4a04               mov ecx, dword ptr [edx + 4]
// 0064c1ad  c6412000             mov byte ptr [ecx + 0x20], 0
// 0064c1b1  8b10                 mov edx, dword ptr [eax]
// 0064c1b3  8b7204               mov esi, dword ptr [edx + 4]
// 0064c1b6  eb5d                 jmp 0x64c215
// 0064c1b8  3b31                 cmp esi, dword ptr [ecx]
// 0064c1ba  750a                 jne 0x64c1c6
// 0064c1bc  8bf1                 mov esi, ecx
// 0064c1be  56                   push esi
// 0064c1bf  8bcf                 mov ecx, edi
// 0064c1c1  e8daf7ffff           call 0x64b9a0
// 0064c1c6  8b4604               mov eax, dword ptr [esi + 4]
// 0064c1c9  885820               mov byte ptr [eax + 0x20], bl
// 0064c1cc  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064c1cf  8b5104               mov edx, dword ptr [ecx + 4]
// 0064c1d2  c6422000             mov byte ptr [edx + 0x20], 0
// 0064c1d6  8b4604               mov eax, dword ptr [esi + 4]
// 0064c1d9  8b4004               mov eax, dword ptr [eax + 4]
// 0064c1dc  8b4808               mov ecx, dword ptr [eax + 8]
// 0064c1df  8b11                 mov edx, dword ptr [ecx]
// 0064c1e1  895008               mov dword ptr [eax + 8], edx
// 0064c1e4  8b11                 mov edx, dword ptr [ecx]
// 0064c1e6  807a2100             cmp byte ptr [edx + 0x21], 0
// 0064c1ea  7503                 jne 0x64c1ef
// 0064c1ec  894204               mov dword ptr [edx + 4], eax
// 0064c1ef  8b5004               mov edx, dword ptr [eax + 4]
// 0064c1f2  895104               mov dword ptr [ecx + 4], edx
// 0064c1f5  8b5704               mov edx, dword ptr [edi + 4]
// 0064c1f8  3b4204               cmp eax, dword ptr [edx + 4]
// 0064c1fb  7505                 jne 0x64c202
// 0064c1fd  894a04               mov dword ptr [edx + 4], ecx
// 0064c200  eb0e                 jmp 0x64c210
// 0064c202  8b5004               mov edx, dword ptr [eax + 4]
// 0064c205  3b02                 cmp eax, dword ptr [edx]
// 0064c207  7504                 jne 0x64c20d
// 0064c209  890a                 mov dword ptr [edx], ecx
// 0064c20b  eb03                 jmp 0x64c210
// 0064c20d  894a08               mov dword ptr [edx + 8], ecx
// 0064c210  8901                 mov dword ptr [ecx], eax
// 0064c212  894804               mov dword ptr [eax + 4], ecx
// 0064c215  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064c218  80792000             cmp byte ptr [ecx + 0x20], 0
// 0064c21c  8d4604               lea eax, [esi + 4]
// 0064c21f  0f841bffffff         je 0x64c140
// 0064c225  8b5704               mov edx, dword ptr [edi + 4]
// 0064c228  8b4204               mov eax, dword ptr [edx + 4]
// 0064c22b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0064c22f  885820               mov byte ptr [eax + 0x20], bl
// 0064c232  8b442464             mov eax, dword ptr [esp + 0x64]
// 0064c236  5e                   pop esi
// 0064c237  8928                 mov dword ptr [eax], ebp
// 0064c239  5d                   pop ebp
// 0064c23a  5b                   pop ebx
// 0064c23b  5f                   pop edi
// 0064c23c  64890d00000000       mov dword ptr fs:[0], ecx
// 0064c243  83c450               add esp, 0x50
// 0064c246  c21000               ret 0x10
// copied from an identical function in another client (function ?_Insert@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@2@ABU?$pair@$$CBHUValue16@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[4]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;