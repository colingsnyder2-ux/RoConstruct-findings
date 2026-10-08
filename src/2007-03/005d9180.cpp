// roc 2007-03 005d9180  unit: seg_005d0000  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d9180
//
// 005d9180  6aff                 push -1
// 005d9182  68e0b87500           push 0x75b8e0
// 005d9187  64a100000000         mov eax, dword ptr fs:[0]
// 005d918d  50                   push eax
// 005d918e  64892500000000       mov dword ptr fs:[0], esp
// 005d9195  83ec28               sub esp, 0x28
// 005d9198  d9ee                 fldz 
// 005d919a  53                   push ebx
// 005d919b  56                   push esi
// 005d919c  8b742440             mov esi, dword ptr [esp + 0x40]
// 005d91a0  33db                 xor ebx, ebx
// 005d91a2  d916                 fst dword ptr [esi]
// 005d91a4  d95604               fst dword ptr [esi + 4]
// 005d91a7  57                   push edi
// 005d91a8  d95e08               fstp dword ptr [esi + 8]
// 005d91ab  8bf9                 mov edi, ecx
// 005d91ad  895c2410             mov dword ptr [esp + 0x10], ebx
// 005d91b1  895c2414             mov dword ptr [esp + 0x14], ebx
// 005d91b5  895c240c             mov dword ptr [esp + 0xc], ebx
// 005d91b9  8d44240c             lea eax, [esp + 0xc]
// 005d91bd  50                   push eax
// 005d91be  8d4f08               lea ecx, [edi + 8]
// 005d91c1  51                   push ecx
// 005d91c2  895c2444             mov dword ptr [esp + 0x44], ebx
// 005d91c6  e8e5c0fdff           call 0x5b52b0
// 005d91cb  8b471c               mov eax, dword ptr [edi + 0x1c]
// 005d91ce  83c408               add esp, 8
// 005d91d1  3bc3                 cmp eax, ebx
// 005d91d3  7407                 je 0x5d91dc
// 005d91d5  0530020000           add eax, 0x230
// 005d91da  eb02                 jmp 0x5d91de
// 005d91dc  33c0                 xor eax, eax
// 005d91de  8b542448             mov edx, dword ptr [esp + 0x48]
// 005d91e2  50                   push eax
// 005d91e3  52                   push edx
// 005d91e4  8d442420             lea eax, [esp + 0x20]
// 005d91e8  50                   push eax
// 005d91e9  e862f6ffff           call 0x5d8850
// 005d91ee  8b5720               mov edx, dword ptr [edi + 0x20]
// 005d91f1  56                   push esi
// 005d91f2  8d4c241c             lea ecx, [esp + 0x1c]
// 005d91f6  51                   push ecx
// 005d91f7  50                   push eax
// 005d91f8  52                   push edx
// 005d91f9  c644245801           mov byte ptr [esp + 0x58], 1
// 005d91fe  e8cdbefdff           call 0x5b50d0
// 005d9203  8b442428             mov eax, dword ptr [esp + 0x28]
// 005d9207  50                   push eax
// 005d9208  c744243844fd7900     mov dword ptr [esp + 0x38], 0x79fd44
// 005d9210  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 005d9218  e863a1f1ff           call 0x4f3380
// 005d921d  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 005d9221  83c420               add esp, 0x20
// 005d9224  5f                   pop edi
// 005d9225  8bc6                 mov eax, esi
// 005d9227  5e                   pop esi
// 005d9228  5b                   pop ebx
// 005d9229  64890d00000000       mov dword ptr fs:[0], ecx
// 005d9230  83c434               add esp, 0x34
// 005d9233  c20800               ret 8
// library rbxgs/tool\MegaDragger.cpp (function ?hitObjectOrPlane@MegaDragger@RBX@@QAE?AVVector3@G3D@@ABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/MegaDragger.cpp
