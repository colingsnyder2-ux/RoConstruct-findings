// roc 2012-06 009f8550  unit: CXTPResourceManager  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f8550
//
// 009f8550  51                   push ecx
// 009f8551  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009f8555  8d0424               lea eax, [esp]
// 009f8558  50                   push eax
// 009f8559  68a0849f00           push 0x9f84a0
// 009f855e  51                   push ecx
// 009f855f  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 009f8567  ff156c23b200         call dword ptr [0xb2236c]
// 009f856d  668b0424             mov ax, word ptr [esp]
// 009f8571  59                   pop ecx
// 009f8572  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPResourceManager.cpp (function ?GetResourceLanguage@CXTPResourceManager@@SAGPAUHINSTANCE__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPResourceManager.cpp
