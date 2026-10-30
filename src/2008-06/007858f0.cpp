// from server: 100% by auto
// roc 2008-06 007858f0  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007858f0
//
// 007858f0  51                   push ecx
// 007858f1  53                   push ebx
// 007858f2  55                   push ebp
// 007858f3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007858f7  56                   push esi
// 007858f8  8bf1                 mov esi, ecx
// 007858fa  8b4610               mov eax, dword ptr [esi + 0x10]
// 007858fd  034608               add eax, dword ptr [esi + 8]
// 00785900  8b16                 mov edx, dword ptr [esi]
// 00785902  8944240c             mov dword ptr [esp + 0xc], eax
// 00785906  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 0078590c  8b5804               mov ebx, dword ptr [eax + 4]
// 0078590f  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00785912  57                   push edi
// 00785913  55                   push ebp
// 00785914  ffd0                 call eax
// 00785916  8bf8                 mov edi, eax
// 00785918  0faffb               imul edi, ebx
// 0078591b  4b                   dec ebx
// 0078591c  0faf5e14             imul ebx, dword ptr [esi + 0x14]
// 00785920  8bcd                 mov ecx, ebp
// 00785922  03fb                 add edi, ebx
// 00785924  e83757ffff           call 0x77b060
// 00785929  83f805               cmp eax, 5
// 0078592c  7529                 jne 0x785957
// 0078592e  8b555c               mov edx, dword ptr [ebp + 0x5c]
// 00785931  33c0                 xor eax, eax
// 00785933  85d2                 test edx, edx
// 00785935  7e20                 jle 0x785957
// 00785937  85c0                 test eax, eax
// 00785939  7c0c                 jl 0x785947
// 0078593b  3bc2                 cmp eax, edx
// 0078593d  7d08                 jge 0x785947
// 0078593f  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 00785942  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00785945  eb02                 jmp 0x785949
// 00785947  33c9                 xor ecx, ecx
// 00785949  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0078594c  3bcf                 cmp ecx, edi
// 0078594e  7e02                 jle 0x785952
// 00785950  8bf9                 mov edi, ecx
// 00785952  40                   inc eax
// 00785953  3bc2                 cmp eax, edx
// 00785955  7ce0                 jl 0x785937
// 00785957  8b542410             mov edx, dword ptr [esp + 0x10]
// 0078595b  8d0417               lea eax, [edi + edx]
// 0078595e  5f                   pop edi
// 0078595f  5e                   pop esi
// 00785960  5d                   pop ebp
// 00785961  5b                   pop ebx
// 00785962  59                   pop ecx
// 00785963  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetHeaderHeight@CAppearanceSet@CXTPTabPaintManager@@QAEHPAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
