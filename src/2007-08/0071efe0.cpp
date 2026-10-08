// from server: 100% by auto
// roc 2007-08 0071efe0  unit: CXTPDialogBar  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071efe0
//
// 0071efe0  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0071efe3  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0071efe6  55                   push ebp
// 0071efe7  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0071efeb  8a1429               mov dl, byte ptr [ecx + ebp]
// 0071efee  03c1                 add eax, ecx
// 0071eff0  03cd                 add ecx, ebp
// 0071eff2  3a10                 cmp dl, byte ptr [eax]
// 0071eff4  57                   push edi
// 0071eff5  8db802010000         lea edi, [eax + 0x102]
// 0071effb  0f8599000000         jne 0x71f09a
// 0071f001  8a5101               mov dl, byte ptr [ecx + 1]
// 0071f004  3a5001               cmp dl, byte ptr [eax + 1]
// 0071f007  0f858d000000         jne 0x71f09a
// 0071f00d  83c002               add eax, 2
// 0071f010  83c102               add ecx, 2
// 0071f013  8a5001               mov dl, byte ptr [eax + 1]
// 0071f016  83c001               add eax, 1
// 0071f019  83c101               add ecx, 1
// 0071f01c  3a11                 cmp dl, byte ptr [ecx]
// 0071f01e  755f                 jne 0x71f07f
// 0071f020  8a5001               mov dl, byte ptr [eax + 1]
// 0071f023  83c001               add eax, 1
// 0071f026  83c101               add ecx, 1
// 0071f029  3a11                 cmp dl, byte ptr [ecx]
// 0071f02b  7552                 jne 0x71f07f
// 0071f02d  8a5001               mov dl, byte ptr [eax + 1]
// 0071f030  83c001               add eax, 1
// 0071f033  83c101               add ecx, 1
// 0071f036  3a11                 cmp dl, byte ptr [ecx]
// 0071f038  7545                 jne 0x71f07f
// 0071f03a  8a5001               mov dl, byte ptr [eax + 1]
// 0071f03d  83c001               add eax, 1
// 0071f040  83c101               add ecx, 1
// 0071f043  3a11                 cmp dl, byte ptr [ecx]
// 0071f045  7538                 jne 0x71f07f
// 0071f047  8a5001               mov dl, byte ptr [eax + 1]
// 0071f04a  83c001               add eax, 1
// 0071f04d  83c101               add ecx, 1
// 0071f050  3a11                 cmp dl, byte ptr [ecx]
// 0071f052  752b                 jne 0x71f07f
// 0071f054  8a5001               mov dl, byte ptr [eax + 1]
// 0071f057  83c001               add eax, 1
// 0071f05a  83c101               add ecx, 1
// 0071f05d  3a11                 cmp dl, byte ptr [ecx]
// 0071f05f  751e                 jne 0x71f07f
// 0071f061  8a5001               mov dl, byte ptr [eax + 1]
// 0071f064  83c001               add eax, 1
// 0071f067  83c101               add ecx, 1
// 0071f06a  3a11                 cmp dl, byte ptr [ecx]
// 0071f06c  7511                 jne 0x71f07f
// 0071f06e  8a5001               mov dl, byte ptr [eax + 1]
// 0071f071  83c001               add eax, 1
// 0071f074  83c101               add ecx, 1
// 0071f077  3a11                 cmp dl, byte ptr [ecx]
// 0071f079  7504                 jne 0x71f07f
// 0071f07b  3bc7                 cmp eax, edi
// 0071f07d  7294                 jb 0x71f013
// 0071f07f  2bc7                 sub eax, edi
// 0071f081  0502010000           add eax, 0x102
// 0071f086  83f803               cmp eax, 3
// 0071f089  7c0f                 jl 0x71f09a
// 0071f08b  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0071f08e  3bc1                 cmp eax, ecx
// 0071f090  896e70               mov dword ptr [esi + 0x70], ebp
// 0071f093  760a                 jbe 0x71f09f
// 0071f095  5f                   pop edi
// 0071f096  8bc1                 mov eax, ecx
// 0071f098  5d                   pop ebp
// 0071f099  c3                   ret 
// 0071f09a  b802000000           mov eax, 2
// 0071f09f  5f                   pop edi
// 0071f0a0  5d                   pop ebp
// 0071f0a1  c3                   ret 
// library zlib-1.2.3/deflate.c (function _longest_match_fast)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
