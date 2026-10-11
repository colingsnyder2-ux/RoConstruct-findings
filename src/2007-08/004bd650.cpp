// from server: 100% by auto
// roc 2007-08 004bd650  unit: RakPeer  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bd650
//
// 004bd650  81ecc0000000         sub esp, 0xc0
// 004bd656  33c0                 xor eax, eax
// 004bd658  56                   push esi
// 004bd659  57                   push edi
// 004bd65a  8944240c             mov dword ptr [esp + 0xc], eax
// 004bd65e  89442410             mov dword ptr [esp + 0x10], eax
// 004bd662  89442414             mov dword ptr [esp + 0x14], eax
// 004bd666  89442418             mov dword ptr [esp + 0x18], eax
// 004bd66a  8944241c             mov dword ptr [esp + 0x1c], eax
// 004bd66e  89442420             mov dword ptr [esp + 0x20], eax
// 004bd672  89442424             mov dword ptr [esp + 0x24], eax
// 004bd676  c744240801000000     mov dword ptr [esp + 8], 1
// 004bd67e  b908000000           mov ecx, 8
// 004bd683  8d742408             lea esi, [esp + 8]
// 004bd687  8d7c2468             lea edi, [esp + 0x68]
// 004bd68b  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bd68d  8bb424cc000000       mov esi, dword ptr [esp + 0xcc]
// 004bd694  b908000000           mov ecx, 8
// 004bd699  8d7c2408             lea edi, [esp + 8]
// 004bd69d  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bd69f  89442448             mov dword ptr [esp + 0x48], eax
// 004bd6a3  8944244c             mov dword ptr [esp + 0x4c], eax
// 004bd6a7  89442450             mov dword ptr [esp + 0x50], eax
// 004bd6ab  89442454             mov dword ptr [esp + 0x54], eax
// 004bd6af  89442458             mov dword ptr [esp + 0x58], eax
// 004bd6b3  8944245c             mov dword ptr [esp + 0x5c], eax
// 004bd6b7  89442460             mov dword ptr [esp + 0x60], eax
// 004bd6bb  89442464             mov dword ptr [esp + 0x64], eax
// 004bd6bf  89442428             mov dword ptr [esp + 0x28], eax
// 004bd6c3  8944242c             mov dword ptr [esp + 0x2c], eax
// 004bd6c7  89442430             mov dword ptr [esp + 0x30], eax
// 004bd6cb  89442434             mov dword ptr [esp + 0x34], eax
// 004bd6cf  89442438             mov dword ptr [esp + 0x38], eax
// 004bd6d3  8944243c             mov dword ptr [esp + 0x3c], eax
// 004bd6d7  89442440             mov dword ptr [esp + 0x40], eax
// 004bd6db  89442444             mov dword ptr [esp + 0x44], eax
// 004bd6df  8d842488000000       lea eax, [esp + 0x88]
// 004bd6e6  50                   push eax
// 004bd6e7  8d4c240c             lea ecx, [esp + 0xc]
// 004bd6eb  51                   push ecx
// 004bd6ec  8d542450             lea edx, [esp + 0x50]
// 004bd6f0  52                   push edx
// 004bd6f1  e85adaffff           call 0x4bb150
// 004bd6f6  8bbc24dc000000       mov edi, dword ptr [esp + 0xdc]
// 004bd6fd  83c40c               add esp, 0xc
// 004bd700  b908000000           mov ecx, 8
// 004bd705  8db42488000000       lea esi, [esp + 0x88]
// 004bd70c  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bd70e  5f                   pop edi
// 004bd70f  5e                   pop esi
// 004bd710  81c4c0000000         add esp, 0xc0
// 004bd716  c3                   ret 

// from server: 38% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet TCPInterface.cpp