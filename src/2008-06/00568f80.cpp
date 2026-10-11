// roc 2008-06 00568f80  unit: RBX::VServiceProvider::?$NonFactoryProduct  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00568f80
//
// 00568f80  6aff                 push -1
// 00568f82  6811f87c00           push 0x7cf811
// 00568f87  64a100000000         mov eax, dword ptr fs:[0]
// 00568f8d  50                   push eax
// 00568f8e  64892500000000       mov dword ptr fs:[0], esp
// 00568f95  83ec20               sub esp, 0x20
// 00568f98  56                   push esi
// 00568f99  8bf1                 mov esi, ecx
// 00568f9b  89742404             mov dword ptr [esp + 4], esi
// 00568f9f  e82cffffff           call 0x568ed0
// 00568fa4  68dcf48200           push 0x82f4dc
// 00568fa9  8d4c240c             lea ecx, [esp + 0xc]
// 00568fad  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00568fb5  c7069cf48200         mov dword ptr [esi], 0x82f49c
// 00568fbb  c7461090f48200       mov dword ptr [esi + 0x10], 0x82f490
// 00568fc2  c7461488f48200       mov dword ptr [esi + 0x14], 0x82f488
// 00568fc9  c7462080f48200       mov dword ptr [esi + 0x20], 0x82f480
// 00568fd0  c7462470f48200       mov dword ptr [esi + 0x24], 0x82f470
// 00568fd7  c7464460f48200       mov dword ptr [esi + 0x44], 0x82f460
// 00568fde  c7466450f48200       mov dword ptr [esi + 0x64], 0x82f450
// 00568fe5  c7868400000040f48200 mov dword ptr [esi + 0x84], 0x82f440
// 00568fef  c786a400000030f48200 mov dword ptr [esi + 0xa4], 0x82f430
// 00568ff9  c786c400000020f48200 mov dword ptr [esi + 0xc4], 0x82f420
// 00569003  c7863001000010f48200 mov dword ptr [esi + 0x130], 0x82f410
// 0056900d  c7865001000000f48200 mov dword ptr [esi + 0x150], 0x82f400
// 00569017  c78670010000f0f38200 mov dword ptr [esi + 0x170], 0x82f3f0
// 00569021  ff1558248000         call dword ptr [0x802458]
// 00569027  8d442408             lea eax, [esp + 8]
// 0056902b  50                   push eax
// 0056902c  8bce                 mov ecx, esi
// 0056902e  c644243001           mov byte ptr [esp + 0x30], 1
// 00569033  e8581fffff           call 0x55af90
// 00569038  8d4c2408             lea ecx, [esp + 8]
// 0056903c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00569041  ff1568248000         call dword ptr [0x802468]
// 00569047  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0056904b  8bc6                 mov eax, esi
// 0056904d  5e                   pop esi
// 0056904e  64890d00000000       mov dword ptr fs:[0], ecx
// 00569055  83c42c               add esp, 0x2c
// 00569058  c3                   ret 
// library openrbx-client/App\v8datamodel\GlobalSettings.cpp (function ??0GlobalSettings@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/GlobalSettings.cpp
