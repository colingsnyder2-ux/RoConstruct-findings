// roc 2007-03 0049f080  unit: seg_00490000  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049f080
//
// 0049f080  83ec0c               sub esp, 0xc
// 0049f083  55                   push ebp
// 0049f084  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0049f088  56                   push esi
// 0049f089  57                   push edi
// 0049f08a  8bf9                 mov edi, ecx
// 0049f08c  8b7704               mov esi, dword ptr [edi + 4]
// 0049f08f  8b4604               mov eax, dword ptr [esi + 4]
// 0049f092  80781500             cmp byte ptr [eax + 0x15], 0
// 0049f096  b101                 mov cl, 1
// 0049f098  884c240c             mov byte ptr [esp + 0xc], cl
// 0049f09c  7520                 jne 0x49f0be
// 0049f09e  8b5504               mov edx, dword ptr [ebp + 4]
// 0049f0a1  3b5010               cmp edx, dword ptr [eax + 0x10]
// 0049f0a4  8bf0                 mov esi, eax
// 0049f0a6  0f92c1               setb cl
// 0049f0a9  84c9                 test cl, cl
// 0049f0ab  884c240c             mov byte ptr [esp + 0xc], cl
// 0049f0af  7404                 je 0x49f0b5
// 0049f0b1  8b00                 mov eax, dword ptr [eax]
// 0049f0b3  eb03                 jmp 0x49f0b8
// 0049f0b5  8b4008               mov eax, dword ptr [eax + 8]
// 0049f0b8  80781500             cmp byte ptr [eax + 0x15], 0
// 0049f0bc  74e3                 je 0x49f0a1
// 0049f0be  84c9                 test cl, cl
// 0049f0c0  8bd6                 mov edx, esi
// 0049f0c2  89542414             mov dword ptr [esp + 0x14], edx
// 0049f0c6  897c2410             mov dword ptr [esp + 0x10], edi
// 0049f0ca  743d                 je 0x49f109
// 0049f0cc  8b4704               mov eax, dword ptr [edi + 4]
// 0049f0cf  3b30                 cmp esi, dword ptr [eax]
// 0049f0d1  8d4c2410             lea ecx, [esp + 0x10]
// 0049f0d5  7529                 jne 0x49f100
// 0049f0d7  55                   push ebp
// 0049f0d8  56                   push esi
// 0049f0d9  6a01                 push 1
// 0049f0db  51                   push ecx
// 0049f0dc  8bcf                 mov ecx, edi
// 0049f0de  e8edf1ffff           call 0x49e2d0
// 0049f0e3  8bc8                 mov ecx, eax
// 0049f0e5  8b11                 mov edx, dword ptr [ecx]
// 0049f0e7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0049f0eb  8b4904               mov ecx, dword ptr [ecx + 4]
// 0049f0ee  5f                   pop edi
// 0049f0ef  5e                   pop esi
// 0049f0f0  8910                 mov dword ptr [eax], edx
// 0049f0f2  894804               mov dword ptr [eax + 4], ecx
// 0049f0f5  c6400801             mov byte ptr [eax + 8], 1
// 0049f0f9  5d                   pop ebp
// 0049f0fa  83c40c               add esp, 0xc
// 0049f0fd  c20800               ret 8
// 0049f100  e87b0a0900           call 0x52fb80
// 0049f105  8b542414             mov edx, dword ptr [esp + 0x14]
// 0049f109  8b4210               mov eax, dword ptr [edx + 0x10]
// 0049f10c  3b4504               cmp eax, dword ptr [ebp + 4]
// 0049f10f  730e                 jae 0x49f11f
// 0049f111  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049f115  55                   push ebp
// 0049f116  56                   push esi
// 0049f117  51                   push ecx
// 0049f118  8d54241c             lea edx, [esp + 0x1c]
// 0049f11c  52                   push edx
// 0049f11d  ebbd                 jmp 0x49f0dc
// 0049f11f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0049f123  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049f127  5f                   pop edi
// 0049f128  5e                   pop esi
// 0049f129  8908                 mov dword ptr [eax], ecx
// 0049f12b  895004               mov dword ptr [eax + 4], edx
// 0049f12e  c6400800             mov byte ptr [eax + 8], 0
// 0049f132  5d                   pop ebp
// 0049f133  83c40c               add esp, 0xc
// 0049f136  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?insert@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@_N@2@ABV?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
