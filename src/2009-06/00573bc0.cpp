// roc 2009-06 00573bc0  unit: G3D::GCamera  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00573bc0
//
// 00573bc0  64a100000000         mov eax, dword ptr fs:[0]
// 00573bc6  6aff                 push -1
// 00573bc8  6888058600           push 0x860588
// 00573bcd  50                   push eax
// 00573bce  64892500000000       mov dword ptr fs:[0], esp
// 00573bd5  83ec24               sub esp, 0x24
// 00573bd8  57                   push edi
// 00573bd9  8bf9                 mov edi, ecx
// 00573bdb  8b4704               mov eax, dword ptr [edi + 4]
// 00573bde  3b4708               cmp eax, dword ptr [edi + 8]
// 00573be1  8b0f                 mov ecx, dword ptr [edi]
// 00573be3  7d58                 jge 0x573c3d
// 00573be5  8d04c0               lea eax, [eax + eax*8]
// 00573be8  8d0481               lea eax, [ecx + eax*4]
// 00573beb  85c0                 test eax, eax
// 00573bed  7439                 je 0x573c28
// 00573bef  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00573bf3  8b11                 mov edx, dword ptr [ecx]
// 00573bf5  8910                 mov dword ptr [eax], edx
// 00573bf7  8b5104               mov edx, dword ptr [ecx + 4]
// 00573bfa  895004               mov dword ptr [eax + 4], edx
// 00573bfd  8b5108               mov edx, dword ptr [ecx + 8]
// 00573c00  895008               mov dword ptr [eax + 8], edx
// 00573c03  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00573c06  89500c               mov dword ptr [eax + 0xc], edx
// 00573c09  c7401014b78c00       mov dword ptr [eax + 0x10], 0x8cb714
// 00573c10  d94114               fld dword ptr [ecx + 0x14]
// 00573c13  d95814               fstp dword ptr [eax + 0x14]
// 00573c16  d94118               fld dword ptr [ecx + 0x18]
// 00573c19  d95818               fstp dword ptr [eax + 0x18]
// 00573c1c  d9411c               fld dword ptr [ecx + 0x1c]
// 00573c1f  d9581c               fstp dword ptr [eax + 0x1c]
// 00573c22  d94120               fld dword ptr [ecx + 0x20]
// 00573c25  d95820               fstp dword ptr [eax + 0x20]
// 00573c28  ff4704               inc dword ptr [edi + 4]
// 00573c2b  5f                   pop edi
// 00573c2c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00573c30  64890d00000000       mov dword ptr fs:[0], ecx
// 00573c37  83c430               add esp, 0x30
// 00573c3a  c20400               ret 4
// 00573c3d  56                   push esi
// 00573c3e  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00573c42  3bf1                 cmp esi, ecx
// 00573c44  7270                 jb 0x573cb6
// 00573c46  8d14c0               lea edx, [eax + eax*8]
// 00573c49  8d0c91               lea ecx, [ecx + edx*4]
// 00573c4c  3bf1                 cmp esi, ecx
// 00573c4e  7366                 jae 0x573cb6
// 00573c50  d94614               fld dword ptr [esi + 0x14]
// 00573c53  8b16                 mov edx, dword ptr [esi]
// 00573c55  8b4604               mov eax, dword ptr [esi + 4]
// 00573c58  d95c241c             fstp dword ptr [esp + 0x1c]
// 00573c5c  d94618               fld dword ptr [esi + 0x18]
// 00573c5f  8b4e08               mov ecx, dword ptr [esi + 8]
// 00573c62  d95c2420             fstp dword ptr [esp + 0x20]
// 00573c66  89542408             mov dword ptr [esp + 8], edx
// 00573c6a  d9461c               fld dword ptr [esi + 0x1c]
// 00573c6d  8b560c               mov edx, dword ptr [esi + 0xc]
// 00573c70  d95c2424             fstp dword ptr [esp + 0x24]
// 00573c74  8944240c             mov dword ptr [esp + 0xc], eax
// 00573c78  d94620               fld dword ptr [esi + 0x20]
// 00573c7b  894c2410             mov dword ptr [esp + 0x10], ecx
// 00573c7f  d95c2428             fstp dword ptr [esp + 0x28]
// 00573c83  89542414             mov dword ptr [esp + 0x14], edx
// 00573c87  c744241814b78c00     mov dword ptr [esp + 0x18], 0x8cb714
// 00573c8f  8d442408             lea eax, [esp + 8]
// 00573c93  50                   push eax
// 00573c94  8bcf                 mov ecx, edi
// 00573c96  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00573c9e  e81dffffff           call 0x573bc0
// 00573ca3  5e                   pop esi
// 00573ca4  5f                   pop edi
// 00573ca5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00573ca9  64890d00000000       mov dword ptr fs:[0], ecx
// 00573cb0  83c430               add esp, 0x30
// 00573cb3  c20400               ret 4
// 00573cb6  6a00                 push 0
// 00573cb8  40                   inc eax
// 00573cb9  50                   push eax
// 00573cba  8bcf                 mov ecx, edi
// 00573cbc  e87ffdffff           call 0x573a40
// 00573cc1  8b4704               mov eax, dword ptr [edi + 4]
// 00573cc4  8b17                 mov edx, dword ptr [edi]
// 00573cc6  8d0cc0               lea ecx, [eax + eax*8]
// 00573cc9  8d448adc             lea eax, [edx + ecx*4 - 0x24]
// 00573ccd  8b0e                 mov ecx, dword ptr [esi]
// 00573ccf  8908                 mov dword ptr [eax], ecx
// 00573cd1  8b5604               mov edx, dword ptr [esi + 4]
// 00573cd4  895004               mov dword ptr [eax + 4], edx
// 00573cd7  8b4e08               mov ecx, dword ptr [esi + 8]
// 00573cda  894808               mov dword ptr [eax + 8], ecx
// 00573cdd  8b560c               mov edx, dword ptr [esi + 0xc]
// 00573ce0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00573ce4  89500c               mov dword ptr [eax + 0xc], edx
// 00573ce7  d94614               fld dword ptr [esi + 0x14]
// 00573cea  d95814               fstp dword ptr [eax + 0x14]
// 00573ced  d94618               fld dword ptr [esi + 0x18]
// 00573cf0  d95818               fstp dword ptr [eax + 0x18]
// 00573cf3  d9461c               fld dword ptr [esi + 0x1c]
// 00573cf6  d9581c               fstp dword ptr [eax + 0x1c]
// 00573cf9  d94620               fld dword ptr [esi + 0x20]
// 00573cfc  5e                   pop esi
// 00573cfd  d95820               fstp dword ptr [eax + 0x20]
// 00573d00  5f                   pop edi
// 00573d01  64890d00000000       mov dword ptr fs:[0], ecx
// 00573d08  83c430               add esp, 0x30
// 00573d0b  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?append@?$Array@VFace@Frustum@GCamera@G3D@@@G3D@@QAEXABVFace@Frustum@GCamera@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
