// roc 2008-06 00606c20  unit: RBX::ContactConnector  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00606c20
//
// 00606c20  8b442408             mov eax, dword ptr [esp + 8]
// 00606c24  56                   push esi
// 00606c25  8bf1                 mov esi, ecx
// 00606c27  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00606c2b  50                   push eax
// 00606c2c  51                   push ecx
// 00606c2d  8bce                 mov ecx, esi
// 00606c2f  e82c260500           call 0x659260
// 00606c34  d9ee                 fldz 
// 00606c36  83c8ff               or eax, 0xffffffff
// 00606c39  d95628               fst dword ptr [esi + 0x28]
// 00606c3c  d9562c               fst dword ptr [esi + 0x2c]
// 00606c3f  894620               mov dword ptr [esi + 0x20], eax
// 00606c42  894624               mov dword ptr [esi + 0x24], eax
// 00606c45  d95e30               fstp dword ptr [esi + 0x30]
// 00606c48  8bc6                 mov eax, esi
// 00606c4a  5e                   pop esi
// 00606c4b  c20800               ret 8
// library rbxgs/v8world\Contact.cpp (function ??0Contact@RBX@@QAE@PAVPrimitive@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
