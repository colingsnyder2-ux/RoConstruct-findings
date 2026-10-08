// roc 2009-12 00917620  unit: G3D::Sky  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00917620
//
// 00917620  6aff                 push -1
// 00917622  68e62c9300           push 0x932ce6
// 00917627  64a100000000         mov eax, dword ptr fs:[0]
// 0091762d  50                   push eax
// 0091762e  64892500000000       mov dword ptr fs:[0], esp
// 00917635  81ecac000000         sub esp, 0xac
// 0091763b  56                   push esi
// 0091763c  57                   push edi
// 0091763d  c744240800000000     mov dword ptr [esp + 8], 0
// 00917645  a1e4b69800           mov eax, dword ptr [0x98b6e4]
// 0091764a  8b0de8b69800         mov ecx, dword ptr [0x98b6e8]
// 00917650  50                   push eax
// 00917651  51                   push ecx
// 00917652  6a06                 push 6
// 00917654  6a1c                 push 0x1c
// 00917656  8d54241c             lea edx, [esp + 0x1c]
// 0091765a  52                   push edx
// 0091765b  e850d4edff           call 0x7f4ab0
// 00917660  8b8424d0000000       mov eax, dword ptr [esp + 0xd0]
// 00917667  50                   push eax
// 00917668  8d4c2410             lea ecx, [esp + 0x10]
// 0091766c  c78424c000000001000000 mov dword ptr [esp + 0xc0], 1
// 00917677  ff159cb69800         call dword ptr [0x98b69c]
// 0091767d  8d742428             lea esi, [esp + 0x28]
// 00917681  bf05000000           mov edi, 5
// 00917686  eb08                 jmp 0x917690
// 00917688  8da42400000000       lea esp, [esp]
// 0091768f  90                   nop 
// 00917690  6856fd9900           push 0x99fd56
// 00917695  8bce                 mov ecx, esi
// 00917697  ff1500b79800         call dword ptr [0x98b700]
// 0091769d  83c61c               add esi, 0x1c
// 009176a0  83ef01               sub edi, 1
// 009176a3  75eb                 jne 0x917690
// 009176a5  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 009176ac  dd8424d8000000       fld qword ptr [esp + 0xd8]
// 009176b3  8b9424d4000000       mov edx, dword ptr [esp + 0xd4]
// 009176ba  8bb424c4000000       mov esi, dword ptr [esp + 0xc4]
// 009176c1  51                   push ecx
// 009176c2  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 009176c9  83ec08               sub esp, 8
// 009176cc  dd1c24               fstp qword ptr [esp]
// 009176cf  52                   push edx
// 009176d0  8b9424d8000000       mov edx, dword ptr [esp + 0xd8]
// 009176d7  8d44241c             lea eax, [esp + 0x1c]
// 009176db  50                   push eax
// 009176dc  51                   push ecx
// 009176dd  52                   push edx
// 009176de  56                   push esi
// 009176df  e8acf7ffff           call 0x916e90
// 009176e4  83c420               add esp, 0x20
// 009176e7  a1e4b69800           mov eax, dword ptr [0x98b6e4]
// 009176ec  50                   push eax
// 009176ed  6a06                 push 6
// 009176ef  6a1c                 push 0x1c
// 009176f1  8d4c2418             lea ecx, [esp + 0x18]
// 009176f5  51                   push ecx
// 009176f6  c744241801000000     mov dword ptr [esp + 0x18], 1
// 009176fe  c68424cc00000000     mov byte ptr [esp + 0xcc], 0
// 00917706  e899d2edff           call 0x7f49a4
// 0091770b  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00917712  5f                   pop edi
// 00917713  8bc6                 mov eax, esi
// 00917715  5e                   pop esi
// 00917716  64890d00000000       mov dword ptr fs:[0], ecx
// 0091771d  81c4b8000000         add esp, 0xb8
// 00917723  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function ?fromFile@Sky@G3D@@SA?AV?$ReferenceCountedPointer@VSky@G3D@@@2@PAVRenderDevice@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_NNH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
