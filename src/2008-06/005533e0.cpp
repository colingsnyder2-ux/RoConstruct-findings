// from server: 100% by king_originala
// roc 2008-06 005533e0  unit: RBX::RenderBase::AggregateChunk  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005533e0
//
// 005533e0  55                   push ebp
// 005533e1  8bec                 mov ebp, esp
// 005533e3  51                   push ecx
// 005533e4  33c0                 xor eax, eax
// 005533e6  8845ff               mov byte ptr [ebp - 1], al
// 005533e9  8d4d08               lea ecx, [ebp + 8]
// 005533ec  51                   push ecx
// 005533ed  8d5508               lea edx, [ebp + 8]
// 005533f0  52                   push edx
// 005533f1  e80a35ffff           call 0x546900
// 005533f6  83c408               add esp, 8
// 005533f9  8845fe               mov byte ptr [ebp - 2], al
// 005533fc  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 00553400  50                   push eax
// 00553401  0fb64dfe             movzx ecx, byte ptr [ebp - 2]
// 00553405  51                   push ecx
// 00553406  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00553409  52                   push edx
// 0055340a  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0055340d  50                   push eax
// 0055340e  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00553411  51                   push ecx
// 00553412  8b5508               mov edx, dword ptr [ebp + 8]
// 00553415  52                   push edx
// 00553416  e805010000           call 0x553520
// 0055341b  83c418               add esp, 0x18
// 0055341e  8be5                 mov esp, ebp
// 00553420  5d                   pop ebp
// 00553421  c3                   ret 

struct TraitsTag {};
struct CheckedTag {};

TraitsTag __cdecl classify(char *const &, char *const &);
char *__cdecl copy_range(char *, char *, char *, char *, TraitsTag, CheckedTag);

#pragma optimize("", off)
char *__cdecl copy_dispatch(char *first, char *last, char *dest, char *destLast)
{
    return copy_range(first, last, dest, destLast,
                      classify(first, first), CheckedTag());
}
#pragma optimize("", on)
