// roc 2010-06 007f7d50  unit: CXTPPopupBar  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f7d50
//
// 007f7d50  83ec10               sub esp, 0x10
// 007f7d53  53                   push ebx
// 007f7d54  8b1de0bb9e00         mov ebx, dword ptr [0x9ebbe0]
// 007f7d5a  55                   push ebp
// 007f7d5b  56                   push esi
// 007f7d5c  57                   push edi
// 007f7d5d  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007f7d61  8b4704               mov eax, dword ptr [edi + 4]
// 007f7d64  8be9                 mov ebp, ecx
// 007f7d66  8b0f                 mov ecx, dword ptr [edi]
// 007f7d68  50                   push eax
// 007f7d69  51                   push ecx
// 007f7d6a  8db5c4010000         lea esi, [ebp + 0x1c4]
// 007f7d70  56                   push esi
// 007f7d71  ffd3                 call ebx
// 007f7d73  85c0                 test eax, eax
// 007f7d75  744d                 je 0x7f7dc4
// 007f7d77  83bdd401000002       cmp dword ptr [ebp + 0x1d4], 2
// 007f7d7e  750f                 jne 0x7f7d8f
// 007f7d80  5f                   pop edi
// 007f7d81  5e                   pop esi
// 007f7d82  5d                   pop ebp
// 007f7d83  b801000000           mov eax, 1
// 007f7d88  5b                   pop ebx
// 007f7d89  83c410               add esp, 0x10
// 007f7d8c  c20400               ret 4
// 007f7d8f  8b4e08               mov ecx, dword ptr [esi + 8]
// 007f7d92  8b16                 mov edx, dword ptr [esi]
// 007f7d94  8b4604               mov eax, dword ptr [esi + 4]
// 007f7d97  8b760c               mov esi, dword ptr [esi + 0xc]
// 007f7d9a  89442414             mov dword ptr [esp + 0x14], eax
// 007f7d9e  2bc6                 sub eax, esi
// 007f7da0  03c1                 add eax, ecx
// 007f7da2  89542410             mov dword ptr [esp + 0x10], edx
// 007f7da6  89442410             mov dword ptr [esp + 0x10], eax
// 007f7daa  8b4704               mov eax, dword ptr [edi + 4]
// 007f7dad  894c2418             mov dword ptr [esp + 0x18], ecx
// 007f7db1  8b0f                 mov ecx, dword ptr [edi]
// 007f7db3  50                   push eax
// 007f7db4  51                   push ecx
// 007f7db5  8d542418             lea edx, [esp + 0x18]
// 007f7db9  52                   push edx
// 007f7dba  89742428             mov dword ptr [esp + 0x28], esi
// 007f7dbe  ffd3                 call ebx
// 007f7dc0  85c0                 test eax, eax
// 007f7dc2  75bc                 jne 0x7f7d80
// 007f7dc4  5f                   pop edi
// 007f7dc5  5e                   pop esi
// 007f7dc6  5d                   pop ebp
// 007f7dc7  33c0                 xor eax, eax
// 007f7dc9  5b                   pop ebx
// 007f7dca  83c410               add esp, 0x10
// 007f7dcd  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?_MouseInResizeGripper@CXTPPopupBar@@AAEHABUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
