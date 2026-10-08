// roc 2007-03 00475420  unit: seg_00470000  size: 363 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00475420
//
// 00475420  53                   push ebx
// 00475421  55                   push ebp
// 00475422  56                   push esi
// 00475423  57                   push edi
// 00475424  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00475428  8bc1                 mov eax, ecx
// 0047542a  8bef                 mov ebp, edi
// 0047542c  8d7744               lea esi, [edi + 0x44]
// 0047542f  8d5014               lea edx, [eax + 0x14]
// 00475432  2be8                 sub ebp, eax
// 00475434  b908000000           mov ecx, 8
// 00475439  8da42400000000       lea esp, [esp]
// 00475440  d946bc               fld dword ptr [esi - 0x44]
// 00475443  83c650               add esi, 0x50
// 00475446  d95aec               fstp dword ptr [edx - 0x14]
// 00475449  83c250               add edx, 0x50
// 0047544c  83e901               sub ecx, 1
// 0047544f  d98670ffffff         fld dword ptr [esi - 0x90]
// 00475455  d95aa0               fstp dword ptr [edx - 0x60]
// 00475458  d98674ffffff         fld dword ptr [esi - 0x8c]
// 0047545e  d95aa4               fstp dword ptr [edx - 0x5c]
// 00475461  d98678ffffff         fld dword ptr [esi - 0x88]
// 00475467  d95aa8               fstp dword ptr [edx - 0x58]
// 0047546a  d9867cffffff         fld dword ptr [esi - 0x84]
// 00475470  d95aac               fstp dword ptr [edx - 0x54]
// 00475473  d9442ab0             fld dword ptr [edx + ebp - 0x50]
// 00475477  d95ab0               fstp dword ptr [edx - 0x50]
// 0047547a  d94684               fld dword ptr [esi - 0x7c]
// 0047547d  d95ab4               fstp dword ptr [edx - 0x4c]
// 00475480  dd468c               fld qword ptr [esi - 0x74]
// 00475483  dd5abc               fstp qword ptr [edx - 0x44]
// 00475486  dd4694               fld qword ptr [esi - 0x6c]
// 00475489  dd5ac4               fstp qword ptr [edx - 0x3c]
// 0047548c  dd469c               fld qword ptr [esi - 0x64]
// 0047548f  dd5acc               fstp qword ptr [edx - 0x34]
// 00475492  dd46a4               fld qword ptr [esi - 0x5c]
// 00475495  dd5ad4               fstp qword ptr [edx - 0x2c]
// 00475498  d946ac               fld dword ptr [esi - 0x54]
// 0047549b  d95adc               fstp dword ptr [edx - 0x24]
// 0047549e  d946b0               fld dword ptr [esi - 0x50]
// 004754a1  d95ae0               fstp dword ptr [edx - 0x20]
// 004754a4  d946b4               fld dword ptr [esi - 0x4c]
// 004754a7  d95ae4               fstp dword ptr [edx - 0x1c]
// 004754aa  0fb65eb8             movzx ebx, byte ptr [esi - 0x48]
// 004754ae  885ae8               mov byte ptr [edx - 0x18], bl
// 004754b1  0fb65eb9             movzx ebx, byte ptr [esi - 0x47]
// 004754b5  885ae9               mov byte ptr [edx - 0x17], bl
// 004754b8  0fb65eba             movzx ebx, byte ptr [esi - 0x46]
// 004754bc  885aea               mov byte ptr [edx - 0x16], bl
// 004754bf  0f857bffffff         jne 0x475440
// 004754c5  0fb68f80020000       movzx ecx, byte ptr [edi + 0x280]
// 004754cc  888880020000         mov byte ptr [eax + 0x280], cl
// 004754d2  0fb69781020000       movzx edx, byte ptr [edi + 0x281]
// 004754d9  889081020000         mov byte ptr [eax + 0x281], dl
// 004754df  0fb68f82020000       movzx ecx, byte ptr [edi + 0x282]
// 004754e6  888882020000         mov byte ptr [eax + 0x282], cl
// 004754ec  0fb69783020000       movzx edx, byte ptr [edi + 0x283]
// 004754f3  889083020000         mov byte ptr [eax + 0x283], dl
// 004754f9  0fb68f84020000       movzx ecx, byte ptr [edi + 0x284]
// 00475500  888884020000         mov byte ptr [eax + 0x284], cl
// 00475506  0fb69785020000       movzx edx, byte ptr [edi + 0x285]
// 0047550d  889085020000         mov byte ptr [eax + 0x285], dl
// 00475513  0fb68f86020000       movzx ecx, byte ptr [edi + 0x286]
// 0047551a  888886020000         mov byte ptr [eax + 0x286], cl
// 00475520  0fb69787020000       movzx edx, byte ptr [edi + 0x287]
// 00475527  889087020000         mov byte ptr [eax + 0x287], dl
// 0047552d  0fb68f88020000       movzx ecx, byte ptr [edi + 0x288]
// 00475534  888888020000         mov byte ptr [eax + 0x288], cl
// 0047553a  d9878c020000         fld dword ptr [edi + 0x28c]
// 00475540  d9988c020000         fstp dword ptr [eax + 0x28c]
// 00475546  d98790020000         fld dword ptr [edi + 0x290]
// 0047554c  d99890020000         fstp dword ptr [eax + 0x290]
// 00475552  d98794020000         fld dword ptr [edi + 0x294]
// 00475558  d99894020000         fstp dword ptr [eax + 0x294]
// 0047555e  d98798020000         fld dword ptr [edi + 0x298]
// 00475564  d99898020000         fstp dword ptr [eax + 0x298]
// 0047556a  0fb6979c020000       movzx edx, byte ptr [edi + 0x29c]
// 00475571  88909c020000         mov byte ptr [eax + 0x29c], dl
// 00475577  0fb68f9d020000       movzx ecx, byte ptr [edi + 0x29d]
// 0047557e  5f                   pop edi
// 0047557f  5e                   pop esi
// 00475580  5d                   pop ebp
// 00475581  88889d020000         mov byte ptr [eax + 0x29d], cl
// 00475587  5b                   pop ebx
// 00475588  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??4Lights@RenderState@RenderDevice@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
