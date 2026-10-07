// roc 2008-06 007163e0  unit: CXTPPropertyGridView  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007163e0
//
// 007163e0  8b542404             mov edx, dword ptr [esp + 4]
// 007163e4  8d41ac               lea eax, [ecx - 0x54]
// 007163e7  c70200000000         mov dword ptr [edx], 0
// 007163ed  85c0                 test eax, eax
// 007163ef  742e                 je 0x71641f
// 007163f1  83782000             cmp dword ptr [eax + 0x20], 0
// 007163f5  7428                 je 0x71641f
// 007163f7  85c0                 test eax, eax
// 007163f9  7510                 jne 0x71640b
// 007163fb  52                   push edx
// 007163fc  681c028500           push 0x85021c
// 00716401  50                   push eax
// 00716402  50                   push eax
// 00716403  e86829fdff           call 0x6e8d70
// 00716408  c20400               ret 4
// 0071640b  8b4020               mov eax, dword ptr [eax + 0x20]
// 0071640e  52                   push edx
// 0071640f  681c028500           push 0x85021c
// 00716414  6a00                 push 0
// 00716416  50                   push eax
// 00716417  e85429fdff           call 0x6e8d70
// 0071641c  c20400               ret 4
// 0071641f  b805400080           mov eax, 0x80004005
// 00716424  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleParent@CXTPPropertyGridView@@MAEJPAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
