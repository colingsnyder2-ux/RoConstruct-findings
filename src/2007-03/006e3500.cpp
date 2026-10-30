// roc 2007-03 006e3500  unit: seg_006e0000  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e3500
//
// 006e3500  8b442404             mov eax, dword ptr [esp + 4]
// 006e3504  83f86b               cmp eax, 0x6b
// 006e3507  7515                 jne 0x6e351e
// 006e3509  33d2                 xor edx, edx
// 006e350b  83c8ff               or eax, 0xffffffff
// 006e350e  52                   push edx
// 006e350f  50                   push eax
// 006e3510  81c114090000         add ecx, 0x914
// 006e3516  e8a5f7ffff           call 0x6e2cc0
// 006e351b  c20400               ret 4
// 006e351e  83f86e               cmp eax, 0x6e
// 006e3521  7517                 jne 0x6e353a
// 006e3523  33d2                 xor edx, edx
// 006e3525  b801000000           mov eax, 1
// 006e352a  52                   push edx
// 006e352b  50                   push eax
// 006e352c  81c114090000         add ecx, 0x914
// 006e3532  e889f7ffff           call 0x6e2cc0
// 006e3537  c20400               ret 4
// 006e353a  83f86d               cmp eax, 0x6d
// 006e353d  7515                 jne 0x6e3554
// 006e353f  83caff               or edx, 0xffffffff
// 006e3542  33c0                 xor eax, eax
// 006e3544  52                   push edx
// 006e3545  50                   push eax
// 006e3546  81c114090000         add ecx, 0x914
// 006e354c  e86ff7ffff           call 0x6e2cc0
// 006e3551  c20400               ret 4
// 006e3554  ba01000000           mov edx, 1
// 006e3559  33c0                 xor eax, eax
// 006e355b  52                   push edx
// 006e355c  50                   push eax
// 006e355d  81c114090000         add ecx, 0x914
// 006e3563  e858f7ffff           call 0x6e2cc0
// 006e3568  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?OnMoveButton@CXTPImageEditorDlg@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
