// roc 2012-06 005618d0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005618d0
//
// 005618d0  668b5102             mov dx, word ptr [ecx + 2]
// 005618d4  8b442404             mov eax, dword ptr [esp + 4]
// 005618d8  663b5002             cmp dx, word ptr [eax + 2]
// 005618dc  751f                 jne 0x5618fd
// 005618de  66833902             cmp word ptr [ecx], 2
// 005618e2  7519                 jne 0x5618fd
// 005618e4  8b4904               mov ecx, dword ptr [ecx + 4]
// 005618e7  3b4804               cmp ecx, dword ptr [eax + 4]
// 005618ea  7511                 jne 0x5618fd
// 005618ec  b801000000           mov eax, 1
// 005618f1  33d2                 xor edx, edx
// 005618f3  84c0                 test al, al
// 005618f5  0f94c2               sete dl
// 005618f8  8ac2                 mov al, dl
// 005618fa  c20400               ret 4
// 005618fd  33c0                 xor eax, eax
// 005618ff  33d2                 xor edx, edx
// 00561901  84c0                 test al, al
// 00561903  0f94c2               sete dl
// 00561906  8ac2                 mov al, dl
// 00561908  c20400               ret 4
// library rbx2016-raknet/RakNetTypes.cpp (function ??9SystemAddress@RakNet@@QBE_NABU01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakNetTypes.cpp
