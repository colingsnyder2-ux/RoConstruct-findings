// roc 2012-06 005045a0  unit: Ogre::RbxMeshPartAdapter  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005045a0
//
// 005045a0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 005045a3  8b442404             mov eax, dword ptr [esp + 4]
// 005045a7  8908                 mov dword ptr [eax], ecx
// 005045a9  c20400               ret 4
// library xtp-15.2.1/Source\Chart\Diagram\Axis\XTPChartAxisLabel.cpp (function ?GetTextColor@CXTPChartAxisLabel@@QBE?AVCXTPChartColor@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/Diagram/Axis/XTPChartAxisLabel.cpp
