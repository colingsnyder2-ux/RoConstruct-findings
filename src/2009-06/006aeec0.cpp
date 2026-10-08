// roc 2009-06 006aeec0  unit: RBX::NormalBreakConnector  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006aeec0
//
// 006aeec0  8b442408             mov eax, dword ptr [esp + 8]
// 006aeec4  56                   push esi
// 006aeec5  8bf1                 mov esi, ecx
// 006aeec7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006aeecb  50                   push eax
// 006aeecc  51                   push ecx
// 006aeecd  8bce                 mov ecx, esi
// 006aeecf  e8ac090300           call 0x6df880
// 006aeed4  d9ee                 fldz 
// 006aeed6  83c8ff               or eax, 0xffffffff
// 006aeed9  d95628               fst dword ptr [esi + 0x28]
// 006aeedc  d9562c               fst dword ptr [esi + 0x2c]
// 006aeedf  894620               mov dword ptr [esi + 0x20], eax
// 006aeee2  894624               mov dword ptr [esi + 0x24], eax
// 006aeee5  d95e30               fstp dword ptr [esi + 0x30]
// 006aeee8  8bc6                 mov eax, esi
// 006aeeea  5e                   pop esi
// 006aeeeb  c20800               ret 8
// library rbxgs/v8world\Contact.cpp (function ??0Contact@RBX@@QAE@PAVPrimitive@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
