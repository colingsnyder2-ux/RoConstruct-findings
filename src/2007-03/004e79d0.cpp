// roc 2007-03 004e79d0  unit: seg_004e0000  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e79d0
//
// 004e79d0  51                   push ecx
// 004e79d1  ba01000000           mov edx, 1
// 004e79d6  84156ca08b00         test byte ptr [0x8ba06c], dl
// 004e79dc  7568                 jne 0x4e7a46
// 004e79de  a1d0778b00           mov eax, dword ptr [0x8b77d0]
// 004e79e3  09156ca08b00         or dword ptr [0x8ba06c], edx
// 004e79e9  84c2                 test dl, al
// 004e79eb  8b0d28e67700         mov ecx, dword ptr [0x77e628]
// 004e79f1  7535                 jne 0x4e7a28
// 004e79f3  0bc2                 or eax, edx
// 004e79f5  84c2                 test dl, al
// 004e79f7  a3d0778b00           mov dword ptr [0x8b77d0], eax
// 004e79fc  dd01                 fld qword ptr [ecx]
// 004e79fe  dd1dc8778b00         fstp qword ptr [0x8b77c8]
// 004e7a04  7522                 jne 0x4e7a28
// 004e7a06  0bc2                 or eax, edx
// 004e7a08  84c2                 test dl, al
// 004e7a0a  a3d0778b00           mov dword ptr [0x8b77d0], eax
// 004e7a0f  dd01                 fld qword ptr [ecx]
// 004e7a11  dd1dc8778b00         fstp qword ptr [0x8b77c8]
// 004e7a17  750f                 jne 0x4e7a28
// 004e7a19  0bc2                 or eax, edx
// 004e7a1b  a3d0778b00           mov dword ptr [0x8b77d0], eax
// 004e7a20  dd01                 fld qword ptr [ecx]
// 004e7a22  dd1dc8778b00         fstp qword ptr [0x8b77c8]
// 004e7a28  dd05c8778b00         fld qword ptr [0x8b77c8]
// 004e7a2e  d91c24               fstp dword ptr [esp]
// 004e7a31  d90424               fld dword ptr [esp]
// 004e7a34  d91560a08b00         fst dword ptr [0x8ba060]
// 004e7a3a  d91564a08b00         fst dword ptr [0x8ba064]
// 004e7a40  d91d68a08b00         fstp dword ptr [0x8ba068]
// 004e7a46  b860a08b00           mov eax, 0x8ba060
// 004e7a4b  59                   pop ecx
// 004e7a4c  c3                   ret 
// library rbxgs/tool\RunDragger.cpp (function ?inf@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/RunDragger.cpp
