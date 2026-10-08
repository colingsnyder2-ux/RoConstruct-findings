// roc 2007-03 004178b0  unit: seg_00410000  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004178b0
//
// 004178b0  83ec0c               sub esp, 0xc
// 004178b3  55                   push ebp
// 004178b4  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004178b8  56                   push esi
// 004178b9  57                   push edi
// 004178ba  8bf9                 mov edi, ecx
// 004178bc  8b7704               mov esi, dword ptr [edi + 4]
// 004178bf  8b4604               mov eax, dword ptr [esi + 4]
// 004178c2  80781500             cmp byte ptr [eax + 0x15], 0
// 004178c6  b101                 mov cl, 1
// 004178c8  884c240c             mov byte ptr [esp + 0xc], cl
// 004178cc  7520                 jne 0x4178ee
// 004178ce  8b5500               mov edx, dword ptr [ebp]
// 004178d1  3b500c               cmp edx, dword ptr [eax + 0xc]
// 004178d4  8bf0                 mov esi, eax
// 004178d6  0f92c1               setb cl
// 004178d9  84c9                 test cl, cl
// 004178db  884c240c             mov byte ptr [esp + 0xc], cl
// 004178df  7404                 je 0x4178e5
// 004178e1  8b00                 mov eax, dword ptr [eax]
// 004178e3  eb03                 jmp 0x4178e8
// 004178e5  8b4008               mov eax, dword ptr [eax + 8]
// 004178e8  80781500             cmp byte ptr [eax + 0x15], 0
// 004178ec  74e3                 je 0x4178d1
// 004178ee  84c9                 test cl, cl
// 004178f0  8bd6                 mov edx, esi
// 004178f2  89542414             mov dword ptr [esp + 0x14], edx
// 004178f6  897c2410             mov dword ptr [esp + 0x10], edi
// 004178fa  743d                 je 0x417939
// 004178fc  8b4704               mov eax, dword ptr [edi + 4]
// 004178ff  3b30                 cmp esi, dword ptr [eax]
// 00417901  8d4c2410             lea ecx, [esp + 0x10]
// 00417905  7529                 jne 0x417930
// 00417907  55                   push ebp
// 00417908  56                   push esi
// 00417909  6a01                 push 1
// 0041790b  51                   push ecx
// 0041790c  8bcf                 mov ecx, edi
// 0041790e  e85df6ffff           call 0x416f70
// 00417913  8bc8                 mov ecx, eax
// 00417915  8b11                 mov edx, dword ptr [ecx]
// 00417917  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0041791b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0041791e  5f                   pop edi
// 0041791f  5e                   pop esi
// 00417920  8910                 mov dword ptr [eax], edx
// 00417922  894804               mov dword ptr [eax + 4], ecx
// 00417925  c6400801             mov byte ptr [eax + 8], 1
// 00417929  5d                   pop ebp
// 0041792a  83c40c               add esp, 0xc
// 0041792d  c20800               ret 8
// 00417930  e84b821100           call 0x52fb80
// 00417935  8b542414             mov edx, dword ptr [esp + 0x14]
// 00417939  8b420c               mov eax, dword ptr [edx + 0xc]
// 0041793c  3b4500               cmp eax, dword ptr [ebp]
// 0041793f  730e                 jae 0x41794f
// 00417941  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00417945  55                   push ebp
// 00417946  56                   push esi
// 00417947  51                   push ecx
// 00417948  8d54241c             lea edx, [esp + 0x1c]
// 0041794c  52                   push edx
// 0041794d  ebbd                 jmp 0x41790c
// 0041794f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00417953  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00417957  5f                   pop edi
// 00417958  5e                   pop esi
// 00417959  8908                 mov dword ptr [eax], ecx
// 0041795b  895004               mov dword ptr [eax + 4], edx
// 0041795e  c6400800             mov byte ptr [eax + 8], 0
// 00417962  5d                   pop ebp
// 00417963  83c40c               add esp, 0xc
// 00417966  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@W4CameraType@Camera@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@W4CameraType@Camera@2@@std@@@6@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@W4CameraType@Camera@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@W4CameraType@Camera@2@@std@@@6@$0A@@std@@@std@@_N@2@ABU?$pair@QBVName@RBX@@W4CameraType@Camera@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
