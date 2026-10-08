// roc 2007-08 004760b0  unit: CInstanceRecord::CNameItem  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004760b0
//
// 004760b0  8b542408             mov edx, dword ptr [esp + 8]
// 004760b4  53                   push ebx
// 004760b5  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004760b9  8bc3                 mov eax, ebx
// 004760bb  6bc05c               imul eax, eax, 0x5c
// 004760be  56                   push esi
// 004760bf  55                   push ebp
// 004760c0  be40000000           mov esi, 0x40
// 004760c5  8d8408dc040000       lea eax, [eax + ecx + 0x4dc]
// 004760cc  57                   push edi
// 004760cd  8d4900               lea ecx, [ecx]
// 004760d0  8b3a                 mov edi, dword ptr [edx]
// 004760d2  3b38                 cmp edi, dword ptr [eax]
// 004760d4  7512                 jne 0x4760e8
// 004760d6  83ee04               sub esi, 4
// 004760d9  83c004               add eax, 4
// 004760dc  83c204               add edx, 4
// 004760df  83fe04               cmp esi, 4
// 004760e2  73ec                 jae 0x4760d0
// 004760e4  85f6                 test esi, esi
// 004760e6  745d                 je 0x476145
// 004760e8  0fb63a               movzx edi, byte ptr [edx]
// 004760eb  0fb628               movzx ebp, byte ptr [eax]
// 004760ee  2bfd                 sub edi, ebp
// 004760f0  7545                 jne 0x476137
// 004760f2  83ee01               sub esi, 1
// 004760f5  83c001               add eax, 1
// 004760f8  83c201               add edx, 1
// 004760fb  85f6                 test esi, esi
// 004760fd  7446                 je 0x476145
// 004760ff  0fb63a               movzx edi, byte ptr [edx]
// 00476102  0fb628               movzx ebp, byte ptr [eax]
// 00476105  2bfd                 sub edi, ebp
// 00476107  752e                 jne 0x476137
// 00476109  83ee01               sub esi, 1
// 0047610c  83c001               add eax, 1
// 0047610f  83c201               add edx, 1
// 00476112  85f6                 test esi, esi
// 00476114  742f                 je 0x476145
// 00476116  0fb63a               movzx edi, byte ptr [edx]
// 00476119  0fb628               movzx ebp, byte ptr [eax]
// 0047611c  2bfd                 sub edi, ebp
// 0047611e  7517                 jne 0x476137
// 00476120  83ee01               sub esi, 1
// 00476123  83c001               add eax, 1
// 00476126  83c201               add edx, 1
// 00476129  85f6                 test esi, esi
// 0047612b  7418                 je 0x476145
// 0047612d  0fb63a               movzx edi, byte ptr [edx]
// 00476130  0fb610               movzx edx, byte ptr [eax]
// 00476133  2bfa                 sub edi, edx
// 00476135  740e                 je 0x476145
// 00476137  85ff                 test edi, edi
// 00476139  b801000000           mov eax, 1
// 0047613e  7f07                 jg 0x476147
// 00476140  83c8ff               or eax, 0xffffffff
// 00476143  eb02                 jmp 0x476147
// 00476145  33c0                 xor eax, eax
// 00476147  85c0                 test eax, eax
// 00476149  5f                   pop edi
// 0047614a  5d                   pop ebp
// 0047614b  740b                 je 0x476158
// 0047614d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00476151  50                   push eax
// 00476152  53                   push ebx
// 00476153  e878fdffff           call 0x475ed0
// 00476158  5e                   pop esi
// 00476159  5b                   pop ebx
// 0047615a  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTextureMatrix@RenderDevice@G3D@@QAEXIPBM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
