// from server: 100% by king_originala
// roc 2008-06 0056a040  unit: RBX::StandardOut  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056a040
//
// 0056a040  b84c120000           mov eax, 0x124c
// 0056a045  e8d6741300           call 0x6a1520
// 0056a04a  56                   push esi
// 0056a04b  8d4c240c             lea ecx, [esp + 0xc]
// 0056a04f  e8fcc5e9ff           call 0x406650
// 0056a054  8b0d70b38000         mov ecx, dword ptr [0x80b370]
// 0056a05a  6a04                 push 4
// 0056a05c  51                   push ecx
// 0056a05d  8d542414             lea edx, [esp + 0x14]
// 0056a061  b850000000           mov eax, 0x50
// 0056a066  6a21                 push 0x21
// 0056a068  52                   push edx
// 0056a069  c784244412000002000000 mov dword ptr [esp + 0x1244], 2
// 0056a074  c784244812000004000000 mov dword ptr [esp + 0x1248], 4
// 0056a07f  6689842442120000     mov word ptr [esp + 0x1242], ax
// 0056a087  ff15b8288000         call dword ptr [0x8028b8]
// 0056a08d  50                   push eax
// 0056a08e  e8ddf7ffff           call 0x569870
// 0056a093  8bb42468120000       mov esi, dword ptr [esp + 0x1268]
// 0056a09a  83c414               add esp, 0x14
// 0056a09d  6a00                 push 0
// 0056a09f  56                   push esi
// 0056a0a0  8d4c2414             lea ecx, [esp + 0x14]
// 0056a0a4  e8b7e8e9ff           call 0x408960
// 0056a0a9  8b842434120000       mov eax, dword ptr [esp + 0x1234]
// 0056a0b0  85c0                 test eax, eax
// 0056a0b2  0f849e000000         je 0x56a156
// 0056a0b8  83f801               cmp eax, 1
// 0056a0bb  7e09                 jle 0x56a0c6
// 0056a0bd  83f803               cmp eax, 3
// 0056a0c0  0f8e90000000         jle 0x56a156
// 0056a0c6  56                   push esi
// 0056a0c7  8d4c2408             lea ecx, [esp + 8]
// 0056a0cb  e8504dffff           call 0x55ee20
// 0056a0d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056a0d4  8379f400             cmp dword ptr [ecx - 0xc], 0
// 0056a0d8  8b35b4288000         mov esi, dword ptr [0x8028b4]
// 0056a0de  7c5a                 jl 0x56a13a
// 0056a0e0  6884f58200           push 0x82f584
// 0056a0e5  51                   push ecx
// 0056a0e6  ffd6                 call esi
// 0056a0e8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056a0ec  83c408               add esp, 8
// 0056a0ef  85c0                 test eax, eax
// 0056a0f1  742a                 je 0x56a11d
// 0056a0f3  2bc1                 sub eax, ecx
// 0056a0f5  7526                 jne 0x56a11d
// 0056a0f7  8d41f0               lea eax, [ecx - 0x10]
// 0056a0fa  8d480c               lea ecx, [eax + 0xc]
// 0056a0fd  83caff               or edx, 0xffffffff
// 0056a100  f00fc111             lock xadd dword ptr [ecx], edx
// 0056a104  4a                   dec edx
// 0056a105  85d2                 test edx, edx
// 0056a107  7f0a                 jg 0x56a113
// 0056a109  8b08                 mov ecx, dword ptr [eax]
// 0056a10b  8b11                 mov edx, dword ptr [ecx]
// 0056a10d  50                   push eax
// 0056a10e  8b4204               mov eax, dword ptr [edx + 4]
// 0056a111  ffd0                 call eax
// 0056a113  b001                 mov al, 1
// 0056a115  5e                   pop esi
// 0056a116  81c44c120000         add esp, 0x124c
// 0056a11c  c3                   ret 
// 0056a11d  8379f400             cmp dword ptr [ecx - 0xc], 0
// 0056a121  7c17                 jl 0x56a13a
// 0056a123  6878f58200           push 0x82f578
// 0056a128  51                   push ecx
// 0056a129  ffd6                 call esi
// 0056a12b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056a12f  83c408               add esp, 8
// 0056a132  85c0                 test eax, eax
// 0056a134  7404                 je 0x56a13a
// 0056a136  2bc1                 sub eax, ecx
// 0056a138  74bd                 je 0x56a0f7
// 0056a13a  8d41f0               lea eax, [ecx - 0x10]
// 0056a13d  8d480c               lea ecx, [eax + 0xc]
// 0056a140  83caff               or edx, 0xffffffff
// 0056a143  f00fc111             lock xadd dword ptr [ecx], edx
// 0056a147  4a                   dec edx
// 0056a148  85d2                 test edx, edx
// 0056a14a  7f0a                 jg 0x56a156
// 0056a14c  8b08                 mov ecx, dword ptr [eax]
// 0056a14e  8b11                 mov edx, dword ptr [ecx]
// 0056a150  50                   push eax
// 0056a151  8b4204               mov eax, dword ptr [edx + 4]
// 0056a154  ffd0                 call eax
// 0056a156  32c0                 xor al, al
// 0056a158  5e                   pop esi
// 0056a159  81c44c120000         add esp, 0x124c
// 0056a15f  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern int (__cdecl *copy_bytes)(unsigned char*, unsigned int,
                                const unsigned char*, unsigned int);
extern unsigned char* (__cdecl *find_bytes)(const unsigned char*,
                                           const unsigned char*);
extern const unsigned char* source;
extern void __cdecl check_result(int);

struct Content
{
    unsigned char data[0x1226];
    unsigned short limit;
    int kind;
    int flags;
    int field1230;
    int field1234;
    int field1238;
    int field123c;
    int field1240;

    void Init();
    void f(int, unsigned int);
};

struct String
{
    unsigned char* text;
    int reserved;
    void assign(int);
};

struct StringHeader;

struct StringManager
{
    virtual void unused() = 0;
    virtual void release(StringHeader*) = 0;
};

struct StringHeader
{
    StringManager* manager;
    int length;
    int capacity;
    volatile long references;

    __forceinline void release();
};

__forceinline void StringHeader::release()
{
    volatile long* count = &references;
    if (_InterlockedExchangeAdd(count, -1) - 1 <= 0)
        manager->release(this);
}

bool __cdecl test_content(int value)
{
    Content content;
    content.Init();
    content.kind = 2;
    content.flags = 4;
    content.limit = 0x50;
    check_result(copy_bytes(content.data, 0x21, source, 4));
    content.f(value, 0);

    if (content.kind == 0 ||
        (content.kind > 1 && content.kind <= 3))
        return false;

    String string;
    string.assign(value);
    unsigned char* (__cdecl *search)(const unsigned char*,
                                    const unsigned char*) = find_bytes;

    if (((StringHeader*)string.text - 1)->length >= 0)
    {
        unsigned char* found = search(
            string.text, (const unsigned char*)"javascript:");
        if (found && found - string.text == 0)
        {
            ((StringHeader*)string.text - 1)->release();
            return true;
        }

        if (((StringHeader*)string.text - 1)->length >= 0)
        {
            found = search(string.text, (const unsigned char*)"jscript:");
            if (found && found - string.text == 0)
            {
                ((StringHeader*)string.text - 1)->release();
                return true;
            }
        }
    }

    ((StringHeader*)string.text - 1)->release();
    return false;
}
