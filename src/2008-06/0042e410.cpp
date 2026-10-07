// roc 2008-06 0042e410  unit: VCLuaFunction::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042e410
//
// 0042e410  8b442404             mov eax, dword ptr [esp + 4]
// 0042e414  83f802               cmp eax, 2
// 0042e417  740d                 je 0x42e426
// 0042e419  83f803               cmp eax, 3
// 0042e41c  7408                 je 0x42e426
// 0042e41e  83f805               cmp eax, 5
// 0042e421  7403                 je 0x42e426
// 0042e423  33c0                 xor eax, eax
// 0042e425  c3                   ret 
// 0042e426  b801000000           mov eax, 1
// 0042e42b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?IsVerticalPosition@@YAHW4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
