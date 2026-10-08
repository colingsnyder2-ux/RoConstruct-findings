// roc 2007-03 00572f60  unit: seg_00570000  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00572f60
//
// 00572f60  53                   push ebx
// 00572f61  55                   push ebp
// 00572f62  56                   push esi
// 00572f63  8bf1                 mov esi, ecx
// 00572f65  8b4608               mov eax, dword ptr [esi + 8]
// 00572f68  8b2e                 mov ebp, dword ptr [esi]
// 00572f6a  03c0                 add eax, eax
// 00572f6c  57                   push edi
// 00572f6d  03c0                 add eax, eax
// 00572f6f  03c0                 add eax, eax
// 00572f71  6a10                 push 0x10
// 00572f73  50                   push eax
// 00572f74  e8570cf8ff           call 0x4f3bd0
// 00572f79  8b4e08               mov ecx, dword ptr [esi + 8]
// 00572f7c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00572f80  83c408               add esp, 8
// 00572f83  3bf9                 cmp edi, ecx
// 00572f85  8906                 mov dword ptr [esi], eax
// 00572f87  7d02                 jge 0x572f8b
// 00572f89  8bcf                 mov ecx, edi
// 00572f8b  8d34c8               lea esi, [eax + ecx*8]
// 00572f8e  3bc6                 cmp eax, esi
// 00572f90  8bcd                 mov ecx, ebp
// 00572f92  7328                 jae 0x572fbc
// 00572f94  85c0                 test eax, eax
// 00572f96  741a                 je 0x572fb2
// 00572f98  8b11                 mov edx, dword ptr [ecx]
// 00572f9a  8910                 mov dword ptr [eax], edx
// 00572f9c  8b5104               mov edx, dword ptr [ecx + 4]
// 00572f9f  85d2                 test edx, edx
// 00572fa1  895004               mov dword ptr [eax + 4], edx
// 00572fa4  740c                 je 0x572fb2
// 00572fa6  83c204               add edx, 4
// 00572fa9  bb01000000           mov ebx, 1
// 00572fae  f00fc11a             lock xadd dword ptr [edx], ebx
// 00572fb2  83c008               add eax, 8
// 00572fb5  83c108               add ecx, 8
// 00572fb8  3bc6                 cmp eax, esi
// 00572fba  72d8                 jb 0x572f94
// 00572fbc  8d44fd00             lea eax, [ebp + edi*8]
// 00572fc0  3be8                 cmp ebp, eax
// 00572fc2  7348                 jae 0x57300c
// 00572fc4  2bc5                 sub eax, ebp
// 00572fc6  83e801               sub eax, 1
// 00572fc9  c1e803               shr eax, 3
// 00572fcc  83c001               add eax, 1
// 00572fcf  8d7d04               lea edi, [ebp + 4]
// 00572fd2  8bd8                 mov ebx, eax
// 00572fd4  8b37                 mov esi, dword ptr [edi]
// 00572fd6  85f6                 test esi, esi
// 00572fd8  742a                 je 0x573004
// 00572fda  8d4604               lea eax, [esi + 4]
// 00572fdd  83c9ff               or ecx, 0xffffffff
// 00572fe0  f00fc108             lock xadd dword ptr [eax], ecx
// 00572fe4  751e                 jne 0x573004
// 00572fe6  8b16                 mov edx, dword ptr [esi]
// 00572fe8  8b4204               mov eax, dword ptr [edx + 4]
// 00572feb  8bce                 mov ecx, esi
// 00572fed  ffd0                 call eax
// 00572fef  8d4e08               lea ecx, [esi + 8]
// 00572ff2  83caff               or edx, 0xffffffff
// 00572ff5  f00fc111             lock xadd dword ptr [ecx], edx
// 00572ff9  7509                 jne 0x573004
// 00572ffb  8b06                 mov eax, dword ptr [esi]
// 00572ffd  8b5008               mov edx, dword ptr [eax + 8]
// 00573000  8bce                 mov ecx, esi
// 00573002  ffd2                 call edx
// 00573004  83c708               add edi, 8
// 00573007  83eb01               sub ebx, 1
// 0057300a  75c8                 jne 0x572fd4
// 0057300c  55                   push ebp
// 0057300d  e86e03f8ff           call 0x4f3380
// 00573012  83c404               add esp, 4
// 00573015  5f                   pop edi
// 00573016  5e                   pop esi
// 00573017  5d                   pop ebp
// 00573018  5b                   pop ebx
// 00573019  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ?realloc@?$Array@V?$shared_ptr@VPartInstance@RBX@@@boost@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
