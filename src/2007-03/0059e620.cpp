// roc 2007-03 0059e620  unit: seg_00590000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059e620
//
// 0059e620  56                   push esi
// 0059e621  8d44240c             lea eax, [esp + 0xc]
// 0059e625  8bf1                 mov esi, ecx
// 0059e627  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059e62b  50                   push eax
// 0059e62c  51                   push ecx
// 0059e62d  e87ef9ffff           call 0x59dfb0
// 0059e632  8bc8                 mov ecx, eax
// 0059e634  e8c7850100           call 0x5b6c00
// 0059e639  84c0                 test al, al
// 0059e63b  7422                 je 0x59e65f
// 0059e63d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059e641  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0059e644  8954240c             mov dword ptr [esp + 0xc], edx
// 0059e648  8b01                 mov eax, dword ptr [ecx]
// 0059e64a  8b4008               mov eax, dword ptr [eax + 8]
// 0059e64d  8d54240c             lea edx, [esp + 0xc]
// 0059e651  52                   push edx
// 0059e652  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059e656  52                   push edx
// 0059e657  ffd0                 call eax
// 0059e659  b001                 mov al, 1
// 0059e65b  5e                   pop esi
// 0059e65c  c20800               ret 8
// 0059e65f  32c0                 xor al, al
// 0059e661  5e                   pop esi
// 0059e662  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
