// roc 2008-06 00635450  unit: RBX::_N$1?sBoolValue::V?$Value::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00635450
//
// 00635450  6aff                 push -1
// 00635452  68abfd7b00           push 0x7bfdab
// 00635457  64a100000000         mov eax, dword ptr fs:[0]
// 0063545d  50                   push eax
// 0063545e  64892500000000       mov dword ptr fs:[0], esp
// 00635465  51                   push ecx
// 00635466  8b442418             mov eax, dword ptr [esp + 0x18]
// 0063546a  53                   push ebx
// 0063546b  55                   push ebp
// 0063546c  8be9                 mov ebp, ecx
// 0063546e  56                   push esi
// 0063546f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00635473  50                   push eax
// 00635474  8d5d04               lea ebx, [ebp + 4]
// 00635477  56                   push esi
// 00635478  8bcb                 mov ecx, ebx
// 0063547a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0063547e  897500               mov dword ptr [ebp], esi
// 00635481  e83affffff           call 0x6353c0
// 00635486  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0063548e  85f6                 test esi, esi
// 00635490  7453                 je 0x6354e5
// 00635492  57                   push edi
// 00635493  8dbee4000000         lea edi, [esi + 0xe4]
// 00635499  85ff                 test edi, edi
// 0063549b  7431                 je 0x6354ce
// 0063549d  8937                 mov dword ptr [edi], esi
// 0063549f  8b33                 mov esi, dword ptr [ebx]
// 006354a1  85f6                 test esi, esi
// 006354a3  740c                 je 0x6354b1
// 006354a5  8d4e08               lea ecx, [esi + 8]
// 006354a8  ba01000000           mov edx, 1
// 006354ad  f00fc111             lock xadd dword ptr [ecx], edx
// 006354b1  8b4f04               mov ecx, dword ptr [edi + 4]
// 006354b4  85c9                 test ecx, ecx
// 006354b6  7413                 je 0x6354cb
// 006354b8  8d4108               lea eax, [ecx + 8]
// 006354bb  83caff               or edx, 0xffffffff
// 006354be  f00fc110             lock xadd dword ptr [eax], edx
// 006354c2  7507                 jne 0x6354cb
// 006354c4  8b01                 mov eax, dword ptr [ecx]
// 006354c6  8b5008               mov edx, dword ptr [eax + 8]
// 006354c9  ffd2                 call edx
// 006354cb  897704               mov dword ptr [edi + 4], esi
// 006354ce  5f                   pop edi
// 006354cf  5e                   pop esi
// 006354d0  8bc5                 mov eax, ebp
// 006354d2  5d                   pop ebp
// 006354d3  5b                   pop ebx
// 006354d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006354d8  64890d00000000       mov dword ptr fs:[0], ecx
// 006354df  83c410               add esp, 0x10
// 006354e2  c20800               ret 8
// 006354e5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006354e9  5e                   pop esi
// 006354ea  8bc5                 mov eax, ebp
// 006354ec  5d                   pop ebp
// 006354ed  5b                   pop ebx
// 006354ee  64890d00000000       mov dword ptr fs:[0], ecx
// 006354f5  83c410               add esp, 0x10
// 006354f8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
