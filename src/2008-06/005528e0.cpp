// from server: 100% by king_originala
// roc 2008-06 005528e0  unit: RBX::RenderBase::AggregateChunk  size: 198 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005528e0
//
// 005528e0  55                   push ebp
// 005528e1  8bec                 mov ebp, esp
// 005528e3  83ec0c               sub esp, 0xc
// 005528e6  894df4               mov dword ptr [ebp - 0xc], ecx
// 005528e9  b801000000           mov eax, 1
// 005528ee  85c0                 test eax, eax
// 005528f0  0f84aa000000         je 0x5529a0
// 005528f6  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005528f9  83c10c               add ecx, 0xc
// 005528fc  e81f3affff           call 0x546320
// 00552901  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00552904  394124               cmp dword ptr [ecx + 0x24], eax
// 00552907  7527                 jne 0x552930
// 00552909  8d5508               lea edx, [ebp + 8]
// 0055290c  52                   push edx
// 0055290d  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00552910  83c10c               add ecx, 0xc
// 00552913  e8f838ffff           call 0x546210
// 00552918  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0055291b  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0055291e  83c101               add ecx, 1
// 00552921  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00552924  894a24               mov dword ptr [edx + 0x24], ecx
// 00552927  b801000000           mov eax, 1
// 0055292c  eb72                 jmp 0x5529a0
// 0055292e  eb6b                 jmp 0x55299b
// 00552930  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00552933  8b4824               mov ecx, dword ptr [eax + 0x24]
// 00552936  51                   push ecx
// 00552937  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0055293a  83c10c               add ecx, 0xc
// 0055293d  e81e050000           call 0x552e60
// 00552942  8b10                 mov edx, dword ptr [eax]
// 00552944  8955fc               mov dword ptr [ebp - 4], edx
// 00552947  8b45fc               mov eax, dword ptr [ebp - 4]
// 0055294a  50                   push eax
// 0055294b  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0055294e  e85d000000           call 0x5529b0
// 00552953  8945f8               mov dword ptr [ebp - 8], eax
// 00552956  8b4df8               mov ecx, dword ptr [ebp - 8]
// 00552959  3b4d0c               cmp ecx, dword ptr [ebp + 0xc]
// 0055295c  7511                 jne 0x55296f
// 0055295e  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00552961  8b4224               mov eax, dword ptr [edx + 0x24]
// 00552964  83c001               add eax, 1
// 00552967  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0055296a  894124               mov dword ptr [ecx + 0x24], eax
// 0055296d  eb2c                 jmp 0x55299b
// 0055296f  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00552972  8b4224               mov eax, dword ptr [edx + 0x24]
// 00552975  50                   push eax
// 00552976  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00552979  83c10c               add ecx, 0xc
// 0055297c  e8df040000           call 0x552e60
// 00552981  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00552984  8908                 mov dword ptr [eax], ecx
// 00552986  8b55f8               mov edx, dword ptr [ebp - 8]
// 00552989  52                   push edx
// 0055298a  8b45fc               mov eax, dword ptr [ebp - 4]
// 0055298d  50                   push eax
// 0055298e  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00552991  e84affffff           call 0x5528e0
// 00552996  83c001               add eax, 1
// 00552999  eb05                 jmp 0x5529a0
// 0055299b  e949ffffff           jmp 0x5528e9
// 005529a0  8be5                 mov esp, ebp
// 005529a2  5d                   pop ebp
// 005529a3  c20800               ret 8

#pragma optimize("", off)

struct Chunk;

struct ChunkArray {
    char storage[24];
    unsigned int size() const;
    void push_back(Chunk* const& value);
    Chunk*& operator[](unsigned int index);
};

struct Bucket {
    char padding[12];
    ChunkArray chunks;
    unsigned int cursor;
};

struct AggregateChunk {
    int insert(Chunk* chunk, Bucket* bucket);
    Bucket* findBucket(Chunk* chunk);
};

int AggregateChunk::insert(Chunk* chunk, Bucket* bucket)
{
    while (1) {
        if (bucket->cursor == bucket->chunks.size()) {
            bucket->chunks.push_back(chunk);
            bucket->cursor = bucket->cursor + 1;
            return 1;
        } else {
            Chunk* oldChunk = bucket->chunks[bucket->cursor];
            Bucket* oldBucket = findBucket(oldChunk);
            if (oldBucket == bucket) {
                bucket->cursor = bucket->cursor + 1;
            } else {
                bucket->chunks[bucket->cursor] = chunk;
                return insert(oldChunk, oldBucket) + 1;
            }
        }
    }
}
