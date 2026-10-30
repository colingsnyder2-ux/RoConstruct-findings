// from server: 100% by auto
// roc 2012-06 00404100  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct::Creator  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00404100
//
// 00404100  56                   push esi
// 00404101  8b742408             mov esi, dword ptr [esp + 8]
// 00404105  85f6                 test esi, esi
// 00404107  742c                 je 0x404135
// 00404109  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0040410d  85c0                 test eax, eax
// 0040410f  7424                 je 0x404135
// 00404111  8b542410             mov edx, dword ptr [esp + 0x10]
// 00404115  52                   push edx
// 00404116  56                   push esi
// 00404117  6aff                 push -1
// 00404119  50                   push eax
// 0040411a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040411e  33c9                 xor ecx, ecx
// 00404120  51                   push ecx
// 00404121  50                   push eax
// 00404122  66890e               mov word ptr [esi], cx
// 00404125  ff15cc21b200         call dword ptr [0xb221cc]
// 0040412b  f7d8                 neg eax
// 0040412d  1bc0                 sbb eax, eax
// 0040412f  23c6                 and eax, esi
// 00404131  5e                   pop esi
// 00404132  c21000               ret 0x10
// 00404135  33c0                 xor eax, eax
// 00404137  5e                   pop esi
// 00404138  c21000               ret 0x10
// library xtp-15.2.1/Source\Chart\Diagram\Axis\XTPChartScaleTypeMap.cpp (function ?AtlA2WHelper@@YGPA_WPA_WPBDHI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/Diagram/Axis/XTPChartScaleTypeMap.cpp
