// roc 2012-06 009cdb60  unit: CXTPPopupBar  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cdb60
//
// 009cdb60  83ec08               sub esp, 8
// 009cdb63  56                   push esi
// 009cdb64  8bf1                 mov esi, ecx
// 009cdb66  83bed401000000       cmp dword ptr [esi + 0x1d4], 0
// 009cdb6d  7460                 je 0x9cdbcf
// 009cdb6f  8d442404             lea eax, [esp + 4]
// 009cdb73  50                   push eax
// 009cdb74  ff158c3ab200         call dword ptr [0xb23a8c]
// 009cdb7a  8b5620               mov edx, dword ptr [esi + 0x20]
// 009cdb7d  8d4c2404             lea ecx, [esp + 4]
// 009cdb81  51                   push ecx
// 009cdb82  52                   push edx
// 009cdb83  ff15883ab200         call dword ptr [0xb23a88]
// 009cdb89  8d442404             lea eax, [esp + 4]
// 009cdb8d  50                   push eax
// 009cdb8e  8bce                 mov ecx, esi
// 009cdb90  e84bffffff           call 0x9cdae0
// 009cdb95  85c0                 test eax, eax
// 009cdb97  7436                 je 0x9cdbcf
// 009cdb99  e83448fbff           call 0x9823d2
// 009cdb9e  8b86d4010000         mov eax, dword ptr [esi + 0x1d4]
// 009cdba4  83e802               sub eax, 2
// 009cdba7  f7d8                 neg eax
// 009cdba9  1bc0                 sbb eax, eax
// 009cdbab  83e0fd               and eax, 0xfffffffd
// 009cdbae  05857f0000           add eax, 0x7f85
// 009cdbb3  50                   push eax
// 009cdbb4  6a00                 push 0
// 009cdbb6  ff159c3ab200         call dword ptr [0xb23a9c]
// 009cdbbc  50                   push eax
// 009cdbbd  ff15783bb200         call dword ptr [0xb23b78]
// 009cdbc3  b801000000           mov eax, 1
// 009cdbc8  5e                   pop esi
// 009cdbc9  83c408               add esp, 8
// 009cdbcc  c20c00               ret 0xc
// 009cdbcf  8bce                 mov ecx, esi
// 009cdbd1  e8084bfbff           call 0x9826de
// 009cdbd6  5e                   pop esi
// 009cdbd7  83c408               add esp, 8
// 009cdbda  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?OnSetCursor@CXTPPopupBar@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
