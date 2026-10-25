// from server: 100% by king_originala
// roc 2008-06 00419b40  unit: VCLuaFunction::?$CComObject  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00419b40
//
// 00419b40  53                   push ebx
// 00419b41  56                   push esi
// 00419b42  8bf1                 mov esi, ecx
// 00419b44  33db                 xor ebx, ebx
// 00419b46  57                   push edi
// 00419b47  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 00419b4a  7449                 je 0x419b95
// 00419b4c  8d642400             lea esp, [esp]
// 00419b50  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00419b53  3bc3                 cmp eax, ebx
// 00419b55  7439                 je 0x419b90
// 00419b57  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00419b5a  8d4408ff             lea eax, [eax + ecx - 1]
// 00419b5e  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00419b61  3bc8                 cmp ecx, eax
// 00419b63  7702                 ja 0x419b67
// 00419b65  2bc1                 sub eax, ecx
// 00419b67  8b5610               mov edx, dword ptr [esi + 0x10]
// 00419b6a  8b3c82               mov edi, dword ptr [edx + eax*4]
// 00419b6d  8b07                 mov eax, dword ptr [edi]
// 00419b6f  3bc3                 cmp eax, ebx
// 00419b71  7414                 je 0x419b87
// 00419b73  8b00                 mov eax, dword ptr [eax]
// 00419b75  8d4f08               lea ecx, [edi + 8]
// 00419b78  3bc3                 cmp eax, ebx
// 00419b7a  7409                 je 0x419b85
// 00419b7c  6a01                 push 1
// 00419b7e  51                   push ecx
// 00419b7f  51                   push ecx
// 00419b80  ffd0                 call eax
// 00419b82  83c40c               add esp, 0xc
// 00419b85  891f                 mov dword ptr [edi], ebx
// 00419b87  83461cff             add dword ptr [esi + 0x1c], -1
// 00419b8b  7503                 jne 0x419b90
// 00419b8d  895e18               mov dword ptr [esi + 0x18], ebx
// 00419b90  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 00419b93  75bb                 jne 0x419b50
// 00419b95  8b7e14               mov edi, dword ptr [esi + 0x14]
// 00419b98  3bfb                 cmp edi, ebx
// 00419b9a  761f                 jbe 0x419bbb
// 00419b9c  8d642400             lea esp, [esp]
// 00419ba0  8b4610               mov eax, dword ptr [esi + 0x10]
// 00419ba3  4f                   dec edi
// 00419ba4  391cb8               cmp dword ptr [eax + edi*4], ebx
// 00419ba7  8d04b8               lea eax, [eax + edi*4]
// 00419baa  740b                 je 0x419bb7
// 00419bac  8b08                 mov ecx, dword ptr [eax]
// 00419bae  51                   push ecx
// 00419baf  e8c66a2800           call 0x6a067a
// 00419bb4  83c404               add esp, 4
// 00419bb7  3bfb                 cmp edi, ebx
// 00419bb9  77e5                 ja 0x419ba0
// 00419bbb  8b4610               mov eax, dword ptr [esi + 0x10]
// 00419bbe  3bc3                 cmp eax, ebx
// 00419bc0  7409                 je 0x419bcb
// 00419bc2  50                   push eax
// 00419bc3  e8b26a2800           call 0x6a067a
// 00419bc8  83c404               add esp, 4
// 00419bcb  5f                   pop edi
// 00419bcc  895e10               mov dword ptr [esi + 0x10], ebx
// 00419bcf  895e14               mov dword ptr [esi + 0x14], ebx
// 00419bd2  5e                   pop esi
// 00419bd3  5b                   pop ebx
// 00419bd4  c3                   ret 

extern "C" void __cdecl release(void*);

struct Entry
{
    typedef void (__cdecl *Callback)(void*, void*, int);
    Callback* manager;
    unsigned int reserved;
    char storage[1];
};

struct S
{
    unsigned char reserved[16];
    Entry** entries;
    unsigned int capacity;
    unsigned int first;
    unsigned int count;

    void clear();
};

void S::clear()
{
    while (count != 0)
    {
        if (count != 0)
        {
            unsigned int index = count + first - 1;
            if (capacity <= index)
                index -= capacity;

            Entry* entry = entries[index];
            if (entry->manager != 0)
            {
                Entry::Callback callback = *entry->manager;
                void* storage = entry->storage;
                if (callback != 0)
                    callback(storage, storage, 1);
                entry->manager = 0;
            }

            if (--count == 0)
                first = 0;
        }
    }

    unsigned int remaining = capacity;
    while (remaining > 0)
    {
        --remaining;
        if (entries[remaining] != 0)
            release(entries[remaining]);
    }

    if (entries != 0)
        release(entries);

    capacity = 0;
    entries = 0;
}
