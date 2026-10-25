// from server: 100% by king_originala
// roc 2008-06 00660320  unit: RBX::FilterStairs  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00660320
//
// 00660320  56                   push esi
// 00660321  8bf1                 mov esi, ecx
// 00660323  837e0400             cmp dword ptr [esi + 4], 0
// 00660327  57                   push edi
// 00660328  743f                 je 0x660369
// 0066032a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066032e  50                   push eax
// 0066032f  e84c9cf3ff           call 0x599f80
// 00660334  8bf8                 mov edi, eax
// 00660336  8b4604               mov eax, dword ptr [esi + 4]
// 00660339  8b8f04010000         mov ecx, dword ptr [edi + 0x104]
// 0066033f  83c404               add esp, 4
// 00660342  3bc1                 cmp eax, ecx
// 00660344  7419                 je 0x66035f
// 00660346  85c9                 test ecx, ecx
// 00660348  740a                 je 0x660354
// 0066034a  50                   push eax
// 0066034b  e89027dcff           call 0x422ae0
// 00660350  84c0                 test al, al
// 00660352  750b                 jne 0x66035f
// 00660354  8bcf                 mov ecx, edi
// 00660356  e8c589f3ff           call 0x598d20
// 0066035b  84c0                 test al, al
// 0066035d  750a                 jne 0x660369
// 0066035f  5f                   pop edi
// 00660360  b801000000           mov eax, 1
// 00660365  5e                   pop esi
// 00660366  c20400               ret 4
// 00660369  5f                   pop edi
// 0066036a  b802000000           mov eax, 2
// 0066036f  5e                   pop esi
// 00660370  c20400               ret 4

struct Owner
{
    bool contains(Owner* other);
};

struct PartInstance
{
    char padding[0x104];
    Owner* owner;
    bool excluded();
};

struct GetSetImpl
{
    static PartInstance* get(PartInstance* p);
};

struct FilterStairs
{
    int reserved;
    Owner* owner;
    int filter(PartInstance* p);
};

int FilterStairs::filter(PartInstance* p)
{
    if (owner != 0)
    {
        PartInstance* part = GetSetImpl::get(p);
        if (owner == part->owner ||
            (part->owner != 0 && part->owner->contains(owner)) ||
            !part->excluded())
            return 1;
    }
    return 2;
}
