// from server: 100% by king_originala
// roc 2008-06 004cb340  unit: RBX::Network::RoundRobinPhysicsSender  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cb340
//
// 004cb340  8b442408             mov eax, dword ptr [esp + 8]
// 004cb344  53                   push ebx
// 004cb345  56                   push esi
// 004cb346  8b30                 mov esi, dword ptr [eax]
// 004cb348  8bc6                 mov eax, esi
// 004cb34a  c1e803               shr eax, 3
// 004cb34d  03c6                 add eax, esi
// 004cb34f  33d2                 xor edx, edx
// 004cb351  f77108               div dword ptr [ecx + 8]
// 004cb354  8d5908               lea ebx, [ecx + 8]
// 004cb357  8b4114               mov eax, dword ptr [ecx + 0x14]
// 004cb35a  57                   push edi
// 004cb35b  8d3c90               lea edi, [eax + edx*4]
// 004cb35e  8b07                 mov eax, dword ptr [edi]
// 004cb360  3bc7                 cmp eax, edi
// 004cb362  7415                 je 0x4cb379
// 004cb364  85c0                 test eax, eax
// 004cb366  7405                 je 0x4cb36d
// 004cb368  8d5090               lea edx, [eax - 0x70]
// 004cb36b  eb02                 jmp 0x4cb36f
// 004cb36d  33d2                 xor edx, edx
// 004cb36f  3b32                 cmp esi, dword ptr [edx]
// 004cb371  7418                 je 0x4cb38b
// 004cb373  8b00                 mov eax, dword ptr [eax]
// 004cb375  3bc7                 cmp eax, edi
// 004cb377  75eb                 jne 0x4cb364
// 004cb379  8b442410             mov eax, dword ptr [esp + 0x10]
// 004cb37d  8b49f8               mov ecx, dword ptr [ecx - 8]
// 004cb380  5f                   pop edi
// 004cb381  5e                   pop esi
// 004cb382  895804               mov dword ptr [eax + 4], ebx
// 004cb385  8908                 mov dword ptr [eax], ecx
// 004cb387  5b                   pop ebx
// 004cb388  c21000               ret 0x10
// 004cb38b  85c0                 test eax, eax
// 004cb38d  7412                 je 0x4cb3a1
// 004cb38f  8d4890               lea ecx, [eax - 0x70]
// 004cb392  8b442410             mov eax, dword ptr [esp + 0x10]
// 004cb396  5f                   pop edi
// 004cb397  5e                   pop esi
// 004cb398  895804               mov dword ptr [eax + 4], ebx
// 004cb39b  8908                 mov dword ptr [eax], ecx
// 004cb39d  5b                   pop ebx
// 004cb39e  c21000               ret 0x10
// 004cb3a1  8b442410             mov eax, dword ptr [esp + 0x10]
// 004cb3a5  5f                   pop edi
// 004cb3a6  33c9                 xor ecx, ecx
// 004cb3a8  5e                   pop esi
// 004cb3a9  895804               mov dword ptr [eax + 4], ebx
// 004cb3ac  8908                 mov dword ptr [eax], ecx
// 004cb3ae  5b                   pop ebx
// 004cb3af  c21000               ret 0x10

struct Result
{
    void* node;
    unsigned* owner;
};

struct Link
{
    Link* next;
};

struct S
{
    unsigned padding0[2];
    unsigned count;
    unsigned padding1[2];
    Link** buckets;

    Result f(const unsigned& key, unsigned, unsigned);
};

Result S::f(const unsigned& key, unsigned, unsigned)
{
    unsigned value = key;
    unsigned bucket = (value + (value >> 3)) % count;
    Link* end = reinterpret_cast<Link*>(buckets + bucket);
    Link* current = end->next;

    while (current != end)
    {
        unsigned* object = current
            ? reinterpret_cast<unsigned*>(reinterpret_cast<char*>(current) - 0x70)
            : 0;

        if (value == *object)
        {
            Result result;
            result.owner = &count;
            result.node = current
                ? reinterpret_cast<char*>(current) - 0x70
                : 0;
            return result;
        }

        current = current->next;
    }

    Result result;
    result.owner = &count;
    result.node = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) - 8);
    return result;
}
