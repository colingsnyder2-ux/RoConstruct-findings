// roc 2008-06 0060bce0  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060bce0
//
// 0060bce0  6aff                 push -1
// 0060bce2  68c8d37b00           push 0x7bd3c8
// 0060bce7  64a100000000         mov eax, dword ptr fs:[0]
// 0060bced  50                   push eax
// 0060bcee  64892500000000       mov dword ptr fs:[0], esp
// 0060bcf5  51                   push ecx
// 0060bcf6  56                   push esi
// 0060bcf7  8bf1                 mov esi, ecx
// 0060bcf9  89742404             mov dword ptr [esp + 4], esi
// 0060bcfd  e84edeffff           call 0x609b50
// 0060bd02  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0060bd0a  e8314cfbff           call 0x5c0940
// 0060bd0f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060bd13  89461c               mov dword ptr [esi + 0x1c], eax
// 0060bd16  c70694318400         mov dword ptr [esi], 0x843194
// 0060bd1c  c7461088318400       mov dword ptr [esi + 0x10], 0x843188
// 0060bd23  c7461480318400       mov dword ptr [esi + 0x14], 0x843180
// 0060bd2a  c7462078318400       mov dword ptr [esi + 0x20], 0x843178
// 0060bd31  c7462468318400       mov dword ptr [esi + 0x24], 0x843168
// 0060bd38  c7464458318400       mov dword ptr [esi + 0x44], 0x843158
// 0060bd3f  c7466448318400       mov dword ptr [esi + 0x64], 0x843148
// 0060bd46  c7868400000038318400 mov dword ptr [esi + 0x84], 0x843138
// 0060bd50  c786a400000028318400 mov dword ptr [esi + 0xa4], 0x843128
// 0060bd5a  c786c400000018318400 mov dword ptr [esi + 0xc4], 0x843118
// 0060bd64  8bc6                 mov eax, esi
// 0060bd66  5e                   pop esi
// 0060bd67  64890d00000000       mov dword ptr fs:[0], ecx
// 0060bd6e  83c410               add esp, 0x10
// 0060bd71  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
