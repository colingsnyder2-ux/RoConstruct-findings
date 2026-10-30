// from server: 100% by auto
// roc 2012-06 00998830  unit: CXTPImageManagerResource::CBitmapDC  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00998830
//
// 00998830  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00998834  8b542418             mov edx, dword ptr [esp + 0x18]
// 00998838  8b4904               mov ecx, dword ptr [ecx + 4]
// 0099883b  50                   push eax
// 0099883c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00998840  52                   push edx
// 00998841  8b542418             mov edx, dword ptr [esp + 0x18]
// 00998845  50                   push eax
// 00998846  8b442418             mov eax, dword ptr [esp + 0x18]
// 0099884a  52                   push edx
// 0099884b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0099884f  50                   push eax
// 00998850  8b442418             mov eax, dword ptr [esp + 0x18]
// 00998854  52                   push edx
// 00998855  50                   push eax
// 00998856  51                   push ecx
// 00998857  ff154421b200         call dword ptr [0xb22144]
// 0099885d  c21c00               ret 0x1c
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?ExtTextOutA@CDC@@UAEHHHIPBUtagRECT@@PBDIPAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
