// roc 2007-03 00446570  unit: seg_00440000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00446570
//
// 00446570  56                   push esi
// 00446571  8d44240c             lea eax, [esp + 0xc]
// 00446575  8bf1                 mov esi, ecx
// 00446577  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044657b  50                   push eax
// 0044657c  51                   push ecx
// 0044657d  e84ef7ffff           call 0x445cd0
// 00446582  8bc8                 mov ecx, eax
// 00446584  e8b7741500           call 0x59da40
// 00446589  84c0                 test al, al
// 0044658b  7422                 je 0x4465af
// 0044658d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00446591  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00446594  8954240c             mov dword ptr [esp + 0xc], edx
// 00446598  8b01                 mov eax, dword ptr [ecx]
// 0044659a  8b4008               mov eax, dword ptr [eax + 8]
// 0044659d  8d54240c             lea edx, [esp + 0xc]
// 004465a1  52                   push edx
// 004465a2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004465a6  52                   push edx
// 004465a7  ffd0                 call eax
// 004465a9  b001                 mov al, 1
// 004465ab  5e                   pop esi
// 004465ac  c20800               ret 8
// 004465af  32c0                 xor al, al
// 004465b1  5e                   pop esi
// 004465b2  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
