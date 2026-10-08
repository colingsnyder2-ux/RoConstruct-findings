// roc 2010-06 008a8f10  unit: CXTCaptionButtonTheme  size: 293 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a8f10
//
// 008a8f10  83ec10               sub esp, 0x10
// 008a8f13  55                   push ebp
// 008a8f14  56                   push esi
// 008a8f15  8b742428             mov esi, dword ptr [esp + 0x28]
// 008a8f19  8be9                 mov ebp, ecx
// 008a8f1b  85f6                 test esi, esi
// 008a8f1d  0f840a010000         je 0x8a902d
// 008a8f23  837d1400             cmp dword ptr [ebp + 0x14], 0
// 008a8f27  0f8400010000         je 0x8a902d
// 008a8f2d  57                   push edi
// 008a8f2e  8bce                 mov ecx, esi
// 008a8f30  e8eb09ffff           call 0x899920
// 008a8f35  8bf8                 mov edi, eax
// 008a8f37  85ff                 test edi, edi
// 008a8f39  0f84ed000000         je 0x8a902c
// 008a8f3f  53                   push ebx
// 008a8f40  8b5d00               mov ebx, dword ptr [ebp]
// 008a8f43  56                   push esi
// 008a8f44  8bce                 mov ecx, esi
// 008a8f46  e88507ffff           call 0x8996d0
// 008a8f4b  8b542430             mov edx, dword ptr [esp + 0x30]
// 008a8f4f  85c0                 test eax, eax
// 008a8f51  0f95c0               setne al
// 008a8f54  0fb6c8               movzx ecx, al
// 008a8f57  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008a8f5b  51                   push ecx
// 008a8f5c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008a8f60  52                   push edx
// 008a8f61  50                   push eax
// 008a8f62  8b4350               mov eax, dword ptr [ebx + 0x50]
// 008a8f65  51                   push ecx
// 008a8f66  8d542424             lea edx, [esp + 0x24]
// 008a8f6a  52                   push edx
// 008a8f6b  8bcd                 mov ecx, ebp
// 008a8f6d  ffd0                 call eax
// 008a8f6f  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 008a8f73  8a5c2428             mov bl, byte ptr [esp + 0x28]
// 008a8f77  7509                 jne 0x8a8f82
// 008a8f79  f6c301               test bl, 1
// 008a8f7c  7504                 jne 0x8a8f82
// 008a8f7e  33ed                 xor ebp, ebp
// 008a8f80  eb0d                 jmp 0x8a8f8f
// 008a8f82  bd01000000           mov ebp, 1
// 008a8f87  016c2410             add dword ptr [esp + 0x10], ebp
// 008a8f8b  016c2414             add dword ptr [esp + 0x14], ebp
// 008a8f8f  f6c304               test bl, 4
// 008a8f92  741f                 je 0x8a8fb3
// 008a8f94  8d4c2418             lea ecx, [esp + 0x18]
// 008a8f98  51                   push ecx
// 008a8f99  8bce                 mov ecx, esi
// 008a8f9b  e86011ffff           call 0x89a100
// 008a8fa0  8b5004               mov edx, dword ptr [eax + 4]
// 008a8fa3  8b00                 mov eax, dword ptr [eax]
// 008a8fa5  52                   push edx
// 008a8fa6  50                   push eax
// 008a8fa7  6a01                 push 1
// 008a8fa9  8bcf                 mov ecx, edi
// 008a8fab  e890b2f1ff           call 0x7c4240
// 008a8fb0  50                   push eax
// 008a8fb1  eb62                 jmp 0x8a9015
// 008a8fb3  8bce                 mov ecx, esi
// 008a8fb5  e8d6f7feff           call 0x898790
// 008a8fba  85c0                 test eax, eax
// 008a8fbc  7521                 jne 0x8a8fdf
// 008a8fbe  85ed                 test ebp, ebp
// 008a8fc0  751d                 jne 0x8a8fdf
// 008a8fc2  8d4c2418             lea ecx, [esp + 0x18]
// 008a8fc6  51                   push ecx
// 008a8fc7  8bce                 mov ecx, esi
// 008a8fc9  e83211ffff           call 0x89a100
// 008a8fce  8b5004               mov edx, dword ptr [eax + 4]
// 008a8fd1  8b00                 mov eax, dword ptr [eax]
// 008a8fd3  52                   push edx
// 008a8fd4  50                   push eax
// 008a8fd5  8bcf                 mov ecx, edi
// 008a8fd7  e80443f1ff           call 0x7bd2e0
// 008a8fdc  50                   push eax
// 008a8fdd  eb36                 jmp 0x8a9015
// 008a8fdf  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 008a8fe3  8bcf                 mov ecx, edi
// 008a8fe5  7407                 je 0x8a8fee
// 008a8fe7  e8d45cf1ff           call 0x7becc0
// 008a8fec  eb11                 jmp 0x8a8fff
// 008a8fee  f6c301               test bl, 1
// 008a8ff1  7407                 je 0x8a8ffa
// 008a8ff3  e8e85cf1ff           call 0x7bece0
// 008a8ff8  eb05                 jmp 0x8a8fff
// 008a8ffa  e8a15cf1ff           call 0x7beca0
// 008a8fff  8d4c2418             lea ecx, [esp + 0x18]
// 008a9003  51                   push ecx
// 008a9004  8bce                 mov ecx, esi
// 008a9006  8bd8                 mov ebx, eax
// 008a9008  e8f310ffff           call 0x89a100
// 008a900d  8b5004               mov edx, dword ptr [eax + 4]
// 008a9010  8b00                 mov eax, dword ptr [eax]
// 008a9012  52                   push edx
// 008a9013  50                   push eax
// 008a9014  53                   push ebx
// 008a9015  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008a9019  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008a901d  8b442430             mov eax, dword ptr [esp + 0x30]
// 008a9021  51                   push ecx
// 008a9022  52                   push edx
// 008a9023  50                   push eax
// 008a9024  8bcf                 mov ecx, edi
// 008a9026  e825bff1ff           call 0x7c4f50
// 008a902b  5b                   pop ebx
// 008a902c  5f                   pop edi
// 008a902d  5e                   pop esi
// 008a902e  5d                   pop ebp
// 008a902f  83c410               add esp, 0x10
// 008a9032  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonIcon@CXTButtonTheme@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
