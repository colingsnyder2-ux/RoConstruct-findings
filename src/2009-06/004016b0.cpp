// roc 2009-06 004016b0  unit: CAboutRobloxDialog  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004016b0
//
// 004016b0  b801000000           mov eax, 1
// 004016b5  84053096a300         test byte ptr [0xa39630], al
// 004016bb  753e                 jne 0x4016fb
// 004016bd  09053096a300         or dword ptr [0xa39630], eax
// 004016c3  b830124000           mov eax, 0x401230
// 004016c8  b98cffffff           mov ecx, 0xffffff8c
// 004016cd  a3fcb19d00           mov dword ptr [0x9db1fc], eax
// 004016d2  33c0                 xor eax, eax
// 004016d4  890d00b29d00         mov dword ptr [0x9db200], ecx
// 004016da  33c9                 xor ecx, ecx
// 004016dc  c70504b29d0005000000 mov dword ptr [0x9db204], 5
// 004016e6  a308b29d00           mov dword ptr [0x9db208], eax
// 004016eb  a30cb29d00           mov dword ptr [0x9db20c], eax
// 004016f0  a310b29d00           mov dword ptr [0x9db210], eax
// 004016f5  890d14b29d00         mov dword ptr [0x9db214], ecx
// 004016fb  b8f0b19d00           mov eax, 0x9db1f0
// 00401700  c3                   ret 
// copied from an identical function in another client (function ?GetDHtmlEventMap@@YAPBUDHtmlEventMapEntry@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-9.0 atlmfc/src/mfc/roc_click_7d73bb003aafb5be.cpp