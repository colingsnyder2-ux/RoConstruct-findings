// roc 2011-06 0093ad60  unit: Ogre::RbxTextureCompositorSceneManager  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0093ad60
//
// 0093ad60  64a100000000         mov eax, dword ptr fs:[0]
// 0093ad66  6aff                 push -1
// 0093ad68  68221b9d00           push 0x9d1b22
// 0093ad6d  50                   push eax
// 0093ad6e  64892500000000       mov dword ptr fs:[0], esp
// 0093ad75  83ec44               sub esp, 0x44
// 0093ad78  57                   push edi
// 0093ad79  8bf9                 mov edi, ecx
// 0093ad7b  817f080a59c802       cmp dword ptr [edi + 8], 0x2c8590a
// 0093ad82  7259                 jb 0x93addd
// 0093ad84  683cb6a500           push 0xa5b63c
// 0093ad89  8d4c2408             lea ecx, [esp + 8]
// 0093ad8d  ff15c404a400         call dword ptr [0xa404c4]
// 0093ad93  8d4c2420             lea ecx, [esp + 0x20]
// 0093ad97  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0093ad9f  ff15600aa400         call dword ptr [0xa40a60]
// 0093ada5  8d442404             lea eax, [esp + 4]
// 0093ada9  50                   push eax
// 0093adaa  8d4c2430             lea ecx, [esp + 0x30]
// 0093adae  c644245401           mov byte ptr [esp + 0x54], 1
// 0093adb3  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 0093adbb  ff15c804a400         call dword ptr [0xa404c8]
// 0093adc1  687073b800           push 0xb87370
// 0093adc6  8d4c2424             lea ecx, [esp + 0x24]
// 0093adca  51                   push ecx
// 0093adcb  c644245800           mov byte ptr [esp + 0x58], 0
// 0093add0  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 0093add8  e8cf02edff           call 0x80b0ac
// 0093addd  8b542464             mov edx, dword ptr [esp + 0x64]
// 0093ade1  8b4704               mov eax, dword ptr [edi + 4]
// 0093ade4  53                   push ebx
// 0093ade5  55                   push ebp
// 0093ade6  56                   push esi
// 0093ade7  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0093adeb  6a00                 push 0
// 0093aded  52                   push edx
// 0093adee  50                   push eax
// 0093adef  56                   push esi
// 0093adf0  50                   push eax
// 0093adf1  e83afcffff           call 0x93aa30
// 0093adf6  8be8                 mov ebp, eax
// 0093adf8  8b4704               mov eax, dword ptr [edi + 4]
// 0093adfb  bb01000000           mov ebx, 1
// 0093ae00  015f08               add dword ptr [edi + 8], ebx
// 0093ae03  3bf0                 cmp esi, eax
// 0093ae05  7510                 jne 0x93ae17
// 0093ae07  896804               mov dword ptr [eax + 4], ebp
// 0093ae0a  8b4704               mov eax, dword ptr [edi + 4]
// 0093ae0d  8928                 mov dword ptr [eax], ebp
// 0093ae0f  8b4f04               mov ecx, dword ptr [edi + 4]
// 0093ae12  896908               mov dword ptr [ecx + 8], ebp
// 0093ae15  eb22                 jmp 0x93ae39
// 0093ae17  807c246800           cmp byte ptr [esp + 0x68], 0
// 0093ae1c  740d                 je 0x93ae2b
// 0093ae1e  892e                 mov dword ptr [esi], ebp
// 0093ae20  8b4704               mov eax, dword ptr [edi + 4]
// 0093ae23  3b30                 cmp esi, dword ptr [eax]
// 0093ae25  7512                 jne 0x93ae39
// 0093ae27  8928                 mov dword ptr [eax], ebp
// 0093ae29  eb0e                 jmp 0x93ae39
// 0093ae2b  896e08               mov dword ptr [esi + 8], ebp
// 0093ae2e  8b4704               mov eax, dword ptr [edi + 4]
// 0093ae31  3b7008               cmp esi, dword ptr [eax + 8]
// 0093ae34  7503                 jne 0x93ae39
// 0093ae36  896808               mov dword ptr [eax + 8], ebp
// 0093ae39  8b5504               mov edx, dword ptr [ebp + 4]
// 0093ae3c  807a6800             cmp byte ptr [edx + 0x68], 0
// 0093ae40  8d4504               lea eax, [ebp + 4]
// 0093ae43  8bf5                 mov esi, ebp
// 0093ae45  0f85ea000000         jne 0x93af35
// 0093ae4b  eb03                 jmp 0x93ae50
// 0093ae4d  8d4900               lea ecx, [ecx]
// 0093ae50  8b08                 mov ecx, dword ptr [eax]
// 0093ae52  8b5104               mov edx, dword ptr [ecx + 4]
// 0093ae55  3b0a                 cmp ecx, dword ptr [edx]
// 0093ae57  7551                 jne 0x93aeaa
// 0093ae59  8b5208               mov edx, dword ptr [edx + 8]
// 0093ae5c  807a6800             cmp byte ptr [edx + 0x68], 0
// 0093ae60  7519                 jne 0x93ae7b
// 0093ae62  885968               mov byte ptr [ecx + 0x68], bl
// 0093ae65  885a68               mov byte ptr [edx + 0x68], bl
// 0093ae68  8b10                 mov edx, dword ptr [eax]
// 0093ae6a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0093ae6d  c6416800             mov byte ptr [ecx + 0x68], 0
// 0093ae71  8b10                 mov edx, dword ptr [eax]
// 0093ae73  8b7204               mov esi, dword ptr [edx + 4]
// 0093ae76  e9aa000000           jmp 0x93af25
// 0093ae7b  3b7108               cmp esi, dword ptr [ecx + 8]
// 0093ae7e  750a                 jne 0x93ae8a
// 0093ae80  8bf1                 mov esi, ecx
// 0093ae82  56                   push esi
// 0093ae83  8bcf                 mov ecx, edi
// 0093ae85  e8b6ceffff           call 0x937d40
// 0093ae8a  8b4604               mov eax, dword ptr [esi + 4]
// 0093ae8d  885868               mov byte ptr [eax + 0x68], bl
// 0093ae90  8b4e04               mov ecx, dword ptr [esi + 4]
// 0093ae93  8b5104               mov edx, dword ptr [ecx + 4]
// 0093ae96  c6426800             mov byte ptr [edx + 0x68], 0
// 0093ae9a  8b4604               mov eax, dword ptr [esi + 4]
// 0093ae9d  8b4804               mov ecx, dword ptr [eax + 4]
// 0093aea0  51                   push ecx
// 0093aea1  8bcf                 mov ecx, edi
// 0093aea3  e8a8cbffff           call 0x937a50
// 0093aea8  eb7b                 jmp 0x93af25
// 0093aeaa  8b12                 mov edx, dword ptr [edx]
// 0093aeac  807a6800             cmp byte ptr [edx + 0x68], 0
// 0093aeb0  7516                 jne 0x93aec8
// 0093aeb2  885968               mov byte ptr [ecx + 0x68], bl
// 0093aeb5  885a68               mov byte ptr [edx + 0x68], bl
// 0093aeb8  8b10                 mov edx, dword ptr [eax]
// 0093aeba  8b4a04               mov ecx, dword ptr [edx + 4]
// 0093aebd  c6416800             mov byte ptr [ecx + 0x68], 0
// 0093aec1  8b10                 mov edx, dword ptr [eax]
// 0093aec3  8b7204               mov esi, dword ptr [edx + 4]
// 0093aec6  eb5d                 jmp 0x93af25
// 0093aec8  3b31                 cmp esi, dword ptr [ecx]
// 0093aeca  750a                 jne 0x93aed6
// 0093aecc  8bf1                 mov esi, ecx
// 0093aece  56                   push esi
// 0093aecf  8bcf                 mov ecx, edi
// 0093aed1  e87acbffff           call 0x937a50
// 0093aed6  8b4604               mov eax, dword ptr [esi + 4]
// 0093aed9  885868               mov byte ptr [eax + 0x68], bl
// 0093aedc  8b4e04               mov ecx, dword ptr [esi + 4]
// 0093aedf  8b5104               mov edx, dword ptr [ecx + 4]
// 0093aee2  c6426800             mov byte ptr [edx + 0x68], 0
// 0093aee6  8b4604               mov eax, dword ptr [esi + 4]
// 0093aee9  8b4004               mov eax, dword ptr [eax + 4]
// 0093aeec  8b4808               mov ecx, dword ptr [eax + 8]
// 0093aeef  8b11                 mov edx, dword ptr [ecx]
// 0093aef1  895008               mov dword ptr [eax + 8], edx
// 0093aef4  8b11                 mov edx, dword ptr [ecx]
// 0093aef6  807a6900             cmp byte ptr [edx + 0x69], 0
// 0093aefa  7503                 jne 0x93aeff
// 0093aefc  894204               mov dword ptr [edx + 4], eax
// 0093aeff  8b5004               mov edx, dword ptr [eax + 4]
// 0093af02  895104               mov dword ptr [ecx + 4], edx
// 0093af05  8b5704               mov edx, dword ptr [edi + 4]
// 0093af08  3b4204               cmp eax, dword ptr [edx + 4]
// 0093af0b  7505                 jne 0x93af12
// 0093af0d  894a04               mov dword ptr [edx + 4], ecx
// 0093af10  eb0e                 jmp 0x93af20
// 0093af12  8b5004               mov edx, dword ptr [eax + 4]
// 0093af15  3b02                 cmp eax, dword ptr [edx]
// 0093af17  7504                 jne 0x93af1d
// 0093af19  890a                 mov dword ptr [edx], ecx
// 0093af1b  eb03                 jmp 0x93af20
// 0093af1d  894a08               mov dword ptr [edx + 8], ecx
// 0093af20  8901                 mov dword ptr [ecx], eax
// 0093af22  894804               mov dword ptr [eax + 4], ecx
// 0093af25  8b4e04               mov ecx, dword ptr [esi + 4]
// 0093af28  80796800             cmp byte ptr [ecx + 0x68], 0
// 0093af2c  8d4604               lea eax, [esi + 4]
// 0093af2f  0f841bffffff         je 0x93ae50
// 0093af35  8b5704               mov edx, dword ptr [edi + 4]
// 0093af38  8b4204               mov eax, dword ptr [edx + 4]
// 0093af3b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0093af3f  885868               mov byte ptr [eax + 0x68], bl
// 0093af42  8b442464             mov eax, dword ptr [esp + 0x64]
// 0093af46  5e                   pop esi
// 0093af47  8928                 mov dword ptr [eax], ebp
// 0093af49  5d                   pop ebp
// 0093af4a  5b                   pop ebx
// 0093af4b  5f                   pop edi
// 0093af4c  64890d00000000       mov dword ptr fs:[0], ecx
// 0093af53  83c450               add esp, 0x50
// 0093af56  c21000               ret 0x10
// copied from an identical function in another client (function ?_Insert@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@2@ABU?$pair@$$CBHUValue16@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[22]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;