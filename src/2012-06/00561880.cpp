// roc 2012-06 00561880  unit: RBX::VHint::?$FactoryProduct::Creator  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00561880
//
// 00561880  8b442404             mov eax, dword ptr [esp + 4]
// 00561884  56                   push esi
// 00561885  8bf1                 mov esi, ecx
// 00561887  50                   push eax
// 00561888  66894602             mov word ptr [esi + 2], ax
// 0056188c  ff150c3eb200         call dword ptr [0xb23e0c]
// 00561892  66894610             mov word ptr [esi + 0x10], ax
// 00561896  5e                   pop esi
// 00561897  c20400               ret 4
// library rbx2016-raknet/RakNetTypes.cpp (function ?SetPortNetworkOrder@SystemAddress@RakNet@@QAEXG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakNetTypes.cpp
