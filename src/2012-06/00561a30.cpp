// roc 2012-06 00561a30  unit: RBX::VHint::?$FactoryProduct::Creator  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00561a30
//
// 00561a30  8bc1                 mov eax, ecx
// 00561a32  33c9                 xor ecx, ecx
// 00561a34  8908                 mov dword ptr [eax], ecx
// 00561a36  894804               mov dword ptr [eax + 4], ecx
// 00561a39  894808               mov dword ptr [eax + 8], ecx
// 00561a3c  89480c               mov dword ptr [eax + 0xc], ecx
// 00561a3f  b902000000           mov ecx, 2
// 00561a44  668908               mov word ptr [eax], cx
// 00561a47  baffff0000           mov edx, 0xffff
// 00561a4c  33c9                 xor ecx, ecx
// 00561a4e  66895012             mov word ptr [eax + 0x12], dx
// 00561a52  66894810             mov word ptr [eax + 0x10], cx
// 00561a56  c3                   ret 
// library rbx2016-raknet/RakNetTypes.cpp (function ??0SystemAddress@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakNetTypes.cpp
