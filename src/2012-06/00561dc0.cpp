// roc 2012-06 00561dc0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00561dc0
//
// 00561dc0  56                   push esi
// 00561dc1  8bf1                 mov esi, ecx
// 00561dc3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00561dc7  6a00                 push 0
// 00561dc9  b802000000           mov eax, 2
// 00561dce  51                   push ecx
// 00561dcf  8bce                 mov ecx, esi
// 00561dd1  668906               mov word ptr [esi], ax
// 00561dd4  e887fcffff           call 0x561a60
// 00561dd9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00561ddd  52                   push edx
// 00561dde  ff15103eb200         call dword ptr [0xb23e10]
// 00561de4  66894602             mov word ptr [esi + 2], ax
// 00561de8  50                   push eax
// 00561de9  ff150c3eb200         call dword ptr [0xb23e0c]
// 00561def  66894610             mov word ptr [esi + 0x10], ax
// 00561df3  b8ffff0000           mov eax, 0xffff
// 00561df8  66894612             mov word ptr [esi + 0x12], ax
// 00561dfc  8bc6                 mov eax, esi
// 00561dfe  5e                   pop esi
// 00561dff  c20800               ret 8
// library rbx2016-raknet/RakNetTypes.cpp (function ??0SystemAddress@RakNet@@QAE@PBDG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakNetTypes.cpp
