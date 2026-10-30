// from server: 100% by auto
// roc 2007-08 00671480  unit: CXTPAccessible::XAccessible  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671480
//
// 00671480  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00671484  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00671488  8b542408             mov edx, dword ptr [esp + 8]
// 0067148c  83c1fc               add ecx, -4
// 0067148f  50                   push eax
// 00671490  8b01                 mov eax, dword ptr [ecx]
// 00671492  52                   push edx
// 00671493  8b5058               mov edx, dword ptr [eax + 0x58]
// 00671496  ffd2                 call edx
// 00671498  8bc8                 mov ecx, eax
// 0067149a  e849720c00           call 0x7386e8
// 0067149f  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?QueryInterface@XAccessible@CXTPAccessible@@UAGJABU_GUID@@PAPAX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
