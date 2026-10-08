// from server: 100% by auto
// roc 2007-08 005015a0  unit: G3D::Shader  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005015a0
//
// 005015a0  51                   push ecx
// 005015a1  ba01000000           mov edx, 1
// 005015a6  841560098c00         test byte ptr [0x8c0960], dl
// 005015ac  754f                 jne 0x5015fd
// 005015ae  a108d18b00           mov eax, dword ptr [0x8bd108]
// 005015b3  091560098c00         or dword ptr [0x8c0960], edx
// 005015b9  84c2                 test dl, al
// 005015bb  8b0d64e57700         mov ecx, dword ptr [0x77e564]
// 005015c1  7522                 jne 0x5015e5
// 005015c3  0bc2                 or eax, edx
// 005015c5  84c2                 test dl, al
// 005015c7  a308d18b00           mov dword ptr [0x8bd108], eax
// 005015cc  dd01                 fld qword ptr [ecx]
// 005015ce  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 005015d4  750f                 jne 0x5015e5
// 005015d6  0bc2                 or eax, edx
// 005015d8  a308d18b00           mov dword ptr [0x8bd108], eax
// 005015dd  dd01                 fld qword ptr [ecx]
// 005015df  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 005015e5  dd0500d18b00         fld qword ptr [0x8bd100]
// 005015eb  d91c24               fstp dword ptr [esp]
// 005015ee  d90424               fld dword ptr [esp]
// 005015f1  d91558098c00         fst dword ptr [0x8c0958]
// 005015f7  d91d5c098c00         fstp dword ptr [0x8c095c]
// 005015fd  b858098c00           mov eax, 0x8c0958
// 00501602  59                   pop ecx
// 00501603  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector2.cpp (function ?inf@Vector2@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector2.cpp
