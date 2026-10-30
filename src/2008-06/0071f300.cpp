// from server: 100% by auto
// roc 2008-06 0071f300  unit: CXTPResourceManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071f300
//
// 0071f300  0fb7542404           movzx edx, word ptr [esp + 4]
// 0071f305  8b01                 mov eax, dword ptr [ecx]
// 0071f307  8b4020               mov eax, dword ptr [eax + 0x20]
// 0071f30a  52                   push edx
// 0071f30b  ffd0                 call eax
// 0071f30d  89442404             mov dword ptr [esp + 4], eax
// 0071f311  ff2510228000         jmp dword ptr [0x802210]
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?LoadDialogTemplate@CXTPResourceManager@@UAEPBUDLGTEMPLATE@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp
