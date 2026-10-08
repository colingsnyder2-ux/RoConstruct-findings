// from server: 100% by auto
// roc 2011-06 00864d80  unit: CXTPTabClientWnd::CSingleWorkspace  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00864d80
//
// 00864d80  53                   push ebx
// 00864d81  55                   push ebp
// 00864d82  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00864d86  56                   push esi
// 00864d87  8b7504               mov esi, dword ptr [ebp + 4]
// 00864d8a  8bd9                 mov ebx, ecx
// 00864d8c  81fe01020000         cmp esi, 0x201
// 00864d92  7420                 je 0x864db4
// 00864d94  81fe04020000         cmp esi, 0x204
// 00864d9a  7418                 je 0x864db4
// 00864d9c  81fe07020000         cmp esi, 0x207
// 00864da2  7410                 je 0x864db4
// 00864da4  81fe03020000         cmp esi, 0x203
// 00864daa  7408                 je 0x864db4
// 00864dac  81fe06020000         cmp esi, 0x206
// 00864db2  752a                 jne 0x864dde
// 00864db4  57                   push edi
// 00864db5  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00864db8  e88f55faff           call 0x80a34c
// 00864dbd  8b4020               mov eax, dword ptr [eax + 0x20]
// 00864dc0  57                   push edi
// 00864dc1  56                   push esi
// 00864dc2  6868280000           push 0x2868
// 00864dc7  50                   push eax
// 00864dc8  ff15c019a400         call dword ptr [0xa419c0]
// 00864dce  5f                   pop edi
// 00864dcf  85c0                 test eax, eax
// 00864dd1  740b                 je 0x864dde
// 00864dd3  5e                   pop esi
// 00864dd4  5d                   pop ebp
// 00864dd5  b801000000           mov eax, 1
// 00864dda  5b                   pop ebx
// 00864ddb  c20400               ret 4
// 00864dde  55                   push ebp
// 00864ddf  8bcb                 mov ecx, ebx
// 00864de1  e87858faff           call 0x80a65e
// 00864de6  5e                   pop esi
// 00864de7  5d                   pop ebp
// 00864de8  5b                   pop ebx
// 00864de9  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?PreTranslateMessage@CSingleWorkspace@CXTPTabClientWnd@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
