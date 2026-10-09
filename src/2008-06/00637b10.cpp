// roc 2008-06 00637b10  unit: RBX::VBrickColor::V?$Value::?$DescribedCreatable  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00637b10
//
// 00637b10  6aff                 push -1
// 00637b12  68f8a17d00           push 0x7da1f8
// 00637b17  64a100000000         mov eax, dword ptr fs:[0]
// 00637b1d  50                   push eax
// 00637b1e  64892500000000       mov dword ptr fs:[0], esp
// 00637b25  51                   push ecx
// 00637b26  56                   push esi
// 00637b27  8bf1                 mov esi, ecx
// 00637b29  89742404             mov dword ptr [esp + 4], esi
// 00637b2d  e85ed5ffff           call 0x635090
// 00637b32  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00637b3a  e891edffff           call 0x6368d0
// 00637b3f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00637b43  89461c               mov dword ptr [esi + 0x1c], eax
// 00637b46  c706dc8c8400         mov dword ptr [esi], 0x848cdc
// 00637b4c  c74610d08c8400       mov dword ptr [esi + 0x10], 0x848cd0
// 00637b53  c74614c88c8400       mov dword ptr [esi + 0x14], 0x848cc8
// 00637b5a  c74620c08c8400       mov dword ptr [esi + 0x20], 0x848cc0
// 00637b61  c74624b08c8400       mov dword ptr [esi + 0x24], 0x848cb0
// 00637b68  c74644a08c8400       mov dword ptr [esi + 0x44], 0x848ca0
// 00637b6f  c74664908c8400       mov dword ptr [esi + 0x64], 0x848c90
// 00637b76  c78684000000808c8400 mov dword ptr [esi + 0x84], 0x848c80
// 00637b80  c786a4000000708c8400 mov dword ptr [esi + 0xa4], 0x848c70
// 00637b8a  c786c4000000608c8400 mov dword ptr [esi + 0xc4], 0x848c60
// 00637b94  8bc6                 mov eax, esi
// 00637b96  5e                   pop esi
// 00637b97  64890d00000000       mov dword ptr fs:[0], ecx
// 00637b9e  83c410               add esp, 0x10
// 00637ba1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
