// roc 2009-12 008df6a0  unit: CXTColorPageCustom  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008df6a0
//
// 008df6a0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008df6a4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008df6a8  8b01                 mov eax, dword ptr [ecx]
// 008df6aa  8b403c               mov eax, dword ptr [eax + 0x3c]
// 008df6ad  52                   push edx
// 008df6ae  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008df6b2  52                   push edx
// 008df6b3  ffd0                 call eax
// 008df6b5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008df6b9  8901                 mov dword ptr [ecx], eax
// 008df6bb  33c0                 xor eax, eax
// 008df6bd  c21000               ret 0x10
// copied from an identical function in another client (function ?RichTextCtrlCallbackIn@CXTPRichRender@@KGKKPAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPRichRender.cpp