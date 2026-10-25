// from server: 99% by king_originala
// roc 2008-06 0059b970  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 414 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059b970
//
// 0059b970  6aff                 push -1
// 0059b972  68f2257d00           push 0x7d25f2
// 0059b977  64a100000000         mov eax, dword ptr fs:[0]
// 0059b97d  50                   push eax
// 0059b97e  64892500000000       mov dword ptr fs:[0], esp
// 0059b985  51                   push ecx
// 0059b986  56                   push esi
// 0059b987  57                   push edi
// 0059b988  8bf1                 mov esi, ecx
// 0059b98a  89742408             mov dword ptr [esp + 8], esi
// 0059b98e  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 0059b994  c7064c2d8300         mov dword ptr [esi], 0x832d4c
// 0059b99a  c746103c2d8300       mov dword ptr [esi + 0x10], 0x832d3c
// 0059b9a1  c74614342d8300       mov dword ptr [esi + 0x14], 0x832d34
// 0059b9a8  c746202c2d8300       mov dword ptr [esi + 0x20], 0x832d2c
// 0059b9af  c746241c2d8300       mov dword ptr [esi + 0x24], 0x832d1c
// 0059b9b6  c746440c2d8300       mov dword ptr [esi + 0x44], 0x832d0c
// 0059b9bd  c74664fc2c8300       mov dword ptr [esi + 0x64], 0x832cfc
// 0059b9c4  c78684000000ec2c8300 mov dword ptr [esi + 0x84], 0x832cec
// 0059b9ce  c786a4000000dc2c8300 mov dword ptr [esi + 0xa4], 0x832cdc
// 0059b9d8  c786c4000000cc2c8300 mov dword ptr [esi + 0xc4], 0x832ccc
// 0059b9e2  c78630010000c02c8300 mov dword ptr [esi + 0x130], 0x832cc0
// 0059b9ec  c786a0010000b02c8300 mov dword ptr [esi + 0x1a0], 0x832cb0
// 0059b9f6  c786c0010000a42c8300 mov dword ptr [esi + 0x1c0], 0x832ca4
// 0059ba00  c786cc0100008c2c8300 mov dword ptr [esi + 0x1cc], 0x832c8c
// 0059ba0a  8b4804               mov ecx, dword ptr [eax + 4]
// 0059ba0d  c7843134010000802c8300 mov dword ptr [ecx + esi + 0x134], 0x832c80
// 0059ba18  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 0059ba1e  8b4208               mov eax, dword ptr [edx + 8]
// 0059ba21  c7843034010000782c8300 mov dword ptr [eax + esi + 0x134], 0x832c78
// 0059ba2c  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 0059ba32  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0059ba35  8dbecc010000         lea edi, [esi + 0x1cc]
// 0059ba3b  c78432340100005c2c8300 mov dword ptr [edx + esi + 0x134], 0x832c5c
// 0059ba46  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 0059ba4c  8b4004               mov eax, dword ptr [eax + 4]
// 0059ba4f  8d8848fdffff         lea ecx, [eax - 0x2b8]
// 0059ba55  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 0059ba5c  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 0059ba62  8b4208               mov eax, dword ptr [edx + 8]
// 0059ba65  8d8840fdffff         lea ecx, [eax - 0x2c0]
// 0059ba6b  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 0059ba72  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 0059ba78  8b420c               mov eax, dword ptr [edx + 0xc]
// 0059ba7b  8d8838fdffff         lea ecx, [eax - 0x2c8]
// 0059ba81  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 0059ba88  8d8ec8030000         lea ecx, [esi + 0x3c8]
// 0059ba8e  c744241403000000     mov dword ptr [esp + 0x14], 3
// 0059ba96  ff1568248000         call dword ptr [0x802468]
// 0059ba9c  8d8e28020000         lea ecx, [esi + 0x228]
// 0059baa2  c644241402           mov byte ptr [esp + 0x14], 2
// 0059baa7  e844c30400           call 0x5e7df0
// 0059baac  8bcf                 mov ecx, edi
// 0059baae  c644241401           mov byte ptr [esp + 0x14], 1
// 0059bab3  e85819eeff           call 0x47d410
// 0059bab8  8b86b0010000         mov eax, dword ptr [esi + 0x1b0]
// 0059babe  33ff                 xor edi, edi
// 0059bac0  3bc7                 cmp eax, edi
// 0059bac2  7409                 je 0x59bacd
// 0059bac4  50                   push eax
// 0059bac5  e8b04b1000           call 0x6a067a
// 0059baca  83c404               add esp, 4
// 0059bacd  8b86a4010000         mov eax, dword ptr [esi + 0x1a4]
// 0059bad3  50                   push eax
// 0059bad4  89beb0010000         mov dword ptr [esi + 0x1b0], edi
// 0059bada  89beb4010000         mov dword ptr [esi + 0x1b4], edi
// 0059bae0  89beb8010000         mov dword ptr [esi + 0x1b8], edi
// 0059bae6  e88f4b1000           call 0x6a067a
// 0059baeb  83c404               add esp, 4
// 0059baee  8bce                 mov ecx, esi
// 0059baf0  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0059baf8  e8f3d2ffff           call 0x598df0
// 0059bafd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059bb01  5f                   pop edi
// 0059bb02  5e                   pop esi
// 0059bb03  64890d00000000       mov dword ptr fs:[0], ecx
// 0059bb0a  83c410               add esp, 0x10
// 0059bb0d  c3                   ret 

extern "C" void __cdecl release(void*);

struct Base
{
    unsigned int words[77];
    int* table;
    char tail[0x68];
    ~Base();
};

struct Buffer
{
    unsigned int vtable;
    void* allocation;
    unsigned int reserved[2];
    void* first;
    void* last;
    void* limit;
    unsigned int padding;
    ~Buffer();
};

inline Buffer::~Buffer()
{
    if (first)
        release(first);
    void* p = allocation;
    first = 0;
    last = 0;
    limit = 0;
    release(p);
}

struct Part
{
    char data[0x5c];
    ~Part();
};

struct Storage
{
    char data[0x1a0];
    ~Storage();
};

struct String
{
    char data[28];
    ~String();
};

extern void (__thiscall* destroyString)(String*);

inline String::~String()
{
    destroyString(this);
}

struct S : Base
{
    Buffer buffer;
    unsigned int secondary;
    unsigned int padding[2];
    Part part;
    Storage storage;
    String text;
    ~S();
};

S::~S()
{
    int* t = table;
    words[0] = 0x00832d4c;
    words[4] = 0x00832d3c;
    words[5] = 0x00832d34;
    words[8] = 0x00832d2c;
    words[9] = 0x00832d1c;
    words[17] = 0x00832d0c;
    words[25] = 0x00832cfc;
    words[33] = 0x00832cec;
    words[41] = 0x00832cdc;
    words[49] = 0x00832ccc;
    words[76] = 0x00832cc0;
    buffer.vtable = 0x00832cb0;
    secondary = 0x00832ca4;
    *reinterpret_cast<unsigned int*>(part.data) = 0x00832c8c;

    *reinterpret_cast<unsigned int*>(
        reinterpret_cast<char*>(this) + t[1] + 0x134) = 0x00832c80;
    t = table;
    *reinterpret_cast<unsigned int*>(
        reinterpret_cast<char*>(this) + t[2] + 0x134) = 0x00832c78;
    t = table;
    *reinterpret_cast<unsigned int*>(
        reinterpret_cast<char*>(this) + t[3] + 0x134) = 0x00832c5c;

    t = table;
    int offset = t[1];
    *reinterpret_cast<int*>(
        reinterpret_cast<char*>(this) + 0x130 + offset) = offset - 0x2b8;
    offset = table[2];
    *reinterpret_cast<int*>(
        reinterpret_cast<char*>(this) + 0x130 + offset) = offset - 0x2c0;
    offset = table[3];
    *reinterpret_cast<int*>(
        reinterpret_cast<char*>(this) + 0x130 + offset) = offset - 0x2c8;
}
