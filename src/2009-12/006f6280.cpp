// roc 2009-12 006f6280  unit: G3D::VRay::?$TypedPropertyDescriptor  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f6280
//
// 006f6280  83ec0c               sub esp, 0xc
// 006f6283  53                   push ebx
// 006f6284  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006f6288  55                   push ebp
// 006f6289  56                   push esi
// 006f628a  57                   push edi
// 006f628b  8bf9                 mov edi, ecx
// 006f628d  8b7718               mov esi, dword ptr [edi + 0x18]
// 006f6290  8b4604               mov eax, dword ptr [esi + 4]
// 006f6293  80781500             cmp byte ptr [eax + 0x15], 0
// 006f6297  b101                 mov cl, 1
// 006f6299  884c2410             mov byte ptr [esp + 0x10], cl
// 006f629d  7520                 jne 0x6f62bf
// 006f629f  8b5304               mov edx, dword ptr [ebx + 4]
// 006f62a2  3b5010               cmp edx, dword ptr [eax + 0x10]
// 006f62a5  8bf0                 mov esi, eax
// 006f62a7  0f92c1               setb cl
// 006f62aa  884c2410             mov byte ptr [esp + 0x10], cl
// 006f62ae  84c9                 test cl, cl
// 006f62b0  7404                 je 0x6f62b6
// 006f62b2  8b00                 mov eax, dword ptr [eax]
// 006f62b4  eb03                 jmp 0x6f62b9
// 006f62b6  8b4008               mov eax, dword ptr [eax + 8]
// 006f62b9  80781500             cmp byte ptr [eax + 0x15], 0
// 006f62bd  74e3                 je 0x6f62a2
// 006f62bf  8b17                 mov edx, dword ptr [edi]
// 006f62c1  8bee                 mov ebp, esi
// 006f62c3  896c2418             mov dword ptr [esp + 0x18], ebp
// 006f62c7  89542414             mov dword ptr [esp + 0x14], edx
// 006f62cb  84c9                 test cl, cl
// 006f62cd  7452                 je 0x6f6321
// 006f62cf  8b4718               mov eax, dword ptr [edi + 0x18]
// 006f62d2  8b28                 mov ebp, dword ptr [eax]
// 006f62d4  85d2                 test edx, edx
// 006f62d6  7404                 je 0x6f62dc
// 006f62d8  3bd2                 cmp edx, edx
// 006f62da  7406                 je 0x6f62e2
// 006f62dc  ff1560b79800         call dword ptr [0x98b760]
// 006f62e2  8d4c2414             lea ecx, [esp + 0x14]
// 006f62e6  3bf5                 cmp esi, ebp
// 006f62e8  752a                 jne 0x6f6314
// 006f62ea  53                   push ebx
// 006f62eb  56                   push esi
// 006f62ec  6a01                 push 1
// 006f62ee  51                   push ecx
// 006f62ef  8bcf                 mov ecx, edi
// 006f62f1  e8caf5ffff           call 0x6f58c0
// 006f62f6  5f                   pop edi
// 006f62f7  8bc8                 mov ecx, eax
// 006f62f9  8b11                 mov edx, dword ptr [ecx]
// 006f62fb  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006f62ff  8b4904               mov ecx, dword ptr [ecx + 4]
// 006f6302  5e                   pop esi
// 006f6303  5d                   pop ebp
// 006f6304  894804               mov dword ptr [eax + 4], ecx
// 006f6307  c6400801             mov byte ptr [eax + 8], 1
// 006f630b  8910                 mov dword ptr [eax], edx
// 006f630d  5b                   pop ebx
// 006f630e  83c40c               add esp, 0xc
// 006f6311  c20800               ret 8
// 006f6314  e817dfd4ff           call 0x444230
// 006f6319  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006f631d  8b542414             mov edx, dword ptr [esp + 0x14]
// 006f6321  8b4510               mov eax, dword ptr [ebp + 0x10]
// 006f6324  3b4304               cmp eax, dword ptr [ebx + 4]
// 006f6327  7331                 jae 0x6f635a
// 006f6329  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f632d  53                   push ebx
// 006f632e  56                   push esi
// 006f632f  51                   push ecx
// 006f6330  8d542420             lea edx, [esp + 0x20]
// 006f6334  52                   push edx
// 006f6335  8bcf                 mov ecx, edi
// 006f6337  e884f5ffff           call 0x6f58c0
// 006f633c  5f                   pop edi
// 006f633d  8bc8                 mov ecx, eax
// 006f633f  8b11                 mov edx, dword ptr [ecx]
// 006f6341  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006f6345  8b4904               mov ecx, dword ptr [ecx + 4]
// 006f6348  5e                   pop esi
// 006f6349  5d                   pop ebp
// 006f634a  894804               mov dword ptr [eax + 4], ecx
// 006f634d  c6400801             mov byte ptr [eax + 8], 1
// 006f6351  8910                 mov dword ptr [eax], edx
// 006f6353  5b                   pop ebx
// 006f6354  83c40c               add esp, 0xc
// 006f6357  c20800               ret 8
// 006f635a  8b442420             mov eax, dword ptr [esp + 0x20]
// 006f635e  5f                   pop edi
// 006f635f  5e                   pop esi
// 006f6360  896804               mov dword ptr [eax + 4], ebp
// 006f6363  5d                   pop ebp
// 006f6364  c6400800             mov byte ptr [eax + 8], 0
// 006f6368  8910                 mov dword ptr [eax], edx
// 006f636a  5b                   pop ebx
// 006f636b  83c40c               add esp, 0xc
// 006f636e  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?insert@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@_N@2@ABV?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
