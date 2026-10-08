// roc 2007-03 00520d90  unit: seg_00520000  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00520d90
//
// 00520d90  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00520d94  53                   push ebx
// 00520d95  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00520d99  3bc3                 cmp eax, ebx
// 00520d9b  57                   push edi
// 00520d9c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00520da0  7d22                 jge 0x520dc4
// 00520da2  53                   push ebx
// 00520da3  50                   push eax
// 00520da4  8b442418             mov eax, dword ptr [esp + 0x18]
// 00520da8  50                   push eax
// 00520da9  57                   push edi
// 00520daa  e8b1feffff           call 0x520c60
// 00520daf  83c410               add esp, 0x10
// 00520db2  84c0                 test al, al
// 00520db4  7506                 jne 0x520dbc
// 00520db6  5f                   pop edi
// 00520db7  83c8ff               or eax, 0xffffffff
// 00520dba  5b                   pop ebx
// 00520dbb  c3                   ret 
// 00520dbc  8b5708               mov edx, dword ptr [edi + 8]
// 00520dbf  8b470c               mov eax, dword ptr [edi + 0xc]
// 00520dc2  eb04                 jmp 0x520dc8
// 00520dc4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00520dc8  55                   push ebp
// 00520dc9  56                   push esi
// 00520dca  2bc3                 sub eax, ebx
// 00520dcc  8bc8                 mov ecx, eax
// 00520dce  8bf2                 mov esi, edx
// 00520dd0  d3fe                 sar esi, cl
// 00520dd2  8bcb                 mov ecx, ebx
// 00520dd4  bd01000000           mov ebp, 1
// 00520dd9  d3e5                 shl ebp, cl
// 00520ddb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00520ddf  83ed01               sub ebp, 1
// 00520de2  23f5                 and esi, ebp
// 00520de4  3b3499               cmp esi, dword ptr [ecx + ebx*4]
// 00520de7  7e3f                 jle 0x520e28
// 00520de9  8da42400000000       lea esp, [esp]
// 00520df0  03f6                 add esi, esi
// 00520df2  83f801               cmp eax, 1
// 00520df5  7d17                 jge 0x520e0e
// 00520df7  6a01                 push 1
// 00520df9  50                   push eax
// 00520dfa  52                   push edx
// 00520dfb  57                   push edi
// 00520dfc  e85ffeffff           call 0x520c60
// 00520e01  83c410               add esp, 0x10
// 00520e04  84c0                 test al, al
// 00520e06  744e                 je 0x520e56
// 00520e08  8b5708               mov edx, dword ptr [edi + 8]
// 00520e0b  8b470c               mov eax, dword ptr [edi + 0xc]
// 00520e0e  83e801               sub eax, 1
// 00520e11  8bc8                 mov ecx, eax
// 00520e13  8bea                 mov ebp, edx
// 00520e15  d3fd                 sar ebp, cl
// 00520e17  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00520e1b  83c301               add ebx, 1
// 00520e1e  83e501               and ebp, 1
// 00520e21  0bf5                 or esi, ebp
// 00520e23  3b3499               cmp esi, dword ptr [ecx + ebx*4]
// 00520e26  7fc8                 jg 0x520df0
// 00520e28  83fb10               cmp ebx, 0x10
// 00520e2b  895708               mov dword ptr [edi + 8], edx
// 00520e2e  89470c               mov dword ptr [edi + 0xc], eax
// 00520e31  7e2b                 jle 0x520e5e
// 00520e33  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00520e36  8b11                 mov edx, dword ptr [ecx]
// 00520e38  c7421476000000       mov dword ptr [edx + 0x14], 0x76
// 00520e3f  8b7f10               mov edi, dword ptr [edi + 0x10]
// 00520e42  8b07                 mov eax, dword ptr [edi]
// 00520e44  8b4804               mov ecx, dword ptr [eax + 4]
// 00520e47  6aff                 push -1
// 00520e49  57                   push edi
// 00520e4a  ffd1                 call ecx
// 00520e4c  83c408               add esp, 8
// 00520e4f  5e                   pop esi
// 00520e50  5d                   pop ebp
// 00520e51  5f                   pop edi
// 00520e52  33c0                 xor eax, eax
// 00520e54  5b                   pop ebx
// 00520e55  c3                   ret 
// 00520e56  5e                   pop esi
// 00520e57  5d                   pop ebp
// 00520e58  5f                   pop edi
// 00520e59  83c8ff               or eax, 0xffffffff
// 00520e5c  5b                   pop ebx
// 00520e5d  c3                   ret 
// 00520e5e  8b549948             mov edx, dword ptr [ecx + ebx*4 + 0x48]
// 00520e62  03918c000000         add edx, dword ptr [ecx + 0x8c]
// 00520e68  0fb6443211           movzx eax, byte ptr [edx + esi + 0x11]
// 00520e6d  5e                   pop esi
// 00520e6e  5d                   pop ebp
// 00520e6f  5f                   pop edi
// 00520e70  5b                   pop ebx
// 00520e71  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_huff_decode)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
