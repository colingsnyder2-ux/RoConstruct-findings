// roc 2007-03 00578400  unit: seg_00570000  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00578400
//
// 00578400  83ec0c               sub esp, 0xc
// 00578403  55                   push ebp
// 00578404  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00578408  56                   push esi
// 00578409  57                   push edi
// 0057840a  8bf9                 mov edi, ecx
// 0057840c  8b7704               mov esi, dword ptr [edi + 4]
// 0057840f  8b4604               mov eax, dword ptr [esi + 4]
// 00578412  80781500             cmp byte ptr [eax + 0x15], 0
// 00578416  b101                 mov cl, 1
// 00578418  884c240c             mov byte ptr [esp + 0xc], cl
// 0057841c  7520                 jne 0x57843e
// 0057841e  8b5500               mov edx, dword ptr [ebp]
// 00578421  3b500c               cmp edx, dword ptr [eax + 0xc]
// 00578424  8bf0                 mov esi, eax
// 00578426  0f92c1               setb cl
// 00578429  84c9                 test cl, cl
// 0057842b  884c240c             mov byte ptr [esp + 0xc], cl
// 0057842f  7404                 je 0x578435
// 00578431  8b00                 mov eax, dword ptr [eax]
// 00578433  eb03                 jmp 0x578438
// 00578435  8b4008               mov eax, dword ptr [eax + 8]
// 00578438  80781500             cmp byte ptr [eax + 0x15], 0
// 0057843c  74e3                 je 0x578421
// 0057843e  84c9                 test cl, cl
// 00578440  8bd6                 mov edx, esi
// 00578442  89542414             mov dword ptr [esp + 0x14], edx
// 00578446  897c2410             mov dword ptr [esp + 0x10], edi
// 0057844a  743d                 je 0x578489
// 0057844c  8b4704               mov eax, dword ptr [edi + 4]
// 0057844f  3b30                 cmp esi, dword ptr [eax]
// 00578451  8d4c2410             lea ecx, [esp + 0x10]
// 00578455  7529                 jne 0x578480
// 00578457  55                   push ebp
// 00578458  56                   push esi
// 00578459  6a01                 push 1
// 0057845b  51                   push ecx
// 0057845c  8bcf                 mov ecx, edi
// 0057845e  e86d6f0700           call 0x5ef3d0
// 00578463  8bc8                 mov ecx, eax
// 00578465  8b11                 mov edx, dword ptr [ecx]
// 00578467  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057846b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0057846e  5f                   pop edi
// 0057846f  5e                   pop esi
// 00578470  8910                 mov dword ptr [eax], edx
// 00578472  894804               mov dword ptr [eax + 4], ecx
// 00578475  c6400801             mov byte ptr [eax + 8], 1
// 00578479  5d                   pop ebp
// 0057847a  83c40c               add esp, 0xc
// 0057847d  c20800               ret 8
// 00578480  e8fb76fbff           call 0x52fb80
// 00578485  8b542414             mov edx, dword ptr [esp + 0x14]
// 00578489  8b420c               mov eax, dword ptr [edx + 0xc]
// 0057848c  3b4500               cmp eax, dword ptr [ebp]
// 0057848f  730e                 jae 0x57849f
// 00578491  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00578495  55                   push ebp
// 00578496  56                   push esi
// 00578497  51                   push ecx
// 00578498  8d54241c             lea edx, [esp + 0x1c]
// 0057849c  52                   push edx
// 0057849d  ebbd                 jmp 0x57845c
// 0057849f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005784a3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005784a7  5f                   pop edi
// 005784a8  5e                   pop esi
// 005784a9  8908                 mov dword ptr [eax], ecx
// 005784ab  895004               mov dword ptr [eax + 4], edx
// 005784ae  c6400800             mov byte ptr [eax + 8], 0
// 005784b2  5d                   pop ebp
// 005784b3  83c40c               add esp, 0xc
// 005784b6  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@W4CameraType@Camera@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@W4CameraType@Camera@2@@std@@@6@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@W4CameraType@Camera@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@W4CameraType@Camera@2@@std@@@6@$0A@@std@@@std@@_N@2@ABU?$pair@QBVName@RBX@@W4CameraType@Camera@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
