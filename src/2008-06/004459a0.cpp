// from server: 100% by tester
// roc 2008-06 00563f10  unit: boost::any::N::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563f10
//
// 00563f10  56                   push esi
// 00563f11  6a10                 push 0x10
// 00563f13  8bf1                 mov esi, ecx
// 00563f15  e806ca1300           call 0x6a0920
// 00563f1a  83c404               add esp, 4
// 00563f1d  85c0                 test eax, eax
// 00563f1f  7411                 je 0x563f32
// 00563f21  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00563f25  c7001ce28200         mov dword ptr [eax], 0x82e21c
// 00563f2b  dd01                 fld qword ptr [ecx]
// 00563f2d  dd5808               fstp qword ptr [eax + 8]
// 00563f30  eb02                 jmp 0x563f34
// 00563f32  33c0                 xor eax, eax
// 00563f34  8d542408             lea edx, [esp + 8]
// 00563f38  8bc8                 mov ecx, eax
// 00563f3a  3bd6                 cmp edx, esi
// 00563f3c  7404                 je 0x563f42
// 00563f3e  8b0e                 mov ecx, dword ptr [esi]
// 00563f40  8906                 mov dword ptr [esi], eax
// 00563f42  85c9                 test ecx, ecx
// 00563f44  7408                 je 0x563f4e
// 00563f46  8b01                 mov eax, dword ptr [ecx]
// 00563f48  8b10                 mov edx, dword ptr [eax]
// 00563f4a  6a01                 push 1
// 00563f4c  ffd2                 call edx
// 00563f4e  8bc6                 mov eax, esi
// 00563f50  5e                   pop esi
// 00563f51  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?4N@any@boost@@QAEAAV01@ABN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
