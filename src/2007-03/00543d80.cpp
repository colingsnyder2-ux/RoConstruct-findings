// roc 2007-03 00543d80  unit: seg_00540000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00543d80
//
// 00543d80  56                   push esi
// 00543d81  8d44240c             lea eax, [esp + 0xc]
// 00543d85  8bf1                 mov esi, ecx
// 00543d87  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00543d8b  50                   push eax
// 00543d8c  51                   push ecx
// 00543d8d  e85ef9ffff           call 0x5436f0
// 00543d92  8bc8                 mov ecx, eax
// 00543d94  e8672e0700           call 0x5b6c00
// 00543d99  84c0                 test al, al
// 00543d9b  7422                 je 0x543dbf
// 00543d9d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00543da1  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00543da4  8954240c             mov dword ptr [esp + 0xc], edx
// 00543da8  8b01                 mov eax, dword ptr [ecx]
// 00543daa  8b4008               mov eax, dword ptr [eax + 8]
// 00543dad  8d54240c             lea edx, [esp + 0xc]
// 00543db1  52                   push edx
// 00543db2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00543db6  52                   push edx
// 00543db7  ffd0                 call eax
// 00543db9  b001                 mov al, 1
// 00543dbb  5e                   pop esi
// 00543dbc  c20800               ret 8
// 00543dbf  32c0                 xor al, al
// 00543dc1  5e                   pop esi
// 00543dc2  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
