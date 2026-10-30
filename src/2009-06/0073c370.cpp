// roc 2009-06 0073c370  unit: CXTPCommandBar  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073c370
//
// 0073c370  57                   push edi
// 0073c371  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0073c375  85ff                 test edi, edi
// 0073c377  7507                 jne 0x73c380
// 0073c379  83c8ff               or eax, 0xffffffff
// 0073c37c  5f                   pop edi
// 0073c37d  c21000               ret 0x10
// 0073c380  8b442410             mov eax, dword ptr [esp + 0x10]
// 0073c384  53                   push ebx
// 0073c385  56                   push esi
// 0073c386  8b742410             mov esi, dword ptr [esp + 0x10]
// 0073c38a  8b562c               mov edx, dword ptr [esi + 0x2c]
// 0073c38d  3bc2                 cmp eax, edx
// 0073c38f  7d33                 jge 0x73c3c4
// 0073c391  85c0                 test eax, eax
// 0073c393  7c0c                 jl 0x73c3a1
// 0073c395  3bc2                 cmp eax, edx
// 0073c397  7d08                 jge 0x73c3a1
// 0073c399  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0073c39c  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 0073c39f  eb02                 jmp 0x73c3a3
// 0073c3a1  33c9                 xor ecx, ecx
// 0073c3a3  8b9984000000         mov ebx, dword ptr [ecx + 0x84]
// 0073c3a9  3b9f84000000         cmp ebx, dword ptr [edi + 0x84]
// 0073c3af  750e                 jne 0x73c3bf
// 0073c3b1  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 0073c3b7  3b8ffc000000         cmp ecx, dword ptr [edi + 0xfc]
// 0073c3bd  7408                 je 0x73c3c7
// 0073c3bf  40                   inc eax
// 0073c3c0  3bc2                 cmp eax, edx
// 0073c3c2  7ccd                 jl 0x73c391
// 0073c3c4  83c8ff               or eax, 0xffffffff
// 0073c3c7  5e                   pop esi
// 0073c3c8  5b                   pop ebx
// 0073c3c9  5f                   pop edi
// 0073c3ca  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?_FindNearest@CXTPToolBar@@ABEHPAVCXTPControls@@PAVCXTPControl@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
