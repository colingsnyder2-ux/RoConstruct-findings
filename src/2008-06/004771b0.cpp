// roc 2008-06 004771b0  unit: G3D::VARArea  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004771b0
//
// 004771b0  8b442404             mov eax, dword ptr [esp + 4]
// 004771b4  83f807               cmp eax, 7
// 004771b7  774e                 ja 0x477207
// 004771b9  ff248510724700       jmp dword ptr [eax*4 + 0x477210]
// 004771c0  33c0                 xor eax, eax
// 004771c2  c20400               ret 4
// 004771c5  b8011e0000           mov eax, 0x1e01
// 004771ca  c20400               ret 4
// 004771cd  b80a150000           mov eax, 0x150a
// 004771d2  c20400               ret 4
// 004771d5  803d82ee960000       cmp byte ptr [0x96ee82], 0
// 004771dc  7408                 je 0x4771e6
// 004771de  b807850000           mov eax, 0x8507
// 004771e3  c20400               ret 4
// 004771e6  b8021e0000           mov eax, 0x1e02
// 004771eb  c20400               ret 4
// 004771ee  803d82ee960000       cmp byte ptr [0x96ee82], 0
// 004771f5  7408                 je 0x4771ff
// 004771f7  b808850000           mov eax, 0x8508
// 004771fc  c20400               ret 4
// 004771ff  b8031e0000           mov eax, 0x1e03
// 00477204  c20400               ret 4
// 00477207  b8001e0000           mov eax, 0x1e00
// 0047720c  c20400               ret 4
// 0047720f  90                   nop 
// 00477210  d571                 aad 0x71
// 00477212  47                   inc edi
// 00477213  00ee                 add dh, ch
// 00477215  7147                 jno 0x47725e
// 00477217  0007                 add byte ptr [edi], al
// 00477219  7247                 jb 0x477262
// 0047721b  00e6                 add dh, ah
// 0047721d  7147                 jno 0x477266
// 0047721f  00ff                 add bh, bh
// 00477221  7147                 jno 0x47726a
// 00477223  00c5                 add ch, al
// 00477225  7147                 jno 0x47726e
// 00477227  00c0                 add al, al
// 00477229  7147                 jno 0x477272
// 0047722b  00cd                 add ch, cl
// 0047722d  7147                 jno 0x477276
// library g3d-6.09-rbx2008/GLG3Dcpp\RenderDevice.cpp (function ?toGLStencilOp@RenderDevice@G3D@@ABEHW4StencilOp@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 GLG3Dcpp/RenderDevice.cpp
