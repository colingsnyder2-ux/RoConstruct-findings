// roc 2012-06 00561810  unit: RBX::VHint::?$FactoryProduct::Creator  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00561810
//
// 00561810  8bc1                 mov eax, ecx
// 00561812  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00561816  8b11                 mov edx, dword ptr [ecx]
// 00561818  8910                 mov dword ptr [eax], edx
// 0056181a  8b5104               mov edx, dword ptr [ecx + 4]
// 0056181d  895004               mov dword ptr [eax + 4], edx
// 00561820  8b5108               mov edx, dword ptr [ecx + 8]
// 00561823  895008               mov dword ptr [eax + 8], edx
// 00561826  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00561829  89500c               mov dword ptr [eax + 0xc], edx
// 0056182c  668b5112             mov dx, word ptr [ecx + 0x12]
// 00561830  66895012             mov word ptr [eax + 0x12], dx
// 00561834  668b4910             mov cx, word ptr [ecx + 0x10]
// 00561838  66894810             mov word ptr [eax + 0x10], cx
// 0056183c  c20400               ret 4
// library rbx2016-raknet/RakNetTypes.cpp (function ??4SystemAddress@RakNet@@QAEAAU01@ABU01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakNetTypes.cpp
