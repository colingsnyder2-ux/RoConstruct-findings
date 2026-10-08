// roc 2007-08 00587110  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00587110
//
// 00587110  807c240800           cmp byte ptr [esp + 8], 0
// 00587115  57                   push edi
// 00587116  8bf9                 mov edi, ecx
// 00587118  751a                 jne 0x587134
// 0058711a  8b07                 mov eax, dword ptr [edi]
// 0058711c  8b5004               mov edx, dword ptr [eax + 4]
// 0058711f  ffd2                 call edx
// 00587121  84c0                 test al, al
// 00587123  7406                 je 0x58712b
// 00587125  33c0                 xor eax, eax
// 00587127  5f                   pop edi
// 00587128  c20800               ret 8
// 0058712b  8b4710               mov eax, dword ptr [edi + 0x10]
// 0058712e  d1e8                 shr eax, 1
// 00587130  a801                 test al, 1
// 00587132  74f1                 je 0x587125
// 00587134  56                   push esi
// 00587135  6a20                 push 0x20
// 00587137  e8ba8d0a00           call 0x62fef6
// 0058713c  33f6                 xor esi, esi
// 0058713e  83c404               add esp, 4
// 00587141  3bc6                 cmp eax, esi
// 00587143  741c                 je 0x587161
// 00587145  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00587148  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0058714b  8930                 mov dword ptr [eax], esi
// 0058714d  897004               mov dword ptr [eax + 4], esi
// 00587150  897008               mov dword ptr [eax + 8], esi
// 00587153  897010               mov dword ptr [eax + 0x10], esi
// 00587156  89480c               mov dword ptr [eax + 0xc], ecx
// 00587159  897018               mov dword ptr [eax + 0x18], esi
// 0058715c  89701c               mov dword ptr [eax + 0x1c], esi
// 0058715f  8bf0                 mov esi, eax
// 00587161  53                   push ebx
// 00587162  8b1d98228c00         mov ebx, dword ptr [0x8c2298]
// 00587168  55                   push ebp
// 00587169  8b6f04               mov ebp, dword ptr [edi + 4]
// 0058716c  6a10                 push 0x10
// 0058716e  e8838d0a00           call 0x62fef6
// 00587173  83c404               add esp, 4
// 00587176  85c0                 test eax, eax
// 00587178  7415                 je 0x58718f
// 0058717a  c70000000000         mov dword ptr [eax], 0
// 00587180  895804               mov dword ptr [eax + 4], ebx
// 00587183  c7400801000000       mov dword ptr [eax + 8], 1
// 0058718a  89680c               mov dword ptr [eax + 0xc], ebp
// 0058718d  eb02                 jmp 0x587191
// 0058718f  33c0                 xor eax, eax
// 00587191  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00587194  85c9                 test ecx, ecx
// 00587196  5d                   pop ebp
// 00587197  5b                   pop ebx
// 00587198  7505                 jne 0x58719f
// 0058719a  894618               mov dword ptr [esi + 0x18], eax
// 0058719d  eb02                 jmp 0x5871a1
// 0058719f  8901                 mov dword ptr [ecx], eax
// 005871a1  89461c               mov dword ptr [esi + 0x1c], eax
// 005871a4  8b17                 mov edx, dword ptr [edi]
// 005871a6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005871aa  8b521c               mov edx, dword ptr [edx + 0x1c]
// 005871ad  56                   push esi
// 005871ae  50                   push eax
// 005871af  8bcf                 mov ecx, edi
// 005871b1  ffd2                 call edx
// 005871b3  8bc6                 mov eax, esi
// 005871b5  5e                   pop esi
// 005871b6  5f                   pop edi
// 005871b7  c20800               ret 8
// library rbxgs/reflection\reflection_property.cpp (function ?write@PropertyDescriptor@Reflection@RBX@@QBEPAVXmlElement@@PBVDescribedBase@23@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
