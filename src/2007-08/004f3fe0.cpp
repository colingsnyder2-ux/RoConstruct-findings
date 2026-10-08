// from server: 100% by auto
// roc 2007-08 004f3fe0  unit: boost::bad_lexical_cast  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f3fe0
//
// 004f3fe0  51                   push ecx
// 004f3fe1  ba01000000           mov edx, 1
// 004f3fe6  84159cfb8b00         test byte ptr [0x8bfb9c], dl
// 004f3fec  7568                 jne 0x4f4056
// 004f3fee  a108d18b00           mov eax, dword ptr [0x8bd108]
// 004f3ff3  09159cfb8b00         or dword ptr [0x8bfb9c], edx
// 004f3ff9  84c2                 test dl, al
// 004f3ffb  8b0d64e57700         mov ecx, dword ptr [0x77e564]
// 004f4001  7535                 jne 0x4f4038
// 004f4003  0bc2                 or eax, edx
// 004f4005  84c2                 test dl, al
// 004f4007  a308d18b00           mov dword ptr [0x8bd108], eax
// 004f400c  dd01                 fld qword ptr [ecx]
// 004f400e  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 004f4014  7522                 jne 0x4f4038
// 004f4016  0bc2                 or eax, edx
// 004f4018  84c2                 test dl, al
// 004f401a  a308d18b00           mov dword ptr [0x8bd108], eax
// 004f401f  dd01                 fld qword ptr [ecx]
// 004f4021  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 004f4027  750f                 jne 0x4f4038
// 004f4029  0bc2                 or eax, edx
// 004f402b  a308d18b00           mov dword ptr [0x8bd108], eax
// 004f4030  dd01                 fld qword ptr [ecx]
// 004f4032  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 004f4038  dd0500d18b00         fld qword ptr [0x8bd100]
// 004f403e  d91c24               fstp dword ptr [esp]
// 004f4041  d90424               fld dword ptr [esp]
// 004f4044  d91590fb8b00         fst dword ptr [0x8bfb90]
// 004f404a  d91594fb8b00         fst dword ptr [0x8bfb94]
// 004f4050  d91d98fb8b00         fstp dword ptr [0x8bfb98]
// 004f4056  b890fb8b00           mov eax, 0x8bfb90
// 004f405b  59                   pop ecx
// 004f405c  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?inf@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
