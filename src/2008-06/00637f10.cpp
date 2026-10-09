// roc 2008-06 00637f10  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00637f10
//
// 00637f10  6aff                 push -1
// 00637f12  6898a27d00           push 0x7da298
// 00637f17  64a100000000         mov eax, dword ptr fs:[0]
// 00637f1d  50                   push eax
// 00637f1e  64892500000000       mov dword ptr fs:[0], esp
// 00637f25  51                   push ecx
// 00637f26  56                   push esi
// 00637f27  8bf1                 mov esi, ecx
// 00637f29  89742404             mov dword ptr [esp + 4], esi
// 00637f2d  e86eddffff           call 0x635ca0
// 00637f32  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00637f3a  e8d1efffff           call 0x636f10
// 00637f3f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00637f43  89461c               mov dword ptr [esi + 0x1c], eax
// 00637f46  c7069c908400         mov dword ptr [esi], 0x84909c
// 00637f4c  c7461090908400       mov dword ptr [esi + 0x10], 0x849090
// 00637f53  c7461488908400       mov dword ptr [esi + 0x14], 0x849088
// 00637f5a  c7462080908400       mov dword ptr [esi + 0x20], 0x849080
// 00637f61  c7462470908400       mov dword ptr [esi + 0x24], 0x849070
// 00637f68  c7464460908400       mov dword ptr [esi + 0x44], 0x849060
// 00637f6f  c7466450908400       mov dword ptr [esi + 0x64], 0x849050
// 00637f76  c7868400000040908400 mov dword ptr [esi + 0x84], 0x849040
// 00637f80  c786a400000030908400 mov dword ptr [esi + 0xa4], 0x849030
// 00637f8a  c786c400000020908400 mov dword ptr [esi + 0xc4], 0x849020
// 00637f94  8bc6                 mov eax, esi
// 00637f96  5e                   pop esi
// 00637f97  64890d00000000       mov dword ptr fs:[0], ecx
// 00637f9e  83c410               add esp, 0x10
// 00637fa1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
