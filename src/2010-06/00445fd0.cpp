// roc 2010-06 00445fd0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00445fd0
//
// 00445fd0  56                   push esi
// 00445fd1  6a08                 push 8
// 00445fd3  8bf1                 mov esi, ecx
// 00445fd5  e8c6193600           call 0x7a79a0
// 00445fda  83c404               add esp, 4
// 00445fdd  85c0                 test eax, eax
// 00445fdf  7411                 je 0x445ff2
// 00445fe1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00445fe5  c7005cb0a000         mov dword ptr [eax], 0xa0b05c
// 00445feb  8b11                 mov edx, dword ptr [ecx]
// 00445fed  895004               mov dword ptr [eax + 4], edx
// 00445ff0  eb02                 jmp 0x445ff4
// 00445ff2  33c0                 xor eax, eax
// 00445ff4  8d542408             lea edx, [esp + 8]
// 00445ff8  8bc8                 mov ecx, eax
// 00445ffa  3bd6                 cmp edx, esi
// 00445ffc  7404                 je 0x446002
// 00445ffe  8b0e                 mov ecx, dword ptr [esi]
// 00446000  8906                 mov dword ptr [esi], eax
// 00446002  85c9                 test ecx, ecx
// 00446004  7408                 je 0x44600e
// 00446006  8b01                 mov eax, dword ptr [ecx]
// 00446008  8b10                 mov edx, dword ptr [eax]
// 0044600a  6a01                 push 1
// 0044600c  ffd2                 call edx
// 0044600e  8bc6                 mov eax, esi
// 00446010  5e                   pop esi
// 00446011  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
