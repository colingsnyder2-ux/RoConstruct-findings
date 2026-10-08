// roc 2007-03 00476210  unit: seg_00470000  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00476210
//
// 00476210  8b542408             mov edx, dword ptr [esp + 8]
// 00476214  53                   push ebx
// 00476215  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00476219  8bc3                 mov eax, ebx
// 0047621b  6bc05c               imul eax, eax, 0x5c
// 0047621e  56                   push esi
// 0047621f  55                   push ebp
// 00476220  be40000000           mov esi, 0x40
// 00476225  8d8408dc040000       lea eax, [eax + ecx + 0x4dc]
// 0047622c  57                   push edi
// 0047622d  8d4900               lea ecx, [ecx]
// 00476230  8b3a                 mov edi, dword ptr [edx]
// 00476232  3b38                 cmp edi, dword ptr [eax]
// 00476234  7512                 jne 0x476248
// 00476236  83ee04               sub esi, 4
// 00476239  83c004               add eax, 4
// 0047623c  83c204               add edx, 4
// 0047623f  83fe04               cmp esi, 4
// 00476242  73ec                 jae 0x476230
// 00476244  85f6                 test esi, esi
// 00476246  745d                 je 0x4762a5
// 00476248  0fb63a               movzx edi, byte ptr [edx]
// 0047624b  0fb628               movzx ebp, byte ptr [eax]
// 0047624e  2bfd                 sub edi, ebp
// 00476250  7545                 jne 0x476297
// 00476252  83ee01               sub esi, 1
// 00476255  83c001               add eax, 1
// 00476258  83c201               add edx, 1
// 0047625b  85f6                 test esi, esi
// 0047625d  7446                 je 0x4762a5
// 0047625f  0fb63a               movzx edi, byte ptr [edx]
// 00476262  0fb628               movzx ebp, byte ptr [eax]
// 00476265  2bfd                 sub edi, ebp
// 00476267  752e                 jne 0x476297
// 00476269  83ee01               sub esi, 1
// 0047626c  83c001               add eax, 1
// 0047626f  83c201               add edx, 1
// 00476272  85f6                 test esi, esi
// 00476274  742f                 je 0x4762a5
// 00476276  0fb63a               movzx edi, byte ptr [edx]
// 00476279  0fb628               movzx ebp, byte ptr [eax]
// 0047627c  2bfd                 sub edi, ebp
// 0047627e  7517                 jne 0x476297
// 00476280  83ee01               sub esi, 1
// 00476283  83c001               add eax, 1
// 00476286  83c201               add edx, 1
// 00476289  85f6                 test esi, esi
// 0047628b  7418                 je 0x4762a5
// 0047628d  0fb63a               movzx edi, byte ptr [edx]
// 00476290  0fb610               movzx edx, byte ptr [eax]
// 00476293  2bfa                 sub edi, edx
// 00476295  740e                 je 0x4762a5
// 00476297  85ff                 test edi, edi
// 00476299  b801000000           mov eax, 1
// 0047629e  7f07                 jg 0x4762a7
// 004762a0  83c8ff               or eax, 0xffffffff
// 004762a3  eb02                 jmp 0x4762a7
// 004762a5  33c0                 xor eax, eax
// 004762a7  85c0                 test eax, eax
// 004762a9  5f                   pop edi
// 004762aa  5d                   pop ebp
// 004762ab  740b                 je 0x4762b8
// 004762ad  8b442410             mov eax, dword ptr [esp + 0x10]
// 004762b1  50                   push eax
// 004762b2  53                   push ebx
// 004762b3  e878fdffff           call 0x476030
// 004762b8  5e                   pop esi
// 004762b9  5b                   pop ebx
// 004762ba  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTextureMatrix@RenderDevice@G3D@@QAEXIPBM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
