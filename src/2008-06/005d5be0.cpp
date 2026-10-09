// roc 2008-06 005d5be0  unit: RBX::VShirtGraphic::?$BoundPropGetSet  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d5be0
//
// 005d5be0  56                   push esi
// 005d5be1  8bf1                 mov esi, ecx
// 005d5be3  e8f85bf8ff           call 0x55b7e0
// 005d5be8  c70694cd8300         mov dword ptr [esi], 0x83cd94
// 005d5bee  c7461084cd8300       mov dword ptr [esi + 0x10], 0x83cd84
// 005d5bf5  c746147ccd8300       mov dword ptr [esi + 0x14], 0x83cd7c
// 005d5bfc  c7462074cd8300       mov dword ptr [esi + 0x20], 0x83cd74
// 005d5c03  c7462464cd8300       mov dword ptr [esi + 0x24], 0x83cd64
// 005d5c0a  c7464454cd8300       mov dword ptr [esi + 0x44], 0x83cd54
// 005d5c11  c7466444cd8300       mov dword ptr [esi + 0x64], 0x83cd44
// 005d5c18  c7868400000034cd8300 mov dword ptr [esi + 0x84], 0x83cd34
// 005d5c22  c786a400000024cd8300 mov dword ptr [esi + 0xa4], 0x83cd24
// 005d5c2c  c786c400000014cd8300 mov dword ptr [esi + 0xc4], 0x83cd14
// 005d5c36  8bc6                 mov eax, esi
// 005d5c38  5e                   pop esi
// 005d5c39  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
