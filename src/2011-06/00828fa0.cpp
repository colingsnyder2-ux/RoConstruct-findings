// roc 2011-06 00828fa0  unit: CXTPCommandBar  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00828fa0
//
// 00828fa0  57                   push edi
// 00828fa1  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00828fa5  85ff                 test edi, edi
// 00828fa7  7507                 jne 0x828fb0
// 00828fa9  83c8ff               or eax, 0xffffffff
// 00828fac  5f                   pop edi
// 00828fad  c21000               ret 0x10
// 00828fb0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00828fb4  53                   push ebx
// 00828fb5  56                   push esi
// 00828fb6  8b742410             mov esi, dword ptr [esp + 0x10]
// 00828fba  8b562c               mov edx, dword ptr [esi + 0x2c]
// 00828fbd  3bc2                 cmp eax, edx
// 00828fbf  7d33                 jge 0x828ff4
// 00828fc1  85c0                 test eax, eax
// 00828fc3  7c0c                 jl 0x828fd1
// 00828fc5  3bc2                 cmp eax, edx
// 00828fc7  7d08                 jge 0x828fd1
// 00828fc9  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00828fcc  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00828fcf  eb02                 jmp 0x828fd3
// 00828fd1  33c9                 xor ecx, ecx
// 00828fd3  8b9984000000         mov ebx, dword ptr [ecx + 0x84]
// 00828fd9  3b9f84000000         cmp ebx, dword ptr [edi + 0x84]
// 00828fdf  750e                 jne 0x828fef
// 00828fe1  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 00828fe7  3b8ffc000000         cmp ecx, dword ptr [edi + 0xfc]
// 00828fed  7408                 je 0x828ff7
// 00828fef  40                   inc eax
// 00828ff0  3bc2                 cmp eax, edx
// 00828ff2  7ccd                 jl 0x828fc1
// 00828ff4  83c8ff               or eax, 0xffffffff
// 00828ff7  5e                   pop esi
// 00828ff8  5b                   pop ebx
// 00828ff9  5f                   pop edi
// 00828ffa  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?_FindNearest@CXTPToolBar@@ABEHPAVCXTPControls@@PAVCXTPControl@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
