// roc 2007-08 00475300  unit: CInstanceRecord::CNameItem  size: 363 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00475300
//
// 00475300  53                   push ebx
// 00475301  55                   push ebp
// 00475302  56                   push esi
// 00475303  57                   push edi
// 00475304  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00475308  8bc1                 mov eax, ecx
// 0047530a  8bef                 mov ebp, edi
// 0047530c  8d7744               lea esi, [edi + 0x44]
// 0047530f  8d5014               lea edx, [eax + 0x14]
// 00475312  2be8                 sub ebp, eax
// 00475314  b908000000           mov ecx, 8
// 00475319  8da42400000000       lea esp, [esp]
// 00475320  d946bc               fld dword ptr [esi - 0x44]
// 00475323  83c650               add esi, 0x50
// 00475326  d95aec               fstp dword ptr [edx - 0x14]
// 00475329  83c250               add edx, 0x50
// 0047532c  83e901               sub ecx, 1
// 0047532f  d98670ffffff         fld dword ptr [esi - 0x90]
// 00475335  d95aa0               fstp dword ptr [edx - 0x60]
// 00475338  d98674ffffff         fld dword ptr [esi - 0x8c]
// 0047533e  d95aa4               fstp dword ptr [edx - 0x5c]
// 00475341  d98678ffffff         fld dword ptr [esi - 0x88]
// 00475347  d95aa8               fstp dword ptr [edx - 0x58]
// 0047534a  d9867cffffff         fld dword ptr [esi - 0x84]
// 00475350  d95aac               fstp dword ptr [edx - 0x54]
// 00475353  d9442ab0             fld dword ptr [edx + ebp - 0x50]
// 00475357  d95ab0               fstp dword ptr [edx - 0x50]
// 0047535a  d94684               fld dword ptr [esi - 0x7c]
// 0047535d  d95ab4               fstp dword ptr [edx - 0x4c]
// 00475360  dd468c               fld qword ptr [esi - 0x74]
// 00475363  dd5abc               fstp qword ptr [edx - 0x44]
// 00475366  dd4694               fld qword ptr [esi - 0x6c]
// 00475369  dd5ac4               fstp qword ptr [edx - 0x3c]
// 0047536c  dd469c               fld qword ptr [esi - 0x64]
// 0047536f  dd5acc               fstp qword ptr [edx - 0x34]
// 00475372  dd46a4               fld qword ptr [esi - 0x5c]
// 00475375  dd5ad4               fstp qword ptr [edx - 0x2c]
// 00475378  d946ac               fld dword ptr [esi - 0x54]
// 0047537b  d95adc               fstp dword ptr [edx - 0x24]
// 0047537e  d946b0               fld dword ptr [esi - 0x50]
// 00475381  d95ae0               fstp dword ptr [edx - 0x20]
// 00475384  d946b4               fld dword ptr [esi - 0x4c]
// 00475387  d95ae4               fstp dword ptr [edx - 0x1c]
// 0047538a  0fb65eb8             movzx ebx, byte ptr [esi - 0x48]
// 0047538e  885ae8               mov byte ptr [edx - 0x18], bl
// 00475391  0fb65eb9             movzx ebx, byte ptr [esi - 0x47]
// 00475395  885ae9               mov byte ptr [edx - 0x17], bl
// 00475398  0fb65eba             movzx ebx, byte ptr [esi - 0x46]
// 0047539c  885aea               mov byte ptr [edx - 0x16], bl
// 0047539f  0f857bffffff         jne 0x475320
// 004753a5  0fb68f80020000       movzx ecx, byte ptr [edi + 0x280]
// 004753ac  888880020000         mov byte ptr [eax + 0x280], cl
// 004753b2  0fb69781020000       movzx edx, byte ptr [edi + 0x281]
// 004753b9  889081020000         mov byte ptr [eax + 0x281], dl
// 004753bf  0fb68f82020000       movzx ecx, byte ptr [edi + 0x282]
// 004753c6  888882020000         mov byte ptr [eax + 0x282], cl
// 004753cc  0fb69783020000       movzx edx, byte ptr [edi + 0x283]
// 004753d3  889083020000         mov byte ptr [eax + 0x283], dl
// 004753d9  0fb68f84020000       movzx ecx, byte ptr [edi + 0x284]
// 004753e0  888884020000         mov byte ptr [eax + 0x284], cl
// 004753e6  0fb69785020000       movzx edx, byte ptr [edi + 0x285]
// 004753ed  889085020000         mov byte ptr [eax + 0x285], dl
// 004753f3  0fb68f86020000       movzx ecx, byte ptr [edi + 0x286]
// 004753fa  888886020000         mov byte ptr [eax + 0x286], cl
// 00475400  0fb69787020000       movzx edx, byte ptr [edi + 0x287]
// 00475407  889087020000         mov byte ptr [eax + 0x287], dl
// 0047540d  0fb68f88020000       movzx ecx, byte ptr [edi + 0x288]
// 00475414  888888020000         mov byte ptr [eax + 0x288], cl
// 0047541a  d9878c020000         fld dword ptr [edi + 0x28c]
// 00475420  d9988c020000         fstp dword ptr [eax + 0x28c]
// 00475426  d98790020000         fld dword ptr [edi + 0x290]
// 0047542c  d99890020000         fstp dword ptr [eax + 0x290]
// 00475432  d98794020000         fld dword ptr [edi + 0x294]
// 00475438  d99894020000         fstp dword ptr [eax + 0x294]
// 0047543e  d98798020000         fld dword ptr [edi + 0x298]
// 00475444  d99898020000         fstp dword ptr [eax + 0x298]
// 0047544a  0fb6979c020000       movzx edx, byte ptr [edi + 0x29c]
// 00475451  88909c020000         mov byte ptr [eax + 0x29c], dl
// 00475457  0fb68f9d020000       movzx ecx, byte ptr [edi + 0x29d]
// 0047545e  5f                   pop edi
// 0047545f  5e                   pop esi
// 00475460  5d                   pop ebp
// 00475461  88889d020000         mov byte ptr [eax + 0x29d], cl
// 00475467  5b                   pop ebx
// 00475468  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4Lights@RenderState@RenderDevice@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
