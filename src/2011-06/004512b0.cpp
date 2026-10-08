// roc 2011-06 004512b0  unit: RBX::MergeBinder  size: 467 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004512b0
//
// 004512b0  6aff                 push -1
// 004512b2  68008a9e00           push 0x9e8a00
// 004512b7  64a100000000         mov eax, dword ptr fs:[0]
// 004512bd  50                   push eax
// 004512be  64892500000000       mov dword ptr fs:[0], esp
// 004512c5  83ec18               sub esp, 0x18
// 004512c8  53                   push ebx
// 004512c9  56                   push esi
// 004512ca  33db                 xor ebx, ebx
// 004512cc  57                   push edi
// 004512cd  8bf1                 mov esi, ecx
// 004512cf  895c240c             mov dword ptr [esp + 0xc], ebx
// 004512d3  895c2410             mov dword ptr [esp + 0x10], ebx
// 004512d7  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 004512db  8d44240c             lea eax, [esp + 0xc]
// 004512df  50                   push eax
// 004512e0  8bcf                 mov ecx, edi
// 004512e2  895c2430             mov dword ptr [esp + 0x30], ebx
// 004512e6  e8d51b1b00           call 0x602ec0
// 004512eb  84c0                 test al, al
// 004512ed  0f84eb000000         je 0x4513de
// 004512f3  8d4c240c             lea ecx, [esp + 0xc]
// 004512f7  e804a72000           call 0x65ba00
// 004512fc  84c0                 test al, al
// 004512fe  7516                 jne 0x451316
// 00451300  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00451304  8b11                 mov edx, dword ptr [ecx]
// 00451306  8b12                 mov edx, dword ptr [edx]
// 00451308  8d44240c             lea eax, [esp + 0xc]
// 0045130c  50                   push eax
// 0045130d  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00451311  50                   push eax
// 00451312  ffd2                 call edx
// 00451314  eb78                 jmp 0x45138e
// 00451316  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0045131a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0045131e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00451322  89442414             mov dword ptr [esp + 0x14], eax
// 00451326  8b442410             mov eax, dword ptr [esp + 0x10]
// 0045132a  894c2418             mov dword ptr [esp + 0x18], ecx
// 0045132e  8954241c             mov dword ptr [esp + 0x1c], edx
// 00451332  89442420             mov dword ptr [esp + 0x20], eax
// 00451336  3bc3                 cmp eax, ebx
// 00451338  740c                 je 0x451346
// 0045133a  83c004               add eax, 4
// 0045133d  b901000000           mov ecx, 1
// 00451342  f00fc108             lock xadd dword ptr [eax], ecx
// 00451346  8d542414             lea edx, [esp + 0x14]
// 0045134a  52                   push edx
// 0045134b  8d4e04               lea ecx, [esi + 4]
// 0045134e  c644243001           mov byte ptr [esp + 0x30], 1
// 00451353  e858441c00           call 0x6157b0
// 00451358  8b742420             mov esi, dword ptr [esp + 0x20]
// 0045135c  885c242c             mov byte ptr [esp + 0x2c], bl
// 00451360  3bf3                 cmp esi, ebx
// 00451362  742a                 je 0x45138e
// 00451364  8d4604               lea eax, [esi + 4]
// 00451367  83c9ff               or ecx, 0xffffffff
// 0045136a  f00fc108             lock xadd dword ptr [eax], ecx
// 0045136e  751e                 jne 0x45138e
// 00451370  8b16                 mov edx, dword ptr [esi]
// 00451372  8b4204               mov eax, dword ptr [edx + 4]
// 00451375  8bce                 mov ecx, esi
// 00451377  ffd0                 call eax
// 00451379  8d4e08               lea ecx, [esi + 8]
// 0045137c  83caff               or edx, 0xffffffff
// 0045137f  f00fc111             lock xadd dword ptr [ecx], edx
// 00451383  7509                 jne 0x45138e
// 00451385  8b06                 mov eax, dword ptr [esi]
// 00451387  8b5008               mov edx, dword ptr [eax + 8]
// 0045138a  8bce                 mov ecx, esi
// 0045138c  ffd2                 call edx
// 0045138e  8b742410             mov esi, dword ptr [esp + 0x10]
// 00451392  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0045139a  3bf3                 cmp esi, ebx
// 0045139c  742a                 je 0x4513c8
// 0045139e  8d4604               lea eax, [esi + 4]
// 004513a1  83c9ff               or ecx, 0xffffffff
// 004513a4  f00fc108             lock xadd dword ptr [eax], ecx
// 004513a8  751e                 jne 0x4513c8
// 004513aa  8b16                 mov edx, dword ptr [esi]
// 004513ac  8b4204               mov eax, dword ptr [edx + 4]
// 004513af  8bce                 mov ecx, esi
// 004513b1  ffd0                 call eax
// 004513b3  8d4e08               lea ecx, [esi + 8]
// 004513b6  83caff               or edx, 0xffffffff
// 004513b9  f00fc111             lock xadd dword ptr [ecx], edx
// 004513bd  7509                 jne 0x4513c8
// 004513bf  8b06                 mov eax, dword ptr [esi]
// 004513c1  8b5008               mov edx, dword ptr [eax + 8]
// 004513c4  8bce                 mov ecx, esi
// 004513c6  ffd2                 call edx
// 004513c8  5f                   pop edi
// 004513c9  5e                   pop esi
// 004513ca  b001                 mov al, 1
// 004513cc  5b                   pop ebx
// 004513cd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004513d1  64890d00000000       mov dword ptr fs:[0], ecx
// 004513d8  83c424               add esp, 0x24
// 004513db  c20c00               ret 0xc
// 004513de  a1b8b7cc00           mov eax, dword ptr [0xccb7b8]
// 004513e3  50                   push eax
// 004513e4  8bcf                 mov ecx, edi
// 004513e6  e8a5151b00           call 0x602990
// 004513eb  8b742410             mov esi, dword ptr [esp + 0x10]
// 004513ef  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 004513f7  84c0                 test al, al
// 004513f9  7444                 je 0x45143f
// 004513fb  3bf3                 cmp esi, ebx
// 004513fd  742a                 je 0x451429
// 004513ff  8d4e04               lea ecx, [esi + 4]
// 00451402  83caff               or edx, 0xffffffff
// 00451405  f00fc111             lock xadd dword ptr [ecx], edx
// 00451409  751e                 jne 0x451429
// 0045140b  8b06                 mov eax, dword ptr [esi]
// 0045140d  8b5004               mov edx, dword ptr [eax + 4]
// 00451410  8bce                 mov ecx, esi
// 00451412  ffd2                 call edx
// 00451414  8d4608               lea eax, [esi + 8]
// 00451417  83c9ff               or ecx, 0xffffffff
// 0045141a  f00fc108             lock xadd dword ptr [eax], ecx
// 0045141e  7509                 jne 0x451429
// 00451420  8b16                 mov edx, dword ptr [esi]
// 00451422  8b4208               mov eax, dword ptr [edx + 8]
// 00451425  8bce                 mov ecx, esi
// 00451427  ffd0                 call eax
// 00451429  5f                   pop edi
// 0045142a  5e                   pop esi
// 0045142b  b001                 mov al, 1
// 0045142d  5b                   pop ebx
// 0045142e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00451432  64890d00000000       mov dword ptr fs:[0], ecx
// 00451439  83c424               add esp, 0x24
// 0045143c  c20c00               ret 0xc
// 0045143f  3bf3                 cmp esi, ebx
// 00451441  742a                 je 0x45146d
// 00451443  8d4e04               lea ecx, [esi + 4]
// 00451446  83caff               or edx, 0xffffffff
// 00451449  f00fc111             lock xadd dword ptr [ecx], edx
// 0045144d  751e                 jne 0x45146d
// 0045144f  8b06                 mov eax, dword ptr [esi]
// 00451451  8b5004               mov edx, dword ptr [eax + 4]
// 00451454  8bce                 mov ecx, esi
// 00451456  ffd2                 call edx
// 00451458  8d4608               lea eax, [esi + 8]
// 0045145b  83c9ff               or ecx, 0xffffffff
// 0045145e  f00fc108             lock xadd dword ptr [eax], ecx
// 00451462  7509                 jne 0x45146d
// 00451464  8b16                 mov edx, dword ptr [esi]
// 00451466  8b4208               mov eax, dword ptr [edx + 8]
// 00451469  8bce                 mov ecx, esi
// 0045146b  ffd0                 call eax
// 0045146d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00451471  5f                   pop edi
// 00451472  5e                   pop esi
// 00451473  32c0                 xor al, al
// 00451475  5b                   pop ebx
// 00451476  64890d00000000       mov dword ptr fs:[0], ecx
// 0045147d  83c424               add esp, 0x24
// 00451480  c20c00               ret 0xc
// library rbxgs/v8xml\SerializerV2.cpp (function ?processIDREF@MergeBinder@RBX@@MAE_NPBVXmlNameValuePair@@PAVDescribedBase@Reflection@2@PBVIIDREF@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
