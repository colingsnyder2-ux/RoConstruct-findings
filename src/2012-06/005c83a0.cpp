// from server: 100% by auto
// roc 2012-06 005c83a0  unit: RakNet::RakPeer  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c83a0
//
// 005c83a0  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 005c83a3  8b442404             mov eax, dword ptr [esp + 4]
// 005c83a7  8908                 mov dword ptr [eax], ecx
// 005c83a9  c20400               ret 4
// library xtp-15.2.1/Source\Chart\Diagram\Axis\XTPChartAxis.cpp (function ?GetColor@CXTPChartAxis@@QBE?AVCXTPChartColor@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/Diagram/Axis/XTPChartAxis.cpp
