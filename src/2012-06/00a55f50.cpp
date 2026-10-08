// roc 2012-06 00a55f50  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a55f50
//
// 00a55f50  51                   push ecx
// 00a55f51  53                   push ebx
// 00a55f52  55                   push ebp
// 00a55f53  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00a55f57  56                   push esi
// 00a55f58  8bf1                 mov esi, ecx
// 00a55f5a  8b4610               mov eax, dword ptr [esi + 0x10]
// 00a55f5d  034608               add eax, dword ptr [esi + 8]
// 00a55f60  8b16                 mov edx, dword ptr [esi]
// 00a55f62  8944240c             mov dword ptr [esp + 0xc], eax
// 00a55f66  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 00a55f6c  8b5804               mov ebx, dword ptr [eax + 4]
// 00a55f6f  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00a55f72  57                   push edi
// 00a55f73  55                   push ebp
// 00a55f74  ffd0                 call eax
// 00a55f76  8bf8                 mov edi, eax
// 00a55f78  0faffb               imul edi, ebx
// 00a55f7b  4b                   dec ebx
// 00a55f7c  0faf5e14             imul ebx, dword ptr [esi + 0x14]
// 00a55f80  8bcd                 mov ecx, ebp
// 00a55f82  03fb                 add edi, ebx
// 00a55f84  e8f757ffff           call 0xa4b780
// 00a55f89  83f805               cmp eax, 5
// 00a55f8c  7529                 jne 0xa55fb7
// 00a55f8e  8b555c               mov edx, dword ptr [ebp + 0x5c]
// 00a55f91  33c0                 xor eax, eax
// 00a55f93  85d2                 test edx, edx
// 00a55f95  7e20                 jle 0xa55fb7
// 00a55f97  85c0                 test eax, eax
// 00a55f99  7c0c                 jl 0xa55fa7
// 00a55f9b  3bc2                 cmp eax, edx
// 00a55f9d  7d08                 jge 0xa55fa7
// 00a55f9f  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 00a55fa2  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00a55fa5  eb02                 jmp 0xa55fa9
// 00a55fa7  33c9                 xor ecx, ecx
// 00a55fa9  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00a55fac  3bcf                 cmp ecx, edi
// 00a55fae  7e02                 jle 0xa55fb2
// 00a55fb0  8bf9                 mov edi, ecx
// 00a55fb2  40                   inc eax
// 00a55fb3  3bc2                 cmp eax, edx
// 00a55fb5  7ce0                 jl 0xa55f97
// 00a55fb7  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a55fbb  8d0417               lea eax, [edi + edx]
// 00a55fbe  5f                   pop edi
// 00a55fbf  5e                   pop esi
// 00a55fc0  5d                   pop ebp
// 00a55fc1  5b                   pop ebx
// 00a55fc2  59                   pop ecx
// 00a55fc3  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetHeaderHeight@CAppearanceSet@CXTPTabPaintManager@@QAEHPAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
