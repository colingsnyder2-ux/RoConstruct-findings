// from server: 100% by auto
// roc 2008-06 007715f0  unit: CXTPImageEditorDlg  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007715f0
//
// 007715f0  8b442404             mov eax, dword ptr [esp + 4]
// 007715f4  83f86b               cmp eax, 0x6b
// 007715f7  7515                 jne 0x77160e
// 007715f9  33d2                 xor edx, edx
// 007715fb  83c8ff               or eax, 0xffffffff
// 007715fe  52                   push edx
// 007715ff  50                   push eax
// 00771600  81c11c090000         add ecx, 0x91c
// 00771606  e825f7ffff           call 0x770d30
// 0077160b  c20400               ret 4
// 0077160e  83f86e               cmp eax, 0x6e
// 00771611  7517                 jne 0x77162a
// 00771613  33d2                 xor edx, edx
// 00771615  b801000000           mov eax, 1
// 0077161a  52                   push edx
// 0077161b  50                   push eax
// 0077161c  81c11c090000         add ecx, 0x91c
// 00771622  e809f7ffff           call 0x770d30
// 00771627  c20400               ret 4
// 0077162a  83f86d               cmp eax, 0x6d
// 0077162d  7515                 jne 0x771644
// 0077162f  83caff               or edx, 0xffffffff
// 00771632  33c0                 xor eax, eax
// 00771634  52                   push edx
// 00771635  50                   push eax
// 00771636  81c11c090000         add ecx, 0x91c
// 0077163c  e8eff6ffff           call 0x770d30
// 00771641  c20400               ret 4
// 00771644  ba01000000           mov edx, 1
// 00771649  33c0                 xor eax, eax
// 0077164b  52                   push edx
// 0077164c  50                   push eax
// 0077164d  81c11c090000         add ecx, 0x91c
// 00771653  e8d8f6ffff           call 0x770d30
// 00771658  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?OnMoveButton@CXTPImageEditorDlg@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp
