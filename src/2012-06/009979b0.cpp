// roc 2012-06 009979b0  unit: CXTPCommandBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009979b0
//
// 009979b0  8b5124               mov edx, dword ptr [ecx + 0x24]
// 009979b3  8b442404             mov eax, dword ptr [esp + 4]
// 009979b7  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 009979ba  8910                 mov dword ptr [eax], edx
// 009979bc  894804               mov dword ptr [eax + 4], ecx
// 009979bf  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?GetExtent@CXTPImageManagerResource@@QBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
