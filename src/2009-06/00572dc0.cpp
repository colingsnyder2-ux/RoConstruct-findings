// roc 2009-06 00572dc0  unit: seg_00570000  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00572dc0
//
// 00572dc0  51                   push ecx
// 00572dc1  8bc1                 mov eax, ecx
// 00572dc3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00572dc7  d901                 fld dword ptr [ecx]
// 00572dc9  d80df8b68c00         fmul dword ptr [0x8cb6f8]
// 00572dcf  d91c24               fstp dword ptr [esp]
// 00572dd2  d90424               fld dword ptr [esp]
// 00572dd5  db5c2408             fistp dword ptr [esp + 8]
// 00572dd9  8b542408             mov edx, dword ptr [esp + 8]
// 00572ddd  81faff000000         cmp edx, 0xff
// 00572de3  7e05                 jle 0x572dea
// 00572de5  baff000000           mov edx, 0xff
// 00572dea  8810                 mov byte ptr [eax], dl
// 00572dec  d94104               fld dword ptr [ecx + 4]
// 00572def  d80df8b68c00         fmul dword ptr [0x8cb6f8]
// 00572df5  d91c24               fstp dword ptr [esp]
// 00572df8  d90424               fld dword ptr [esp]
// 00572dfb  db5c2408             fistp dword ptr [esp + 8]
// 00572dff  8b542408             mov edx, dword ptr [esp + 8]
// 00572e03  81faff000000         cmp edx, 0xff
// 00572e09  7e05                 jle 0x572e10
// 00572e0b  baff000000           mov edx, 0xff
// 00572e10  885001               mov byte ptr [eax + 1], dl
// 00572e13  d94108               fld dword ptr [ecx + 8]
// 00572e16  d80df8b68c00         fmul dword ptr [0x8cb6f8]
// 00572e1c  d91c24               fstp dword ptr [esp]
// 00572e1f  d90424               fld dword ptr [esp]
// 00572e22  db5c2408             fistp dword ptr [esp + 8]
// 00572e26  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00572e2a  81f9ff000000         cmp ecx, 0xff
// 00572e30  7e05                 jle 0x572e37
// 00572e32  b9ff000000           mov ecx, 0xff
// 00572e37  884802               mov byte ptr [eax + 2], cl
// 00572e3a  59                   pop ecx
// 00572e3b  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Color3uint8.cpp (function ??0Color3uint8@G3D@@QAE@ABVColor3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Color3uint8.cpp
