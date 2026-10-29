// roc 2011-06 0044ce50  unit: MVCXTPPropertyGridItem::?$XItem  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0044ce50
//
// 0044ce50  64a100000000         mov eax, dword ptr fs:[0]
// 0044ce56  6aff                 push -1
// 0044ce58  68221b9d00           push 0x9d1b22
// 0044ce5d  50                   push eax
// 0044ce5e  64892500000000       mov dword ptr fs:[0], esp
// 0044ce65  83ec44               sub esp, 0x44
// 0044ce68  57                   push edi
// 0044ce69  8bf9                 mov edi, ecx
// 0044ce6b  817f08cbcccc0c       cmp dword ptr [edi + 8], 0xccccccb
// 0044ce72  7259                 jb 0x44cecd
// 0044ce74  683cb6a500           push 0xa5b63c
// 0044ce79  8d4c2408             lea ecx, [esp + 8]
// 0044ce7d  ff15c404a400         call dword ptr [0xa404c4]
// 0044ce83  8d4c2420             lea ecx, [esp + 0x20]
// 0044ce87  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0044ce8f  ff15600aa400         call dword ptr [0xa40a60]
// 0044ce95  8d442404             lea eax, [esp + 4]
// 0044ce99  50                   push eax
// 0044ce9a  8d4c2430             lea ecx, [esp + 0x30]
// 0044ce9e  c644245401           mov byte ptr [esp + 0x54], 1
// 0044cea3  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 0044ceab  ff15c804a400         call dword ptr [0xa404c8]
// 0044ceb1  687073b800           push 0xb87370
// 0044ceb6  8d4c2424             lea ecx, [esp + 0x24]
// 0044ceba  51                   push ecx
// 0044cebb  c644245800           mov byte ptr [esp + 0x58], 0
// 0044cec0  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 0044cec8  e8dfe13b00           call 0x80b0ac
// 0044cecd  8b542464             mov edx, dword ptr [esp + 0x64]
// 0044ced1  8b4704               mov eax, dword ptr [edi + 4]
// 0044ced4  53                   push ebx
// 0044ced5  55                   push ebp
// 0044ced6  56                   push esi
// 0044ced7  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0044cedb  6a00                 push 0
// 0044cedd  52                   push edx
// 0044cede  50                   push eax
// 0044cedf  56                   push esi
// 0044cee0  50                   push eax
// 0044cee1  e85ab9ffff           call 0x448840
// 0044cee6  8be8                 mov ebp, eax
// 0044cee8  8b4704               mov eax, dword ptr [edi + 4]
// 0044ceeb  bb01000000           mov ebx, 1
// 0044cef0  015f08               add dword ptr [edi + 8], ebx
// 0044cef3  3bf0                 cmp esi, eax
// 0044cef5  7510                 jne 0x44cf07
// 0044cef7  896804               mov dword ptr [eax + 4], ebp
// 0044cefa  8b4704               mov eax, dword ptr [edi + 4]
// 0044cefd  8928                 mov dword ptr [eax], ebp
// 0044ceff  8b4f04               mov ecx, dword ptr [edi + 4]
// 0044cf02  896908               mov dword ptr [ecx + 8], ebp
// 0044cf05  eb22                 jmp 0x44cf29
// 0044cf07  807c246800           cmp byte ptr [esp + 0x68], 0
// 0044cf0c  740d                 je 0x44cf1b
// 0044cf0e  892e                 mov dword ptr [esi], ebp
// 0044cf10  8b4704               mov eax, dword ptr [edi + 4]
// 0044cf13  3b30                 cmp esi, dword ptr [eax]
// 0044cf15  7512                 jne 0x44cf29
// 0044cf17  8928                 mov dword ptr [eax], ebp
// 0044cf19  eb0e                 jmp 0x44cf29
// 0044cf1b  896e08               mov dword ptr [esi + 8], ebp
// 0044cf1e  8b4704               mov eax, dword ptr [edi + 4]
// 0044cf21  3b7008               cmp esi, dword ptr [eax + 8]
// 0044cf24  7503                 jne 0x44cf29
// 0044cf26  896808               mov dword ptr [eax + 8], ebp
// 0044cf29  8b5504               mov edx, dword ptr [ebp + 4]
// 0044cf2c  807a2000             cmp byte ptr [edx + 0x20], 0
// 0044cf30  8d4504               lea eax, [ebp + 4]
// 0044cf33  8bf5                 mov esi, ebp
// 0044cf35  0f85ea000000         jne 0x44d025
// 0044cf3b  eb03                 jmp 0x44cf40
// 0044cf3d  8d4900               lea ecx, [ecx]
// 0044cf40  8b08                 mov ecx, dword ptr [eax]
// 0044cf42  8b5104               mov edx, dword ptr [ecx + 4]
// 0044cf45  3b0a                 cmp ecx, dword ptr [edx]
// 0044cf47  7551                 jne 0x44cf9a
// 0044cf49  8b5208               mov edx, dword ptr [edx + 8]
// 0044cf4c  807a2000             cmp byte ptr [edx + 0x20], 0
// 0044cf50  7519                 jne 0x44cf6b
// 0044cf52  885920               mov byte ptr [ecx + 0x20], bl
// 0044cf55  885a20               mov byte ptr [edx + 0x20], bl
// 0044cf58  8b10                 mov edx, dword ptr [eax]
// 0044cf5a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0044cf5d  c6412000             mov byte ptr [ecx + 0x20], 0
// 0044cf61  8b10                 mov edx, dword ptr [eax]
// 0044cf63  8b7204               mov esi, dword ptr [edx + 4]
// 0044cf66  e9aa000000           jmp 0x44d015
// 0044cf6b  3b7108               cmp esi, dword ptr [ecx + 8]
// 0044cf6e  750a                 jne 0x44cf7a
// 0044cf70  8bf1                 mov esi, ecx
// 0044cf72  56                   push esi
// 0044cf73  8bcf                 mov ecx, edi
// 0044cf75  e81678ffff           call 0x444790
// 0044cf7a  8b4604               mov eax, dword ptr [esi + 4]
// 0044cf7d  885820               mov byte ptr [eax + 0x20], bl
// 0044cf80  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044cf83  8b5104               mov edx, dword ptr [ecx + 4]
// 0044cf86  c6422000             mov byte ptr [edx + 0x20], 0
// 0044cf8a  8b4604               mov eax, dword ptr [esi + 4]
// 0044cf8d  8b4804               mov ecx, dword ptr [eax + 4]
// 0044cf90  51                   push ecx
// 0044cf91  8bcf                 mov ecx, edi
// 0044cf93  e808ea1f00           call 0x64b9a0
// 0044cf98  eb7b                 jmp 0x44d015
// 0044cf9a  8b12                 mov edx, dword ptr [edx]
// 0044cf9c  807a2000             cmp byte ptr [edx + 0x20], 0
// 0044cfa0  7516                 jne 0x44cfb8
// 0044cfa2  885920               mov byte ptr [ecx + 0x20], bl
// 0044cfa5  885a20               mov byte ptr [edx + 0x20], bl
// 0044cfa8  8b10                 mov edx, dword ptr [eax]
// 0044cfaa  8b4a04               mov ecx, dword ptr [edx + 4]
// 0044cfad  c6412000             mov byte ptr [ecx + 0x20], 0
// 0044cfb1  8b10                 mov edx, dword ptr [eax]
// 0044cfb3  8b7204               mov esi, dword ptr [edx + 4]
// 0044cfb6  eb5d                 jmp 0x44d015
// 0044cfb8  3b31                 cmp esi, dword ptr [ecx]
// 0044cfba  750a                 jne 0x44cfc6
// 0044cfbc  8bf1                 mov esi, ecx
// 0044cfbe  56                   push esi
// 0044cfbf  8bcf                 mov ecx, edi
// 0044cfc1  e8dae91f00           call 0x64b9a0
// 0044cfc6  8b4604               mov eax, dword ptr [esi + 4]
// 0044cfc9  885820               mov byte ptr [eax + 0x20], bl
// 0044cfcc  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044cfcf  8b5104               mov edx, dword ptr [ecx + 4]
// 0044cfd2  c6422000             mov byte ptr [edx + 0x20], 0
// 0044cfd6  8b4604               mov eax, dword ptr [esi + 4]
// 0044cfd9  8b4004               mov eax, dword ptr [eax + 4]
// 0044cfdc  8b4808               mov ecx, dword ptr [eax + 8]
// 0044cfdf  8b11                 mov edx, dword ptr [ecx]
// 0044cfe1  895008               mov dword ptr [eax + 8], edx
// 0044cfe4  8b11                 mov edx, dword ptr [ecx]
// 0044cfe6  807a2100             cmp byte ptr [edx + 0x21], 0
// 0044cfea  7503                 jne 0x44cfef
// 0044cfec  894204               mov dword ptr [edx + 4], eax
// 0044cfef  8b5004               mov edx, dword ptr [eax + 4]
// 0044cff2  895104               mov dword ptr [ecx + 4], edx
// 0044cff5  8b5704               mov edx, dword ptr [edi + 4]
// 0044cff8  3b4204               cmp eax, dword ptr [edx + 4]
// 0044cffb  7505                 jne 0x44d002
// 0044cffd  894a04               mov dword ptr [edx + 4], ecx
// 0044d000  eb0e                 jmp 0x44d010
// 0044d002  8b5004               mov edx, dword ptr [eax + 4]
// 0044d005  3b02                 cmp eax, dword ptr [edx]
// 0044d007  7504                 jne 0x44d00d
// 0044d009  890a                 mov dword ptr [edx], ecx
// 0044d00b  eb03                 jmp 0x44d010
// 0044d00d  894a08               mov dword ptr [edx + 8], ecx
// 0044d010  8901                 mov dword ptr [ecx], eax
// 0044d012  894804               mov dword ptr [eax + 4], ecx
// 0044d015  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044d018  80792000             cmp byte ptr [ecx + 0x20], 0
// 0044d01c  8d4604               lea eax, [esi + 4]
// 0044d01f  0f841bffffff         je 0x44cf40
// 0044d025  8b5704               mov edx, dword ptr [edi + 4]
// 0044d028  8b4204               mov eax, dword ptr [edx + 4]
// 0044d02b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0044d02f  885820               mov byte ptr [eax + 0x20], bl
// 0044d032  8b442464             mov eax, dword ptr [esp + 0x64]
// 0044d036  5e                   pop esi
// 0044d037  8928                 mov dword ptr [eax], ebp
// 0044d039  5d                   pop ebp
// 0044d03a  5b                   pop ebx
// 0044d03b  5f                   pop edi
// 0044d03c  64890d00000000       mov dword ptr fs:[0], ecx
// 0044d043  83c450               add esp, 0x50
// 0044d046  c21000               ret 0x10
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