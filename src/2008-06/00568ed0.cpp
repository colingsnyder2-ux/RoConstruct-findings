// roc 2008-06 00568ed0  unit: RBX::VServiceProvider::?$NonFactoryProduct  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00568ed0
//
// 00568ed0  6aff                 push -1
// 00568ed2  68e8f77c00           push 0x7cf7e8
// 00568ed7  64a100000000         mov eax, dword ptr fs:[0]
// 00568edd  50                   push eax
// 00568ede  64892500000000       mov dword ptr fs:[0], esp
// 00568ee5  51                   push ecx
// 00568ee6  56                   push esi
// 00568ee7  8bf1                 mov esi, ecx
// 00568ee9  89742404             mov dword ptr [esp + 4], esi
// 00568eed  e87efeffff           call 0x568d70
// 00568ef2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00568efa  e8115df3ff           call 0x49ec10
// 00568eff  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00568f03  89461c               mov dword ptr [esi + 0x1c], eax
// 00568f06  c706acf38200         mov dword ptr [esi], 0x82f3ac
// 00568f0c  c74610a0f38200       mov dword ptr [esi + 0x10], 0x82f3a0
// 00568f13  c7461498f38200       mov dword ptr [esi + 0x14], 0x82f398
// 00568f1a  c7462090f38200       mov dword ptr [esi + 0x20], 0x82f390
// 00568f21  c7462480f38200       mov dword ptr [esi + 0x24], 0x82f380
// 00568f28  c7464470f38200       mov dword ptr [esi + 0x44], 0x82f370
// 00568f2f  c7466460f38200       mov dword ptr [esi + 0x64], 0x82f360
// 00568f36  c7868400000050f38200 mov dword ptr [esi + 0x84], 0x82f350
// 00568f40  c786a400000040f38200 mov dword ptr [esi + 0xa4], 0x82f340
// 00568f4a  c786c400000030f38200 mov dword ptr [esi + 0xc4], 0x82f330
// 00568f54  c7863001000020f38200 mov dword ptr [esi + 0x130], 0x82f320
// 00568f5e  c7865001000010f38200 mov dword ptr [esi + 0x150], 0x82f310
// 00568f68  c7867001000000f38200 mov dword ptr [esi + 0x170], 0x82f300
// 00568f72  8bc6                 mov eax, esi
// 00568f74  5e                   pop esi
// 00568f75  64890d00000000       mov dword ptr fs:[0], ecx
// 00568f7c  83c410               add esp, 0x10
// 00568f7f  c3                   ret 
// library openrbx-client/App\v8datamodel\GlobalSettings.cpp (function ??0?$DescribedNonCreatable@VGlobalSettings@RBX@@VServiceProvider@2@$1?sGlobalSettings@2@3QBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/GlobalSettings.cpp
