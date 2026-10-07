// roc 2011-06 0077d040  unit: seg_00770000  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077d040
//
// 0077d040  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0077d044  8b542404             mov edx, dword ptr [esp + 4]
// 0077d048  8b4214               mov eax, dword ptr [edx + 0x14]
// 0077d04b  85c9                 test ecx, ecx
// 0077d04d  7e23                 jle 0x77d072
// 0077d04f  56                   push esi
// 0077d050  8b7228               mov esi, dword ptr [edx + 0x28]
// 0077d053  57                   push edi
// 0077d054  3bc6                 cmp eax, esi
// 0077d056  7616                 jbe 0x77d06e
// 0077d058  8b7804               mov edi, dword ptr [eax + 4]
// 0077d05b  8b3f                 mov edi, dword ptr [edi]
// 0077d05d  49                   dec ecx
// 0077d05e  807f0600             cmp byte ptr [edi + 6], 0
// 0077d062  7503                 jne 0x77d067
// 0077d064  2b4814               sub ecx, dword ptr [eax + 0x14]
// 0077d067  83e818               sub eax, 0x18
// 0077d06a  85c9                 test ecx, ecx
// 0077d06c  7fe6                 jg 0x77d054
// 0077d06e  5f                   pop edi
// 0077d06f  5e                   pop esi
// 0077d070  85c9                 test ecx, ecx
// 0077d072  752b                 jne 0x77d09f
// 0077d074  8b5228               mov edx, dword ptr [edx + 0x28]
// 0077d077  3bc2                 cmp eax, edx
// 0077d079  7639                 jbe 0x77d0b4
// 0077d07b  2bc2                 sub eax, edx
// 0077d07d  8bd0                 mov edx, eax
// 0077d07f  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0077d084  f7ea                 imul edx
// 0077d086  c1fa02               sar edx, 2
// 0077d089  8bc2                 mov eax, edx
// 0077d08b  c1e81f               shr eax, 0x1f
// 0077d08e  03c2                 add eax, edx
// 0077d090  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0077d094  b901000000           mov ecx, 1
// 0077d099  894260               mov dword ptr [edx + 0x60], eax
// 0077d09c  8bc1                 mov eax, ecx
// 0077d09e  c3                   ret 
// 0077d09f  85c9                 test ecx, ecx
// 0077d0a1  7d11                 jge 0x77d0b4
// 0077d0a3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0077d0a7  b801000000           mov eax, 1
// 0077d0ac  c7416000000000       mov dword ptr [ecx + 0x60], 0
// 0077d0b3  c3                   ret 
// 0077d0b4  33c0                 xor eax, eax
// 0077d0b6  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_getstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
