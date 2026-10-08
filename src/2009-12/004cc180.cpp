// roc 2009-12 004cc180  unit: G3D::VARArea  size: 363 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cc180
//
// 004cc180  53                   push ebx
// 004cc181  55                   push ebp
// 004cc182  56                   push esi
// 004cc183  57                   push edi
// 004cc184  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004cc188  8bc1                 mov eax, ecx
// 004cc18a  8bef                 mov ebp, edi
// 004cc18c  8d7744               lea esi, [edi + 0x44]
// 004cc18f  8d5014               lea edx, [eax + 0x14]
// 004cc192  2be8                 sub ebp, eax
// 004cc194  b908000000           mov ecx, 8
// 004cc199  8da42400000000       lea esp, [esp]
// 004cc1a0  d946bc               fld dword ptr [esi - 0x44]
// 004cc1a3  83c650               add esi, 0x50
// 004cc1a6  d95aec               fstp dword ptr [edx - 0x14]
// 004cc1a9  83c250               add edx, 0x50
// 004cc1ac  83e901               sub ecx, 1
// 004cc1af  d98670ffffff         fld dword ptr [esi - 0x90]
// 004cc1b5  d95aa0               fstp dword ptr [edx - 0x60]
// 004cc1b8  d98674ffffff         fld dword ptr [esi - 0x8c]
// 004cc1be  d95aa4               fstp dword ptr [edx - 0x5c]
// 004cc1c1  d98678ffffff         fld dword ptr [esi - 0x88]
// 004cc1c7  d95aa8               fstp dword ptr [edx - 0x58]
// 004cc1ca  d9867cffffff         fld dword ptr [esi - 0x84]
// 004cc1d0  d95aac               fstp dword ptr [edx - 0x54]
// 004cc1d3  d9442ab0             fld dword ptr [edx + ebp - 0x50]
// 004cc1d7  d95ab0               fstp dword ptr [edx - 0x50]
// 004cc1da  d94684               fld dword ptr [esi - 0x7c]
// 004cc1dd  d95ab4               fstp dword ptr [edx - 0x4c]
// 004cc1e0  dd468c               fld qword ptr [esi - 0x74]
// 004cc1e3  dd5abc               fstp qword ptr [edx - 0x44]
// 004cc1e6  dd4694               fld qword ptr [esi - 0x6c]
// 004cc1e9  dd5ac4               fstp qword ptr [edx - 0x3c]
// 004cc1ec  dd469c               fld qword ptr [esi - 0x64]
// 004cc1ef  dd5acc               fstp qword ptr [edx - 0x34]
// 004cc1f2  dd46a4               fld qword ptr [esi - 0x5c]
// 004cc1f5  dd5ad4               fstp qword ptr [edx - 0x2c]
// 004cc1f8  d946ac               fld dword ptr [esi - 0x54]
// 004cc1fb  d95adc               fstp dword ptr [edx - 0x24]
// 004cc1fe  d946b0               fld dword ptr [esi - 0x50]
// 004cc201  d95ae0               fstp dword ptr [edx - 0x20]
// 004cc204  d946b4               fld dword ptr [esi - 0x4c]
// 004cc207  d95ae4               fstp dword ptr [edx - 0x1c]
// 004cc20a  0fb65eb8             movzx ebx, byte ptr [esi - 0x48]
// 004cc20e  885ae8               mov byte ptr [edx - 0x18], bl
// 004cc211  0fb65eb9             movzx ebx, byte ptr [esi - 0x47]
// 004cc215  885ae9               mov byte ptr [edx - 0x17], bl
// 004cc218  0fb65eba             movzx ebx, byte ptr [esi - 0x46]
// 004cc21c  885aea               mov byte ptr [edx - 0x16], bl
// 004cc21f  0f857bffffff         jne 0x4cc1a0
// 004cc225  0fb68f80020000       movzx ecx, byte ptr [edi + 0x280]
// 004cc22c  888880020000         mov byte ptr [eax + 0x280], cl
// 004cc232  0fb69781020000       movzx edx, byte ptr [edi + 0x281]
// 004cc239  889081020000         mov byte ptr [eax + 0x281], dl
// 004cc23f  0fb68f82020000       movzx ecx, byte ptr [edi + 0x282]
// 004cc246  888882020000         mov byte ptr [eax + 0x282], cl
// 004cc24c  0fb69783020000       movzx edx, byte ptr [edi + 0x283]
// 004cc253  889083020000         mov byte ptr [eax + 0x283], dl
// 004cc259  0fb68f84020000       movzx ecx, byte ptr [edi + 0x284]
// 004cc260  888884020000         mov byte ptr [eax + 0x284], cl
// 004cc266  0fb69785020000       movzx edx, byte ptr [edi + 0x285]
// 004cc26d  889085020000         mov byte ptr [eax + 0x285], dl
// 004cc273  0fb68f86020000       movzx ecx, byte ptr [edi + 0x286]
// 004cc27a  888886020000         mov byte ptr [eax + 0x286], cl
// 004cc280  0fb69787020000       movzx edx, byte ptr [edi + 0x287]
// 004cc287  889087020000         mov byte ptr [eax + 0x287], dl
// 004cc28d  0fb68f88020000       movzx ecx, byte ptr [edi + 0x288]
// 004cc294  888888020000         mov byte ptr [eax + 0x288], cl
// 004cc29a  d9878c020000         fld dword ptr [edi + 0x28c]
// 004cc2a0  d9988c020000         fstp dword ptr [eax + 0x28c]
// 004cc2a6  d98790020000         fld dword ptr [edi + 0x290]
// 004cc2ac  d99890020000         fstp dword ptr [eax + 0x290]
// 004cc2b2  d98794020000         fld dword ptr [edi + 0x294]
// 004cc2b8  d99894020000         fstp dword ptr [eax + 0x294]
// 004cc2be  d98798020000         fld dword ptr [edi + 0x298]
// 004cc2c4  d99898020000         fstp dword ptr [eax + 0x298]
// 004cc2ca  0fb6979c020000       movzx edx, byte ptr [edi + 0x29c]
// 004cc2d1  88909c020000         mov byte ptr [eax + 0x29c], dl
// 004cc2d7  0fb68f9d020000       movzx ecx, byte ptr [edi + 0x29d]
// 004cc2de  5f                   pop edi
// 004cc2df  5e                   pop esi
// 004cc2e0  5d                   pop ebp
// 004cc2e1  88889d020000         mov byte ptr [eax + 0x29d], cl
// 004cc2e7  5b                   pop ebx
// 004cc2e8  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4Lights@RenderState@RenderDevice@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
