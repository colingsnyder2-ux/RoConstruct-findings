// roc 2007-08 005069f0  unit: seg_00500000  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005069f0
//
// 005069f0  51                   push ecx
// 005069f1  8bc1                 mov eax, ecx
// 005069f3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005069f7  d901                 fld dword ptr [ecx]
// 005069f9  dc0dd8057a00         fmul qword ptr [0x7a05d8]
// 005069ff  d91c24               fstp dword ptr [esp]
// 00506a02  d90424               fld dword ptr [esp]
// 00506a05  db5c2408             fistp dword ptr [esp + 8]
// 00506a09  8b542408             mov edx, dword ptr [esp + 8]
// 00506a0d  81faff000000         cmp edx, 0xff
// 00506a13  7e05                 jle 0x506a1a
// 00506a15  baff000000           mov edx, 0xff
// 00506a1a  8810                 mov byte ptr [eax], dl
// 00506a1c  d94104               fld dword ptr [ecx + 4]
// 00506a1f  dc0dd8057a00         fmul qword ptr [0x7a05d8]
// 00506a25  d91c24               fstp dword ptr [esp]
// 00506a28  d90424               fld dword ptr [esp]
// 00506a2b  db5c2408             fistp dword ptr [esp + 8]
// 00506a2f  8b542408             mov edx, dword ptr [esp + 8]
// 00506a33  81faff000000         cmp edx, 0xff
// 00506a39  7e05                 jle 0x506a40
// 00506a3b  baff000000           mov edx, 0xff
// 00506a40  885001               mov byte ptr [eax + 1], dl
// 00506a43  d94108               fld dword ptr [ecx + 8]
// 00506a46  dc0dd8057a00         fmul qword ptr [0x7a05d8]
// 00506a4c  d91c24               fstp dword ptr [esp]
// 00506a4f  d90424               fld dword ptr [esp]
// 00506a52  db5c2408             fistp dword ptr [esp + 8]
// 00506a56  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00506a5a  81f9ff000000         cmp ecx, 0xff
// 00506a60  7e05                 jle 0x506a67
// 00506a62  b9ff000000           mov ecx, 0xff
// 00506a67  884802               mov byte ptr [eax + 2], cl
// 00506a6a  59                   pop ecx
// 00506a6b  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color3uint8.cpp (function ??0Color3uint8@G3D@@QAE@ABVColor3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3uint8.cpp
