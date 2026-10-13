// roc 2008-06 004728b0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004728b0
//
// 004728b0  6aff                 push -1
// 004728b2  68f4447c00           push 0x7c44f4
// 004728b7  64a100000000         mov eax, dword ptr fs:[0]
// 004728bd  50                   push eax
// 004728be  64892500000000       mov dword ptr fs:[0], esp
// 004728c5  51                   push ecx
// 004728c6  56                   push esi
// 004728c7  57                   push edi
// 004728c8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004728cc  8bf1                 mov esi, ecx
// 004728ce  57                   push edi
// 004728cf  8974240c             mov dword ptr [esp + 0xc], esi
// 004728d3  e87874f9ff           call 0x409d50
// 004728d8  57                   push edi
// 004728d9  8d4e28               lea ecx, [esi + 0x28]
// 004728dc  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004728e4  c706d4e18100         mov dword ptr [esi], 0x81e1d4
// 004728ea  ff155c248000         call dword ptr [0x80245c]
// 004728f0  8b442420             mov eax, dword ptr [esp + 0x20]
// 004728f4  50                   push eax
// 004728f5  8d4e44               lea ecx, [esi + 0x44]
// 004728f8  c644241801           mov byte ptr [esp + 0x18], 1
// 004728fd  ff155c248000         call dword ptr [0x80245c]
// 00472903  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00472907  5f                   pop edi
// 00472908  8bc6                 mov eax, esi
// 0047290a  5e                   pop esi
// 0047290b  64890d00000000       mov dword ptr fs:[0], ecx
// 00472912  83c410               add esp, 0x10
// 00472915  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\GImage_bmp.cpp (function ??0Error@GImage@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_bmp.cpp
