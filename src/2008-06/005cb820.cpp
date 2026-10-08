// roc 2008-06 005cb820  unit: RBX::PlayerController  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cb820
//
// 005cb820  8b442404             mov eax, dword ptr [esp + 4]
// 005cb824  56                   push esi
// 005cb825  50                   push eax
// 005cb826  8bf1                 mov esi, ecx
// 005cb828  e8c3faffff           call 0x5cb2f0
// 005cb82d  d9ee                 fldz 
// 005cb82f  d95e20               fstp dword ptr [esi + 0x20]
// 005cb832  33c0                 xor eax, eax
// 005cb834  d9e8                 fld1 
// 005cb836  c706eca08300         mov dword ptr [esi], 0x83a0ec
// 005cb83c  c7460ce0a08300       mov dword ptr [esi + 0xc], 0x83a0e0
// 005cb843  894624               mov dword ptr [esi + 0x24], eax
// 005cb846  894628               mov dword ptr [esi + 0x28], eax
// 005cb849  89462c               mov dword ptr [esi + 0x2c], eax
// 005cb84c  894630               mov dword ptr [esi + 0x30], eax
// 005cb84f  894634               mov dword ptr [esi + 0x34], eax
// 005cb852  894638               mov dword ptr [esi + 0x38], eax
// 005cb855  89463c               mov dword ptr [esi + 0x3c], eax
// 005cb858  894640               mov dword ptr [esi + 0x40], eax
// 005cb85b  894644               mov dword ptr [esi + 0x44], eax
// 005cb85e  894648               mov dword ptr [esi + 0x48], eax
// 005cb861  89464c               mov dword ptr [esi + 0x4c], eax
// 005cb864  89465c               mov dword ptr [esi + 0x5c], eax
// 005cb867  894650               mov dword ptr [esi + 0x50], eax
// 005cb86a  894660               mov dword ptr [esi + 0x60], eax
// 005cb86d  894658               mov dword ptr [esi + 0x58], eax
// 005cb870  d95e54               fstp dword ptr [esi + 0x54]
// 005cb873  8bc6                 mov eax, esi
// 005cb875  5e                   pop esi
// 005cb876  c20400               ret 4
// library rbxgs/v8datamodel\UserController.cpp (function ??0AIController@RBX@@IAE@PBVPVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
