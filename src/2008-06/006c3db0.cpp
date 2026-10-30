// from server: 100% by auto
// roc 2008-06 006c3db0  unit: CXTPCommandBar  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c3db0
//
// 006c3db0  57                   push edi
// 006c3db1  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006c3db5  85ff                 test edi, edi
// 006c3db7  7507                 jne 0x6c3dc0
// 006c3db9  83c8ff               or eax, 0xffffffff
// 006c3dbc  5f                   pop edi
// 006c3dbd  c21000               ret 0x10
// 006c3dc0  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c3dc4  53                   push ebx
// 006c3dc5  56                   push esi
// 006c3dc6  8b742410             mov esi, dword ptr [esp + 0x10]
// 006c3dca  8b562c               mov edx, dword ptr [esi + 0x2c]
// 006c3dcd  3bc2                 cmp eax, edx
// 006c3dcf  7d33                 jge 0x6c3e04
// 006c3dd1  85c0                 test eax, eax
// 006c3dd3  7c0c                 jl 0x6c3de1
// 006c3dd5  3bc2                 cmp eax, edx
// 006c3dd7  7d08                 jge 0x6c3de1
// 006c3dd9  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 006c3ddc  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 006c3ddf  eb02                 jmp 0x6c3de3
// 006c3de1  33c9                 xor ecx, ecx
// 006c3de3  8b9984000000         mov ebx, dword ptr [ecx + 0x84]
// 006c3de9  3b9f84000000         cmp ebx, dword ptr [edi + 0x84]
// 006c3def  750e                 jne 0x6c3dff
// 006c3df1  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 006c3df7  3b8ffc000000         cmp ecx, dword ptr [edi + 0xfc]
// 006c3dfd  7408                 je 0x6c3e07
// 006c3dff  40                   inc eax
// 006c3e00  3bc2                 cmp eax, edx
// 006c3e02  7ccd                 jl 0x6c3dd1
// 006c3e04  83c8ff               or eax, 0xffffffff
// 006c3e07  5e                   pop esi
// 006c3e08  5b                   pop ebx
// 006c3e09  5f                   pop edi
// 006c3e0a  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?_FindNearest@CXTPToolBar@@ABEHPAVCXTPControls@@PAVCXTPControl@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
