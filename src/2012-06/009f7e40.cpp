// roc 2012-06 009f7e40  unit: CXTPResourceManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f7e40
//
// 009f7e40  0fb7542404           movzx edx, word ptr [esp + 4]
// 009f7e45  8b01                 mov eax, dword ptr [ecx]
// 009f7e47  8b4020               mov eax, dword ptr [eax + 0x20]
// 009f7e4a  52                   push edx
// 009f7e4b  ffd0                 call eax
// 009f7e4d  89442404             mov dword ptr [esp + 4], eax
// 009f7e51  ff25d422b200         jmp dword ptr [0xb222d4]
// library xtp-13.2.1/Source\Common\XTPResourceManager.cpp (function ?LoadDialogTemplate@CXTPResourceManager@@UAEPBUDLGTEMPLATE@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Common/XTPResourceManager.cpp
