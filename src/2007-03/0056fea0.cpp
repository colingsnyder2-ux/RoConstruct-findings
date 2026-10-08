// roc 2007-03 0056fea0  unit: seg_00560000  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056fea0
//
// 0056fea0  83ec0c               sub esp, 0xc
// 0056fea3  55                   push ebp
// 0056fea4  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0056fea8  56                   push esi
// 0056fea9  57                   push edi
// 0056feaa  8bf9                 mov edi, ecx
// 0056feac  8b7704               mov esi, dword ptr [edi + 4]
// 0056feaf  8b4604               mov eax, dword ptr [esi + 4]
// 0056feb2  80781900             cmp byte ptr [eax + 0x19], 0
// 0056feb6  b101                 mov cl, 1
// 0056feb8  884c240c             mov byte ptr [esp + 0xc], cl
// 0056febc  7520                 jne 0x56fede
// 0056febe  8b5500               mov edx, dword ptr [ebp]
// 0056fec1  3b500c               cmp edx, dword ptr [eax + 0xc]
// 0056fec4  8bf0                 mov esi, eax
// 0056fec6  0f92c1               setb cl
// 0056fec9  84c9                 test cl, cl
// 0056fecb  884c240c             mov byte ptr [esp + 0xc], cl
// 0056fecf  7404                 je 0x56fed5
// 0056fed1  8b00                 mov eax, dword ptr [eax]
// 0056fed3  eb03                 jmp 0x56fed8
// 0056fed5  8b4008               mov eax, dword ptr [eax + 8]
// 0056fed8  80781900             cmp byte ptr [eax + 0x19], 0
// 0056fedc  74e3                 je 0x56fec1
// 0056fede  84c9                 test cl, cl
// 0056fee0  8bd6                 mov edx, esi
// 0056fee2  89542414             mov dword ptr [esp + 0x14], edx
// 0056fee6  897c2410             mov dword ptr [esp + 0x10], edi
// 0056feea  743d                 je 0x56ff29
// 0056feec  8b4704               mov eax, dword ptr [edi + 4]
// 0056feef  3b30                 cmp esi, dword ptr [eax]
// 0056fef1  8d4c2410             lea ecx, [esp + 0x10]
// 0056fef5  7529                 jne 0x56ff20
// 0056fef7  55                   push ebp
// 0056fef8  56                   push esi
// 0056fef9  6a01                 push 1
// 0056fefb  51                   push ecx
// 0056fefc  8bcf                 mov ecx, edi
// 0056fefe  e81dfdffff           call 0x56fc20
// 0056ff03  8bc8                 mov ecx, eax
// 0056ff05  8b11                 mov edx, dword ptr [ecx]
// 0056ff07  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0056ff0b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0056ff0e  5f                   pop edi
// 0056ff0f  5e                   pop esi
// 0056ff10  8910                 mov dword ptr [eax], edx
// 0056ff12  894804               mov dword ptr [eax + 4], ecx
// 0056ff15  c6400801             mov byte ptr [eax + 8], 1
// 0056ff19  5d                   pop ebp
// 0056ff1a  83c40c               add esp, 0xc
// 0056ff1d  c20800               ret 8
// 0056ff20  e8eb0f0800           call 0x5f0f10
// 0056ff25  8b542414             mov edx, dword ptr [esp + 0x14]
// 0056ff29  8b420c               mov eax, dword ptr [edx + 0xc]
// 0056ff2c  3b4500               cmp eax, dword ptr [ebp]
// 0056ff2f  730e                 jae 0x56ff3f
// 0056ff31  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056ff35  55                   push ebp
// 0056ff36  56                   push esi
// 0056ff37  51                   push ecx
// 0056ff38  8d54241c             lea edx, [esp + 0x1c]
// 0056ff3c  52                   push edx
// 0056ff3d  ebbd                 jmp 0x56fefc
// 0056ff3f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0056ff43  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056ff47  5f                   pop edi
// 0056ff48  5e                   pop esi
// 0056ff49  8908                 mov dword ptr [eax], ecx
// 0056ff4b  895004               mov dword ptr [eax + 4], edx
// 0056ff4e  c6400800             mov byte ptr [eax + 8], 0
// 0056ff52  5d                   pop ebp
// 0056ff53  83c40c               add esp, 0xc
// 0056ff56  c20800               ret 8
// library rbxgs/reflection\signal.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@_N@2@ABU?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
