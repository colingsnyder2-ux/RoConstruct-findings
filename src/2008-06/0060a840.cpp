// roc 2008-06 0060a840  unit: RBX::VMotorFeature::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060a840
//
// 0060a840  c7010c2f8400         mov dword ptr [ecx], 0x842f0c
// 0060a846  c74110fc2e8400       mov dword ptr [ecx + 0x10], 0x842efc
// 0060a84d  c74114f42e8400       mov dword ptr [ecx + 0x14], 0x842ef4
// 0060a854  c74120ec2e8400       mov dword ptr [ecx + 0x20], 0x842eec
// 0060a85b  c74124dc2e8400       mov dword ptr [ecx + 0x24], 0x842edc
// 0060a862  c74144cc2e8400       mov dword ptr [ecx + 0x44], 0x842ecc
// 0060a869  c74164bc2e8400       mov dword ptr [ecx + 0x64], 0x842ebc
// 0060a870  c78184000000ac2e8400 mov dword ptr [ecx + 0x84], 0x842eac
// 0060a87a  c781a40000009c2e8400 mov dword ptr [ecx + 0xa4], 0x842e9c
// 0060a884  c781c40000008c2e8400 mov dword ptr [ecx + 0xc4], 0x842e8c
// 0060a88e  c78130010000742e8400 mov dword ptr [ecx + 0x130], 0x842e74
// 0060a898  e9c3faffff           jmp 0x60a360
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
