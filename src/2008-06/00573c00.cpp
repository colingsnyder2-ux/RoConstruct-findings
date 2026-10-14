// roc 2008-06 00573c00  unit: RBX::GuiRoot  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00573c00
//
// 00573c00  53                   push ebx
// 00573c01  55                   push ebp
// 00573c02  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00573c06  8b4500               mov eax, dword ptr [ebp]
// 00573c09  8b5018               mov edx, dword ptr [eax + 0x18]
// 00573c0c  8bd9                 mov ebx, ecx
// 00573c0e  56                   push esi
// 00573c0f  8bcd                 mov ecx, ebp
// 00573c11  ffd2                 call edx
// 00573c13  0fb7f0               movzx esi, ax
// 00573c16  8b4500               mov eax, dword ptr [ebp]
// 00573c19  8b5014               mov edx, dword ptr [eax + 0x14]
// 00573c1c  8bcd                 mov ecx, ebp
// 00573c1e  ffd2                 call edx
// 00573c20  98                   cwde 
// 00573c21  0fbfce               movsx ecx, si
// 00573c24  89442410             mov dword ptr [esp + 0x10], eax
// 00573c28  33f6                 xor esi, esi
// 00573c2a  db442410             fild dword ptr [esp + 0x10]
// 00573c2e  894c2410             mov dword ptr [esp + 0x10], ecx
// 00573c32  8bcb                 mov ecx, ebx
// 00573c34  db442410             fild dword ptr [esp + 0x10]
// 00573c38  d9c9                 fxch st(1)
// 00573c3a  d91d784d9700         fstp dword ptr [0x974d78]
// 00573c40  d91d7c4d9700         fstp dword ptr [0x974d7c]
// 00573c46  e8d571f1ff           call 0x48ae20
// 00573c4b  85c0                 test eax, eax
// 00573c4d  7652                 jbe 0x573ca1
// 00573c4f  57                   push edi
// 00573c50  8bbb08010000         mov edi, dword ptr [ebx + 0x108]
// 00573c56  8b5710               mov edx, dword ptr [edi + 0x10]
// 00573c59  2b570c               sub edx, dword ptr [edi + 0xc]
// 00573c5c  c1fa03               sar edx, 3
// 00573c5f  3bf2                 cmp esi, edx
// 00573c61  7206                 jb 0x573c69
// 00573c63  ff1590288000         call dword ptr [0x802890]
// 00573c69  8b470c               mov eax, dword ptr [edi + 0xc]
// 00573c6c  8b04f0               mov eax, dword ptr [eax + esi*8]
// 00573c6f  6a00                 push 0
// 00573c71  68d8b89200           push 0x92b8d8
// 00573c76  687c909200           push 0x92907c
// 00573c7b  6a00                 push 0
// 00573c7d  50                   push eax
// 00573c7e  e843db1200           call 0x6a17c6
// 00573c83  83c414               add esp, 0x14
// 00573c86  85c0                 test eax, eax
// 00573c88  740a                 je 0x573c94
// 00573c8a  8b10                 mov edx, dword ptr [eax]
// 00573c8c  8bc8                 mov ecx, eax
// 00573c8e  8b4260               mov eax, dword ptr [edx + 0x60]
// 00573c91  55                   push ebp
// 00573c92  ffd0                 call eax
// 00573c94  8bcb                 mov ecx, ebx
// 00573c96  46                   inc esi
// 00573c97  e88471f1ff           call 0x48ae20
// 00573c9c  3bf0                 cmp esi, eax
// 00573c9e  72b0                 jb 0x573c50
// 00573ca0  5f                   pop edi
// 00573ca1  5e                   pop esi
// 00573ca2  5d                   pop ebp
// 00573ca3  5b                   pop ebx
// 00573ca4  c20400               ret 4
// library openrbx-client/App\gui\GUI.cpp (function ?render2d@GuiRoot@RBX@@UAEXPAVAdorn@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client App/gui/GUI.cpp
