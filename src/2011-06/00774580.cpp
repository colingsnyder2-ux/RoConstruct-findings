// roc 2011-06 00774580  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00774580
//
// 00774580  64a100000000         mov eax, dword ptr fs:[0]
// 00774586  6aff                 push -1
// 00774588  68221b9d00           push 0x9d1b22
// 0077458d  50                   push eax
// 0077458e  64892500000000       mov dword ptr fs:[0], esp
// 00774595  83ec44               sub esp, 0x44
// 00774598  57                   push edi
// 00774599  8bf9                 mov edi, ecx
// 0077459b  817f0823499204       cmp dword ptr [edi + 8], 0x4924923
// 007745a2  7259                 jb 0x7745fd
// 007745a4  683cb6a500           push 0xa5b63c
// 007745a9  8d4c2408             lea ecx, [esp + 8]
// 007745ad  ff15c404a400         call dword ptr [0xa404c4]
// 007745b3  8d4c2420             lea ecx, [esp + 0x20]
// 007745b7  c744245000000000     mov dword ptr [esp + 0x50], 0
// 007745bf  ff15600aa400         call dword ptr [0xa40a60]
// 007745c5  8d442404             lea eax, [esp + 4]
// 007745c9  50                   push eax
// 007745ca  8d4c2430             lea ecx, [esp + 0x30]
// 007745ce  c644245401           mov byte ptr [esp + 0x54], 1
// 007745d3  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 007745db  ff15c804a400         call dword ptr [0xa404c8]
// 007745e1  687073b800           push 0xb87370
// 007745e6  8d4c2424             lea ecx, [esp + 0x24]
// 007745ea  51                   push ecx
// 007745eb  c644245800           mov byte ptr [esp + 0x58], 0
// 007745f0  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 007745f8  e8af6a0900           call 0x80b0ac
// 007745fd  8b542464             mov edx, dword ptr [esp + 0x64]
// 00774601  8b4704               mov eax, dword ptr [edi + 4]
// 00774604  53                   push ebx
// 00774605  55                   push ebp
// 00774606  56                   push esi
// 00774607  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0077460b  6a00                 push 0
// 0077460d  52                   push edx
// 0077460e  50                   push eax
// 0077460f  56                   push esi
// 00774610  50                   push eax
// 00774611  e80af9ffff           call 0x773f20
// 00774616  8be8                 mov ebp, eax
// 00774618  8b4704               mov eax, dword ptr [edi + 4]
// 0077461b  bb01000000           mov ebx, 1
// 00774620  015f08               add dword ptr [edi + 8], ebx
// 00774623  3bf0                 cmp esi, eax
// 00774625  7510                 jne 0x774637
// 00774627  896804               mov dword ptr [eax + 4], ebp
// 0077462a  8b4704               mov eax, dword ptr [edi + 4]
// 0077462d  8928                 mov dword ptr [eax], ebp
// 0077462f  8b4f04               mov ecx, dword ptr [edi + 4]
// 00774632  896908               mov dword ptr [ecx + 8], ebp
// 00774635  eb22                 jmp 0x774659
// 00774637  807c246800           cmp byte ptr [esp + 0x68], 0
// 0077463c  740d                 je 0x77464b
// 0077463e  892e                 mov dword ptr [esi], ebp
// 00774640  8b4704               mov eax, dword ptr [edi + 4]
// 00774643  3b30                 cmp esi, dword ptr [eax]
// 00774645  7512                 jne 0x774659
// 00774647  8928                 mov dword ptr [eax], ebp
// 00774649  eb0e                 jmp 0x774659
// 0077464b  896e08               mov dword ptr [esi + 8], ebp
// 0077464e  8b4704               mov eax, dword ptr [edi + 4]
// 00774651  3b7008               cmp esi, dword ptr [eax + 8]
// 00774654  7503                 jne 0x774659
// 00774656  896808               mov dword ptr [eax + 8], ebp
// 00774659  8b5504               mov edx, dword ptr [ebp + 4]
// 0077465c  807a4400             cmp byte ptr [edx + 0x44], 0
// 00774660  8d4504               lea eax, [ebp + 4]
// 00774663  8bf5                 mov esi, ebp
// 00774665  0f85ea000000         jne 0x774755
// 0077466b  eb03                 jmp 0x774670
// 0077466d  8d4900               lea ecx, [ecx]
// 00774670  8b08                 mov ecx, dword ptr [eax]
// 00774672  8b5104               mov edx, dword ptr [ecx + 4]
// 00774675  3b0a                 cmp ecx, dword ptr [edx]
// 00774677  7551                 jne 0x7746ca
// 00774679  8b5208               mov edx, dword ptr [edx + 8]
// 0077467c  807a4400             cmp byte ptr [edx + 0x44], 0
// 00774680  7519                 jne 0x77469b
// 00774682  885944               mov byte ptr [ecx + 0x44], bl
// 00774685  885a44               mov byte ptr [edx + 0x44], bl
// 00774688  8b10                 mov edx, dword ptr [eax]
// 0077468a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0077468d  c6414400             mov byte ptr [ecx + 0x44], 0
// 00774691  8b10                 mov edx, dword ptr [eax]
// 00774693  8b7204               mov esi, dword ptr [edx + 4]
// 00774696  e9aa000000           jmp 0x774745
// 0077469b  3b7108               cmp esi, dword ptr [ecx + 8]
// 0077469e  750a                 jne 0x7746aa
// 007746a0  8bf1                 mov esi, ecx
// 007746a2  56                   push esi
// 007746a3  8bcf                 mov ecx, edi
// 007746a5  e87614caff           call 0x415b20
// 007746aa  8b4604               mov eax, dword ptr [esi + 4]
// 007746ad  885844               mov byte ptr [eax + 0x44], bl
// 007746b0  8b4e04               mov ecx, dword ptr [esi + 4]
// 007746b3  8b5104               mov edx, dword ptr [ecx + 4]
// 007746b6  c6424400             mov byte ptr [edx + 0x44], 0
// 007746ba  8b4604               mov eax, dword ptr [esi + 4]
// 007746bd  8b4804               mov ecx, dword ptr [eax + 4]
// 007746c0  51                   push ecx
// 007746c1  8bcf                 mov ecx, edi
// 007746c3  e8c814caff           call 0x415b90
// 007746c8  eb7b                 jmp 0x774745
// 007746ca  8b12                 mov edx, dword ptr [edx]
// 007746cc  807a4400             cmp byte ptr [edx + 0x44], 0
// 007746d0  7516                 jne 0x7746e8
// 007746d2  885944               mov byte ptr [ecx + 0x44], bl
// 007746d5  885a44               mov byte ptr [edx + 0x44], bl
// 007746d8  8b10                 mov edx, dword ptr [eax]
// 007746da  8b4a04               mov ecx, dword ptr [edx + 4]
// 007746dd  c6414400             mov byte ptr [ecx + 0x44], 0
// 007746e1  8b10                 mov edx, dword ptr [eax]
// 007746e3  8b7204               mov esi, dword ptr [edx + 4]
// 007746e6  eb5d                 jmp 0x774745
// 007746e8  3b31                 cmp esi, dword ptr [ecx]
// 007746ea  750a                 jne 0x7746f6
// 007746ec  8bf1                 mov esi, ecx
// 007746ee  56                   push esi
// 007746ef  8bcf                 mov ecx, edi
// 007746f1  e89a14caff           call 0x415b90
// 007746f6  8b4604               mov eax, dword ptr [esi + 4]
// 007746f9  885844               mov byte ptr [eax + 0x44], bl
// 007746fc  8b4e04               mov ecx, dword ptr [esi + 4]
// 007746ff  8b5104               mov edx, dword ptr [ecx + 4]
// 00774702  c6424400             mov byte ptr [edx + 0x44], 0
// 00774706  8b4604               mov eax, dword ptr [esi + 4]
// 00774709  8b4004               mov eax, dword ptr [eax + 4]
// 0077470c  8b4808               mov ecx, dword ptr [eax + 8]
// 0077470f  8b11                 mov edx, dword ptr [ecx]
// 00774711  895008               mov dword ptr [eax + 8], edx
// 00774714  8b11                 mov edx, dword ptr [ecx]
// 00774716  807a4500             cmp byte ptr [edx + 0x45], 0
// 0077471a  7503                 jne 0x77471f
// 0077471c  894204               mov dword ptr [edx + 4], eax
// 0077471f  8b5004               mov edx, dword ptr [eax + 4]
// 00774722  895104               mov dword ptr [ecx + 4], edx
// 00774725  8b5704               mov edx, dword ptr [edi + 4]
// 00774728  3b4204               cmp eax, dword ptr [edx + 4]
// 0077472b  7505                 jne 0x774732
// 0077472d  894a04               mov dword ptr [edx + 4], ecx
// 00774730  eb0e                 jmp 0x774740
// 00774732  8b5004               mov edx, dword ptr [eax + 4]
// 00774735  3b02                 cmp eax, dword ptr [edx]
// 00774737  7504                 jne 0x77473d
// 00774739  890a                 mov dword ptr [edx], ecx
// 0077473b  eb03                 jmp 0x774740
// 0077473d  894a08               mov dword ptr [edx + 8], ecx
// 00774740  8901                 mov dword ptr [ecx], eax
// 00774742  894804               mov dword ptr [eax + 4], ecx
// 00774745  8b4e04               mov ecx, dword ptr [esi + 4]
// 00774748  80794400             cmp byte ptr [ecx + 0x44], 0
// 0077474c  8d4604               lea eax, [esi + 4]
// 0077474f  0f841bffffff         je 0x774670
// 00774755  8b5704               mov edx, dword ptr [edi + 4]
// 00774758  8b4204               mov eax, dword ptr [edx + 4]
// 0077475b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0077475f  885844               mov byte ptr [eax + 0x44], bl
// 00774762  8b442464             mov eax, dword ptr [esp + 0x64]
// 00774766  5e                   pop esi
// 00774767  8928                 mov dword ptr [eax], ebp
// 00774769  5d                   pop ebp
// 0077476a  5b                   pop ebx
// 0077476b  5f                   pop edi
// 0077476c  64890d00000000       mov dword ptr fs:[0], ecx
// 00774773  83c450               add esp, 0x50
// 00774776  c21000               ret 0x10
// copied from an identical function in another client (function ?_Insert@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@2@ABU?$pair@$$CBHUValue16@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[13]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;