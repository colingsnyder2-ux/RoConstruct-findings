// from server: 100% by auto
// roc 2012-06 00988b30  unit: CXTPPaintManager  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00988b30
//
// 00988b30  51                   push ecx
// 00988b31  d9ee                 fldz 
// 00988b33  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00988b37  dd44241c             fld qword ptr [esp + 0x1c]
// 00988b3b  d8d1                 fcom st(1)
// 00988b3d  dfe0                 fnstsw ax
// 00988b3f  ddd9                 fstp st(1)
// 00988b41  f6c405               test ah, 5
// 00988b44  7a04                 jp 0x988b4a
// 00988b46  d9e0                 fchs 
// 00988b48  eb20                 jmp 0x988b6a
// 00988b4a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00988b4e  ddd8                 fstp st(0)
// 00988b50  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00988b54  8b542408             mov edx, dword ptr [esp + 8]
// 00988b58  50                   push eax
// 00988b59  8b4204               mov eax, dword ptr [edx + 4]
// 00988b5c  51                   push ecx
// 00988b5d  50                   push eax
// 00988b5e  ff15b820b200         call dword ptr [0xb220b8]
// 00988b64  dd44241c             fld qword ptr [esp + 0x1c]
// 00988b68  8bc8                 mov ecx, eax
// 00988b6a  8b442414             mov eax, dword ptr [esp + 0x14]
// 00988b6e  8bd0                 mov edx, eax
// 00988b70  56                   push esi
// 00988b71  c1ea10               shr edx, 0x10
// 00988b74  0fb6f2               movzx esi, dl
// 00988b77  8bd0                 mov edx, eax
// 00988b79  57                   push edi
// 00988b7a  0fb6f8               movzx edi, al
// 00988b7d  8bc1                 mov eax, ecx
// 00988b7f  c1e810               shr eax, 0x10
// 00988b82  0fb6c0               movzx eax, al
// 00988b85  2bc6                 sub eax, esi
// 00988b87  89442420             mov dword ptr [esp + 0x20], eax
// 00988b8b  8974241c             mov dword ptr [esp + 0x1c], esi
// 00988b8f  c1ea08               shr edx, 8
// 00988b92  db442420             fild dword ptr [esp + 0x20]
// 00988b96  0fb6d2               movzx edx, dl
// 00988b99  d97c2420             fnstcw word ptr [esp + 0x20]
// 00988b9d  d8c9                 fmul st(1)
// 00988b9f  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 00988ba4  da44241c             fiadd dword ptr [esp + 0x1c]
// 00988ba8  0d000c0000           or eax, 0xc00
// 00988bad  8944241c             mov dword ptr [esp + 0x1c], eax
// 00988bb1  d96c241c             fldcw word ptr [esp + 0x1c]
// 00988bb5  89542424             mov dword ptr [esp + 0x24], edx
// 00988bb9  897c2408             mov dword ptr [esp + 8], edi
// 00988bbd  db5c241c             fistp dword ptr [esp + 0x1c]
// 00988bc1  8a44241c             mov al, byte ptr [esp + 0x1c]
// 00988bc5  0fb6f0               movzx esi, al
// 00988bc8  8bc1                 mov eax, ecx
// 00988bca  d96c2420             fldcw word ptr [esp + 0x20]
// 00988bce  c1e808               shr eax, 8
// 00988bd1  0fb6c0               movzx eax, al
// 00988bd4  2bc2                 sub eax, edx
// 00988bd6  89442420             mov dword ptr [esp + 0x20], eax
// 00988bda  0fb6c9               movzx ecx, cl
// 00988bdd  db442420             fild dword ptr [esp + 0x20]
// 00988be1  d97c2420             fnstcw word ptr [esp + 0x20]
// 00988be5  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 00988bea  d8c9                 fmul st(1)
// 00988bec  0d000c0000           or eax, 0xc00
// 00988bf1  8944241c             mov dword ptr [esp + 0x1c], eax
// 00988bf5  2bcf                 sub ecx, edi
// 00988bf7  da442424             fiadd dword ptr [esp + 0x24]
// 00988bfb  c1e608               shl esi, 8
// 00988bfe  5f                   pop edi
// 00988bff  d96c2418             fldcw word ptr [esp + 0x18]
// 00988c03  db5c2418             fistp dword ptr [esp + 0x18]
// 00988c07  0fb6542418           movzx edx, byte ptr [esp + 0x18]
// 00988c0c  0fb6c2               movzx eax, dl
// 00988c0f  d96c241c             fldcw word ptr [esp + 0x1c]
// 00988c13  0bf0                 or esi, eax
// 00988c15  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00988c19  c1e608               shl esi, 8
// 00988c1c  db44241c             fild dword ptr [esp + 0x1c]
// 00988c20  d97c241c             fnstcw word ptr [esp + 0x1c]
// 00988c24  dec9                 fmulp st(1)
// 00988c26  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 00988c2b  0d000c0000           or eax, 0xc00
// 00988c30  89442418             mov dword ptr [esp + 0x18], eax
// 00988c34  da442404             fiadd dword ptr [esp + 4]
// 00988c38  d96c2418             fldcw word ptr [esp + 0x18]
// 00988c3c  db5c2418             fistp dword ptr [esp + 0x18]
// 00988c40  0fb6542418           movzx edx, byte ptr [esp + 0x18]
// 00988c45  0fb6c2               movzx eax, dl
// 00988c48  d96c241c             fldcw word ptr [esp + 0x1c]
// 00988c4c  0bc6                 or eax, esi
// 00988c4e  5e                   pop esi
// 00988c4f  59                   pop ecx
// 00988c50  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?Mix@@YAKPAVCDC@@HHKKN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
