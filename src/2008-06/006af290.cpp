// from server: 100% by auto
// roc 2008-06 006af290  unit: CXTPPaintManager  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006af290
//
// 006af290  51                   push ecx
// 006af291  d9ee                 fldz 
// 006af293  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006af297  dd44241c             fld qword ptr [esp + 0x1c]
// 006af29b  d8d1                 fcom st(1)
// 006af29d  dfe0                 fnstsw ax
// 006af29f  ddd9                 fstp st(1)
// 006af2a1  f6c405               test ah, 5
// 006af2a4  7a04                 jp 0x6af2aa
// 006af2a6  d9e0                 fchs 
// 006af2a8  eb20                 jmp 0x6af2ca
// 006af2aa  8b442410             mov eax, dword ptr [esp + 0x10]
// 006af2ae  ddd8                 fstp st(0)
// 006af2b0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006af2b4  8b542408             mov edx, dword ptr [esp + 8]
// 006af2b8  50                   push eax
// 006af2b9  8b4204               mov eax, dword ptr [edx + 4]
// 006af2bc  51                   push ecx
// 006af2bd  50                   push eax
// 006af2be  ff15bc208000         call dword ptr [0x8020bc]
// 006af2c4  dd44241c             fld qword ptr [esp + 0x1c]
// 006af2c8  8bc8                 mov ecx, eax
// 006af2ca  8b442414             mov eax, dword ptr [esp + 0x14]
// 006af2ce  8bd0                 mov edx, eax
// 006af2d0  56                   push esi
// 006af2d1  c1ea10               shr edx, 0x10
// 006af2d4  0fb6f2               movzx esi, dl
// 006af2d7  8bd0                 mov edx, eax
// 006af2d9  57                   push edi
// 006af2da  0fb6f8               movzx edi, al
// 006af2dd  8bc1                 mov eax, ecx
// 006af2df  c1e810               shr eax, 0x10
// 006af2e2  0fb6c0               movzx eax, al
// 006af2e5  2bc6                 sub eax, esi
// 006af2e7  89442420             mov dword ptr [esp + 0x20], eax
// 006af2eb  8974241c             mov dword ptr [esp + 0x1c], esi
// 006af2ef  c1ea08               shr edx, 8
// 006af2f2  db442420             fild dword ptr [esp + 0x20]
// 006af2f6  0fb6d2               movzx edx, dl
// 006af2f9  d97c2420             fnstcw word ptr [esp + 0x20]
// 006af2fd  d8c9                 fmul st(1)
// 006af2ff  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 006af304  da44241c             fiadd dword ptr [esp + 0x1c]
// 006af308  0d000c0000           or eax, 0xc00
// 006af30d  8944241c             mov dword ptr [esp + 0x1c], eax
// 006af311  d96c241c             fldcw word ptr [esp + 0x1c]
// 006af315  89542424             mov dword ptr [esp + 0x24], edx
// 006af319  897c2408             mov dword ptr [esp + 8], edi
// 006af31d  db5c241c             fistp dword ptr [esp + 0x1c]
// 006af321  8a44241c             mov al, byte ptr [esp + 0x1c]
// 006af325  0fb6f0               movzx esi, al
// 006af328  8bc1                 mov eax, ecx
// 006af32a  d96c2420             fldcw word ptr [esp + 0x20]
// 006af32e  c1e808               shr eax, 8
// 006af331  0fb6c0               movzx eax, al
// 006af334  2bc2                 sub eax, edx
// 006af336  89442420             mov dword ptr [esp + 0x20], eax
// 006af33a  0fb6c9               movzx ecx, cl
// 006af33d  db442420             fild dword ptr [esp + 0x20]
// 006af341  d97c2420             fnstcw word ptr [esp + 0x20]
// 006af345  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 006af34a  d8c9                 fmul st(1)
// 006af34c  0d000c0000           or eax, 0xc00
// 006af351  8944241c             mov dword ptr [esp + 0x1c], eax
// 006af355  2bcf                 sub ecx, edi
// 006af357  da442424             fiadd dword ptr [esp + 0x24]
// 006af35b  c1e608               shl esi, 8
// 006af35e  5f                   pop edi
// 006af35f  d96c2418             fldcw word ptr [esp + 0x18]
// 006af363  db5c2418             fistp dword ptr [esp + 0x18]
// 006af367  0fb6542418           movzx edx, byte ptr [esp + 0x18]
// 006af36c  0fb6c2               movzx eax, dl
// 006af36f  d96c241c             fldcw word ptr [esp + 0x1c]
// 006af373  0bf0                 or esi, eax
// 006af375  894c241c             mov dword ptr [esp + 0x1c], ecx
// 006af379  c1e608               shl esi, 8
// 006af37c  db44241c             fild dword ptr [esp + 0x1c]
// 006af380  d97c241c             fnstcw word ptr [esp + 0x1c]
// 006af384  dec9                 fmulp st(1)
// 006af386  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 006af38b  0d000c0000           or eax, 0xc00
// 006af390  89442418             mov dword ptr [esp + 0x18], eax
// 006af394  da442404             fiadd dword ptr [esp + 4]
// 006af398  d96c2418             fldcw word ptr [esp + 0x18]
// 006af39c  db5c2418             fistp dword ptr [esp + 0x18]
// 006af3a0  0fb6542418           movzx edx, byte ptr [esp + 0x18]
// 006af3a5  0fb6c2               movzx eax, dl
// 006af3a8  d96c241c             fldcw word ptr [esp + 0x1c]
// 006af3ac  0bc6                 or eax, esi
// 006af3ae  5e                   pop esi
// 006af3af  59                   pop ecx
// 006af3b0  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?Mix@@YAKPAVCDC@@HHKKN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
