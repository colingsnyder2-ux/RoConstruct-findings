// roc 2008-06 00443320  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443320
//
// 00443320  56                   push esi
// 00443321  6a08                 push 8
// 00443323  8bf1                 mov esi, ecx
// 00443325  e8f6d52500           call 0x6a0920
// 0044332a  83c404               add esp, 4
// 0044332d  85c0                 test eax, eax
// 0044332f  7411                 je 0x443342
// 00443331  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00443335  c700cc068100         mov dword ptr [eax], 0x8106cc
// 0044333b  8b11                 mov edx, dword ptr [ecx]
// 0044333d  895004               mov dword ptr [eax + 4], edx
// 00443340  eb02                 jmp 0x443344
// 00443342  33c0                 xor eax, eax
// 00443344  8d542408             lea edx, [esp + 8]
// 00443348  8bc8                 mov ecx, eax
// 0044334a  3bd6                 cmp edx, esi
// 0044334c  7404                 je 0x443352
// 0044334e  8b0e                 mov ecx, dword ptr [esi]
// 00443350  8906                 mov dword ptr [esi], eax
// 00443352  85c9                 test ecx, ecx
// 00443354  7408                 je 0x44335e
// 00443356  8b01                 mov eax, dword ptr [ecx]
// 00443358  8b10                 mov edx, dword ptr [eax]
// 0044335a  6a01                 push 1
// 0044335c  ffd2                 call edx
// 0044335e  8bc6                 mov eax, esi
// 00443360  5e                   pop esi
// 00443361  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
