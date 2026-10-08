// roc 2007-03 00569970  unit: seg_00560000  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00569970
//
// 00569970  83ec0c               sub esp, 0xc
// 00569973  55                   push ebp
// 00569974  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00569978  56                   push esi
// 00569979  57                   push edi
// 0056997a  8bf9                 mov edi, ecx
// 0056997c  8b7704               mov esi, dword ptr [edi + 4]
// 0056997f  8b4604               mov eax, dword ptr [esi + 4]
// 00569982  80781500             cmp byte ptr [eax + 0x15], 0
// 00569986  b101                 mov cl, 1
// 00569988  884c240c             mov byte ptr [esp + 0xc], cl
// 0056998c  7520                 jne 0x5699ae
// 0056998e  8b5500               mov edx, dword ptr [ebp]
// 00569991  3b500c               cmp edx, dword ptr [eax + 0xc]
// 00569994  8bf0                 mov esi, eax
// 00569996  0f92c1               setb cl
// 00569999  84c9                 test cl, cl
// 0056999b  884c240c             mov byte ptr [esp + 0xc], cl
// 0056999f  7404                 je 0x5699a5
// 005699a1  8b00                 mov eax, dword ptr [eax]
// 005699a3  eb03                 jmp 0x5699a8
// 005699a5  8b4008               mov eax, dword ptr [eax + 8]
// 005699a8  80781500             cmp byte ptr [eax + 0x15], 0
// 005699ac  74e3                 je 0x569991
// 005699ae  84c9                 test cl, cl
// 005699b0  8bd6                 mov edx, esi
// 005699b2  89542414             mov dword ptr [esp + 0x14], edx
// 005699b6  897c2410             mov dword ptr [esp + 0x10], edi
// 005699ba  743d                 je 0x5699f9
// 005699bc  8b4704               mov eax, dword ptr [edi + 4]
// 005699bf  3b30                 cmp esi, dword ptr [eax]
// 005699c1  8d4c2410             lea ecx, [esp + 0x10]
// 005699c5  7529                 jne 0x5699f0
// 005699c7  55                   push ebp
// 005699c8  56                   push esi
// 005699c9  6a01                 push 1
// 005699cb  51                   push ecx
// 005699cc  8bcf                 mov ecx, edi
// 005699ce  e86dfcffff           call 0x569640
// 005699d3  8bc8                 mov ecx, eax
// 005699d5  8b11                 mov edx, dword ptr [ecx]
// 005699d7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005699db  8b4904               mov ecx, dword ptr [ecx + 4]
// 005699de  5f                   pop edi
// 005699df  5e                   pop esi
// 005699e0  8910                 mov dword ptr [eax], edx
// 005699e2  894804               mov dword ptr [eax + 4], ecx
// 005699e5  c6400801             mov byte ptr [eax + 8], 1
// 005699e9  5d                   pop ebp
// 005699ea  83c40c               add esp, 0xc
// 005699ed  c20800               ret 8
// 005699f0  e88b61fcff           call 0x52fb80
// 005699f5  8b542414             mov edx, dword ptr [esp + 0x14]
// 005699f9  8b420c               mov eax, dword ptr [edx + 0xc]
// 005699fc  3b4500               cmp eax, dword ptr [ebp]
// 005699ff  730e                 jae 0x569a0f
// 00569a01  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00569a05  55                   push ebp
// 00569a06  56                   push esi
// 00569a07  51                   push ecx
// 00569a08  8d54241c             lea edx, [esp + 0x1c]
// 00569a0c  52                   push edx
// 00569a0d  ebbd                 jmp 0x5699cc
// 00569a0f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00569a13  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00569a17  5f                   pop edi
// 00569a18  5e                   pop esi
// 00569a19  8908                 mov dword ptr [eax], ecx
// 00569a1b  895004               mov dword ptr [eax + 4], edx
// 00569a1e  c6400800             mov byte ptr [eax + 8], 0
// 00569a22  5d                   pop ebp
// 00569a23  83c40c               add esp, 0xc
// 00569a26  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@W4CameraType@Camera@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@W4CameraType@Camera@2@@std@@@6@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@W4CameraType@Camera@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@W4CameraType@Camera@2@@std@@@6@$0A@@std@@@std@@_N@2@ABU?$pair@QBVName@RBX@@W4CameraType@Camera@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
