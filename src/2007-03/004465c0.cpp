// roc 2007-03 004465c0  unit: seg_00440000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004465c0
//
// 004465c0  56                   push esi
// 004465c1  8d44240c             lea eax, [esp + 0xc]
// 004465c5  8bf1                 mov esi, ecx
// 004465c7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004465cb  50                   push eax
// 004465cc  51                   push ecx
// 004465cd  e8fef6ffff           call 0x445cd0
// 004465d2  8bc8                 mov ecx, eax
// 004465d4  e827061700           call 0x5b6c00
// 004465d9  84c0                 test al, al
// 004465db  7422                 je 0x4465ff
// 004465dd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004465e1  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 004465e4  8954240c             mov dword ptr [esp + 0xc], edx
// 004465e8  8b01                 mov eax, dword ptr [ecx]
// 004465ea  8b4008               mov eax, dword ptr [eax + 8]
// 004465ed  8d54240c             lea edx, [esp + 0xc]
// 004465f1  52                   push edx
// 004465f2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004465f6  52                   push edx
// 004465f7  ffd0                 call eax
// 004465f9  b001                 mov al, 1
// 004465fb  5e                   pop esi
// 004465fc  c20800               ret 8
// 004465ff  32c0                 xor al, al
// 00446601  5e                   pop esi
// 00446602  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
