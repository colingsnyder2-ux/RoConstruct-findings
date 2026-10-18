// from server: 85% by colin
// from server: 84% by king_originala
// roc 2008-06 0045ecc0  unit: RBX::Stats::Item  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045ecc0
//
// 0045ecc0  83ec08               sub esp, 8
// 0045ecc3  56                   push esi
// 0045ecc4  8bf1                 mov esi, ecx
// 0045ecc6  e815ffffff           call 0x45ebe0
// 0045eccb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0045eccf  b870c15e00           mov eax, 0x5ec170
// 0045ecd4  89442404             mov dword ptr [esp + 4], eax
// 0045ecd8  8d442404             lea eax, [esp + 4]
// 0045ecdc  c7068ca08100         mov dword ptr [esi], 0x81a08c
// 0045ece2  c746107ca08100       mov dword ptr [esi + 0x10], 0x81a07c
// 0045ece9  c7461474a08100       mov dword ptr [esi + 0x14], 0x81a074
// 0045ecf0  c746206ca08100       mov dword ptr [esi + 0x20], 0x81a06c
// 0045ecf7  c746245ca08100       mov dword ptr [esi + 0x24], 0x81a05c
// 0045ecfe  c746444ca08100       mov dword ptr [esi + 0x44], 0x81a04c
// 0045ed05  c746643ca08100       mov dword ptr [esi + 0x64], 0x81a03c
// 0045ed0c  c786840000002ca08100 mov dword ptr [esi + 0x84], 0x81a02c
// 0045ed16  c786a40000001ca08100 mov dword ptr [esi + 0xa4], 0x81a01c
// 0045ed20  c786c40000000ca08100 mov dword ptr [esi + 0xc4], 0x81a00c
// 0045ed2a  50                   push eax
// 0045ed2b  894c240c             mov dword ptr [esp + 0xc], ecx
// 0045ed2f  c7865801000000000000 mov dword ptr [esi + 0x158], 0
// 0045ed39  e8b2b51a00           call 0x60a2f0
// 0045ed3e  83c404               add esp, 4
// 0045ed41  84c0                 test al, al
// 0045ed43  752a                 jne 0x45ed6f
// 0045ed45  8d8660010000         lea eax, [esi + 0x160]
// 0045ed4b  85c0                 test eax, eax
// 0045ed4d  740d                 je 0x45ed5c
// 0045ed4f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0045ed53  8b542408             mov edx, dword ptr [esp + 8]
// 0045ed57  8908                 mov dword ptr [eax], ecx
// 0045ed59  895004               mov dword ptr [eax + 4], edx
// 0045ed5c  c78658010000dc9c8100 mov dword ptr [esi + 0x158], 0x819cdc
// 0045ed66  8bc6                 mov eax, esi
// 0045ed68  5e                   pop esi
// 0045ed69  83c408               add esp, 8
// 0045ed6c  c20400               ret 4
// 0045ed6f  c7865801000000000000 mov dword ptr [esi + 0x158], 0
// 0045ed79  8bc6                 mov eax, esi
// 0045ed7b  5e                   pop esi
// 0045ed7c  83c408               add esp, 8
// 0045ed7f  c20400               ret 4

struct Part0 {
    virtual void slot0();
    char padding[12];
};

struct Part10 {
    virtual void slot10();
};

struct Part14 {
    virtual void slot14();
    char padding[8];
};

struct Part20 {
    virtual void slot20();
};

struct Part24 {
    virtual void slot24();
    char padding[28];
};

struct Part44 {
    virtual void slot44();
    char padding[28];
};

struct Part64 {
    virtual void slot64();
    char padding[28];
};

struct Part84 {
    virtual void slot84();
    char padding[28];
};

struct Parta4 {
    virtual void slota4();
    char padding[28];
};

struct Partc4 {
    virtual void slotc4();
    char padding[104];
};

struct Base : Part0, Part10, Part14, Part20, Part24, Part44, Part64, Part84, Parta4, Partc4 {
    Base();
};

struct S : Base {
    double value;
    unsigned char text[28];
    S();
};

extern void __cdecl func_005ec170(void *);
extern bool __cdecl func_0060a2f0();

struct Pair {
    void (__cdecl *function)(void *);
    void *argument;
};

inline void *__cdecl operator new(unsigned int, void *p)
{
    return p;
}

struct Item : S {
    unsigned long state;
    unsigned long padding;
    Pair target;
    Item(void *);
};

extern const char targetTable[];

Item::Item(void *argument)
{
    Pair local = { &func_005ec170, argument };
    state = 0;
    if (!reinterpret_cast<bool (__cdecl *)(Pair *)>(
            &func_0060a2f0)(&local)) {
        new (&target) Pair(local);
        state = (unsigned long)targetTable;
    } else {
        state = 0;
    }
}
