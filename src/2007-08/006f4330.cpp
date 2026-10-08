// from server: 100% by auto
// roc 2007-08 006f4330  unit: CXTPImageEditorDlg  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f4330
//
// 006f4330  8b442404             mov eax, dword ptr [esp + 4]
// 006f4334  83f86b               cmp eax, 0x6b
// 006f4337  7515                 jne 0x6f434e
// 006f4339  33d2                 xor edx, edx
// 006f433b  83c8ff               or eax, 0xffffffff
// 006f433e  52                   push edx
// 006f433f  50                   push eax
// 006f4340  81c114090000         add ecx, 0x914
// 006f4346  e8a5f7ffff           call 0x6f3af0
// 006f434b  c20400               ret 4
// 006f434e  83f86e               cmp eax, 0x6e
// 006f4351  7517                 jne 0x6f436a
// 006f4353  33d2                 xor edx, edx
// 006f4355  b801000000           mov eax, 1
// 006f435a  52                   push edx
// 006f435b  50                   push eax
// 006f435c  81c114090000         add ecx, 0x914
// 006f4362  e889f7ffff           call 0x6f3af0
// 006f4367  c20400               ret 4
// 006f436a  83f86d               cmp eax, 0x6d
// 006f436d  7515                 jne 0x6f4384
// 006f436f  83caff               or edx, 0xffffffff
// 006f4372  33c0                 xor eax, eax
// 006f4374  52                   push edx
// 006f4375  50                   push eax
// 006f4376  81c114090000         add ecx, 0x914
// 006f437c  e86ff7ffff           call 0x6f3af0
// 006f4381  c20400               ret 4
// 006f4384  ba01000000           mov edx, 1
// 006f4389  33c0                 xor eax, eax
// 006f438b  52                   push edx
// 006f438c  50                   push eax
// 006f438d  81c114090000         add ecx, 0x914
// 006f4393  e858f7ffff           call 0x6f3af0
// 006f4398  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?OnMoveButton@CXTPImageEditorDlg@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
