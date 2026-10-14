// roc 2008-06 00635f30  unit: G3D::VCoordinateFrame::V?$Value::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00635f30
//
// 00635f30  56                   push esi
// 00635f31  8bf1                 mov esi, ecx
// 00635f33  e8a858f2ff           call 0x55b7e0
// 00635f38  c706ec898400         mov dword ptr [esi], 0x8489ec
// 00635f3e  c74610dc898400       mov dword ptr [esi + 0x10], 0x8489dc
// 00635f45  c74614d4898400       mov dword ptr [esi + 0x14], 0x8489d4
// 00635f4c  c74620cc898400       mov dword ptr [esi + 0x20], 0x8489cc
// 00635f53  c74624bc898400       mov dword ptr [esi + 0x24], 0x8489bc
// 00635f5a  c74644ac898400       mov dword ptr [esi + 0x44], 0x8489ac
// 00635f61  c746649c898400       mov dword ptr [esi + 0x64], 0x84899c
// 00635f68  c786840000008c898400 mov dword ptr [esi + 0x84], 0x84898c
// 00635f72  c786a40000007c898400 mov dword ptr [esi + 0xa4], 0x84897c
// 00635f7c  c786c40000006c898400 mov dword ptr [esi + 0xc4], 0x84896c
// 00635f86  8bc6                 mov eax, esi
// 00635f88  5e                   pop esi
// 00635f89  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
