// from server: 100% by king_originala
// roc 2008-06 005538b0  unit: RBX::RenderBase::AggregateChunk  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005538b0
//
// 005538b0  55                   push ebp
// 005538b1  8bec                 mov ebp, esp
// 005538b3  51                   push ecx
// 005538b4  33c0                 xor eax, eax
// 005538b6  8845ff               mov byte ptr [ebp - 1], al
// 005538b9  8d4d18               lea ecx, [ebp + 0x18]
// 005538bc  51                   push ecx
// 005538bd  8d5508               lea edx, [ebp + 8]
// 005538c0  52                   push edx
// 005538c1  e83a30ffff           call 0x546900
// 005538c6  83c408               add esp, 8
// 005538c9  8845fe               mov byte ptr [ebp - 2], al
// 005538cc  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 005538d0  50                   push eax
// 005538d1  0fb64dfe             movzx ecx, byte ptr [ebp - 2]
// 005538d5  51                   push ecx
// 005538d6  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 005538d9  52                   push edx
// 005538da  8b4518               mov eax, dword ptr [ebp + 0x18]
// 005538dd  50                   push eax
// 005538de  8d4d10               lea ecx, [ebp + 0x10]
// 005538e1  51                   push ecx
// 005538e2  e8d9fbffff           call 0x5534c0
// 005538e7  83c404               add esp, 4
// 005538ea  50                   push eax
// 005538eb  8d5508               lea edx, [ebp + 8]
// 005538ee  52                   push edx
// 005538ef  e8ccfbffff           call 0x5534c0
// 005538f4  83c404               add esp, 4
// 005538f7  50                   push eax
// 005538f8  e8f33affff           call 0x5473f0
// 005538fd  83c418               add esp, 0x18
// 00553900  8be5                 mov esp, ebp
// 00553902  5d                   pop ebp
// 00553903  c3                   ret 

struct Pair {
    unsigned int first;
    unsigned int second;
};

struct Tag {};

extern Tag __cdecl classify(const Pair&, const Pair&);
extern unsigned int __cdecl unwrap(const Pair&);
extern unsigned int __cdecl transfer(unsigned int, unsigned int, Pair, Tag, Tag);

#pragma optimize("", off)
unsigned int __cdecl copy_range(Pair first, Pair last, Pair destination)
{
    return transfer(unwrap(first), unwrap(last), destination,
                    classify(first, destination), Tag());
}
#pragma optimize("", on)
