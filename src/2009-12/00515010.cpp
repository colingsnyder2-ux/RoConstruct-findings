// roc 2009-12 00515010  unit: RakNet::VBitStream::?$sp_counted_impl_p  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00515010
//
// 00515010  56                   push esi
// 00515011  6a08                 push 8
// 00515013  8bf1                 mov esi, ecx
// 00515015  e846e82d00           call 0x7f3860
// 0051501a  83c404               add esp, 4
// 0051501d  85c0                 test eax, eax
// 0051501f  7411                 je 0x515032
// 00515021  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00515025  c7007cb39b00         mov dword ptr [eax], 0x9bb37c
// 0051502b  8b11                 mov edx, dword ptr [ecx]
// 0051502d  895004               mov dword ptr [eax + 4], edx
// 00515030  eb02                 jmp 0x515034
// 00515032  33c0                 xor eax, eax
// 00515034  8d542408             lea edx, [esp + 8]
// 00515038  8bc8                 mov ecx, eax
// 0051503a  3bd6                 cmp edx, esi
// 0051503c  7404                 je 0x515042
// 0051503e  8b0e                 mov ecx, dword ptr [esi]
// 00515040  8906                 mov dword ptr [esi], eax
// 00515042  85c9                 test ecx, ecx
// 00515044  7408                 je 0x51504e
// 00515046  8b01                 mov eax, dword ptr [ecx]
// 00515048  8b10                 mov edx, dword ptr [eax]
// 0051504a  6a01                 push 1
// 0051504c  ffd2                 call edx
// 0051504e  8bc6                 mov eax, esi
// 00515050  5e                   pop esi
// 00515051  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
