// roc 2012-06 00792460  unit: RBX::SpecialShape  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00792460
//
// 00792460  8b4104               mov eax, dword ptr [ecx + 4]
// 00792463  8b542404             mov edx, dword ptr [esp + 4]
// 00792467  8902                 mov dword ptr [edx], eax
// 00792469  8b4108               mov eax, dword ptr [ecx + 8]
// 0079246c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00792470  8901                 mov dword ptr [ecx], eax
// 00792472  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPControlProgress.cpp (function ?GetRange@CXTPProgressBase@@QBEXAAH0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlProgress.cpp
