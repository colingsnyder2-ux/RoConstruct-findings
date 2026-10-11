// roc 2008-06 00591bd0  unit: RBX::RootInstance  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00591bd0
//
// 00591bd0  83ec10               sub esp, 0x10
// 00591bd3  55                   push ebp
// 00591bd4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00591bd8  56                   push esi
// 00591bd9  8bf1                 mov esi, ecx
// 00591bdb  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00591bde  8b4104               mov eax, dword ptr [ecx + 4]
// 00591be1  80781900             cmp byte ptr [eax + 0x19], 0
// 00591be5  57                   push edi
// 00591be6  8bf9                 mov edi, ecx
// 00591be8  751a                 jne 0x591c04
// 00591bea  8b4d00               mov ecx, dword ptr [ebp]
// 00591bed  8d4900               lea ecx, [ecx]
// 00591bf0  39480c               cmp dword ptr [eax + 0xc], ecx
// 00591bf3  7305                 jae 0x591bfa
// 00591bf5  8b4008               mov eax, dword ptr [eax + 8]
// 00591bf8  eb04                 jmp 0x591bfe
// 00591bfa  8bf8                 mov edi, eax
// 00591bfc  8b00                 mov eax, dword ptr [eax]
// 00591bfe  80781900             cmp byte ptr [eax + 0x19], 0
// 00591c02  74ec                 je 0x591bf0
// 00591c04  8b06                 mov eax, dword ptr [esi]
// 00591c06  53                   push ebx
// 00591c07  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 00591c0a  897c2414             mov dword ptr [esp + 0x14], edi
// 00591c0e  89442410             mov dword ptr [esp + 0x10], eax
// 00591c12  85c0                 test eax, eax
// 00591c14  7404                 je 0x591c1a
// 00591c16  3bc0                 cmp eax, eax
// 00591c18  7406                 je 0x591c20
// 00591c1a  ff1590288000         call dword ptr [0x802890]
// 00591c20  3bfb                 cmp edi, ebx
// 00591c22  5b                   pop ebx
// 00591c23  740e                 je 0x591c33
// 00591c25  8b4500               mov eax, dword ptr [ebp]
// 00591c28  3b470c               cmp eax, dword ptr [edi + 0xc]
// 00591c2b  7206                 jb 0x591c33
// 00591c2d  8d4c240c             lea ecx, [esp + 0xc]
// 00591c31  eb11                 jmp 0x591c44
// 00591c33  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00591c36  8b16                 mov edx, dword ptr [esi]
// 00591c38  894c2418             mov dword ptr [esp + 0x18], ecx
// 00591c3c  89542414             mov dword ptr [esp + 0x14], edx
// 00591c40  8d4c2414             lea ecx, [esp + 0x14]
// 00591c44  8b11                 mov edx, dword ptr [ecx]
// 00591c46  8b442420             mov eax, dword ptr [esp + 0x20]
// 00591c4a  8b4904               mov ecx, dword ptr [ecx + 4]
// 00591c4d  5f                   pop edi
// 00591c4e  5e                   pop esi
// 00591c4f  8910                 mov dword ptr [eax], edx
// 00591c51  894804               mov dword ptr [eax + 4], ecx
// 00591c54  5d                   pop ebp
// 00591c55  83c410               add esp, 0x10
// 00591c58  c20800               ret 8
// library openrbx-client/App\reflection\signal.cpp (function ?find@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@QAE?AViterator@12@ABQBVSignalDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/signal.cpp
