// roc 2008-06 0055c080  unit: RBX::VInstance::?$SignalDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055c080
//
// 0055c080  56                   push esi
// 0055c081  8bf1                 mov esi, ecx
// 0055c083  e858f7ffff           call 0x55b7e0
// 0055c088  c706a4db8200         mov dword ptr [esi], 0x82dba4
// 0055c08e  c7461098db8200       mov dword ptr [esi + 0x10], 0x82db98
// 0055c095  c7461490db8200       mov dword ptr [esi + 0x14], 0x82db90
// 0055c09c  c7462088db8200       mov dword ptr [esi + 0x20], 0x82db88
// 0055c0a3  c7462478db8200       mov dword ptr [esi + 0x24], 0x82db78
// 0055c0aa  c7464468db8200       mov dword ptr [esi + 0x44], 0x82db68
// 0055c0b1  c7466458db8200       mov dword ptr [esi + 0x64], 0x82db58
// 0055c0b8  c7868400000048db8200 mov dword ptr [esi + 0x84], 0x82db48
// 0055c0c2  c786a400000038db8200 mov dword ptr [esi + 0xa4], 0x82db38
// 0055c0cc  c786c400000028db8200 mov dword ptr [esi + 0xc4], 0x82db28
// 0055c0d6  8bc6                 mov eax, esi
// 0055c0d8  5e                   pop esi
// 0055c0d9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
