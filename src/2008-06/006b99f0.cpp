// from server: 100% by auto
// roc 2008-06 006b99f0  unit: CXTPCommandBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b99f0
//
// 006b99f0  8b5124               mov edx, dword ptr [ecx + 0x24]
// 006b99f3  8b442404             mov eax, dword ptr [esp + 4]
// 006b99f7  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 006b99fa  8910                 mov dword ptr [eax], edx
// 006b99fc  894804               mov dword ptr [eax + 4], ecx
// 006b99ff  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?GetExtent@CXTPImageManagerResource@@QBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
