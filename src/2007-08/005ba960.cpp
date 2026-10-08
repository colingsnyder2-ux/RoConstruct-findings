// roc 2007-08 005ba960  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ba960
//
// 005ba960  64a100000000         mov eax, dword ptr fs:[0]
// 005ba966  6aff                 push -1
// 005ba968  68d8bc7500           push 0x75bcd8
// 005ba96d  50                   push eax
// 005ba96e  64892500000000       mov dword ptr fs:[0], esp
// 005ba975  83ec0c               sub esp, 0xc
// 005ba978  53                   push ebx
// 005ba979  55                   push ebp
// 005ba97a  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005ba97e  56                   push esi
// 005ba97f  57                   push edi
// 005ba980  55                   push ebp
// 005ba981  e85afdffff           call 0x5ba6e0
// 005ba986  83c404               add esp, 4
// 005ba989  8bcd                 mov ecx, ebp
// 005ba98b  33db                 xor ebx, ebx
// 005ba98d  e82e23e5ff           call 0x40ccc0
// 005ba992  85c0                 test eax, eax
// 005ba994  0f8624010000         jbe 0x5baabe
// 005ba99a  8d9b00000000         lea ebx, [ebx]
// 005ba9a0  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005ba9a3  85c9                 test ecx, ecx
// 005ba9a5  740c                 je 0x5ba9b3
// 005ba9a7  8b4508               mov eax, dword ptr [ebp + 8]
// 005ba9aa  2bc1                 sub eax, ecx
// 005ba9ac  c1f803               sar eax, 3
// 005ba9af  3bd8                 cmp ebx, eax
// 005ba9b1  7206                 jb 0x5ba9b9
// 005ba9b3  ff15d8e67700         call dword ptr [0x77e6d8]
// 005ba9b9  8b4504               mov eax, dword ptr [ebp + 4]
// 005ba9bc  8d542414             lea edx, [esp + 0x14]
// 005ba9c0  8d0cd8               lea ecx, [eax + ebx*8]
// 005ba9c3  52                   push edx
// 005ba9c4  e8271e0400           call 0x5fc7f0
// 005ba9c9  8b742418             mov esi, dword ptr [esp + 0x18]
// 005ba9cd  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005ba9d1  83ec08               sub esp, 8
// 005ba9d4  85f6                 test esi, esi
// 005ba9d6  8bc4                 mov eax, esp
// 005ba9d8  8938                 mov dword ptr [eax], edi
// 005ba9da  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005ba9e2  89642418             mov dword ptr [esp + 0x18], esp
// 005ba9e6  897004               mov dword ptr [eax + 4], esi
// 005ba9e9  740c                 je 0x5ba9f7
// 005ba9eb  8d4604               lea eax, [esi + 4]
// 005ba9ee  b901000000           mov ecx, 1
// 005ba9f3  f00fc108             lock xadd dword ptr [eax], ecx
// 005ba9f7  e8f492fbff           call 0x573cf0
// 005ba9fc  83c408               add esp, 8
// 005ba9ff  84c0                 test al, al
// 005baa01  7473                 je 0x5baa76
// 005baa03  6a00                 push 0
// 005baa05  8bcf                 mov ecx, edi
// 005baa07  e844d8fbff           call 0x578250
// 005baa0c  8bcd                 mov ecx, ebp
// 005baa0e  e8ad22e5ff           call 0x40ccc0
// 005baa13  83f801               cmp eax, 1
// 005baa16  755e                 jne 0x5baa76
// 005baa18  840538d18b00         test byte ptr [0x8bd138], al
// 005baa1e  751a                 jne 0x5baa3a
// 005baa20  d9ee                 fldz 
// 005baa22  090538d18b00         or dword ptr [0x8bd138], eax
// 005baa28  d9152cd18b00         fst dword ptr [0x8bd12c]
// 005baa2e  d91530d18b00         fst dword ptr [0x8bd130]
// 005baa34  d91d34d18b00         fstp dword ptr [0x8bd134]
// 005baa3a  682cd18b00           push 0x8bd12c
// 005baa3f  8bcf                 mov ecx, edi
// 005baa41  e8fad4fbff           call 0x577f40
// 005baa46  f60538d18b0001       test byte ptr [0x8bd138], 1
// 005baa4d  751b                 jne 0x5baa6a
// 005baa4f  d9ee                 fldz 
// 005baa51  830d38d18b0001       or dword ptr [0x8bd138], 1
// 005baa58  d9152cd18b00         fst dword ptr [0x8bd12c]
// 005baa5e  d91530d18b00         fst dword ptr [0x8bd130]
// 005baa64  d91d34d18b00         fstp dword ptr [0x8bd134]
// 005baa6a  682cd18b00           push 0x8bd12c
// 005baa6f  8bcf                 mov ecx, edi
// 005baa71  e88ad5fbff           call 0x578000
// 005baa76  85f6                 test esi, esi
// 005baa78  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005baa80  742a                 je 0x5baaac
// 005baa82  8d5604               lea edx, [esi + 4]
// 005baa85  83c8ff               or eax, 0xffffffff
// 005baa88  f00fc102             lock xadd dword ptr [edx], eax
// 005baa8c  751e                 jne 0x5baaac
// 005baa8e  8b16                 mov edx, dword ptr [esi]
// 005baa90  8b4204               mov eax, dword ptr [edx + 4]
// 005baa93  8bce                 mov ecx, esi
// 005baa95  ffd0                 call eax
// 005baa97  8d4e08               lea ecx, [esi + 8]
// 005baa9a  83caff               or edx, 0xffffffff
// 005baa9d  f00fc111             lock xadd dword ptr [ecx], edx
// 005baaa1  7509                 jne 0x5baaac
// 005baaa3  8b06                 mov eax, dword ptr [esi]
// 005baaa5  8b5008               mov edx, dword ptr [eax + 8]
// 005baaa8  8bce                 mov ecx, esi
// 005baaaa  ffd2                 call edx
// 005baaac  8bcd                 mov ecx, ebp
// 005baaae  83c301               add ebx, 1
// 005baab1  e80a22e5ff           call 0x40ccc0
// 005baab6  3bd8                 cmp ebx, eax
// 005baab8  0f82e2feffff         jb 0x5ba9a0
// 005baabe  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005baac2  5f                   pop edi
// 005baac3  5e                   pop esi
// 005baac4  5d                   pop ebp
// 005baac5  64890d00000000       mov dword ptr fs:[0], ecx
// 005baacc  5b                   pop ebx
// 005baacd  83c418               add esp, 0x18
// 005baad0  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?joinAndStopDragging@DragUtilities@RBX@@SAXABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
