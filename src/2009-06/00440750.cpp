// from server: 100% by tester
// roc 2009-06 004beb40  unit: boost::any::N::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004beb40
//
// 004beb40  56                   push esi
// 004beb41  6a10                 push 0x10
// 004beb43  8bf1                 mov esi, ecx
// 004beb45  e8ee9e2500           call 0x718a38
// 004beb4a  83c404               add esp, 4
// 004beb4d  85c0                 test eax, eax
// 004beb4f  7411                 je 0x4beb62
// 004beb51  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004beb55  c70084498c00         mov dword ptr [eax], 0x8c4984
// 004beb5b  dd01                 fld qword ptr [ecx]
// 004beb5d  dd5808               fstp qword ptr [eax + 8]
// 004beb60  eb02                 jmp 0x4beb64
// 004beb62  33c0                 xor eax, eax
// 004beb64  8d542408             lea edx, [esp + 8]
// 004beb68  8bc8                 mov ecx, eax
// 004beb6a  3bd6                 cmp edx, esi
// 004beb6c  7404                 je 0x4beb72
// 004beb6e  8b0e                 mov ecx, dword ptr [esi]
// 004beb70  8906                 mov dword ptr [esi], eax
// 004beb72  85c9                 test ecx, ecx
// 004beb74  7408                 je 0x4beb7e
// 004beb76  8b01                 mov eax, dword ptr [ecx]
// 004beb78  8b10                 mov edx, dword ptr [eax]
// 004beb7a  6a01                 push 1
// 004beb7c  ffd2                 call edx
// 004beb7e  8bc6                 mov eax, esi
// 004beb80  5e                   pop esi
// 004beb81  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?4N@any@boost@@QAEAAV01@ABN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
