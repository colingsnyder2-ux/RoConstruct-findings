// roc 2009-12 005f6fd0  unit: G3D::BinaryInput  size: 430 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f6fd0
//
// 005f6fd0  b801000000           mov eax, 1
// 005f6fd5  8405b840b800         test byte ptr [0xb840b8], al
// 005f6fdb  0f8586010000         jne 0x5f7167
// 005f6fe1  f30f1005c870b200     movss xmm0, dword ptr [0xb270c8]
// 005f6fe9  f30f11055840b800     movss dword ptr [0xb84058], xmm0
// 005f6ff1  f30f1005cc70b200     movss xmm0, dword ptr [0xb270cc]
// 005f6ff9  f30f11055c40b800     movss dword ptr [0xb8405c], xmm0
// 005f7001  f30f1005d070b200     movss xmm0, dword ptr [0xb270d0]
// 005f7009  f30f11056040b800     movss dword ptr [0xb84060], xmm0
// 005f7011  f30f1005b070b200     movss xmm0, dword ptr [0xb270b0]
// 005f7019  f30f11056440b800     movss dword ptr [0xb84064], xmm0
// 005f7021  f30f1005b470b200     movss xmm0, dword ptr [0xb270b4]
// 005f7029  f30f11056840b800     movss dword ptr [0xb84068], xmm0
// 005f7031  f30f1005b870b200     movss xmm0, dword ptr [0xb270b8]
// 005f7039  f30f11056c40b800     movss dword ptr [0xb8406c], xmm0
// 005f7041  f30f1005bc70b200     movss xmm0, dword ptr [0xb270bc]
// 005f7049  f30f11057040b800     movss dword ptr [0xb84070], xmm0
// 005f7051  f30f1005c070b200     movss xmm0, dword ptr [0xb270c0]
// 005f7059  f30f11057440b800     movss dword ptr [0xb84074], xmm0
// 005f7061  f30f1005c470b200     movss xmm0, dword ptr [0xb270c4]
// 005f7069  f30f11057840b800     movss dword ptr [0xb84078], xmm0
// 005f7071  f30f10050471b200     movss xmm0, dword ptr [0xb27104]
// 005f7079  f30f11057c40b800     movss dword ptr [0xb8407c], xmm0
// 005f7081  f30f10050871b200     movss xmm0, dword ptr [0xb27108]
// 005f7089  f30f11058040b800     movss dword ptr [0xb84080], xmm0
// 005f7091  f30f10050c71b200     movss xmm0, dword ptr [0xb2710c]
// 005f7099  f30f11058440b800     movss dword ptr [0xb84084], xmm0
// 005f70a1  f30f1005ec70b200     movss xmm0, dword ptr [0xb270ec]
// 005f70a9  0905b840b800         or dword ptr [0xb840b8], eax
// 005f70af  f30f11058840b800     movss dword ptr [0xb84088], xmm0
// 005f70b7  f30f1005f070b200     movss xmm0, dword ptr [0xb270f0]
// 005f70bf  f30f11058c40b800     movss dword ptr [0xb8408c], xmm0
// 005f70c7  f30f1005f470b200     movss xmm0, dword ptr [0xb270f4]
// 005f70cf  f30f11059040b800     movss dword ptr [0xb84090], xmm0
// 005f70d7  f30f1005e070b200     movss xmm0, dword ptr [0xb270e0]
// 005f70df  f30f11059440b800     movss dword ptr [0xb84094], xmm0
// 005f70e7  f30f1005e470b200     movss xmm0, dword ptr [0xb270e4]
// 005f70ef  f30f11059840b800     movss dword ptr [0xb84098], xmm0
// 005f70f7  f30f1005e870b200     movss xmm0, dword ptr [0xb270e8]
// 005f70ff  f30f11059c40b800     movss dword ptr [0xb8409c], xmm0
// 005f7107  f30f1005d470b200     movss xmm0, dword ptr [0xb270d4]
// 005f710f  f30f1105a040b800     movss dword ptr [0xb840a0], xmm0
// 005f7117  f30f1005d870b200     movss xmm0, dword ptr [0xb270d8]
// 005f711f  f30f1105a440b800     movss dword ptr [0xb840a4], xmm0
// 005f7127  f30f1005dc70b200     movss xmm0, dword ptr [0xb270dc]
// 005f712f  f30f1105a840b800     movss dword ptr [0xb840a8], xmm0
// 005f7137  f30f1005f870b200     movss xmm0, dword ptr [0xb270f8]
// 005f713f  f30f1105ac40b800     movss dword ptr [0xb840ac], xmm0
// 005f7147  f30f1005fc70b200     movss xmm0, dword ptr [0xb270fc]
// 005f714f  f30f1105b040b800     movss dword ptr [0xb840b0], xmm0
// 005f7157  f30f10050071b200     movss xmm0, dword ptr [0xb27100]
// 005f715f  f30f1105b440b800     movss dword ptr [0xb840b4], xmm0
// 005f7167  6a07                 push 7
// 005f7169  6a00                 push 0
// 005f716b  e880370000           call 0x5fa8f0
// 005f7170  8d0440               lea eax, [eax + eax*2]
// 005f7173  83c408               add esp, 8
// 005f7176  8d04855840b800       lea eax, [eax*4 + 0xb84058]
// 005f717d  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\Color3.cpp (function ?wheelRandom@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Color3.cpp
