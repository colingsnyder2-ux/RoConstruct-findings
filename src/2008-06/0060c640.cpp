// roc 2008-06 0060c640  unit: RBX::VNetworkSettings::?$EnumPropDescriptor  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060c640
//
// 0060c640  6aff                 push -1
// 0060c642  68488b7d00           push 0x7d8b48
// 0060c647  64a100000000         mov eax, dword ptr fs:[0]
// 0060c64d  50                   push eax
// 0060c64e  64892500000000       mov dword ptr fs:[0], esp
// 0060c655  51                   push ecx
// 0060c656  56                   push esi
// 0060c657  8bf1                 mov esi, ecx
// 0060c659  89742404             mov dword ptr [esp + 4], esi
// 0060c65d  e8fef8ffff           call 0x60bf60
// 0060c662  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0060c66a  e8c170fbff           call 0x5c3730
// 0060c66f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060c673  89461c               mov dword ptr [esi + 0x1c], eax
// 0060c676  c706ac338400         mov dword ptr [esi], 0x8433ac
// 0060c67c  c74610a0338400       mov dword ptr [esi + 0x10], 0x8433a0
// 0060c683  c7461498338400       mov dword ptr [esi + 0x14], 0x843398
// 0060c68a  c7462090338400       mov dword ptr [esi + 0x20], 0x843390
// 0060c691  c7462480338400       mov dword ptr [esi + 0x24], 0x843380
// 0060c698  c7464470338400       mov dword ptr [esi + 0x44], 0x843370
// 0060c69f  c7466460338400       mov dword ptr [esi + 0x64], 0x843360
// 0060c6a6  c7868400000050338400 mov dword ptr [esi + 0x84], 0x843350
// 0060c6b0  c786a400000040338400 mov dword ptr [esi + 0xa4], 0x843340
// 0060c6ba  c786c400000030338400 mov dword ptr [esi + 0xc4], 0x843330
// 0060c6c4  c7863001000018338400 mov dword ptr [esi + 0x130], 0x843318
// 0060c6ce  8bc6                 mov eax, esi
// 0060c6d0  5e                   pop esi
// 0060c6d1  64890d00000000       mov dword ptr fs:[0], ecx
// 0060c6d8  83c410               add esp, 0x10
// 0060c6db  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$DescribedCreatable@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
