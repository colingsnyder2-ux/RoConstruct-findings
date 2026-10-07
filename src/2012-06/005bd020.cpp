// roc 2012-06 005bd020  unit: RakNet::RakPeer  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bd020
//
// 005bd020  83ec18               sub esp, 0x18
// 005bd023  56                   push esi
// 005bd024  8b742420             mov esi, dword ptr [esp + 0x20]
// 005bd028  57                   push edi
// 005bd029  8bf9                 mov edi, ecx
// 005bd02b  8bce                 mov ecx, esi
// 005bd02d  e80e49faff           call 0x561940
// 005bd032  6a01                 push 1
// 005bd034  88442428             mov byte ptr [esp + 0x28], al
// 005bd038  6a08                 push 8
// 005bd03a  8d44242c             lea eax, [esp + 0x2c]
// 005bd03e  50                   push eax
// 005bd03f  8bcf                 mov ecx, edi
// 005bd041  e84aadfaff           call 0x567d90
// 005bd046  8bce                 mov ecx, esi
// 005bd048  e8f348faff           call 0x561940
// 005bd04d  3c04                 cmp al, 4
// 005bd04f  755b                 jne 0x5bd0ac
// 005bd051  8b0e                 mov ecx, dword ptr [esi]
// 005bd053  8b4608               mov eax, dword ptr [esi + 8]
// 005bd056  8b5604               mov edx, dword ptr [esi + 4]
// 005bd059  894c240c             mov dword ptr [esp + 0xc], ecx
// 005bd05d  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005bd060  6a01                 push 1
// 005bd062  89442418             mov dword ptr [esp + 0x18], eax
// 005bd066  8b4604               mov eax, dword ptr [esi + 4]
// 005bd069  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005bd06d  6a20                 push 0x20
// 005bd06f  8d4c242c             lea ecx, [esp + 0x2c]
// 005bd073  89542418             mov dword ptr [esp + 0x18], edx
// 005bd077  8b5610               mov edx, dword ptr [esi + 0x10]
// 005bd07a  f7d0                 not eax
// 005bd07c  51                   push ecx
// 005bd07d  8bcf                 mov ecx, edi
// 005bd07f  89542428             mov dword ptr [esp + 0x28], edx
// 005bd083  89442430             mov dword ptr [esp + 0x30], eax
// 005bd087  e804adfaff           call 0x567d90
// 005bd08c  8d4c240c             lea ecx, [esp + 0xc]
// 005bd090  e8db47faff           call 0x561870
// 005bd095  6a01                 push 1
// 005bd097  0fb7d0               movzx edx, ax
// 005bd09a  6a10                 push 0x10
// 005bd09c  8d442410             lea eax, [esp + 0x10]
// 005bd0a0  50                   push eax
// 005bd0a1  8bcf                 mov ecx, edi
// 005bd0a3  89542414             mov dword ptr [esp + 0x14], edx
// 005bd0a7  e8e4acfaff           call 0x567d90
// 005bd0ac  5f                   pop edi
// 005bd0ad  5e                   pop esi
// 005bd0ae  83c418               add esp, 0x18
// 005bd0b1  c20400               ret 4
// library rbx2016-raknet/CloudClient.cpp (function ??$Write@USystemAddress@RakNet@@@BitStream@RakNet@@QAEXABUSystemAddress@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudClient.cpp
