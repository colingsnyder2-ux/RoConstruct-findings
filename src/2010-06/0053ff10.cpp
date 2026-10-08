// roc 2010-06 0053ff10  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0053ff10
//
// 0053ff10  6aff                 push -1
// 0053ff12  6868f99800           push 0x98f968
// 0053ff17  64a100000000         mov eax, dword ptr fs:[0]
// 0053ff1d  50                   push eax
// 0053ff1e  64892500000000       mov dword ptr fs:[0], esp
// 0053ff25  51                   push ecx
// 0053ff26  8b442414             mov eax, dword ptr [esp + 0x14]
// 0053ff2a  56                   push esi
// 0053ff2b  8bf1                 mov esi, ecx
// 0053ff2d  8a08                 mov cl, byte ptr [eax]
// 0053ff2f  880e                 mov byte ptr [esi], cl
// 0053ff31  8a5001               mov dl, byte ptr [eax + 1]
// 0053ff34  885601               mov byte ptr [esi + 1], dl
// 0053ff37  d94004               fld dword ptr [eax + 4]
// 0053ff3a  d95e04               fstp dword ptr [esi + 4]
// 0053ff3d  8d4e08               lea ecx, [esi + 8]
// 0053ff40  c70100000000         mov dword ptr [ecx], 0
// 0053ff46  8b4008               mov eax, dword ptr [eax + 8]
// 0053ff49  50                   push eax
// 0053ff4a  89742408             mov dword ptr [esp + 8], esi
// 0053ff4e  e8cd6df4ff           call 0x486d20
// 0053ff53  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0053ff57  8d4e0c               lea ecx, [esi + 0xc]
// 0053ff5a  c70100000000         mov dword ptr [ecx], 0
// 0053ff60  8b02                 mov eax, dword ptr [edx]
// 0053ff62  50                   push eax
// 0053ff63  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0053ff6b  e8b06df4ff           call 0x486d20
// 0053ff70  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053ff74  8bc6                 mov eax, esi
// 0053ff76  5e                   pop esi
// 0053ff77  64890d00000000       mov dword ptr fs:[0], ecx
// 0053ff7e  83c410               add esp, 0x10
// 0053ff81  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ??0?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@QAE@ABUBucketKey@AggregatingSceneManager@Render@RBX@@ABV?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
