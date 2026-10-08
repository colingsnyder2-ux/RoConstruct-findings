// from server: 100% by auto
// roc 2009-06 0049b610  unit: G3D::Texture  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049b610
//
// 0049b610  6aff                 push -1
// 0049b612  687b9c8600           push 0x869c7b
// 0049b617  64a100000000         mov eax, dword ptr fs:[0]
// 0049b61d  50                   push eax
// 0049b61e  64892500000000       mov dword ptr fs:[0], esp
// 0049b625  51                   push ecx
// 0049b626  6a74                 push 0x74
// 0049b628  c744240400000000     mov dword ptr [esp + 4], 0
// 0049b630  e803d42700           call 0x718a38
// 0049b635  83c404               add esp, 4
// 0049b638  890424               mov dword ptr [esp], eax
// 0049b63b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0049b643  85c0                 test eax, eax
// 0049b645  7439                 je 0x49b680
// 0049b647  d9442434             fld dword ptr [esp + 0x34]
// 0049b64b  51                   push ecx
// 0049b64c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0049b650  d91c24               fstp dword ptr [esp]
// 0049b653  51                   push ecx
// 0049b654  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0049b658  0fb65140             movzx edx, byte ptr [ecx + 0x40]
// 0049b65c  52                   push edx
// 0049b65d  8b542430             mov edx, dword ptr [esp + 0x30]
// 0049b661  52                   push edx
// 0049b662  8b542438             mov edx, dword ptr [esp + 0x38]
// 0049b666  52                   push edx
// 0049b667  8b542430             mov edx, dword ptr [esp + 0x30]
// 0049b66b  51                   push ecx
// 0049b66c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0049b670  51                   push ecx
// 0049b671  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0049b675  52                   push edx
// 0049b676  51                   push ecx
// 0049b677  8bc8                 mov ecx, eax
// 0049b679  e852f8ffff           call 0x49aed0
// 0049b67e  eb02                 jmp 0x49b682
// 0049b680  33c0                 xor eax, eax
// 0049b682  56                   push esi
// 0049b683  8b742418             mov esi, dword ptr [esp + 0x18]
// 0049b687  50                   push eax
// 0049b688  8bce                 mov ecx, esi
// 0049b68a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0049b692  c70600000000         mov dword ptr [esi], 0
// 0049b698  e8c3410000           call 0x49f860
// 0049b69d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049b6a1  8bc6                 mov eax, esi
// 0049b6a3  5e                   pop esi
// 0049b6a4  64890d00000000       mov dword ptr fs:[0], ecx
// 0049b6ab  83c410               add esp, 0x10
// 0049b6ae  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?fromGLTexture@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IPBVTextureFormat@2@W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
