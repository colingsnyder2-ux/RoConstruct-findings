// roc 2012-06 009dd390  unit: CXTPTabClientWnd::CSingleWorkspace  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dd390
//
// 009dd390  53                   push ebx
// 009dd391  55                   push ebp
// 009dd392  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 009dd396  56                   push esi
// 009dd397  8b7504               mov esi, dword ptr [ebp + 4]
// 009dd39a  8bd9                 mov ebx, ecx
// 009dd39c  81fe01020000         cmp esi, 0x201
// 009dd3a2  7420                 je 0x9dd3c4
// 009dd3a4  81fe04020000         cmp esi, 0x204
// 009dd3aa  7418                 je 0x9dd3c4
// 009dd3ac  81fe07020000         cmp esi, 0x207
// 009dd3b2  7410                 je 0x9dd3c4
// 009dd3b4  81fe03020000         cmp esi, 0x203
// 009dd3ba  7408                 je 0x9dd3c4
// 009dd3bc  81fe06020000         cmp esi, 0x206
// 009dd3c2  752a                 jne 0x9dd3ee
// 009dd3c4  57                   push edi
// 009dd3c5  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 009dd3c8  e8e350faff           call 0x9824b0
// 009dd3cd  8b4020               mov eax, dword ptr [eax + 0x20]
// 009dd3d0  57                   push edi
// 009dd3d1  56                   push esi
// 009dd3d2  6868280000           push 0x2868
// 009dd3d7  50                   push eax
// 009dd3d8  ff15043cb200         call dword ptr [0xb23c04]
// 009dd3de  5f                   pop edi
// 009dd3df  85c0                 test eax, eax
// 009dd3e1  740b                 je 0x9dd3ee
// 009dd3e3  5e                   pop esi
// 009dd3e4  5d                   pop ebp
// 009dd3e5  b801000000           mov eax, 1
// 009dd3ea  5b                   pop ebx
// 009dd3eb  c20400               ret 4
// 009dd3ee  55                   push ebp
// 009dd3ef  8bcb                 mov ecx, ebx
// 009dd3f1  e81853faff           call 0x98270e
// 009dd3f6  5e                   pop esi
// 009dd3f7  5d                   pop ebp
// 009dd3f8  5b                   pop ebx
// 009dd3f9  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?PreTranslateMessage@CSingleWorkspace@CXTPTabClientWnd@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
