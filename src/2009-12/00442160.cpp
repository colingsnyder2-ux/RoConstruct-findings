// roc 2009-12 00442160  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00442160
//
// 00442160  6aff                 push -1
// 00442162  6812699500           push 0x956912
// 00442167  64a100000000         mov eax, dword ptr fs:[0]
// 0044216d  50                   push eax
// 0044216e  64892500000000       mov dword ptr fs:[0], esp
// 00442175  83ec44               sub esp, 0x44
// 00442178  6870189a00           push 0x9a1870
// 0044217d  8d4c2404             lea ecx, [esp + 4]
// 00442181  ff15f4b69800         call dword ptr [0x98b6f4]
// 00442187  8d4c241c             lea ecx, [esp + 0x1c]
// 0044218b  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00442193  ff1554b79800         call dword ptr [0x98b754]
// 00442199  8d0424               lea eax, [esp]
// 0044219c  50                   push eax
// 0044219d  8d4c242c             lea ecx, [esp + 0x2c]
// 004421a1  c644245001           mov byte ptr [esp + 0x50], 1
// 004421a6  c744242084f49900     mov dword ptr [esp + 0x20], 0x99f484
// 004421ae  ff15f0b69800         call dword ptr [0x98b6f0]
// 004421b4  68e4efa800           push 0xa8efe4
// 004421b9  8d4c2420             lea ecx, [esp + 0x20]
// 004421bd  51                   push ecx
// 004421be  c644245400           mov byte ptr [esp + 0x54], 0
// 004421c3  c744242490f49900     mov dword ptr [esp + 0x24], 0x99f490
// 004421cb  e8a8263b00           call 0x7f4878
// library openrbx-client/App\reflection\reflection_function.cpp (function ?_Xlen@?$vector@PAVFunctionDescriptor@Reflection@RBX@@V?$allocator@PAVFunctionDescriptor@Reflection@RBX@@@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/reflection_function.cpp
