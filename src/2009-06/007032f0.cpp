// roc 2009-06 007032f0  unit: RBX::AdornG3D  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007032f0
//
// 007032f0  56                   push esi
// 007032f1  8bf1                 mov esi, ecx
// 007032f3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007032f7  8b06                 mov eax, dword ptr [esi]
// 007032f9  8b503c               mov edx, dword ptr [eax + 0x3c]
// 007032fc  51                   push ecx
// 007032fd  8bce                 mov ecx, esi
// 007032ff  ffd2                 call edx
// 00703301  8b4e04               mov ecx, dword ptr [esi + 4]
// 00703304  6a05                 push 5
// 00703306  e815f6d9ff           call 0x4a2920
// 0070330b  8b442408             mov eax, dword ptr [esp + 8]
// 0070330f  8b4e04               mov ecx, dword ptr [esi + 4]
// 00703312  50                   push eax
// 00703313  e818c2d9ff           call 0x49f530
// 00703318  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070331c  51                   push ecx
// 0070331d  8b4e04               mov ecx, dword ptr [esi + 4]
// 00703320  e80bc2d9ff           call 0x49f530
// 00703325  8b542410             mov edx, dword ptr [esp + 0x10]
// 00703329  8b4e04               mov ecx, dword ptr [esi + 4]
// 0070332c  52                   push edx
// 0070332d  e8fec1d9ff           call 0x49f530
// 00703332  8b442414             mov eax, dword ptr [esp + 0x14]
// 00703336  8b4e04               mov ecx, dword ptr [esi + 4]
// 00703339  50                   push eax
// 0070333a  e8f1c1d9ff           call 0x49f530
// 0070333f  8b4e04               mov ecx, dword ptr [esi + 4]
// 00703342  e829ccd9ff           call 0x49ff70
// 00703347  5e                   pop esi
// 00703348  c21400               ret 0x14
// library rbxgs-appdraw/AdornG3D.cpp (function ?quad@AdornG3D@RBX@@UAEXABVVector3@G3D@@000ABVColor4@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
