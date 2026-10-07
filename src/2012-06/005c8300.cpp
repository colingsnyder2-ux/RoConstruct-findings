// roc 2012-06 005c8300  unit: RakNet::RakPeer  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c8300
//
// 005c8300  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005c8304  dd058008b800         fld qword ptr [0xb80880]
// 005c830a  8944240c             mov dword ptr [esp + 0xc], eax
// 005c830e  dd5908               fstp qword ptr [ecx + 8]
// 005c8311  db44240c             fild dword ptr [esp + 0xc]
// 005c8315  8901                 mov dword ptr [ecx], eax
// 005c8317  85c0                 test eax, eax
// 005c8319  7d06                 jge 0x5c8321
// 005c831b  dc0578fdb400         fadd qword ptr [0xb4fd78]
// 005c8321  33c0                 xor eax, eax
// 005c8323  dd5910               fstp qword ptr [ecx + 0x10]
// 005c8326  d9ee                 fldz 
// 005c8328  894120               mov dword ptr [ecx + 0x20], eax
// 005c832b  dd5918               fstp qword ptr [ecx + 0x18]
// 005c832e  894124               mov dword ptr [ecx + 0x24], eax
// 005c8331  894128               mov dword ptr [ecx + 0x28], eax
// 005c8334  88412b               mov byte ptr [ecx + 0x2b], al
// 005c8337  89412c               mov dword ptr [ecx + 0x2c], eax
// 005c833a  88412f               mov byte ptr [ecx + 0x2f], al
// 005c833d  884131               mov byte ptr [ecx + 0x31], al
// 005c8340  884130               mov byte ptr [ecx + 0x30], al
// 005c8343  894134               mov dword ptr [ecx + 0x34], eax
// 005c8346  884137               mov byte ptr [ecx + 0x37], al
// 005c8349  884138               mov byte ptr [ecx + 0x38], al
// 005c834c  c20c00               ret 0xc
// library rbx2016-raknet/CCRakNetSlidingWindow.cpp (function ?Init@CCRakNetSlidingWindow@RakNet@@QAEX_KI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CCRakNetSlidingWindow.cpp
