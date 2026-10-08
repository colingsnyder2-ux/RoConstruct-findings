// roc 2011-06 004b3720  unit: boost::any::N::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004b3720
//
// 004b3720  56                   push esi
// 004b3721  6a10                 push 0x10
// 004b3723  8bf1                 mov esi, ecx
// 004b3725  e834693500           call 0x80a05e
// 004b372a  83c404               add esp, 4
// 004b372d  85c0                 test eax, eax
// 004b372f  7411                 je 0x4b3742
// 004b3731  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b3735  c7000875a700         mov dword ptr [eax], 0xa77508
// 004b373b  dd01                 fld qword ptr [ecx]
// 004b373d  dd5808               fstp qword ptr [eax + 8]
// 004b3740  eb02                 jmp 0x4b3744
// 004b3742  33c0                 xor eax, eax
// 004b3744  8d542408             lea edx, [esp + 8]
// 004b3748  8bc8                 mov ecx, eax
// 004b374a  3bd6                 cmp edx, esi
// 004b374c  7404                 je 0x4b3752
// 004b374e  8b0e                 mov ecx, dword ptr [esi]
// 004b3750  8906                 mov dword ptr [esi], eax
// 004b3752  85c9                 test ecx, ecx
// 004b3754  7408                 je 0x4b375e
// 004b3756  8b01                 mov eax, dword ptr [ecx]
// 004b3758  8b10                 mov edx, dword ptr [eax]
// 004b375a  6a01                 push 1
// 004b375c  ffd2                 call edx
// 004b375e  8bc6                 mov eax, esi
// 004b3760  5e                   pop esi
// 004b3761  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?4N@any@boost@@QAEAAV01@ABN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
