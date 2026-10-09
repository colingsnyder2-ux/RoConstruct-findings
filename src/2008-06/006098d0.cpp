// roc 2008-06 006098d0  unit: RBX::Controller::W4ControllerType::?$EnumDesc  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006098d0
//
// 006098d0  6aff                 push -1
// 006098d2  68e8d67b00           push 0x7bd6e8
// 006098d7  64a100000000         mov eax, dword ptr fs:[0]
// 006098dd  50                   push eax
// 006098de  64892500000000       mov dword ptr fs:[0], esp
// 006098e5  51                   push ecx
// 006098e6  53                   push ebx
// 006098e7  56                   push esi
// 006098e8  57                   push edi
// 006098e9  33ff                 xor edi, edi
// 006098eb  8bf1                 mov esi, ecx
// 006098ed  8974240c             mov dword ptr [esp + 0xc], esi
// 006098f1  397c2424             cmp dword ptr [esp + 0x24], edi
// 006098f5  740a                 je 0x609901
// 006098f7  c78634010000ac0f8300 mov dword ptr [esi + 0x134], 0x830fac
// 00609901  8b442420             mov eax, dword ptr [esp + 0x20]
// 00609905  50                   push eax
// 00609906  e85520f5ff           call 0x55b960
// 0060990b  897c2418             mov dword ptr [esp + 0x18], edi
// 0060990f  e87cb7f7ff           call 0x585090
// 00609914  89461c               mov dword ptr [esi + 0x1c], eax
// 00609917  89b644010000         mov dword ptr [esi + 0x144], esi
// 0060991d  33c9                 xor ecx, ecx
// 0060991f  b301                 mov bl, 1
// 00609921  889e41010000         mov byte ptr [esi + 0x141], bl
// 00609927  b8a08d6000           mov eax, 0x608da0
// 0060992c  898648010000         mov dword ptr [esi + 0x148], eax
// 00609932  898e4c010000         mov dword ptr [esi + 0x14c], ecx
// 00609938  33d2                 xor edx, edx
// 0060993a  899650010000         mov dword ptr [esi + 0x150], edx
// 00609940  889e59010000         mov byte ptr [esi + 0x159], bl
// 00609946  89b65c010000         mov dword ptr [esi + 0x15c], esi
// 0060994c  b8c0906000           mov eax, 0x6090c0
// 00609951  898660010000         mov dword ptr [esi + 0x160], eax
// 00609957  898e64010000         mov dword ptr [esi + 0x164], ecx
// 0060995d  899668010000         mov dword ptr [esi + 0x168], edx
// 00609963  b890966000           mov eax, 0x609690
// 00609968  898680010000         mov dword ptr [esi + 0x180], eax
// 0060996e  898e84010000         mov dword ptr [esi + 0x184], ecx
// 00609974  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00609978  89be70010000         mov dword ptr [esi + 0x170], edi
// 0060997e  889e74010000         mov byte ptr [esi + 0x174], bl
// 00609984  89b678010000         mov dword ptr [esi + 0x178], esi
// 0060998a  899688010000         mov dword ptr [esi + 0x188], edx
// 00609990  89be94010000         mov dword ptr [esi + 0x194], edi
// 00609996  889e98010000         mov byte ptr [esi + 0x198], bl
// 0060999c  89be9c010000         mov dword ptr [esi + 0x19c], edi
// 006099a2  5f                   pop edi
// 006099a3  8bc6                 mov eax, esi
// 006099a5  5e                   pop esi
// 006099a6  5b                   pop ebx
// 006099a7  64890d00000000       mov dword ptr fs:[0], ecx
// 006099ae  83c410               add esp, 0x10
// 006099b1  c20800               ret 8
// library openrbx-client/App\v8datamodel\PVInstance.cpp (function ??0PVInstance@RBX@@IAE@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PVInstance.cpp
