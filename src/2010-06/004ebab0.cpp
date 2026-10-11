// roc 2010-06 004ebab0  unit: RBX::Network::DirectPhysicsReceiver  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ebab0
//
// 004ebab0  83ec10               sub esp, 0x10
// 004ebab3  55                   push ebp
// 004ebab4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004ebab8  56                   push esi
// 004ebab9  8bf1                 mov esi, ecx
// 004ebabb  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004ebabe  8b4104               mov eax, dword ptr [ecx + 4]
// 004ebac1  80781900             cmp byte ptr [eax + 0x19], 0
// 004ebac5  57                   push edi
// 004ebac6  8bf9                 mov edi, ecx
// 004ebac8  751a                 jne 0x4ebae4
// 004ebaca  8b4d00               mov ecx, dword ptr [ebp]
// 004ebacd  8d4900               lea ecx, [ecx]
// 004ebad0  39480c               cmp dword ptr [eax + 0xc], ecx
// 004ebad3  7305                 jae 0x4ebada
// 004ebad5  8b4008               mov eax, dword ptr [eax + 8]
// 004ebad8  eb04                 jmp 0x4ebade
// 004ebada  8bf8                 mov edi, eax
// 004ebadc  8b00                 mov eax, dword ptr [eax]
// 004ebade  80781900             cmp byte ptr [eax + 0x19], 0
// 004ebae2  74ec                 je 0x4ebad0
// 004ebae4  8b06                 mov eax, dword ptr [esi]
// 004ebae6  53                   push ebx
// 004ebae7  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 004ebaea  897c2414             mov dword ptr [esp + 0x14], edi
// 004ebaee  89442410             mov dword ptr [esp + 0x10], eax
// 004ebaf2  85c0                 test eax, eax
// 004ebaf4  7404                 je 0x4ebafa
// 004ebaf6  3bc0                 cmp eax, eax
// 004ebaf8  7406                 je 0x4ebb00
// 004ebafa  ff150ca99e00         call dword ptr [0x9ea90c]
// 004ebb00  3bfb                 cmp edi, ebx
// 004ebb02  5b                   pop ebx
// 004ebb03  740e                 je 0x4ebb13
// 004ebb05  8b4500               mov eax, dword ptr [ebp]
// 004ebb08  3b470c               cmp eax, dword ptr [edi + 0xc]
// 004ebb0b  7206                 jb 0x4ebb13
// 004ebb0d  8d4c240c             lea ecx, [esp + 0xc]
// 004ebb11  eb11                 jmp 0x4ebb24
// 004ebb13  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004ebb16  8b16                 mov edx, dword ptr [esi]
// 004ebb18  894c2418             mov dword ptr [esp + 0x18], ecx
// 004ebb1c  89542414             mov dword ptr [esp + 0x14], edx
// 004ebb20  8d4c2414             lea ecx, [esp + 0x14]
// 004ebb24  8b11                 mov edx, dword ptr [ecx]
// 004ebb26  8b442420             mov eax, dword ptr [esp + 0x20]
// 004ebb2a  8b4904               mov ecx, dword ptr [ecx + 4]
// 004ebb2d  5f                   pop edi
// 004ebb2e  5e                   pop esi
// 004ebb2f  8910                 mov dword ptr [eax], edx
// 004ebb31  894804               mov dword ptr [eax + 4], ecx
// 004ebb34  5d                   pop ebp
// 004ebb35  83c410               add esp, 0x10
// 004ebb38  c20800               ret 8
// library openrbx-client/App\reflection\signal.cpp (function ?find@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@QAE?AViterator@12@ABQBVSignalDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/signal.cpp
