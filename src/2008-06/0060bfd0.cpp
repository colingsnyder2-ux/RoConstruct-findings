// roc 2008-06 0060bfd0  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060bfd0
//
// 0060bfd0  56                   push esi
// 0060bfd1  8bf1                 mov esi, ecx
// 0060bfd3  e888feffff           call 0x60be60
// 0060bfd8  c7060c2f8400         mov dword ptr [esi], 0x842f0c
// 0060bfde  c74610fc2e8400       mov dword ptr [esi + 0x10], 0x842efc
// 0060bfe5  c74614f42e8400       mov dword ptr [esi + 0x14], 0x842ef4
// 0060bfec  c74620ec2e8400       mov dword ptr [esi + 0x20], 0x842eec
// 0060bff3  c74624dc2e8400       mov dword ptr [esi + 0x24], 0x842edc
// 0060bffa  c74644cc2e8400       mov dword ptr [esi + 0x44], 0x842ecc
// 0060c001  c74664bc2e8400       mov dword ptr [esi + 0x64], 0x842ebc
// 0060c008  c78684000000ac2e8400 mov dword ptr [esi + 0x84], 0x842eac
// 0060c012  c786a40000009c2e8400 mov dword ptr [esi + 0xa4], 0x842e9c
// 0060c01c  c786c40000008c2e8400 mov dword ptr [esi + 0xc4], 0x842e8c
// 0060c026  c78630010000742e8400 mov dword ptr [esi + 0x130], 0x842e74
// 0060c030  8bc6                 mov eax, esi
// 0060c032  5e                   pop esi
// 0060c033  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
