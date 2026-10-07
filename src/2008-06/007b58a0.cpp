// roc 2008-06 007b58a0  unit: G3D::Sky  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b58a0
//
// 007b58a0  6aff                 push -1
// 007b58a2  6866e37e00           push 0x7ee366
// 007b58a7  64a100000000         mov eax, dword ptr fs:[0]
// 007b58ad  50                   push eax
// 007b58ae  64892500000000       mov dword ptr fs:[0], esp
// 007b58b5  81ecac000000         sub esp, 0xac
// 007b58bb  56                   push esi
// 007b58bc  57                   push edi
// 007b58bd  c744240800000000     mov dword ptr [esp + 8], 0
// 007b58c5  a168248000           mov eax, dword ptr [0x802468]
// 007b58ca  8b0d60248000         mov ecx, dword ptr [0x802460]
// 007b58d0  50                   push eax
// 007b58d1  51                   push ecx
// 007b58d2  6a06                 push 6
// 007b58d4  6a1c                 push 0x1c
// 007b58d6  8d54241c             lea edx, [esp + 0x1c]
// 007b58da  52                   push edx
// 007b58db  e8b8bceeff           call 0x6a1598
// 007b58e0  8b8424d0000000       mov eax, dword ptr [esp + 0xd0]
// 007b58e7  50                   push eax
// 007b58e8  8d4c2410             lea ecx, [esp + 0x10]
// 007b58ec  c78424c000000001000000 mov dword ptr [esp + 0xc0], 1
// 007b58f7  ff150c248000         call dword ptr [0x80240c]
// 007b58fd  8d742428             lea esi, [esp + 0x28]
// 007b5901  bf05000000           mov edi, 5
// 007b5906  eb08                 jmp 0x7b5910
// 007b5908  8da42400000000       lea esp, [esp]
// 007b590f  90                   nop 
// 007b5910  6816b78000           push 0x80b716
// 007b5915  8bce                 mov ecx, esi
// 007b5917  ff154c248000         call dword ptr [0x80244c]
// 007b591d  83c61c               add esi, 0x1c
// 007b5920  83ef01               sub edi, 1
// 007b5923  75eb                 jne 0x7b5910
// 007b5925  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 007b592c  dd8424d8000000       fld qword ptr [esp + 0xd8]
// 007b5933  8b9424d4000000       mov edx, dword ptr [esp + 0xd4]
// 007b593a  8bb424c4000000       mov esi, dword ptr [esp + 0xc4]
// 007b5941  51                   push ecx
// 007b5942  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 007b5949  83ec08               sub esp, 8
// 007b594c  dd1c24               fstp qword ptr [esp]
// 007b594f  52                   push edx
// 007b5950  8b9424d8000000       mov edx, dword ptr [esp + 0xd8]
// 007b5957  8d44241c             lea eax, [esp + 0x1c]
// 007b595b  50                   push eax
// 007b595c  51                   push ecx
// 007b595d  52                   push edx
// 007b595e  56                   push esi
// 007b595f  e8bcf7ffff           call 0x7b5120
// 007b5964  83c420               add esp, 0x20
// 007b5967  a168248000           mov eax, dword ptr [0x802468]
// 007b596c  50                   push eax
// 007b596d  6a06                 push 6
// 007b596f  6a1c                 push 0x1c
// 007b5971  8d4c2418             lea ecx, [esp + 0x18]
// 007b5975  51                   push ecx
// 007b5976  c744241801000000     mov dword ptr [esp + 0x18], 1
// 007b597e  c68424cc00000000     mov byte ptr [esp + 0xcc], 0
// 007b5986  e8d0bceeff           call 0x6a165b
// 007b598b  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 007b5992  5f                   pop edi
// 007b5993  8bc6                 mov eax, esi
// 007b5995  5e                   pop esi
// 007b5996  64890d00000000       mov dword ptr fs:[0], ecx
// 007b599d  81c4b8000000         add esp, 0xb8
// 007b59a3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function ?fromFile@Sky@G3D@@SA?AV?$ReferenceCountedPointer@VSky@G3D@@@2@PAVRenderDevice@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_NNH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
