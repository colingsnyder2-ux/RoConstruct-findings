// from server: 100% by auto
// roc 2012-06 00998e70  unit: CXTPImageManagerResource::CBitmapDC  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00998e70
//
// 00998e70  83ec08               sub esp, 8
// 00998e73  33c0                 xor eax, eax
// 00998e75  890424               mov dword ptr [esp], eax
// 00998e78  89442404             mov dword ptr [esp + 4], eax
// 00998e7c  8d442404             lea eax, [esp + 4]
// 00998e80  50                   push eax
// 00998e81  8b01                 mov eax, dword ptr [ecx]
// 00998e83  8d542404             lea edx, [esp + 4]
// 00998e87  52                   push edx
// 00998e88  50                   push eax
// 00998e89  ff156020b200         call dword ptr [0xb22060]
// 00998e8f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00998e93  8b0c24               mov ecx, dword ptr [esp]
// 00998e96  8b542404             mov edx, dword ptr [esp + 4]
// 00998e9a  8908                 mov dword ptr [eax], ecx
// 00998e9c  895004               mov dword ptr [eax + 4], edx
// 00998e9f  83c408               add esp, 8
// 00998ea2  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?GetIconSize@CXTPImageManagerImageList@@QBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
