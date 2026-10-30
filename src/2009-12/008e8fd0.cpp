// roc 2009-12 008e8fd0  unit: CXTPTabPaintManager::CColorSetWinXP  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e8fd0
//
// 008e8fd0  55                   push ebp
// 008e8fd1  56                   push esi
// 008e8fd2  8bf1                 mov esi, ecx
// 008e8fd4  57                   push edi
// 008e8fd5  8dbe14020000         lea edi, [esi + 0x214]
// 008e8fdb  8bcf                 mov ecx, edi
// 008e8fdd  e8de2bf8ff           call 0x86bbc0
// 008e8fe2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008e8fe6  85c0                 test eax, eax
// 008e8fe8  7436                 je 0x8e9020
// 008e8fea  8b6960               mov ebp, dword ptr [ecx + 0x60]
// 008e8fed  394d04               cmp dword ptr [ebp + 4], ecx
// 008e8ff0  752e                 jne 0x8e9020
// 008e8ff2  8b442410             mov eax, dword ptr [esp + 0x10]
// 008e8ff6  85c0                 test eax, eax
// 008e8ff8  7403                 je 0x8e8ffd
// 008e8ffa  8b4004               mov eax, dword ptr [eax + 4]
// 008e8ffd  6a00                 push 0
// 008e8fff  8d542418             lea edx, [esp + 0x18]
// 008e9003  52                   push edx
// 008e9004  33d2                 xor edx, edx
// 008e9006  394d08               cmp dword ptr [ebp + 8], ecx
// 008e9009  8bcf                 mov ecx, edi
// 008e900b  0f94c2               sete dl
// 008e900e  83c205               add edx, 5
// 008e9011  52                   push edx
// 008e9012  6a01                 push 1
// 008e9014  50                   push eax
// 008e9015  e82628f8ff           call 0x86b840
// 008e901a  5f                   pop edi
// 008e901b  5e                   pop esi
// 008e901c  5d                   pop ebp
// 008e901d  c21800               ret 0x18
// 008e9020  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e9024  51                   push ecx
// 008e9025  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008e9029  83ec10               sub esp, 0x10
// 008e902c  8bc4                 mov eax, esp
// 008e902e  8908                 mov dword ptr [eax], ecx
// 008e9030  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008e9034  895004               mov dword ptr [eax + 4], edx
// 008e9037  8b542434             mov edx, dword ptr [esp + 0x34]
// 008e903b  894808               mov dword ptr [eax + 8], ecx
// 008e903e  89500c               mov dword ptr [eax + 0xc], edx
// 008e9041  8b442424             mov eax, dword ptr [esp + 0x24]
// 008e9045  50                   push eax
// 008e9046  8bce                 mov ecx, esi
// 008e9048  e853e7ffff           call 0x8e77a0
// 008e904d  5f                   pop edi
// 008e904e  5e                   pop esi
// 008e904f  5d                   pop ebp
// 008e9050  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillStateButton@CColorSetWinXP@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
