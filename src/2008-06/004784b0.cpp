// from server: 100% by auto
// roc 2008-06 004784b0  unit: CInstanceRecord::CNameItem  size: 363 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004784b0
//
// 004784b0  53                   push ebx
// 004784b1  55                   push ebp
// 004784b2  56                   push esi
// 004784b3  57                   push edi
// 004784b4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004784b8  8bc1                 mov eax, ecx
// 004784ba  8bef                 mov ebp, edi
// 004784bc  8d7744               lea esi, [edi + 0x44]
// 004784bf  8d5014               lea edx, [eax + 0x14]
// 004784c2  2be8                 sub ebp, eax
// 004784c4  b908000000           mov ecx, 8
// 004784c9  8da42400000000       lea esp, [esp]
// 004784d0  d946bc               fld dword ptr [esi - 0x44]
// 004784d3  83c650               add esi, 0x50
// 004784d6  d95aec               fstp dword ptr [edx - 0x14]
// 004784d9  83c250               add edx, 0x50
// 004784dc  83e901               sub ecx, 1
// 004784df  d98670ffffff         fld dword ptr [esi - 0x90]
// 004784e5  d95aa0               fstp dword ptr [edx - 0x60]
// 004784e8  d98674ffffff         fld dword ptr [esi - 0x8c]
// 004784ee  d95aa4               fstp dword ptr [edx - 0x5c]
// 004784f1  d98678ffffff         fld dword ptr [esi - 0x88]
// 004784f7  d95aa8               fstp dword ptr [edx - 0x58]
// 004784fa  d9867cffffff         fld dword ptr [esi - 0x84]
// 00478500  d95aac               fstp dword ptr [edx - 0x54]
// 00478503  d9442ab0             fld dword ptr [edx + ebp - 0x50]
// 00478507  d95ab0               fstp dword ptr [edx - 0x50]
// 0047850a  d94684               fld dword ptr [esi - 0x7c]
// 0047850d  d95ab4               fstp dword ptr [edx - 0x4c]
// 00478510  dd468c               fld qword ptr [esi - 0x74]
// 00478513  dd5abc               fstp qword ptr [edx - 0x44]
// 00478516  dd4694               fld qword ptr [esi - 0x6c]
// 00478519  dd5ac4               fstp qword ptr [edx - 0x3c]
// 0047851c  dd469c               fld qword ptr [esi - 0x64]
// 0047851f  dd5acc               fstp qword ptr [edx - 0x34]
// 00478522  dd46a4               fld qword ptr [esi - 0x5c]
// 00478525  dd5ad4               fstp qword ptr [edx - 0x2c]
// 00478528  d946ac               fld dword ptr [esi - 0x54]
// 0047852b  d95adc               fstp dword ptr [edx - 0x24]
// 0047852e  d946b0               fld dword ptr [esi - 0x50]
// 00478531  d95ae0               fstp dword ptr [edx - 0x20]
// 00478534  d946b4               fld dword ptr [esi - 0x4c]
// 00478537  d95ae4               fstp dword ptr [edx - 0x1c]
// 0047853a  0fb65eb8             movzx ebx, byte ptr [esi - 0x48]
// 0047853e  885ae8               mov byte ptr [edx - 0x18], bl
// 00478541  0fb65eb9             movzx ebx, byte ptr [esi - 0x47]
// 00478545  885ae9               mov byte ptr [edx - 0x17], bl
// 00478548  0fb65eba             movzx ebx, byte ptr [esi - 0x46]
// 0047854c  885aea               mov byte ptr [edx - 0x16], bl
// 0047854f  0f857bffffff         jne 0x4784d0
// 00478555  0fb68f80020000       movzx ecx, byte ptr [edi + 0x280]
// 0047855c  888880020000         mov byte ptr [eax + 0x280], cl
// 00478562  0fb69781020000       movzx edx, byte ptr [edi + 0x281]
// 00478569  889081020000         mov byte ptr [eax + 0x281], dl
// 0047856f  0fb68f82020000       movzx ecx, byte ptr [edi + 0x282]
// 00478576  888882020000         mov byte ptr [eax + 0x282], cl
// 0047857c  0fb69783020000       movzx edx, byte ptr [edi + 0x283]
// 00478583  889083020000         mov byte ptr [eax + 0x283], dl
// 00478589  0fb68f84020000       movzx ecx, byte ptr [edi + 0x284]
// 00478590  888884020000         mov byte ptr [eax + 0x284], cl
// 00478596  0fb69785020000       movzx edx, byte ptr [edi + 0x285]
// 0047859d  889085020000         mov byte ptr [eax + 0x285], dl
// 004785a3  0fb68f86020000       movzx ecx, byte ptr [edi + 0x286]
// 004785aa  888886020000         mov byte ptr [eax + 0x286], cl
// 004785b0  0fb69787020000       movzx edx, byte ptr [edi + 0x287]
// 004785b7  889087020000         mov byte ptr [eax + 0x287], dl
// 004785bd  0fb68f88020000       movzx ecx, byte ptr [edi + 0x288]
// 004785c4  888888020000         mov byte ptr [eax + 0x288], cl
// 004785ca  d9878c020000         fld dword ptr [edi + 0x28c]
// 004785d0  d9988c020000         fstp dword ptr [eax + 0x28c]
// 004785d6  d98790020000         fld dword ptr [edi + 0x290]
// 004785dc  d99890020000         fstp dword ptr [eax + 0x290]
// 004785e2  d98794020000         fld dword ptr [edi + 0x294]
// 004785e8  d99894020000         fstp dword ptr [eax + 0x294]
// 004785ee  d98798020000         fld dword ptr [edi + 0x298]
// 004785f4  d99898020000         fstp dword ptr [eax + 0x298]
// 004785fa  0fb6979c020000       movzx edx, byte ptr [edi + 0x29c]
// 00478601  88909c020000         mov byte ptr [eax + 0x29c], dl
// 00478607  0fb68f9d020000       movzx ecx, byte ptr [edi + 0x29d]
// 0047860e  5f                   pop edi
// 0047860f  5e                   pop esi
// 00478610  5d                   pop ebp
// 00478611  88889d020000         mov byte ptr [eax + 0x29d], cl
// 00478617  5b                   pop ebx
// 00478618  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4Lights@RenderState@RenderDevice@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
