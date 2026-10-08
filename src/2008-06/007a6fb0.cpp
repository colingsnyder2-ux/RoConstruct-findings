// from server: 100% by auto
// roc 2008-06 007a6fb0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a6fb0
//
// 007a6fb0  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007a6fb3  8b466c               mov eax, dword ptr [esi + 0x6c]
// 007a6fb6  55                   push ebp
// 007a6fb7  8b6c2408             mov ebp, dword ptr [esp + 8]
// 007a6fbb  8a1429               mov dl, byte ptr [ecx + ebp]
// 007a6fbe  03c1                 add eax, ecx
// 007a6fc0  03cd                 add ecx, ebp
// 007a6fc2  3a10                 cmp dl, byte ptr [eax]
// 007a6fc4  57                   push edi
// 007a6fc5  8db802010000         lea edi, [eax + 0x102]
// 007a6fcb  0f8599000000         jne 0x7a706a
// 007a6fd1  8a5101               mov dl, byte ptr [ecx + 1]
// 007a6fd4  3a5001               cmp dl, byte ptr [eax + 1]
// 007a6fd7  0f858d000000         jne 0x7a706a
// 007a6fdd  83c002               add eax, 2
// 007a6fe0  83c102               add ecx, 2
// 007a6fe3  8a5001               mov dl, byte ptr [eax + 1]
// 007a6fe6  83c001               add eax, 1
// 007a6fe9  83c101               add ecx, 1
// 007a6fec  3a11                 cmp dl, byte ptr [ecx]
// 007a6fee  755f                 jne 0x7a704f
// 007a6ff0  8a5001               mov dl, byte ptr [eax + 1]
// 007a6ff3  83c001               add eax, 1
// 007a6ff6  83c101               add ecx, 1
// 007a6ff9  3a11                 cmp dl, byte ptr [ecx]
// 007a6ffb  7552                 jne 0x7a704f
// 007a6ffd  8a5001               mov dl, byte ptr [eax + 1]
// 007a7000  83c001               add eax, 1
// 007a7003  83c101               add ecx, 1
// 007a7006  3a11                 cmp dl, byte ptr [ecx]
// 007a7008  7545                 jne 0x7a704f
// 007a700a  8a5001               mov dl, byte ptr [eax + 1]
// 007a700d  83c001               add eax, 1
// 007a7010  83c101               add ecx, 1
// 007a7013  3a11                 cmp dl, byte ptr [ecx]
// 007a7015  7538                 jne 0x7a704f
// 007a7017  8a5001               mov dl, byte ptr [eax + 1]
// 007a701a  83c001               add eax, 1
// 007a701d  83c101               add ecx, 1
// 007a7020  3a11                 cmp dl, byte ptr [ecx]
// 007a7022  752b                 jne 0x7a704f
// 007a7024  8a5001               mov dl, byte ptr [eax + 1]
// 007a7027  83c001               add eax, 1
// 007a702a  83c101               add ecx, 1
// 007a702d  3a11                 cmp dl, byte ptr [ecx]
// 007a702f  751e                 jne 0x7a704f
// 007a7031  8a5001               mov dl, byte ptr [eax + 1]
// 007a7034  83c001               add eax, 1
// 007a7037  83c101               add ecx, 1
// 007a703a  3a11                 cmp dl, byte ptr [ecx]
// 007a703c  7511                 jne 0x7a704f
// 007a703e  8a5001               mov dl, byte ptr [eax + 1]
// 007a7041  83c001               add eax, 1
// 007a7044  83c101               add ecx, 1
// 007a7047  3a11                 cmp dl, byte ptr [ecx]
// 007a7049  7504                 jne 0x7a704f
// 007a704b  3bc7                 cmp eax, edi
// 007a704d  7294                 jb 0x7a6fe3
// 007a704f  2bc7                 sub eax, edi
// 007a7051  0502010000           add eax, 0x102
// 007a7056  83f803               cmp eax, 3
// 007a7059  7c0f                 jl 0x7a706a
// 007a705b  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 007a705e  3bc1                 cmp eax, ecx
// 007a7060  896e70               mov dword ptr [esi + 0x70], ebp
// 007a7063  760a                 jbe 0x7a706f
// 007a7065  5f                   pop edi
// 007a7066  8bc1                 mov eax, ecx
// 007a7068  5d                   pop ebp
// 007a7069  c3                   ret 
// 007a706a  b802000000           mov eax, 2
// 007a706f  5f                   pop edi
// 007a7070  5d                   pop ebp
// 007a7071  c3                   ret 
// library zlib-1.2.3/deflate.c (function _longest_match_fast)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
