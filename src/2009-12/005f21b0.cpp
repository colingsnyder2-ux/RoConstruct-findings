// roc 2009-12 005f21b0  unit: seg_005f0000  size: 282 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f21b0
//
// 005f21b0  b801000000           mov eax, 1
// 005f21b5  840554ccb700         test byte ptr [0xb7cc54], al
// 005f21bb  7531                 jne 0x5f21ee
// 005f21bd  f30f1005a0279b00     movss xmm0, dword ptr [0x9b27a0]
// 005f21c5  090554ccb700         or dword ptr [0xb7cc54], eax
// 005f21cb  0f28f0               movaps xmm6, xmm0
// 005f21ce  0f28e0               movaps xmm4, xmm0
// 005f21d1  0f28d8               movaps xmm3, xmm0
// 005f21d4  f30f113548ccb700     movss dword ptr [0xb7cc48], xmm6
// 005f21dc  f30f11254cccb700     movss dword ptr [0xb7cc4c], xmm4
// 005f21e4  f30f111d50ccb700     movss dword ptr [0xb7cc50], xmm3
// 005f21ec  eb18                 jmp 0x5f2206
// 005f21ee  f30f101d50ccb700     movss xmm3, dword ptr [0xb7cc50]
// 005f21f6  f30f10254cccb700     movss xmm4, dword ptr [0xb7cc4c]
// 005f21fe  f30f103548ccb700     movss xmm6, dword ptr [0xb7cc48]
// 005f2206  8405703eb800         test byte ptr [0xb83e70], al
// 005f220c  752e                 jne 0x5f223c
// 005f220e  f30f1005401e9c00     movss xmm0, dword ptr [0x9c1e40]
// 005f2216  0905703eb800         or dword ptr [0xb83e70], eax
// 005f221c  0f28e8               movaps xmm5, xmm0
// 005f221f  0f28d0               movaps xmm2, xmm0
// 005f2222  f30f112d643eb800     movss dword ptr [0xb83e64], xmm5
// 005f222a  f30f1115683eb800     movss dword ptr [0xb83e68], xmm2
// 005f2232  f30f11056c3eb800     movss dword ptr [0xb83e6c], xmm0
// 005f223a  eb18                 jmp 0x5f2254
// 005f223c  f30f10056c3eb800     movss xmm0, dword ptr [0xb83e6c]
// 005f2244  f30f1015683eb800     movss xmm2, dword ptr [0xb83e68]
// 005f224c  f30f102d643eb800     movss xmm5, dword ptr [0xb83e64]
// 005f2254  f30f104c240c         movss xmm1, dword ptr [esp + 0xc]
// 005f225a  0f2fc1               comiss xmm0, xmm1
// 005f225d  7205                 jb 0x5f2264
// 005f225f  0f28c8               movaps xmm1, xmm0
// 005f2262  eb08                 jmp 0x5f226c
// 005f2264  0f2fcb               comiss xmm1, xmm3
// 005f2267  7203                 jb 0x5f226c
// 005f2269  0f28cb               movaps xmm1, xmm3
// 005f226c  f30f10442408         movss xmm0, dword ptr [esp + 8]
// 005f2272  0f2fd0               comiss xmm2, xmm0
// 005f2275  730d                 jae 0x5f2284
// 005f2277  0f2fc4               comiss xmm0, xmm4
// 005f227a  7205                 jb 0x5f2281
// 005f227c  0f28d4               movaps xmm2, xmm4
// 005f227f  eb03                 jmp 0x5f2284
// 005f2281  0f28d0               movaps xmm2, xmm0
// 005f2284  f30f10442404         movss xmm0, dword ptr [esp + 4]
// 005f228a  0f2fe8               comiss xmm5, xmm0
// 005f228d  7205                 jb 0x5f2294
// 005f228f  0f28c5               movaps xmm0, xmm5
// 005f2292  eb08                 jmp 0x5f229c
// 005f2294  0f2fc6               comiss xmm0, xmm6
// 005f2297  7203                 jb 0x5f229c
// 005f2299  0f28c6               movaps xmm0, xmm6
// 005f229c  f30f105908           movss xmm3, dword ptr [ecx + 8]
// 005f22a1  f30f59da             mulss xmm3, xmm2
// 005f22a5  f30f10510c           movss xmm2, dword ptr [ecx + 0xc]
// 005f22aa  f30f59d1             mulss xmm2, xmm1
// 005f22ae  f30f104904           movss xmm1, dword ptr [ecx + 4]
// 005f22b3  f30f58da             addss xmm3, xmm2
// 005f22b7  f30f59c8             mulss xmm1, xmm0
// 005f22bb  f30f58d9             addss xmm3, xmm1
// 005f22bf  0f2f5910             comiss xmm3, dword ptr [ecx + 0x10]
// 005f22c3  7302                 jae 0x5f22c7
// 005f22c5  33c0                 xor eax, eax
// 005f22c7  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\AABox.cpp (function ?halfSpaceContains@Plane@G3D@@QBE_NVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/AABox.cpp
