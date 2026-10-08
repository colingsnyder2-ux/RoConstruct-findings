// from server: 100% by auto
// roc 2010-06 00914d20  unit: G3D::Sky  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00914d20
//
// 00914d20  6aff                 push -1
// 00914d22  6836199c00           push 0x9c1936
// 00914d27  64a100000000         mov eax, dword ptr fs:[0]
// 00914d2d  50                   push eax
// 00914d2e  64892500000000       mov dword ptr fs:[0], esp
// 00914d35  81ecac000000         sub esp, 0xac
// 00914d3b  56                   push esi
// 00914d3c  57                   push edi
// 00914d3d  c744240800000000     mov dword ptr [esp + 8], 0
// 00914d45  a100a49e00           mov eax, dword ptr [0x9ea400]
// 00914d4a  8b0d04a49e00         mov ecx, dword ptr [0x9ea404]
// 00914d50  50                   push eax
// 00914d51  51                   push ecx
// 00914d52  6a06                 push 6
// 00914d54  6a1c                 push 0x1c
// 00914d56  8d54241c             lea edx, [esp + 0x1c]
// 00914d5a  52                   push edx
// 00914d5b  e8903ee9ff           call 0x7a8bf0
// 00914d60  8b8424d0000000       mov eax, dword ptr [esp + 0xd0]
// 00914d67  50                   push eax
// 00914d68  8d4c2410             lea ecx, [esp + 0x10]
// 00914d6c  c78424c000000001000000 mov dword ptr [esp + 0xc0], 1
// 00914d77  ff1568a49e00         call dword ptr [0x9ea468]
// 00914d7d  8d742428             lea esi, [esp + 0x28]
// 00914d81  bf05000000           mov edi, 5
// 00914d86  eb08                 jmp 0x914d90
// 00914d88  8da42400000000       lea esp, [esp]
// 00914d8f  90                   nop 
// 00914d90  68fe08a000           push 0xa008fe
// 00914d95  8bce                 mov ecx, esi
// 00914d97  ff151ca49e00         call dword ptr [0x9ea41c]
// 00914d9d  83c61c               add esi, 0x1c
// 00914da0  83ef01               sub edi, 1
// 00914da3  75eb                 jne 0x914d90
// 00914da5  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 00914dac  dd8424d8000000       fld qword ptr [esp + 0xd8]
// 00914db3  8b9424d4000000       mov edx, dword ptr [esp + 0xd4]
// 00914dba  8bb424c4000000       mov esi, dword ptr [esp + 0xc4]
// 00914dc1  51                   push ecx
// 00914dc2  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 00914dc9  83ec08               sub esp, 8
// 00914dcc  dd1c24               fstp qword ptr [esp]
// 00914dcf  52                   push edx
// 00914dd0  8b9424d8000000       mov edx, dword ptr [esp + 0xd8]
// 00914dd7  8d44241c             lea eax, [esp + 0x1c]
// 00914ddb  50                   push eax
// 00914ddc  51                   push ecx
// 00914ddd  52                   push edx
// 00914dde  56                   push esi
// 00914ddf  e8acf7ffff           call 0x914590
// 00914de4  83c420               add esp, 0x20
// 00914de7  a100a49e00           mov eax, dword ptr [0x9ea400]
// 00914dec  50                   push eax
// 00914ded  6a06                 push 6
// 00914def  6a1c                 push 0x1c
// 00914df1  8d4c2418             lea ecx, [esp + 0x18]
// 00914df5  51                   push ecx
// 00914df6  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00914dfe  c68424cc00000000     mov byte ptr [esp + 0xcc], 0
// 00914e06  e8d33ce9ff           call 0x7a8ade
// 00914e0b  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00914e12  5f                   pop edi
// 00914e13  8bc6                 mov eax, esi
// 00914e15  5e                   pop esi
// 00914e16  64890d00000000       mov dword ptr fs:[0], ecx
// 00914e1d  81c4b8000000         add esp, 0xb8
// 00914e23  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function ?fromFile@Sky@G3D@@SA?AV?$ReferenceCountedPointer@VSky@G3D@@@2@PAVRenderDevice@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_NNH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
