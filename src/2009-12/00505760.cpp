// roc 2009-12 00505760  unit: boost::any::N::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00505760
//
// 00505760  56                   push esi
// 00505761  6a10                 push 0x10
// 00505763  8bf1                 mov esi, ecx
// 00505765  e8f6e02e00           call 0x7f3860
// 0050576a  83c404               add esp, 4
// 0050576d  85c0                 test eax, eax
// 0050576f  7411                 je 0x505782
// 00505771  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00505775  c70088a79b00         mov dword ptr [eax], 0x9ba788
// 0050577b  dd01                 fld qword ptr [ecx]
// 0050577d  dd5808               fstp qword ptr [eax + 8]
// 00505780  eb02                 jmp 0x505784
// 00505782  33c0                 xor eax, eax
// 00505784  8d542408             lea edx, [esp + 8]
// 00505788  8bc8                 mov ecx, eax
// 0050578a  3bd6                 cmp edx, esi
// 0050578c  7404                 je 0x505792
// 0050578e  8b0e                 mov ecx, dword ptr [esi]
// 00505790  8906                 mov dword ptr [esi], eax
// 00505792  85c9                 test ecx, ecx
// 00505794  7408                 je 0x50579e
// 00505796  8b01                 mov eax, dword ptr [ecx]
// 00505798  8b10                 mov edx, dword ptr [eax]
// 0050579a  6a01                 push 1
// 0050579c  ffd2                 call edx
// 0050579e  8bc6                 mov eax, esi
// 005057a0  5e                   pop esi
// 005057a1  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?4N@any@boost@@QAEAAV01@ABN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
