// roc 2007-03 005905b0  unit: seg_00590000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005905b0
//
// 005905b0  56                   push esi
// 005905b1  8d44240c             lea eax, [esp + 0xc]
// 005905b5  8bf1                 mov esi, ecx
// 005905b7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005905bb  50                   push eax
// 005905bc  51                   push ecx
// 005905bd  e87efaffff           call 0x590040
// 005905c2  8bc8                 mov ecx, eax
// 005905c4  e837660200           call 0x5b6c00
// 005905c9  84c0                 test al, al
// 005905cb  7422                 je 0x5905ef
// 005905cd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005905d1  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005905d4  8954240c             mov dword ptr [esp + 0xc], edx
// 005905d8  8b01                 mov eax, dword ptr [ecx]
// 005905da  8b4008               mov eax, dword ptr [eax + 8]
// 005905dd  8d54240c             lea edx, [esp + 0xc]
// 005905e1  52                   push edx
// 005905e2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005905e6  52                   push edx
// 005905e7  ffd0                 call eax
// 005905e9  b001                 mov al, 1
// 005905eb  5e                   pop esi
// 005905ec  c20800               ret 8
// 005905ef  32c0                 xor al, al
// 005905f1  5e                   pop esi
// 005905f2  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
