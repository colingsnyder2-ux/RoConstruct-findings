// roc 2009-06 00846150  unit: G3D::Sky  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00846150
//
// 00846150  6aff                 push -1
// 00846152  68663c8800           push 0x883c66
// 00846157  64a100000000         mov eax, dword ptr fs:[0]
// 0084615d  50                   push eax
// 0084615e  64892500000000       mov dword ptr fs:[0], esp
// 00846165  81ecac000000         sub esp, 0xac
// 0084616b  56                   push esi
// 0084616c  57                   push edi
// 0084616d  c744240800000000     mov dword ptr [esp + 8], 0
// 00846175  a1c4e48900           mov eax, dword ptr [0x89e4c4]
// 0084617a  8b0dc0e48900         mov ecx, dword ptr [0x89e4c0]
// 00846180  50                   push eax
// 00846181  51                   push ecx
// 00846182  6a06                 push 6
// 00846184  6a1c                 push 0x1c
// 00846186  8d54241c             lea edx, [esp + 0x1c]
// 0084618a  52                   push edx
// 0084618b  e8f03aedff           call 0x719c80
// 00846190  8b8424d0000000       mov eax, dword ptr [esp + 0xd0]
// 00846197  50                   push eax
// 00846198  8d4c2410             lea ecx, [esp + 0x10]
// 0084619c  c78424c000000001000000 mov dword ptr [esp + 0xc0], 1
// 008461a7  ff1564e48900         call dword ptr [0x89e464]
// 008461ad  8d742428             lea esi, [esp + 0x28]
// 008461b1  bf05000000           mov edi, 5
// 008461b6  eb08                 jmp 0x8461c0
// 008461b8  8da42400000000       lea esp, [esp]
// 008461bf  90                   nop 
// 008461c0  6816d28a00           push 0x8ad216
// 008461c5  8bce                 mov ecx, esi
// 008461c7  ff15a8e48900         call dword ptr [0x89e4a8]
// 008461cd  83c61c               add esi, 0x1c
// 008461d0  83ef01               sub edi, 1
// 008461d3  75eb                 jne 0x8461c0
// 008461d5  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 008461dc  dd8424d8000000       fld qword ptr [esp + 0xd8]
// 008461e3  8b9424d4000000       mov edx, dword ptr [esp + 0xd4]
// 008461ea  8bb424c4000000       mov esi, dword ptr [esp + 0xc4]
// 008461f1  51                   push ecx
// 008461f2  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 008461f9  83ec08               sub esp, 8
// 008461fc  dd1c24               fstp qword ptr [esp]
// 008461ff  52                   push edx
// 00846200  8b9424d8000000       mov edx, dword ptr [esp + 0xd8]
// 00846207  8d44241c             lea eax, [esp + 0x1c]
// 0084620b  50                   push eax
// 0084620c  51                   push ecx
// 0084620d  52                   push edx
// 0084620e  56                   push esi
// 0084620f  e8bcf7ffff           call 0x8459d0
// 00846214  83c420               add esp, 0x20
// 00846217  a1c4e48900           mov eax, dword ptr [0x89e4c4]
// 0084621c  50                   push eax
// 0084621d  6a06                 push 6
// 0084621f  6a1c                 push 0x1c
// 00846221  8d4c2418             lea ecx, [esp + 0x18]
// 00846225  51                   push ecx
// 00846226  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0084622e  c68424cc00000000     mov byte ptr [esp + 0xcc], 0
// 00846236  e83b39edff           call 0x719b76
// 0084623b  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00846242  5f                   pop edi
// 00846243  8bc6                 mov eax, esi
// 00846245  5e                   pop esi
// 00846246  64890d00000000       mov dword ptr fs:[0], ecx
// 0084624d  81c4b8000000         add esp, 0xb8
// 00846253  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function ?fromFile@Sky@G3D@@SA?AV?$ReferenceCountedPointer@VSky@G3D@@@2@PAVRenderDevice@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_NNH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
