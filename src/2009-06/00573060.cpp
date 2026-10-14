// roc 2009-06 00573060  unit: G3D::Ray  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00573060
//
// 00573060  ba01000000           mov edx, 1
// 00573065  8415002aa400         test byte ptr [0xa42a00], dl
// 0057306b  7562                 jne 0x5730cf
// 0057306d  a1b8c8a300           mov eax, dword ptr [0xa3c8b8]
// 00573072  0915002aa400         or dword ptr [0xa42a00], edx
// 00573078  8b0d44e58900         mov ecx, dword ptr [0x89e544]
// 0057307e  84c2                 test dl, al
// 00573080  7535                 jne 0x5730b7
// 00573082  0bc2                 or eax, edx
// 00573084  a3b8c8a300           mov dword ptr [0xa3c8b8], eax
// 00573089  dd01                 fld qword ptr [ecx]
// 0057308b  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 00573091  84c2                 test dl, al
// 00573093  7522                 jne 0x5730b7
// 00573095  0bc2                 or eax, edx
// 00573097  a3b8c8a300           mov dword ptr [0xa3c8b8], eax
// 0057309c  dd01                 fld qword ptr [ecx]
// 0057309e  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 005730a4  84c2                 test dl, al
// 005730a6  750f                 jne 0x5730b7
// 005730a8  0bc2                 or eax, edx
// 005730aa  a3b8c8a300           mov dword ptr [0xa3c8b8], eax
// 005730af  dd01                 fld qword ptr [ecx]
// 005730b1  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 005730b7  dd05b0c8a300         fld qword ptr [0xa3c8b0]
// 005730bd  d915f429a400         fst dword ptr [0xa429f4]
// 005730c3  d915f829a400         fst dword ptr [0xa429f8]
// 005730c9  d91dfc29a400         fstp dword ptr [0xa429fc]
// 005730cf  b8f429a400           mov eax, 0xa429f4
// 005730d4  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\CollisionDetection.cpp (function ?inf@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/CollisionDetection.cpp
