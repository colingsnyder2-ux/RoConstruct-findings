// roc 2007-03 00539250  unit: seg_00530000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00539250
//
// 00539250  56                   push esi
// 00539251  6a10                 push 0x10
// 00539253  8bf1                 mov esi, ecx
// 00539255  e8ae4e0e00           call 0x61e108
// 0053925a  83c404               add esp, 4
// 0053925d  85c0                 test eax, eax
// 0053925f  741d                 je 0x53927e
// 00539261  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00539265  d901                 fld dword ptr [ecx]
// 00539267  c700ac577a00         mov dword ptr [eax], 0x7a57ac
// 0053926d  d95804               fstp dword ptr [eax + 4]
// 00539270  d94104               fld dword ptr [ecx + 4]
// 00539273  d95808               fstp dword ptr [eax + 8]
// 00539276  d94108               fld dword ptr [ecx + 8]
// 00539279  d9580c               fstp dword ptr [eax + 0xc]
// 0053927c  eb02                 jmp 0x539280
// 0053927e  33c0                 xor eax, eax
// 00539280  8b0e                 mov ecx, dword ptr [esi]
// 00539282  85c9                 test ecx, ecx
// 00539284  8906                 mov dword ptr [esi], eax
// 00539286  7408                 je 0x539290
// 00539288  8b01                 mov eax, dword ptr [ecx]
// 0053928a  8b10                 mov edx, dword ptr [eax]
// 0053928c  6a01                 push 1
// 0053928e  ffd2                 call edx
// 00539290  8bc6                 mov eax, esi
// 00539292  5e                   pop esi
// 00539293  c20400               ret 4
// library rbxgs/v8datamodel\Gyro.cpp (function ??$?4VVector3@G3D@@@any@boost@@QAEAAV01@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
