// roc 2011-06 0042fff0  unit: MainLogManager  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0042fff0
//
// 0042fff0  8b442404             mov eax, dword ptr [esp + 4]
// 0042fff4  83f802               cmp eax, 2
// 0042fff7  740d                 je 0x430006
// 0042fff9  83f803               cmp eax, 3
// 0042fffc  7408                 je 0x430006
// 0042fffe  83f805               cmp eax, 5
// 00430001  7403                 je 0x430006
// 00430003  33c0                 xor eax, eax
// 00430005  c3                   ret 
// 00430006  b801000000           mov eax, 1
// 0043000b  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPDefaultTheme.cpp (function ?IsVerticalPosition@@YAHW4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDefaultTheme.cpp
