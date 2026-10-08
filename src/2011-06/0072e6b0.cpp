// from server: 100% by auto
// roc 2011-06 0072e6b0  unit: RBX::MeshContentProvider  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0072e6b0
//
// 0072e6b0  8b442404             mov eax, dword ptr [esp + 4]
// 0072e6b4  8b542408             mov edx, dword ptr [esp + 8]
// 0072e6b8  8981c8000000         mov dword ptr [ecx + 0xc8], eax
// 0072e6be  8991cc000000         mov dword ptr [ecx + 0xcc], edx
// 0072e6c4  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPImageEditor.cpp (function ?SetIconSize@CXTPCommandBar@@QAEXVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPImageEditor.cpp
