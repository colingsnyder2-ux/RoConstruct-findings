// roc 2009-06 0049fa90  unit: G3D::VARArea  size: 363 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049fa90
//
// 0049fa90  53                   push ebx
// 0049fa91  55                   push ebp
// 0049fa92  56                   push esi
// 0049fa93  57                   push edi
// 0049fa94  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0049fa98  8bc1                 mov eax, ecx
// 0049fa9a  8bef                 mov ebp, edi
// 0049fa9c  8d7744               lea esi, [edi + 0x44]
// 0049fa9f  8d5014               lea edx, [eax + 0x14]
// 0049faa2  2be8                 sub ebp, eax
// 0049faa4  b908000000           mov ecx, 8
// 0049faa9  8da42400000000       lea esp, [esp]
// 0049fab0  d946bc               fld dword ptr [esi - 0x44]
// 0049fab3  83c650               add esi, 0x50
// 0049fab6  d95aec               fstp dword ptr [edx - 0x14]
// 0049fab9  83c250               add edx, 0x50
// 0049fabc  83e901               sub ecx, 1
// 0049fabf  d98670ffffff         fld dword ptr [esi - 0x90]
// 0049fac5  d95aa0               fstp dword ptr [edx - 0x60]
// 0049fac8  d98674ffffff         fld dword ptr [esi - 0x8c]
// 0049face  d95aa4               fstp dword ptr [edx - 0x5c]
// 0049fad1  d98678ffffff         fld dword ptr [esi - 0x88]
// 0049fad7  d95aa8               fstp dword ptr [edx - 0x58]
// 0049fada  d9867cffffff         fld dword ptr [esi - 0x84]
// 0049fae0  d95aac               fstp dword ptr [edx - 0x54]
// 0049fae3  d9442ab0             fld dword ptr [edx + ebp - 0x50]
// 0049fae7  d95ab0               fstp dword ptr [edx - 0x50]
// 0049faea  d94684               fld dword ptr [esi - 0x7c]
// 0049faed  d95ab4               fstp dword ptr [edx - 0x4c]
// 0049faf0  dd468c               fld qword ptr [esi - 0x74]
// 0049faf3  dd5abc               fstp qword ptr [edx - 0x44]
// 0049faf6  dd4694               fld qword ptr [esi - 0x6c]
// 0049faf9  dd5ac4               fstp qword ptr [edx - 0x3c]
// 0049fafc  dd469c               fld qword ptr [esi - 0x64]
// 0049faff  dd5acc               fstp qword ptr [edx - 0x34]
// 0049fb02  dd46a4               fld qword ptr [esi - 0x5c]
// 0049fb05  dd5ad4               fstp qword ptr [edx - 0x2c]
// 0049fb08  d946ac               fld dword ptr [esi - 0x54]
// 0049fb0b  d95adc               fstp dword ptr [edx - 0x24]
// 0049fb0e  d946b0               fld dword ptr [esi - 0x50]
// 0049fb11  d95ae0               fstp dword ptr [edx - 0x20]
// 0049fb14  d946b4               fld dword ptr [esi - 0x4c]
// 0049fb17  d95ae4               fstp dword ptr [edx - 0x1c]
// 0049fb1a  0fb65eb8             movzx ebx, byte ptr [esi - 0x48]
// 0049fb1e  885ae8               mov byte ptr [edx - 0x18], bl
// 0049fb21  0fb65eb9             movzx ebx, byte ptr [esi - 0x47]
// 0049fb25  885ae9               mov byte ptr [edx - 0x17], bl
// 0049fb28  0fb65eba             movzx ebx, byte ptr [esi - 0x46]
// 0049fb2c  885aea               mov byte ptr [edx - 0x16], bl
// 0049fb2f  0f857bffffff         jne 0x49fab0
// 0049fb35  0fb68f80020000       movzx ecx, byte ptr [edi + 0x280]
// 0049fb3c  888880020000         mov byte ptr [eax + 0x280], cl
// 0049fb42  0fb69781020000       movzx edx, byte ptr [edi + 0x281]
// 0049fb49  889081020000         mov byte ptr [eax + 0x281], dl
// 0049fb4f  0fb68f82020000       movzx ecx, byte ptr [edi + 0x282]
// 0049fb56  888882020000         mov byte ptr [eax + 0x282], cl
// 0049fb5c  0fb69783020000       movzx edx, byte ptr [edi + 0x283]
// 0049fb63  889083020000         mov byte ptr [eax + 0x283], dl
// 0049fb69  0fb68f84020000       movzx ecx, byte ptr [edi + 0x284]
// 0049fb70  888884020000         mov byte ptr [eax + 0x284], cl
// 0049fb76  0fb69785020000       movzx edx, byte ptr [edi + 0x285]
// 0049fb7d  889085020000         mov byte ptr [eax + 0x285], dl
// 0049fb83  0fb68f86020000       movzx ecx, byte ptr [edi + 0x286]
// 0049fb8a  888886020000         mov byte ptr [eax + 0x286], cl
// 0049fb90  0fb69787020000       movzx edx, byte ptr [edi + 0x287]
// 0049fb97  889087020000         mov byte ptr [eax + 0x287], dl
// 0049fb9d  0fb68f88020000       movzx ecx, byte ptr [edi + 0x288]
// 0049fba4  888888020000         mov byte ptr [eax + 0x288], cl
// 0049fbaa  d9878c020000         fld dword ptr [edi + 0x28c]
// 0049fbb0  d9988c020000         fstp dword ptr [eax + 0x28c]
// 0049fbb6  d98790020000         fld dword ptr [edi + 0x290]
// 0049fbbc  d99890020000         fstp dword ptr [eax + 0x290]
// 0049fbc2  d98794020000         fld dword ptr [edi + 0x294]
// 0049fbc8  d99894020000         fstp dword ptr [eax + 0x294]
// 0049fbce  d98798020000         fld dword ptr [edi + 0x298]
// 0049fbd4  d99898020000         fstp dword ptr [eax + 0x298]
// 0049fbda  0fb6979c020000       movzx edx, byte ptr [edi + 0x29c]
// 0049fbe1  88909c020000         mov byte ptr [eax + 0x29c], dl
// 0049fbe7  0fb68f9d020000       movzx ecx, byte ptr [edi + 0x29d]
// 0049fbee  5f                   pop edi
// 0049fbef  5e                   pop esi
// 0049fbf0  5d                   pop ebp
// 0049fbf1  88889d020000         mov byte ptr [eax + 0x29d], cl
// 0049fbf7  5b                   pop ebx
// 0049fbf8  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4Lights@RenderState@RenderDevice@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
