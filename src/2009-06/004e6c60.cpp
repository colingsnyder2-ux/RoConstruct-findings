// roc 2009-06 004e6c60  unit: RBX::Network::DirectPhysicsReceiver  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e6c60
//
// 004e6c60  83ec10               sub esp, 0x10
// 004e6c63  55                   push ebp
// 004e6c64  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004e6c68  56                   push esi
// 004e6c69  8bf1                 mov esi, ecx
// 004e6c6b  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004e6c6e  8b4104               mov eax, dword ptr [ecx + 4]
// 004e6c71  80781900             cmp byte ptr [eax + 0x19], 0
// 004e6c75  57                   push edi
// 004e6c76  8bf9                 mov edi, ecx
// 004e6c78  751a                 jne 0x4e6c94
// 004e6c7a  8b4d00               mov ecx, dword ptr [ebp]
// 004e6c7d  8d4900               lea ecx, [ecx]
// 004e6c80  39480c               cmp dword ptr [eax + 0xc], ecx
// 004e6c83  7305                 jae 0x4e6c8a
// 004e6c85  8b4008               mov eax, dword ptr [eax + 8]
// 004e6c88  eb04                 jmp 0x4e6c8e
// 004e6c8a  8bf8                 mov edi, eax
// 004e6c8c  8b00                 mov eax, dword ptr [eax]
// 004e6c8e  80781900             cmp byte ptr [eax + 0x19], 0
// 004e6c92  74ec                 je 0x4e6c80
// 004e6c94  8b06                 mov eax, dword ptr [esi]
// 004e6c96  53                   push ebx
// 004e6c97  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 004e6c9a  897c2414             mov dword ptr [esp + 0x14], edi
// 004e6c9e  89442410             mov dword ptr [esp + 0x10], eax
// 004e6ca2  85c0                 test eax, eax
// 004e6ca4  7404                 je 0x4e6caa
// 004e6ca6  3bc0                 cmp eax, eax
// 004e6ca8  7406                 je 0x4e6cb0
// 004e6caa  ff15ace98900         call dword ptr [0x89e9ac]
// 004e6cb0  3bfb                 cmp edi, ebx
// 004e6cb2  5b                   pop ebx
// 004e6cb3  740e                 je 0x4e6cc3
// 004e6cb5  8b4500               mov eax, dword ptr [ebp]
// 004e6cb8  3b470c               cmp eax, dword ptr [edi + 0xc]
// 004e6cbb  7206                 jb 0x4e6cc3
// 004e6cbd  8d4c240c             lea ecx, [esp + 0xc]
// 004e6cc1  eb11                 jmp 0x4e6cd4
// 004e6cc3  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004e6cc6  8b16                 mov edx, dword ptr [esi]
// 004e6cc8  894c2418             mov dword ptr [esp + 0x18], ecx
// 004e6ccc  89542414             mov dword ptr [esp + 0x14], edx
// 004e6cd0  8d4c2414             lea ecx, [esp + 0x14]
// 004e6cd4  8b11                 mov edx, dword ptr [ecx]
// 004e6cd6  8b442420             mov eax, dword ptr [esp + 0x20]
// 004e6cda  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e6cdd  5f                   pop edi
// 004e6cde  5e                   pop esi
// 004e6cdf  8910                 mov dword ptr [eax], edx
// 004e6ce1  894804               mov dword ptr [eax + 4], ecx
// 004e6ce4  5d                   pop ebp
// 004e6ce5  83c410               add esp, 0x10
// 004e6ce8  c20800               ret 8
// library openrbx-client/App\reflection\signal.cpp (function ?find@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@QAE?AViterator@12@ABQBVSignalDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/signal.cpp
