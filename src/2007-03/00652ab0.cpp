// roc 2007-03 00652ab0  unit: seg_00650000  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00652ab0
//
// 00652ab0  83ec10               sub esp, 0x10
// 00652ab3  56                   push esi
// 00652ab4  8bf1                 mov esi, ecx
// 00652ab6  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00652ab9  e806810e00           call 0x73abc4
// 00652abe  a900020000           test eax, 0x200
// 00652ac3  0f848b000000         je 0x652b54
// 00652ac9  837c241855           cmp dword ptr [esp + 0x18], 0x55
// 00652ace  0f8580000000         jne 0x652b54
// 00652ad4  837e1400             cmp dword ptr [esi + 0x14], 0
// 00652ad8  7464                 je 0x652b3e
// 00652ada  53                   push ebx
// 00652adb  57                   push edi
// 00652adc  ff1570ef7700         call dword ptr [0x77ef70]
// 00652ae2  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00652ae5  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00652ae8  0fbff8               movsx edi, ax
// 00652aeb  c1e810               shr eax, 0x10
// 00652aee  0fbfd8               movsx ebx, ax
// 00652af1  8d44240c             lea eax, [esp + 0xc]
// 00652af5  50                   push eax
// 00652af6  52                   push edx
// 00652af7  ff155ced7700         call dword ptr [0x77ed5c]
// 00652afd  53                   push ebx
// 00652afe  57                   push edi
// 00652aff  8d442414             lea eax, [esp + 0x14]
// 00652b03  50                   push eax
// 00652b04  ff1598ed7700         call dword ptr [0x77ed98]
// 00652b0a  85c0                 test eax, eax
// 00652b0c  5f                   pop edi
// 00652b0d  5b                   pop ebx
// 00652b0e  754c                 jne 0x652b5c
// 00652b10  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00652b13  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00652b16  6a55                 push 0x55
// 00652b18  52                   push edx
// 00652b19  ff155cee7700         call dword ptr [0x77ee5c]
// 00652b1f  8b4634               mov eax, dword ptr [esi + 0x34]
// 00652b22  6a00                 push 0
// 00652b24  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00652b2b  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00652b2e  6a00                 push 0
// 00652b30  51                   push ecx
// 00652b31  ff1554ee7700         call dword ptr [0x77ee54]
// 00652b37  5e                   pop esi
// 00652b38  83c410               add esp, 0x10
// 00652b3b  c20400               ret 4
// 00652b3e  8b5634               mov edx, dword ptr [esi + 0x34]
// 00652b41  8b4220               mov eax, dword ptr [edx + 0x20]
// 00652b44  6a55                 push 0x55
// 00652b46  50                   push eax
// 00652b47  ff155cee7700         call dword ptr [0x77ee5c]
// 00652b4d  5e                   pop esi
// 00652b4e  83c410               add esp, 0x10
// 00652b51  c20400               ret 4
// 00652b54  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00652b57  e876bbfcff           call 0x61e6d2
// 00652b5c  5e                   pop esi
// 00652b5d  83c410               add esp, 0x10
// 00652b60  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?OnTimer@CXTTreeBase@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
