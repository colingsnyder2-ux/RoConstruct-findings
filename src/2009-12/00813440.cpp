// roc 2009-12 00813440  unit: CXTPCommandBar  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00813440
//
// 00813440  57                   push edi
// 00813441  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00813445  85ff                 test edi, edi
// 00813447  7507                 jne 0x813450
// 00813449  83c8ff               or eax, 0xffffffff
// 0081344c  5f                   pop edi
// 0081344d  c21000               ret 0x10
// 00813450  8b442410             mov eax, dword ptr [esp + 0x10]
// 00813454  53                   push ebx
// 00813455  56                   push esi
// 00813456  8b742410             mov esi, dword ptr [esp + 0x10]
// 0081345a  8b562c               mov edx, dword ptr [esi + 0x2c]
// 0081345d  3bc2                 cmp eax, edx
// 0081345f  7d33                 jge 0x813494
// 00813461  85c0                 test eax, eax
// 00813463  7c0c                 jl 0x813471
// 00813465  3bc2                 cmp eax, edx
// 00813467  7d08                 jge 0x813471
// 00813469  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0081346c  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 0081346f  eb02                 jmp 0x813473
// 00813471  33c9                 xor ecx, ecx
// 00813473  8b9984000000         mov ebx, dword ptr [ecx + 0x84]
// 00813479  3b9f84000000         cmp ebx, dword ptr [edi + 0x84]
// 0081347f  750e                 jne 0x81348f
// 00813481  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 00813487  3b8ffc000000         cmp ecx, dword ptr [edi + 0xfc]
// 0081348d  7408                 je 0x813497
// 0081348f  40                   inc eax
// 00813490  3bc2                 cmp eax, edx
// 00813492  7ccd                 jl 0x813461
// 00813494  83c8ff               or eax, 0xffffffff
// 00813497  5e                   pop esi
// 00813498  5b                   pop ebx
// 00813499  5f                   pop edi
// 0081349a  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?_FindNearest@CXTPToolBar@@ABEHPAVCXTPControls@@PAVCXTPControl@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
