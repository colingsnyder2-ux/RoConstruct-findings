// roc 2012-06 009a15c0  unit: CXTPCommandBar  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a15c0
//
// 009a15c0  57                   push edi
// 009a15c1  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009a15c5  85ff                 test edi, edi
// 009a15c7  7507                 jne 0x9a15d0
// 009a15c9  83c8ff               or eax, 0xffffffff
// 009a15cc  5f                   pop edi
// 009a15cd  c21000               ret 0x10
// 009a15d0  8b442410             mov eax, dword ptr [esp + 0x10]
// 009a15d4  53                   push ebx
// 009a15d5  56                   push esi
// 009a15d6  8b742410             mov esi, dword ptr [esp + 0x10]
// 009a15da  8b562c               mov edx, dword ptr [esi + 0x2c]
// 009a15dd  3bc2                 cmp eax, edx
// 009a15df  7d33                 jge 0x9a1614
// 009a15e1  85c0                 test eax, eax
// 009a15e3  7c0c                 jl 0x9a15f1
// 009a15e5  3bc2                 cmp eax, edx
// 009a15e7  7d08                 jge 0x9a15f1
// 009a15e9  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 009a15ec  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 009a15ef  eb02                 jmp 0x9a15f3
// 009a15f1  33c9                 xor ecx, ecx
// 009a15f3  8b9984000000         mov ebx, dword ptr [ecx + 0x84]
// 009a15f9  3b9f84000000         cmp ebx, dword ptr [edi + 0x84]
// 009a15ff  750e                 jne 0x9a160f
// 009a1601  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 009a1607  3b8ffc000000         cmp ecx, dword ptr [edi + 0xfc]
// 009a160d  7408                 je 0x9a1617
// 009a160f  40                   inc eax
// 009a1610  3bc2                 cmp eax, edx
// 009a1612  7ccd                 jl 0x9a15e1
// 009a1614  83c8ff               or eax, 0xffffffff
// 009a1617  5e                   pop esi
// 009a1618  5b                   pop ebx
// 009a1619  5f                   pop edi
// 009a161a  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?_FindNearest@CXTPToolBar@@ABEHPAVCXTPControls@@PAVCXTPControl@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
