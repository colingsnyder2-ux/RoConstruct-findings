// roc 2007-03 0066ea70  unit: seg_00660000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066ea70
//
// 0066ea70  53                   push ebx
// 0066ea71  55                   push ebp
// 0066ea72  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0066ea76  56                   push esi
// 0066ea77  8b7504               mov esi, dword ptr [ebp + 4]
// 0066ea7a  81fe01020000         cmp esi, 0x201
// 0066ea80  8bd9                 mov ebx, ecx
// 0066ea82  7420                 je 0x66eaa4
// 0066ea84  81fe04020000         cmp esi, 0x204
// 0066ea8a  7418                 je 0x66eaa4
// 0066ea8c  81fe07020000         cmp esi, 0x207
// 0066ea92  7410                 je 0x66eaa4
// 0066ea94  81fe03020000         cmp esi, 0x203
// 0066ea9a  7408                 je 0x66eaa4
// 0066ea9c  81fe06020000         cmp esi, 0x206
// 0066eaa2  752a                 jne 0x66eace
// 0066eaa4  57                   push edi
// 0066eaa5  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 0066eaa8  e831f9faff           call 0x61e3de
// 0066eaad  8b4020               mov eax, dword ptr [eax + 0x20]
// 0066eab0  57                   push edi
// 0066eab1  56                   push esi
// 0066eab2  6868280000           push 0x2868
// 0066eab7  50                   push eax
// 0066eab8  ff1550ee7700         call dword ptr [0x77ee50]
// 0066eabe  85c0                 test eax, eax
// 0066eac0  5f                   pop edi
// 0066eac1  740b                 je 0x66eace
// 0066eac3  5e                   pop esi
// 0066eac4  5d                   pop ebp
// 0066eac5  b801000000           mov eax, 1
// 0066eaca  5b                   pop ebx
// 0066eacb  c20400               ret 4
// 0066eace  55                   push ebp
// 0066eacf  8bcb                 mov ecx, ebx
// 0066ead1  e82cfcfaff           call 0x61e702
// 0066ead6  5e                   pop esi
// 0066ead7  5d                   pop ebp
// 0066ead8  5b                   pop ebx
// 0066ead9  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?PreTranslateMessage@CSingleWorkspace@CXTPTabClientWnd@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
