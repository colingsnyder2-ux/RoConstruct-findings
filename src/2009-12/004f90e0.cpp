// roc 2009-12 004f90e0  unit: RBX::VBrickColor::?$holder  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f90e0
//
// 004f90e0  56                   push esi
// 004f90e1  6a0c                 push 0xc
// 004f90e3  8bf1                 mov esi, ecx
// 004f90e5  e876a72f00           call 0x7f3860
// 004f90ea  83c404               add esp, 4
// 004f90ed  85c0                 test eax, eax
// 004f90ef  7427                 je 0x4f9118
// 004f90f1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f90f5  c700d4a19b00         mov dword ptr [eax], 0x9ba1d4
// 004f90fb  8b11                 mov edx, dword ptr [ecx]
// 004f90fd  895004               mov dword ptr [eax + 4], edx
// 004f9100  8b4904               mov ecx, dword ptr [ecx + 4]
// 004f9103  894808               mov dword ptr [eax + 8], ecx
// 004f9106  85c9                 test ecx, ecx
// 004f9108  7410                 je 0x4f911a
// 004f910a  83c104               add ecx, 4
// 004f910d  ba01000000           mov edx, 1
// 004f9112  f00fc111             lock xadd dword ptr [ecx], edx
// 004f9116  eb02                 jmp 0x4f911a
// 004f9118  33c0                 xor eax, eax
// 004f911a  8d542408             lea edx, [esp + 8]
// 004f911e  8bc8                 mov ecx, eax
// 004f9120  3bd6                 cmp edx, esi
// 004f9122  7404                 je 0x4f9128
// 004f9124  8b0e                 mov ecx, dword ptr [esi]
// 004f9126  8906                 mov dword ptr [esi], eax
// 004f9128  85c9                 test ecx, ecx
// 004f912a  7408                 je 0x4f9134
// 004f912c  8b01                 mov eax, dword ptr [ecx]
// 004f912e  8b10                 mov edx, dword ptr [eax]
// 004f9130  6a01                 push 1
// 004f9132  ffd2                 call edx
// 004f9134  8bc6                 mov eax, esi
// 004f9136  5e                   pop esi
// 004f9137  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
