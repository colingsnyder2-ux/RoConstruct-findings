// roc 2008-06 00609b50  unit: RBX::Controller::W4ControllerType::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00609b50
//
// 00609b50  56                   push esi
// 00609b51  8bf1                 mov esi, ecx
// 00609b53  e8881cf5ff           call 0x55b7e0
// 00609b58  c706242b8400         mov dword ptr [esi], 0x842b24
// 00609b5e  c74610182b8400       mov dword ptr [esi + 0x10], 0x842b18
// 00609b65  c74614102b8400       mov dword ptr [esi + 0x14], 0x842b10
// 00609b6c  c74620082b8400       mov dword ptr [esi + 0x20], 0x842b08
// 00609b73  c74624f82a8400       mov dword ptr [esi + 0x24], 0x842af8
// 00609b7a  c74644e82a8400       mov dword ptr [esi + 0x44], 0x842ae8
// 00609b81  c74664d82a8400       mov dword ptr [esi + 0x64], 0x842ad8
// 00609b88  c78684000000c82a8400 mov dword ptr [esi + 0x84], 0x842ac8
// 00609b92  c786a4000000b82a8400 mov dword ptr [esi + 0xa4], 0x842ab8
// 00609b9c  c786c4000000a82a8400 mov dword ptr [esi + 0xc4], 0x842aa8
// 00609ba6  8bc6                 mov eax, esi
// 00609ba8  5e                   pop esi
// 00609ba9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
