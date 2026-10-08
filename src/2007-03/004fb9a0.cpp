// roc 2007-03 004fb9a0  unit: seg_004f0000  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fb9a0
//
// 004fb9a0  51                   push ecx
// 004fb9a1  8bc1                 mov eax, ecx
// 004fb9a3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004fb9a7  d901                 fld dword ptr [ecx]
// 004fb9a9  dc0d18fd7900         fmul qword ptr [0x79fd18]
// 004fb9af  d91c24               fstp dword ptr [esp]
// 004fb9b2  d90424               fld dword ptr [esp]
// 004fb9b5  db5c2408             fistp dword ptr [esp + 8]
// 004fb9b9  8b542408             mov edx, dword ptr [esp + 8]
// 004fb9bd  81faff000000         cmp edx, 0xff
// 004fb9c3  7e05                 jle 0x4fb9ca
// 004fb9c5  baff000000           mov edx, 0xff
// 004fb9ca  8810                 mov byte ptr [eax], dl
// 004fb9cc  d94104               fld dword ptr [ecx + 4]
// 004fb9cf  dc0d18fd7900         fmul qword ptr [0x79fd18]
// 004fb9d5  d91c24               fstp dword ptr [esp]
// 004fb9d8  d90424               fld dword ptr [esp]
// 004fb9db  db5c2408             fistp dword ptr [esp + 8]
// 004fb9df  8b542408             mov edx, dword ptr [esp + 8]
// 004fb9e3  81faff000000         cmp edx, 0xff
// 004fb9e9  7e05                 jle 0x4fb9f0
// 004fb9eb  baff000000           mov edx, 0xff
// 004fb9f0  885001               mov byte ptr [eax + 1], dl
// 004fb9f3  d94108               fld dword ptr [ecx + 8]
// 004fb9f6  dc0d18fd7900         fmul qword ptr [0x79fd18]
// 004fb9fc  d91c24               fstp dword ptr [esp]
// 004fb9ff  d90424               fld dword ptr [esp]
// 004fba02  db5c2408             fistp dword ptr [esp + 8]
// 004fba06  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004fba0a  81f9ff000000         cmp ecx, 0xff
// 004fba10  7e05                 jle 0x4fba17
// 004fba12  b9ff000000           mov ecx, 0xff
// 004fba17  884802               mov byte ptr [eax + 2], cl
// 004fba1a  59                   pop ecx
// 004fba1b  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Color3uint8.cpp (function ??0Color3uint8@G3D@@QAE@ABVColor3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Color3uint8.cpp
