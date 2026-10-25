// from server: 100% by colin
// roc 2008-06 0063da90  unit: RBX::VSparkles::?$FactoryProduct  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063da90
//
// 0063da90  6aff                 push -1
// 0063da92  681da87d00           push 0x7da81d
// 0063da97  64a100000000         mov eax, dword ptr fs:[0]
// 0063da9d  50                   push eax
// 0063da9e  64892500000000       mov dword ptr fs:[0], esp
// 0063daa5  83ec20               sub esp, 0x20
// 0063daa8  56                   push esi
// 0063daa9  8bf1                 mov esi, ecx
// 0063daab  57                   push edi
// 0063daac  89742408             mov dword ptr [esp + 8], esi
// 0063dab0  e8fbfeffff           call 0x63d9b0
// 0063dab5  33c9                 xor ecx, ecx
// 0063dab7  83c8ff               or eax, 0xffffffff
// 0063daba  894c2430             mov dword ptr [esp + 0x30], ecx
// 0063dabe  898634010000         mov dword ptr [esi + 0x134], eax
// 0063dac4  898638010000         mov dword ptr [esi + 0x138], eax
// 0063daca  898e3c010000         mov dword ptr [esi + 0x13c], ecx
// 0063dad0  8dbe40010000         lea edi, [esi + 0x140]
// 0063dad6  8bcf                 mov ecx, edi
// 0063dad8  c644243001           mov byte ptr [esp + 0x30], 1
// 0063dadd  e88e7b0200           call 0x665670
// 0063dae2  6874a28400           push 0x84a274
// 0063dae7  8d4c2410             lea ecx, [esp + 0x10]
// 0063daeb  c644243402           mov byte ptr [esp + 0x34], 2
// 0063daf0  c70634a28400         mov dword ptr [esi], 0x84a234
// 0063daf6  c7461028a28400       mov dword ptr [esi + 0x10], 0x84a228
// 0063dafd  c7461420a28400       mov dword ptr [esi + 0x14], 0x84a220
// 0063db04  c7462018a28400       mov dword ptr [esi + 0x20], 0x84a218
// 0063db0b  c7462408a28400       mov dword ptr [esi + 0x24], 0x84a208
// 0063db12  c74644f8a18400       mov dword ptr [esi + 0x44], 0x84a1f8
// 0063db19  c74664e8a18400       mov dword ptr [esi + 0x64], 0x84a1e8
// 0063db20  c78684000000d8a18400 mov dword ptr [esi + 0x84], 0x84a1d8
// 0063db2a  c786a4000000c8a18400 mov dword ptr [esi + 0xa4], 0x84a1c8
// 0063db34  c786c4000000b8a18400 mov dword ptr [esi + 0xc4], 0x84a1b8
// 0063db3e  c78630010000a0a18400 mov dword ptr [esi + 0x130], 0x84a1a0
// 0063db48  c70798a18400         mov dword ptr [edi], 0x84a198
// 0063db4e  c6864401000001       mov byte ptr [esi + 0x144], 1
// 0063db55  ff1558248000         call dword ptr [0x802458]
// 0063db5b  8d44240c             lea eax, [esp + 0xc]
// 0063db5f  50                   push eax
// 0063db60  8bce                 mov ecx, esi
// 0063db62  c644243403           mov byte ptr [esp + 0x34], 3
// 0063db67  e824d4f1ff           call 0x55af90
// 0063db6c  8d4c240c             lea ecx, [esp + 0xc]
// 0063db70  c644243002           mov byte ptr [esp + 0x30], 2
// 0063db75  ff1568248000         call dword ptr [0x802468]
// 0063db7b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0063db7f  5f                   pop edi
// 0063db80  8bc6                 mov eax, esi
// 0063db82  5e                   pop esi
// 0063db83  64890d00000000       mov dword ptr fs:[0], ecx
// 0063db8a  83c42c               add esp, 0x2c
// 0063db8d  c3                   ret 

typedef unsigned long DWORD;

struct String {
    char storage[28];
    __declspec(dllimport) String(const char *);
    __declspec(dllimport) ~String();
};

struct Base {
    DWORD slots[77];
    Base();
    ~Base();
    void setName(const String &);
};

struct Parameters {
    int first;
    int second;
    int third;
    Parameters();
    ~Parameters();
};

inline Parameters::Parameters()
    : first(-1), second(-1), third(0)
{
}

struct Member {
    DWORD table;
    Member();
    ~Member();
};

struct S : Base {
    Parameters parameters;
    Member member;
    bool enabled;
    S();
};

S::S()
    : Base(), parameters(), member()
{
    slots[0] = 0x0084a234;
    slots[4] = 0x0084a228;
    slots[5] = 0x0084a220;
    slots[8] = 0x0084a218;
    slots[9] = 0x0084a208;
    slots[17] = 0x0084a1f8;
    slots[25] = 0x0084a1e8;
    slots[33] = 0x0084a1d8;
    slots[41] = 0x0084a1c8;
    slots[49] = 0x0084a1b8;
    slots[76] = 0x0084a1a0;
    member.table = 0x0084a198;
    enabled = true;

    String name(reinterpret_cast<const char *>(0x0084a274));
    setName(name);
}
