// from server: 100% by colin
// roc 2008-06 00573ac0  unit: RBX::PercentPanel  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00573ac0
//
// 00573ac0  56                   push esi
// 00573ac1  8bb108010000         mov esi, dword ptr [ecx + 0x108]
// 00573ac7  8b4610               mov eax, dword ptr [esi + 0x10]
// 00573aca  2b460c               sub eax, dword ptr [esi + 0xc]
// 00573acd  57                   push edi
// 00573ace  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00573ad2  c1f803               sar eax, 3
// 00573ad5  3bf8                 cmp edi, eax
// 00573ad7  7206                 jb 0x573adf
// 00573ad9  ff1590288000         call dword ptr [0x802890]
// 00573adf  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 