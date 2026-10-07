// roc 2008-06 006bad60  unit: CXTPImageManagerResource::CBitmapDC  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006bad60
//
// 006bad60  83ec08               sub esp, 8
// 006bad63  33c0                 xor eax, eax
// 006bad65  890424               mov dword ptr [esp], eax
// 006bad68  89442404             mov dword ptr [esp + 4], eax
// 006bad6c  8d442404             lea eax, [esp + 4]
// 006bad70  50                   push eax
// 006bad71  8b01                 mov eax, dword ptr [ecx]
// 006bad73  8d542404             lea edx, [esp + 4]
// 006bad77  52                   push edx
// 006bad78  50                   push eax
// 006bad79  ff1550208000         call dword ptr [0x802050]
// 006bad7f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006bad83  8b0c24               mov ecx, dword ptr [esp]
// 006bad86  8b542404             mov edx, dword ptr [esp + 4]
// 006bad8a  8908                 mov dword ptr [eax], ecx
// 006bad8c  895004               mov dword ptr [eax + 4], edx
// 006bad8f  83c408               add esp, 8
// 006bad92  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?GetIconSize@CXTPImageManagerImageList@@QBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
