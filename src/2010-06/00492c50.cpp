// roc 2010-06 00492c50  unit: seg_00490000  size: 363 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00492c50
//
// 00492c50  53                   push ebx
// 00492c51  55                   push ebp
// 00492c52  56                   push esi
// 00492c53  57                   push edi
// 00492c54  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00492c58  8bc1                 mov eax, ecx
// 00492c5a  8bef                 mov ebp, edi
// 00492c5c  8d7744               lea esi, [edi + 0x44]
// 00492c5f  8d5014               lea edx, [eax + 0x14]
// 00492c62  2be8                 sub ebp, eax
// 00492c64  b908000000           mov ecx, 8
// 00492c69  8da42400000000       lea esp, [esp]
// 00492c70  d946bc               fld dword ptr [esi - 0x44]
// 00492c73  83c650               add esi, 0x50
// 00492c76  d95aec               fstp dword ptr [edx - 0x14]
// 00492c79  83c250               add edx, 0x50
// 00492c7c  83e901               sub ecx, 1
// 00492c7f  d98670ffffff         fld dword ptr [esi - 0x90]
// 00492c85  d95aa0               fstp dword ptr [edx - 0x60]
// 00492c88  d98674ffffff         fld dword ptr [esi - 0x8c]
// 00492c8e  d95aa4               fstp dword ptr [edx - 0x5c]
// 00492c91  d98678ffffff         fld dword ptr [esi - 0x88]
// 00492c97  d95aa8               fstp dword ptr [edx - 0x58]
// 00492c9a  d9867cffffff         fld dword ptr [esi - 0x84]
// 00492ca0  d95aac               fstp dword ptr [edx - 0x54]
// 00492ca3  d9442ab0             fld dword ptr [edx + ebp - 0x50]
// 00492ca7  d95ab0               fstp dword ptr [edx - 0x50]
// 00492caa  d94684               fld dword ptr [esi - 0x7c]
// 00492cad  d95ab4               fstp dword ptr [edx - 0x4c]
// 00492cb0  dd468c               fld qword ptr [esi - 0x74]
// 00492cb3  dd5abc               fstp qword ptr [edx - 0x44]
// 00492cb6  dd4694               fld qword ptr [esi - 0x6c]
// 00492cb9  dd5ac4               fstp qword ptr [edx - 0x3c]
// 00492cbc  dd469c               fld qword ptr [esi - 0x64]
// 00492cbf  dd5acc               fstp qword ptr [edx - 0x34]
// 00492cc2  dd46a4               fld qword ptr [esi - 0x5c]
// 00492cc5  dd5ad4               fstp qword ptr [edx - 0x2c]
// 00492cc8  d946ac               fld dword ptr [esi - 0x54]
// 00492ccb  d95adc               fstp dword ptr [edx - 0x24]
// 00492cce  d946b0               fld dword ptr [esi - 0x50]
// 00492cd1  d95ae0               fstp dword ptr [edx - 0x20]
// 00492cd4  d946b4               fld dword ptr [esi - 0x4c]
// 00492cd7  d95ae4               fstp dword ptr [edx - 0x1c]
// 00492cda  0fb65eb8             movzx ebx, byte ptr [esi - 0x48]
// 00492cde  885ae8               mov byte ptr [edx - 0x18], bl
// 00492ce1  0fb65eb9             movzx ebx, byte ptr [esi - 0x47]
// 00492ce5  885ae9               mov byte ptr [edx - 0x17], bl
// 00492ce8  0fb65eba             movzx ebx, byte ptr [esi - 0x46]
// 00492cec  885aea               mov byte ptr [edx - 0x16], bl
// 00492cef  0f857bffffff         jne 0x492c70
// 00492cf5  0fb68f80020000       movzx ecx, byte ptr [edi + 0x280]
// 00492cfc  888880020000         mov byte ptr [eax + 0x280], cl
// 00492d02  0fb69781020000       movzx edx, byte ptr [edi + 0x281]
// 00492d09  889081020000         mov byte ptr [eax + 0x281], dl
// 00492d0f  0fb68f82020000       movzx ecx, byte ptr [edi + 0x282]
// 00492d16  888882020000         mov byte ptr [eax + 0x282], cl
// 00492d1c  0fb69783020000       movzx edx, byte ptr [edi + 0x283]
// 00492d23  889083020000         mov byte ptr [eax + 0x283], dl
// 00492d29  0fb68f84020000       movzx ecx, byte ptr [edi + 0x284]
// 00492d30  888884020000         mov byte ptr [eax + 0x284], cl
// 00492d36  0fb69785020000       movzx edx, byte ptr [edi + 0x285]
// 00492d3d  889085020000         mov byte ptr [eax + 0x285], dl
// 00492d43  0fb68f86020000       movzx ecx, byte ptr [edi + 0x286]
// 00492d4a  888886020000         mov byte ptr [eax + 0x286], cl
// 00492d50  0fb69787020000       movzx edx, byte ptr [edi + 0x287]
// 00492d57  889087020000         mov byte ptr [eax + 0x287], dl
// 00492d5d  0fb68f88020000       movzx ecx, byte ptr [edi + 0x288]
// 00492d64  888888020000         mov byte ptr [eax + 0x288], cl
// 00492d6a  d9878c020000         fld dword ptr [edi + 0x28c]
// 00492d70  d9988c020000         fstp dword ptr [eax + 0x28c]
// 00492d76  d98790020000         fld dword ptr [edi + 0x290]
// 00492d7c  d99890020000         fstp dword ptr [eax + 0x290]
// 00492d82  d98794020000         fld dword ptr [edi + 0x294]
// 00492d88  d99894020000         fstp dword ptr [eax + 0x294]
// 00492d8e  d98798020000         fld dword ptr [edi + 0x298]
// 00492d94  d99898020000         fstp dword ptr [eax + 0x298]
// 00492d9a  0fb6979c020000       movzx edx, byte ptr [edi + 0x29c]
// 00492da1  88909c020000         mov byte ptr [eax + 0x29c], dl
// 00492da7  0fb68f9d020000       movzx ecx, byte ptr [edi + 0x29d]
// 00492dae  5f                   pop edi
// 00492daf  5e                   pop esi
// 00492db0  5d                   pop ebp
// 00492db1  88889d020000         mov byte ptr [eax + 0x29d], cl
// 00492db7  5b                   pop ebx
// 00492db8  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4Lights@RenderState@RenderDevice@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
