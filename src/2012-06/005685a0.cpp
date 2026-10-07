// roc 2012-06 005685a0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005685a0
//
// 005685a0  56                   push esi
// 005685a1  8bf1                 mov esi, ecx
// 005685a3  e8b8f8ffff           call 0x567e60
// 005685a8  6a01                 push 1
// 005685aa  6a20                 push 0x20
// 005685ac  84c0                 test al, al
// 005685ae  7433                 je 0x5685e3
// 005685b0  8b442410             mov eax, dword ptr [esp + 0x10]
// 005685b4  0fb64803             movzx ecx, byte ptr [eax + 3]
// 005685b8  0fb65002             movzx edx, byte ptr [eax + 2]
// 005685bc  884c2410             mov byte ptr [esp + 0x10], cl
// 005685c0  0fb64801             movzx ecx, byte ptr [eax + 1]
// 005685c4  88542411             mov byte ptr [esp + 0x11], dl
// 005685c8  0fb610               movzx edx, byte ptr [eax]
// 005685cb  8d442410             lea eax, [esp + 0x10]
// 005685cf  884c2412             mov byte ptr [esp + 0x12], cl
// 005685d3  50                   push eax
// 005685d4  8bce                 mov ecx, esi
// 005685d6  88542417             mov byte ptr [esp + 0x17], dl
// 005685da  e8e1f9ffff           call 0x567fc0
// 005685df  5e                   pop esi
// 005685e0  c20400               ret 4
// 005685e3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005685e7  51                   push ecx
// 005685e8  8bce                 mov ecx, esi
// 005685ea  e8d1f9ffff           call 0x567fc0
// 005685ef  5e                   pop esi
// 005685f0  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ??$WriteCompressed@I@BitStream@RakNet@@QAEXABI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
