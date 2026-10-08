// roc 2007-03 00590560  unit: seg_00590000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00590560
//
// 00590560  56                   push esi
// 00590561  8d44240c             lea eax, [esp + 0xc]
// 00590565  8bf1                 mov esi, ecx
// 00590567  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059056b  50                   push eax
// 0059056c  51                   push ecx
// 0059056d  e8cefaffff           call 0x590040
// 00590572  8bc8                 mov ecx, eax
// 00590574  e8c7d40000           call 0x59da40
// 00590579  84c0                 test al, al
// 0059057b  7422                 je 0x59059f
// 0059057d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00590581  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00590584  8954240c             mov dword ptr [esp + 0xc], edx
// 00590588  8b01                 mov eax, dword ptr [ecx]
// 0059058a  8b4008               mov eax, dword ptr [eax + 8]
// 0059058d  8d54240c             lea edx, [esp + 0xc]
// 00590591  52                   push edx
// 00590592  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00590596  52                   push edx
// 00590597  ffd0                 call eax
// 00590599  b001                 mov al, 1
// 0059059b  5e                   pop esi
// 0059059c  c20800               ret 8
// 0059059f  32c0                 xor al, al
// 005905a1  5e                   pop esi
// 005905a2  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
