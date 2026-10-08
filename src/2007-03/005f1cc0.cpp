// roc 2007-03 005f1cc0  unit: seg_005f0000  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f1cc0
//
// 005f1cc0  83ec0c               sub esp, 0xc
// 005f1cc3  55                   push ebp
// 005f1cc4  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005f1cc8  56                   push esi
// 005f1cc9  57                   push edi
// 005f1cca  8bf9                 mov edi, ecx
// 005f1ccc  8b7704               mov esi, dword ptr [edi + 4]
// 005f1ccf  8b4604               mov eax, dword ptr [esi + 4]
// 005f1cd2  80781900             cmp byte ptr [eax + 0x19], 0
// 005f1cd6  b101                 mov cl, 1
// 005f1cd8  884c240c             mov byte ptr [esp + 0xc], cl
// 005f1cdc  7520                 jne 0x5f1cfe
// 005f1cde  8b5500               mov edx, dword ptr [ebp]
// 005f1ce1  3b500c               cmp edx, dword ptr [eax + 0xc]
// 005f1ce4  8bf0                 mov esi, eax
// 005f1ce6  0f92c1               setb cl
// 005f1ce9  84c9                 test cl, cl
// 005f1ceb  884c240c             mov byte ptr [esp + 0xc], cl
// 005f1cef  7404                 je 0x5f1cf5
// 005f1cf1  8b00                 mov eax, dword ptr [eax]
// 005f1cf3  eb03                 jmp 0x5f1cf8
// 005f1cf5  8b4008               mov eax, dword ptr [eax + 8]
// 005f1cf8  80781900             cmp byte ptr [eax + 0x19], 0
// 005f1cfc  74e3                 je 0x5f1ce1
// 005f1cfe  84c9                 test cl, cl
// 005f1d00  8bd6                 mov edx, esi
// 005f1d02  89542414             mov dword ptr [esp + 0x14], edx
// 005f1d06  897c2410             mov dword ptr [esp + 0x10], edi
// 005f1d0a  743d                 je 0x5f1d49
// 005f1d0c  8b4704               mov eax, dword ptr [edi + 4]
// 005f1d0f  3b30                 cmp esi, dword ptr [eax]
// 005f1d11  8d4c2410             lea ecx, [esp + 0x10]
// 005f1d15  7529                 jne 0x5f1d40
// 005f1d17  55                   push ebp
// 005f1d18  56                   push esi
// 005f1d19  6a01                 push 1
// 005f1d1b  51                   push ecx
// 005f1d1c  8bcf                 mov ecx, edi
// 005f1d1e  e8edfaffff           call 0x5f1810
// 005f1d23  8bc8                 mov ecx, eax
// 005f1d25  8b11                 mov edx, dword ptr [ecx]
// 005f1d27  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f1d2b  8b4904               mov ecx, dword ptr [ecx + 4]
// 005f1d2e  5f                   pop edi
// 005f1d2f  5e                   pop esi
// 005f1d30  8910                 mov dword ptr [eax], edx
// 005f1d32  894804               mov dword ptr [eax + 4], ecx
// 005f1d35  c6400801             mov byte ptr [eax + 8], 1
// 005f1d39  5d                   pop ebp
// 005f1d3a  83c40c               add esp, 0xc
// 005f1d3d  c20800               ret 8
// 005f1d40  e8cbf1ffff           call 0x5f0f10
// 005f1d45  8b542414             mov edx, dword ptr [esp + 0x14]
// 005f1d49  8b420c               mov eax, dword ptr [edx + 0xc]
// 005f1d4c  3b4500               cmp eax, dword ptr [ebp]
// 005f1d4f  730e                 jae 0x5f1d5f
// 005f1d51  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f1d55  55                   push ebp
// 005f1d56  56                   push esi
// 005f1d57  51                   push ecx
// 005f1d58  8d54241c             lea edx, [esp + 0x1c]
// 005f1d5c  52                   push edx
// 005f1d5d  ebbd                 jmp 0x5f1d1c
// 005f1d5f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f1d63  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f1d67  5f                   pop edi
// 005f1d68  5e                   pop esi
// 005f1d69  8908                 mov dword ptr [eax], ecx
// 005f1d6b  895004               mov dword ptr [eax + 4], edx
// 005f1d6e  c6400800             mov byte ptr [eax + 8], 0
// 005f1d72  5d                   pop ebp
// 005f1d73  83c40c               add esp, 0xc
// 005f1d76  c20800               ret 8
// library rbxgs/reflection\signal.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@_N@2@ABU?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
