// roc 2009-12 004f8100  unit: RBX::VBrickColor::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f8100
//
// 004f8100  56                   push esi
// 004f8101  6a08                 push 8
// 004f8103  8bf1                 mov esi, ecx
// 004f8105  e856b72f00           call 0x7f3860
// 004f810a  83c404               add esp, 4
// 004f810d  85c0                 test eax, eax
// 004f810f  7411                 je 0x4f8122
// 004f8111  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f8115  c7001ca29b00         mov dword ptr [eax], 0x9ba21c
// 004f811b  8b11                 mov edx, dword ptr [ecx]
// 004f811d  895004               mov dword ptr [eax + 4], edx
// 004f8120  eb02                 jmp 0x4f8124
// 004f8122  33c0                 xor eax, eax
// 004f8124  8d542408             lea edx, [esp + 8]
// 004f8128  8bc8                 mov ecx, eax
// 004f812a  3bd6                 cmp edx, esi
// 004f812c  7404                 je 0x4f8132
// 004f812e  8b0e                 mov ecx, dword ptr [esi]
// 004f8130  8906                 mov dword ptr [esi], eax
// 004f8132  85c9                 test ecx, ecx
// 004f8134  7408                 je 0x4f813e
// 004f8136  8b01                 mov eax, dword ptr [ecx]
// 004f8138  8b10                 mov edx, dword ptr [eax]
// 004f813a  6a01                 push 1
// 004f813c  ffd2                 call edx
// 004f813e  8bc6                 mov eax, esi
// 004f8140  5e                   pop esi
// 004f8141  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
