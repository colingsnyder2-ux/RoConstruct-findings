// roc 2007-08 0068a690  unit: CXTPTabClientWnd::CSingleWorkspace  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068a690
//
// 0068a690  53                   push ebx
// 0068a691  55                   push ebp
// 0068a692  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0068a696  56                   push esi
// 0068a697  8b7504               mov esi, dword ptr [ebp + 4]
// 0068a69a  81fe01020000         cmp esi, 0x201
// 0068a6a0  8bd9                 mov ebx, ecx
// 0068a6a2  7420                 je 0x68a6c4
// 0068a6a4  81fe04020000         cmp esi, 0x204
// 0068a6aa  7418                 je 0x68a6c4
// 0068a6ac  81fe07020000         cmp esi, 0x207
// 0068a6b2  7410                 je 0x68a6c4
// 0068a6b4  81fe03020000         cmp esi, 0x203
// 0068a6ba  7408                 je 0x68a6c4
// 0068a6bc  81fe06020000         cmp esi, 0x206
// 0068a6c2  752a                 jne 0x68a6ee
// 0068a6c4  57                   push edi
// 0068a6c5  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 0068a6c8  e88358faff           call 0x62ff50
// 0068a6cd  8b4020               mov eax, dword ptr [eax + 0x20]
// 0068a6d0  57                   push edi
// 0068a6d1  56                   push esi
// 0068a6d2  6868280000           push 0x2868
// 0068a6d7  50                   push eax
// 0068a6d8  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0068a6de  85c0                 test eax, eax
// 0068a6e0  5f                   pop edi
// 0068a6e1  740b                 je 0x68a6ee
// 0068a6e3  5e                   pop esi
// 0068a6e4  5d                   pop ebp
// 0068a6e5  b801000000           mov eax, 1
// 0068a6ea  5b                   pop ebx
// 0068a6eb  c20400               ret 4
// 0068a6ee  55                   push ebp
// 0068a6ef  8bcb                 mov ecx, ebx
// 0068a6f1  e8785bfaff           call 0x63026e
// 0068a6f6  5e                   pop esi
// 0068a6f7  5d                   pop ebp
// 0068a6f8  5b                   pop ebx
// 0068a6f9  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?PreTranslateMessage@CSingleWorkspace@CXTPTabClientWnd@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
