// roc 2012-06 00561cc0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00561cc0
//
// 00561cc0  8b442404             mov eax, dword ptr [esp + 4]
// 00561cc4  668b5002             mov dx, word ptr [eax + 2]
// 00561cc8  66895102             mov word ptr [ecx + 2], dx
// 00561ccc  668b4010             mov ax, word ptr [eax + 0x10]
// 00561cd0  66894110             mov word ptr [ecx + 0x10], ax
// 00561cd4  c20400               ret 4
// library rbx2016-raknet/RakNetTypes.cpp (function ?CopyPort@SystemAddress@RakNet@@QAEXABU12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakNetTypes.cpp
