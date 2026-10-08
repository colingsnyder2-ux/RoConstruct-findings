// from server: 100% by auto
// roc 2007-08 006f58e0  unit: CXTPControlCustom  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f58e0
//
// 006f58e0  55                   push ebp
// 006f58e1  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006f58e5  56                   push esi
// 006f58e6  57                   push edi
// 006f58e7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006f58eb  8bb7a0000000         mov esi, dword ptr [edi + 0xa0]
// 006f58f1  55                   push ebp
// 006f58f2  8bce                 mov ecx, esi
// 006f58f4  e871b0f3ff           call 0x63096a
// 006f58f9  85c0                 test eax, eax
// 006f58fb  740e                 je 0x6f590b
// 006f58fd  55                   push ebp
// 006f58fe  8bce                 mov ecx, esi
// 006f5900  e865b0f3ff           call 0x63096a
// 006f5905  5f                   pop edi
// 006f5906  5e                   pop esi
// 006f5907  5d                   pop ebp
// 006f5908  c20800               ret 8
// 006f590b  33f6                 xor esi, esi
// 006f590d  39b784000000         cmp dword ptr [edi + 0x84], esi
// 006f5913  53                   push ebx
// 006f5914  7e21                 jle 0x6f5937
// 006f5916  56                   push esi
// 006f5917  8bcf                 mov ecx, edi
// 006f5919  e8f2cff3ff           call 0x632910
// 006f591e  8bd8                 mov ebx, eax
// 006f5920  55                   push ebp
// 006f5921  8bcb                 mov ecx, ebx
// 006f5923  e842b0f3ff           call 0x63096a
// 006f5928  85c0                 test eax, eax
// 006f592a  7514                 jne 0x6f5940
// 006f592c  83c601               add esi, 1
// 006f592f  3bb784000000         cmp esi, dword ptr [edi + 0x84]
// 006f5935  7cdf                 jl 0x6f5916
// 006f5937  5b                   pop ebx
// 006f5938  5f                   pop edi
// 006f5939  5e                   pop esi
// 006f593a  33c0                 xor eax, eax
// 006f593c  5d                   pop ebp
// 006f593d  c20800               ret 8
// 006f5940  55                   push ebp
// 006f5941  8bcb                 mov ecx, ebx
// 006f5943  e822b0f3ff           call 0x63096a
// 006f5948  5b                   pop ebx
// 006f5949  5f                   pop edi
// 006f594a  5e                   pop esi
// 006f594b  5d                   pop ebp
// 006f594c  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlCustom.cpp (function ?FindChildWindow@CXTPControlCustom@@AAEPAVCWnd@@PAVCXTPCommandBars@@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlCustom.cpp
