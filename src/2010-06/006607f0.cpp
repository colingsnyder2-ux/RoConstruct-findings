// roc 2010-06 006607f0  unit: G3D::VRay::?$TypedPropertyDescriptor  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006607f0
//
// 006607f0  83ec0c               sub esp, 0xc
// 006607f3  53                   push ebx
// 006607f4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006607f8  55                   push ebp
// 006607f9  56                   push esi
// 006607fa  57                   push edi
// 006607fb  8bf9                 mov edi, ecx
// 006607fd  8b7718               mov esi, dword ptr [edi + 0x18]
// 00660800  8b4604               mov eax, dword ptr [esi + 4]
// 00660803  80781500             cmp byte ptr [eax + 0x15], 0
// 00660807  b101                 mov cl, 1
// 00660809  884c2410             mov byte ptr [esp + 0x10], cl
// 0066080d  7520                 jne 0x66082f
// 0066080f  8b5304               mov edx, dword ptr [ebx + 4]
// 00660812  3b5010               cmp edx, dword ptr [eax + 0x10]
// 00660815  8bf0                 mov esi, eax
// 00660817  0f92c1               setb cl
// 0066081a  884c2410             mov byte ptr [esp + 0x10], cl
// 0066081e  84c9                 test cl, cl
// 00660820  7404                 je 0x660826
// 00660822  8b00                 mov eax, dword ptr [eax]
// 00660824  eb03                 jmp 0x660829
// 00660826  8b4008               mov eax, dword ptr [eax + 8]
// 00660829  80781500             cmp byte ptr [eax + 0x15], 0
// 0066082d  74e3                 je 0x660812
// 0066082f  8b17                 mov edx, dword ptr [edi]
// 00660831  8bee                 mov ebp, esi
// 00660833  896c2418             mov dword ptr [esp + 0x18], ebp
// 00660837  89542414             mov dword ptr [esp + 0x14], edx
// 0066083b  84c9                 test cl, cl
// 0066083d  7452                 je 0x660891
// 0066083f  8b4718               mov eax, dword ptr [edi + 0x18]
// 00660842  8b28                 mov ebp, dword ptr [eax]
// 00660844  85d2                 test edx, edx
// 00660846  7404                 je 0x66084c
// 00660848  3bd2                 cmp edx, edx
// 0066084a  7406                 je 0x660852
// 0066084c  ff150ca99e00         call dword ptr [0x9ea90c]
// 00660852  8d4c2414             lea ecx, [esp + 0x14]
// 00660856  3bf5                 cmp esi, ebp
// 00660858  752a                 jne 0x660884
// 0066085a  53                   push ebx
// 0066085b  56                   push esi
// 0066085c  6a01                 push 1
// 0066085e  51                   push ecx
// 0066085f  8bcf                 mov ecx, edi
// 00660861  e8aaf7ffff           call 0x660010
// 00660866  5f                   pop edi
// 00660867  8bc8                 mov ecx, eax
// 00660869  8b11                 mov edx, dword ptr [ecx]
// 0066086b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0066086f  8b4904               mov ecx, dword ptr [ecx + 4]
// 00660872  5e                   pop esi
// 00660873  5d                   pop ebp
// 00660874  894804               mov dword ptr [eax + 4], ecx
// 00660877  c6400801             mov byte ptr [eax + 8], 1
// 0066087b  8910                 mov dword ptr [eax], edx
// 0066087d  5b                   pop ebx
// 0066087e  83c40c               add esp, 0xc
// 00660881  c20800               ret 8
// 00660884  e8b7930a00           call 0x709c40
// 00660889  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0066088d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00660891  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00660894  3b4304               cmp eax, dword ptr [ebx + 4]
// 00660897  7331                 jae 0x6608ca
// 00660899  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0066089d  53                   push ebx
// 0066089e  56                   push esi
// 0066089f  51                   push ecx
// 006608a0  8d542420             lea edx, [esp + 0x20]
// 006608a4  52                   push edx
// 006608a5  8bcf                 mov ecx, edi
// 006608a7  e864f7ffff           call 0x660010
// 006608ac  5f                   pop edi
// 006608ad  8bc8                 mov ecx, eax
// 006608af  8b11                 mov edx, dword ptr [ecx]
// 006608b1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006608b5  8b4904               mov ecx, dword ptr [ecx + 4]
// 006608b8  5e                   pop esi
// 006608b9  5d                   pop ebp
// 006608ba  894804               mov dword ptr [eax + 4], ecx
// 006608bd  c6400801             mov byte ptr [eax + 8], 1
// 006608c1  8910                 mov dword ptr [eax], edx
// 006608c3  5b                   pop ebx
// 006608c4  83c40c               add esp, 0xc
// 006608c7  c20800               ret 8
// 006608ca  8b442420             mov eax, dword ptr [esp + 0x20]
// 006608ce  5f                   pop edi
// 006608cf  5e                   pop esi
// 006608d0  896804               mov dword ptr [eax + 4], ebp
// 006608d3  5d                   pop ebp
// 006608d4  c6400800             mov byte ptr [eax + 8], 0
// 006608d8  8910                 mov dword ptr [eax], edx
// 006608da  5b                   pop ebx
// 006608db  83c40c               add esp, 0xc
// 006608de  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?insert@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@_N@2@ABV?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
