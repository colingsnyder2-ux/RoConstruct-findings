// roc 2007-03 005762a0  unit: seg_00570000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005762a0
//
// 005762a0  56                   push esi
// 005762a1  8d44240c             lea eax, [esp + 0xc]
// 005762a5  8bf1                 mov esi, ecx
// 005762a7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005762ab  50                   push eax
// 005762ac  51                   push ecx
// 005762ad  e8eef5ffff           call 0x5758a0
// 005762b2  8bc8                 mov ecx, eax
// 005762b4  e847090400           call 0x5b6c00
// 005762b9  84c0                 test al, al
// 005762bb  7422                 je 0x5762df
// 005762bd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005762c1  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005762c4  8954240c             mov dword ptr [esp + 0xc], edx
// 005762c8  8b01                 mov eax, dword ptr [ecx]
// 005762ca  8b4008               mov eax, dword ptr [eax + 8]
// 005762cd  8d54240c             lea edx, [esp + 0xc]
// 005762d1  52                   push edx
// 005762d2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005762d6  52                   push edx
// 005762d7  ffd0                 call eax
// 005762d9  b001                 mov al, 1
// 005762db  5e                   pop esi
// 005762dc  c20800               ret 8
// 005762df  32c0                 xor al, al
// 005762e1  5e                   pop esi
// 005762e2  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
