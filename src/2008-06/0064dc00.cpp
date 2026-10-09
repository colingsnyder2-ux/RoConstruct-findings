// roc 2008-06 0064dc00  unit: RBX::SimJobStage  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064dc00
//
// 0064dc00  8b442404             mov eax, dword ptr [esp + 4]
// 0064dc04  56                   push esi
// 0064dc05  8bf1                 mov esi, ecx
// 0064dc07  c74604ffffffff       mov dword ptr [esi + 4], 0xffffffff
// 0064dc0e  c7064cb28400         mov dword ptr [esi], 0x84b24c
// 0064dc14  c7460801000000       mov dword ptr [esi + 8], 1
// 0064dc1b  85c0                 test eax, eax
// 0064dc1d  7505                 jne 0x64dc24
// 0064dc1f  e88c6ffcff           call 0x614bb0
// 0064dc24  d9ee                 fldz 
// 0064dc26  89460c               mov dword ptr [esi + 0xc], eax
// 0064dc29  d95610               fst dword ptr [esi + 0x10]
// 0064dc2c  8bc6                 mov eax, esi
// 0064dc2e  d95614               fst dword ptr [esi + 0x14]
// 0064dc31  d95618               fst dword ptr [esi + 0x18]
// 0064dc34  d9561c               fst dword ptr [esi + 0x1c]
// 0064dc37  d95620               fst dword ptr [esi + 0x20]
// 0064dc3a  d95624               fst dword ptr [esi + 0x24]
// 0064dc3d  d95628               fst dword ptr [esi + 0x28]
// 0064dc40  d9562c               fst dword ptr [esi + 0x2c]
// 0064dc43  d95e30               fstp dword ptr [esi + 0x30]
// 0064dc46  5e                   pop esi
// 0064dc47  c20400               ret 4
// library openrbx-client/App\v8kernel\Point.cpp (function ??0Point@RBX@@IAE@PAVBody@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8kernel/Point.cpp
