// roc 2007-03 005eda30  unit: seg_005e0000  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005eda30
//
// 005eda30  6aff                 push -1
// 005eda32  6838c57500           push 0x75c538
// 005eda37  64a100000000         mov eax, dword ptr fs:[0]
// 005eda3d  50                   push eax
// 005eda3e  64892500000000       mov dword ptr fs:[0], esp
// 005eda45  51                   push ecx
// 005eda46  56                   push esi
// 005eda47  8bf1                 mov esi, ecx
// 005eda49  89742404             mov dword ptr [esp + 4], esi
// 005eda4d  c74604ffffffff       mov dword ptr [esi + 4], 0xffffffff
// 005eda54  8d4e08               lea ecx, [esi + 8]
// 005eda57  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005eda5f  c706a4fe7b00         mov dword ptr [esi], 0x7bfea4
// 005eda65  e8d6470200           call 0x612240
// 005eda6a  d9ee                 fldz 
// 005eda6c  d95644               fst dword ptr [esi + 0x44]
// 005eda6f  b801000000           mov eax, 1
// 005eda74  d95648               fst dword ptr [esi + 0x48]
// 005eda77  d9564c               fst dword ptr [esi + 0x4c]
// 005eda7a  d9442418             fld dword ptr [esp + 0x18]
// 005eda7e  d95e2c               fstp dword ptr [esi + 0x2c]
// 005eda81  d944241c             fld dword ptr [esp + 0x1c]
// 005eda85  d95e34               fstp dword ptr [esi + 0x34]
// 005eda88  d9442420             fld dword ptr [esp + 0x20]
// 005eda8c  d95e30               fstp dword ptr [esi + 0x30]
// 005eda8f  840500788b00         test byte ptr [0x8b7800], al
// 005eda95  7518                 jne 0x5edaaf
// 005eda97  090500788b00         or dword ptr [0x8b7800], eax
// 005eda9d  d915f4778b00         fst dword ptr [0x8b77f4]
// 005edaa3  d915f8778b00         fst dword ptr [0x8b77f8]
// 005edaa9  d915fc778b00         fst dword ptr [0x8b77fc]
// 005edaaf  d905f4778b00         fld dword ptr [0x8b77f4]
// 005edab5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005edab9  d95e44               fstp dword ptr [esi + 0x44]
// 005edabc  8bc6                 mov eax, esi
// 005edabe  d905f8778b00         fld dword ptr [0x8b77f8]
// 005edac4  d95e48               fstp dword ptr [esi + 0x48]
// 005edac7  d905fc778b00         fld dword ptr [0x8b77fc]
// 005edacd  d95e4c               fstp dword ptr [esi + 0x4c]
// 005edad0  d95638               fst dword ptr [esi + 0x38]
// 005edad3  d9563c               fst dword ptr [esi + 0x3c]
// 005edad6  d95e40               fstp dword ptr [esi + 0x40]
// 005edad9  5e                   pop esi
// 005edada  64890d00000000       mov dword ptr fs:[0], ecx
// 005edae1  83c410               add esp, 0x10
// 005edae4  c20c00               ret 0xc
// library rbxgs/v8world\Contact.cpp (function ??0ContactConnector@RBX@@QAE@MMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
