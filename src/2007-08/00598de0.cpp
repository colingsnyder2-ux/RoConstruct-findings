// roc 2007-08 00598de0  unit: RBX::PlayerController  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00598de0
//
// 00598de0  8b442404             mov eax, dword ptr [esp + 4]
// 00598de4  56                   push esi
// 00598de5  50                   push eax
// 00598de6  8bf1                 mov esi, ecx
// 00598de8  e813faffff           call 0x598800
// 00598ded  d9ee                 fldz 
// 00598def  d95e20               fstp dword ptr [esi + 0x20]
// 00598df2  33c0                 xor eax, eax
// 00598df4  d9e8                 fld1 
// 00598df6  c70664127b00         mov dword ptr [esi], 0x7b1264
// 00598dfc  c7460c58127b00       mov dword ptr [esi + 0xc], 0x7b1258
// 00598e03  894624               mov dword ptr [esi + 0x24], eax
// 00598e06  894628               mov dword ptr [esi + 0x28], eax
// 00598e09  89462c               mov dword ptr [esi + 0x2c], eax
// 00598e0c  894630               mov dword ptr [esi + 0x30], eax
// 00598e0f  894634               mov dword ptr [esi + 0x34], eax
// 00598e12  894638               mov dword ptr [esi + 0x38], eax
// 00598e15  89463c               mov dword ptr [esi + 0x3c], eax
// 00598e18  894640               mov dword ptr [esi + 0x40], eax
// 00598e1b  894644               mov dword ptr [esi + 0x44], eax
// 00598e1e  894648               mov dword ptr [esi + 0x48], eax
// 00598e21  89464c               mov dword ptr [esi + 0x4c], eax
// 00598e24  89465c               mov dword ptr [esi + 0x5c], eax
// 00598e27  894650               mov dword ptr [esi + 0x50], eax
// 00598e2a  894660               mov dword ptr [esi + 0x60], eax
// 00598e2d  894658               mov dword ptr [esi + 0x58], eax
// 00598e30  d95e54               fstp dword ptr [esi + 0x54]
// 00598e33  8bc6                 mov eax, esi
// 00598e35  5e                   pop esi
// 00598e36  c20400               ret 4
// library rbxgs/v8datamodel\UserController.cpp (function ??0AIController@RBX@@IAE@PBVPVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
