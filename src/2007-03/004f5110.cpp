// roc 2007-03 004f5110  unit: seg_004f0000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f5110
//
// 004f5110  51                   push ecx
// 004f5111  ba01000000           mov edx, 1
// 004f5116  841530ae8b00         test byte ptr [0x8bae30], dl
// 004f511c  754f                 jne 0x4f516d
// 004f511e  a1d0778b00           mov eax, dword ptr [0x8b77d0]
// 004f5123  091530ae8b00         or dword ptr [0x8bae30], edx
// 004f5129  84c2                 test dl, al
// 004f512b  8b0d28e67700         mov ecx, dword ptr [0x77e628]
// 004f5131  7522                 jne 0x4f5155
// 004f5133  0bc2                 or eax, edx
// 004f5135  84c2                 test dl, al
// 004f5137  a3d0778b00           mov dword ptr [0x8b77d0], eax
// 004f513c  dd01                 fld qword ptr [ecx]
// 004f513e  dd1dc8778b00         fstp qword ptr [0x8b77c8]
// 004f5144  750f                 jne 0x4f5155
// 004f5146  0bc2                 or eax, edx
// 004f5148  a3d0778b00           mov dword ptr [0x8b77d0], eax
// 004f514d  dd01                 fld qword ptr [ecx]
// 004f514f  dd1dc8778b00         fstp qword ptr [0x8b77c8]
// 004f5155  dd05c8778b00         fld qword ptr [0x8b77c8]
// 004f515b  d91c24               fstp dword ptr [esp]
// 004f515e  d90424               fld dword ptr [esp]
// 004f5161  d91528ae8b00         fst dword ptr [0x8bae28]
// 004f5167  d91d2cae8b00         fstp dword ptr [0x8bae2c]
// 004f516d  b828ae8b00           mov eax, 0x8bae28
// 004f5172  59                   pop ecx
// 004f5173  c3                   ret 
// library rbxgs-g3d/G3Dcpp\Vector2.cpp (function ?inf@Vector2@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Vector2.cpp
