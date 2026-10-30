// from server: 100% by auto
// roc 2012-06 00998860  unit: CXTPImageManagerResource::CBitmapDC  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00998860
//
// 00998860  8b442420             mov eax, dword ptr [esp + 0x20]
// 00998864  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00998868  8b4904               mov ecx, dword ptr [ecx + 4]
// 0099886b  50                   push eax
// 0099886c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00998870  52                   push edx
// 00998871  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00998875  50                   push eax
// 00998876  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0099887a  52                   push edx
// 0099887b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0099887f  50                   push eax
// 00998880  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00998884  52                   push edx
// 00998885  50                   push eax
// 00998886  51                   push ecx
// 00998887  ff151c3db200         call dword ptr [0xb23d1c]
// 0099888d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00998891  0fbfd0               movsx edx, ax
// 00998894  c1e810               shr eax, 0x10
// 00998897  98                   cwde 
// 00998898  894104               mov dword ptr [ecx + 4], eax
// 0099889b  8911                 mov dword ptr [ecx], edx
// 0099889d  8bc1                 mov eax, ecx
// 0099889f  c22000               ret 0x20
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?TabbedTextOutA@CDC@@UAE?AVCSize@@HHPBDHHPAHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
