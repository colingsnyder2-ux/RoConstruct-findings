// roc 2012-06 00561c90  unit: RBX::VHint::?$FactoryProduct::Creator  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00561c90
//
// 00561c90  8b442404             mov eax, dword ptr [esp + 4]
// 00561c94  56                   push esi
// 00561c95  6a00                 push 0
// 00561c97  50                   push eax
// 00561c98  8bf1                 mov esi, ecx
// 00561c9a  e8c1fdffff           call 0x561a60
// 00561c9f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00561ca3  51                   push ecx
// 00561ca4  ff15103eb200         call dword ptr [0xb23e10]
// 00561caa  66894602             mov word ptr [esi + 2], ax
// 00561cae  50                   push eax
// 00561caf  ff150c3eb200         call dword ptr [0xb23e0c]
// 00561cb5  66894610             mov word ptr [esi + 0x10], ax
// 00561cb9  b001                 mov al, 1
// 00561cbb  5e                   pop esi
// 00561cbc  c20c00               ret 0xc
// library rbx2016-raknet/RakNetTypes.cpp (function ?FromStringExplicitPort@SystemAddress@RakNet@@QAE_NPBDGH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakNetTypes.cpp
