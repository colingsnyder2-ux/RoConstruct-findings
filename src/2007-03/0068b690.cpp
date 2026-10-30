// roc 2007-03 0068b690  unit: seg_00680000  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0068b690
//
// 0068b690  6aff                 push -1
// 0068b692  685e477600           push 0x76475e
// 0068b697  64a100000000         mov eax, dword ptr fs:[0]
// 0068b69d  50                   push eax
// 0068b69e  51                   push ecx
// 0068b69f  53                   push ebx
// 0068b6a0  56                   push esi
// 0068b6a1  57                   push edi
// 0068b6a2  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0068b6a7  33c4                 xor eax, esp
// 0068b6a9  50                   push eax
// 0068b6aa  8d442414             lea eax, [esp + 0x14]
// 0068b6ae  64a300000000         mov dword ptr fs:[0], eax
// 0068b6b4  8bf1                 mov esi, ecx
// 0068b6b6  89742410             mov dword ptr [esp + 0x10], esi
// 0068b6ba  e8af33f9ff           call 0x61ea6e
// 0068b6bf  c706c4987c00         mov dword ptr [esi], 0x7c98c4
// 0068b6c5  33db                 xor ebx, ebx
// 0068b6c7  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0068b6cb  8d7e54               lea edi, [esi + 0x54]
// 0068b6ce  e88dfcffff           call 0x68b360
// 0068b6d3  50                   push eax
// 0068b6d4  8bcf                 mov ecx, edi
// 0068b6d6  e89504ffff           call 0x67bb70
// 0068b6db  c70778fd7c00         mov dword ptr [edi], 0x7cfd78
// 0068b6e1  8dbed0000000         lea edi, [esi + 0xd0]
// 0068b6e7  8bcf                 mov ecx, edi
// 0068b6e9  c7068cfd7c00         mov dword ptr [esi], 0x7cfd8c
// 0068b6ef  ff1568dd7700         call dword ptr [0x77dd68]
// 0068b6f5  8d8ed4000000         lea ecx, [esi + 0xd4]
// 0068b6fb  c644241c02           mov byte ptr [esp + 0x1c], 2
// 0068b700  e84f32f9ff           call 0x61e954
// 0068b705  8d8edc000000         lea ecx, [esi + 0xdc]
// 0068b70b  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0068b710  e8fbfbffff           call 0x68b310
// 0068b715  68ac497800           push 0x7849ac
// 0068b71a  8bcf                 mov ecx, edi
// 0068b71c  c644242004           mov byte ptr [esp + 0x20], 4
// 0068b721  889e81000000         mov byte ptr [esi + 0x81], bl
// 0068b727  889e80000000         mov byte ptr [esi + 0x80], bl
// 0068b72d  ff1524dd7700         call dword ptr [0x77dd24]
// 0068b733  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 0068b739  899e84000000         mov dword ptr [esi + 0x84], ebx
// 0068b73f  899e88000000         mov dword ptr [esi + 0x88], ebx
// 0068b745  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 0068b74b  899e8c010000         mov dword ptr [esi + 0x18c], ebx
// 0068b751  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0068b754  895e6c               mov dword ptr [esi + 0x6c], ebx
// 0068b757  e88475ffff           call 0x682ce0
// 0068b75c  bf10000000           mov edi, 0x10
// 0068b761  39b8c0000000         cmp dword ptr [eax + 0xc0], edi
// 0068b767  7d0d                 jge 0x68b776
// 0068b769  e87275ffff           call 0x682ce0
// 0068b76e  8b80c0000000         mov eax, dword ptr [eax + 0xc0]
// 0068b774  eb02                 jmp 0x68b778
// 0068b776  8bc7                 mov eax, edi
// 0068b778  898690000000         mov dword ptr [esi + 0x90], eax
// 0068b77e  e85d75ffff           call 0x682ce0
// 0068b783  39b8c4000000         cmp dword ptr [eax + 0xc4], edi
// 0068b789  7d0d                 jge 0x68b798
// 0068b78b  e85075ffff           call 0x682ce0
// 0068b790  8b80c4000000         mov eax, dword ptr [eax + 0xc4]
// 0068b796  eb02                 jmp 0x68b79a
// 0068b798  8bc7                 mov eax, edi
// 0068b79a  8b3d38ef7700         mov edi, dword ptr [0x77ef38]
// 0068b7a0  6a12                 push 0x12
// 0068b7a2  898694000000         mov dword ptr [esi + 0x94], eax
// 0068b7a8  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 0068b7ae  ffd7                 call edi
// 0068b7b0  6a0f                 push 0xf
// 0068b7b2  894678               mov dword ptr [esi + 0x78], eax
// 0068b7b5  ffd7                 call edi
// 0068b7b7  6a0f                 push 0xf
// 0068b7b9  894670               mov dword ptr [esi + 0x70], eax
// 0068b7bc  ffd7                 call edi
// 0068b7be  894674               mov dword ptr [esi + 0x74], eax
// 0068b7c1  8bc6                 mov eax, esi
// 0068b7c3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0068b7c7  64890d00000000       mov dword ptr fs:[0], ecx
// 0068b7ce  59                   pop ecx
// 0068b7cf  5f                   pop edi
// 0068b7d0  5e                   pop esi
// 0068b7d1  5b                   pop ebx
// 0068b7d2  83c410               add esp, 0x10
// 0068b7d5  c3                   ret 
// copied from an identical function in another client (function ??0CXTCaption@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp