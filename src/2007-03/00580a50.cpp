// roc 2007-03 00580a50  unit: seg_00580000  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00580a50
//
// 00580a50  83ec0c               sub esp, 0xc
// 00580a53  55                   push ebp
// 00580a54  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00580a58  56                   push esi
// 00580a59  57                   push edi
// 00580a5a  8bf9                 mov edi, ecx
// 00580a5c  8b7704               mov esi, dword ptr [edi + 4]
// 00580a5f  8b4604               mov eax, dword ptr [esi + 4]
// 00580a62  80781500             cmp byte ptr [eax + 0x15], 0
// 00580a66  b101                 mov cl, 1
// 00580a68  884c240c             mov byte ptr [esp + 0xc], cl
// 00580a6c  7520                 jne 0x580a8e
// 00580a6e  8b5500               mov edx, dword ptr [ebp]
// 00580a71  3b500c               cmp edx, dword ptr [eax + 0xc]
// 00580a74  8bf0                 mov esi, eax
// 00580a76  0f9cc1               setl cl
// 00580a79  84c9                 test cl, cl
// 00580a7b  884c240c             mov byte ptr [esp + 0xc], cl
// 00580a7f  7404                 je 0x580a85
// 00580a81  8b00                 mov eax, dword ptr [eax]
// 00580a83  eb03                 jmp 0x580a88
// 00580a85  8b4008               mov eax, dword ptr [eax + 8]
// 00580a88  80781500             cmp byte ptr [eax + 0x15], 0
// 00580a8c  74e3                 je 0x580a71
// 00580a8e  84c9                 test cl, cl
// 00580a90  8bd6                 mov edx, esi
// 00580a92  89542414             mov dword ptr [esp + 0x14], edx
// 00580a96  897c2410             mov dword ptr [esp + 0x10], edi
// 00580a9a  743d                 je 0x580ad9
// 00580a9c  8b4704               mov eax, dword ptr [edi + 4]
// 00580a9f  3b30                 cmp esi, dword ptr [eax]
// 00580aa1  8d4c2410             lea ecx, [esp + 0x10]
// 00580aa5  7529                 jne 0x580ad0
// 00580aa7  55                   push ebp
// 00580aa8  56                   push esi
// 00580aa9  6a01                 push 1
// 00580aab  51                   push ecx
// 00580aac  8bcf                 mov ecx, edi
// 00580aae  e81de90600           call 0x5ef3d0
// 00580ab3  8bc8                 mov ecx, eax
// 00580ab5  8b11                 mov edx, dword ptr [ecx]
// 00580ab7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00580abb  8b4904               mov ecx, dword ptr [ecx + 4]
// 00580abe  5f                   pop edi
// 00580abf  5e                   pop esi
// 00580ac0  8910                 mov dword ptr [eax], edx
// 00580ac2  894804               mov dword ptr [eax + 4], ecx
// 00580ac5  c6400801             mov byte ptr [eax + 8], 1
// 00580ac9  5d                   pop ebp
// 00580aca  83c40c               add esp, 0xc
// 00580acd  c20800               ret 8
// 00580ad0  e8abf0faff           call 0x52fb80
// 00580ad5  8b542414             mov edx, dword ptr [esp + 0x14]
// 00580ad9  8b420c               mov eax, dword ptr [edx + 0xc]
// 00580adc  3b4500               cmp eax, dword ptr [ebp]
// 00580adf  7d0e                 jge 0x580aef
// 00580ae1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00580ae5  55                   push ebp
// 00580ae6  56                   push esi
// 00580ae7  51                   push ecx
// 00580ae8  8d54241c             lea edx, [esp + 0x1c]
// 00580aec  52                   push edx
// 00580aed  ebbd                 jmp 0x580aac
// 00580aef  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00580af3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00580af7  5f                   pop edi
// 00580af8  5e                   pop esi
// 00580af9  8908                 mov dword ptr [eax], ecx
// 00580afb  895004               mov dword ptr [eax + 4], edx
// 00580afe  c6400800             mov byte ptr [eax + 8], 0
// 00580b02  5d                   pop ebp
// 00580b03  83c40c               add esp, 0xc
// 00580b06  c20800               ret 8
// library rbxgs/util\Name.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@HPAVName@RBX@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVName@RBX@@@std@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@HPAVName@RBX@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVName@RBX@@@std@@@4@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBHPAVName@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
