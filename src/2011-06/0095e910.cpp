// from server: 100% by auto
// roc 2011-06 0095e910  unit: Ogre::RbxMeshPartAdapter  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0095e910
//
// 0095e910  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0095e913  8b442404             mov eax, dword ptr [esp + 4]
// 0095e917  8908                 mov dword ptr [eax], ecx
// 0095e919  c20400               ret 4
// library xtp-15.2.1/Source\Chart\Diagram\Axis\XTPChartAxisLabel.cpp (function ?GetTextColor@CXTPChartAxisLabel@@QBE?AVCXTPChartColor@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/Diagram/Axis/XTPChartAxisLabel.cpp
