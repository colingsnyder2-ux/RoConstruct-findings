// from server: 100% by colin
// roc 2008-06 0045eef0  unit: G3D::VStopwatch::?$TypedStatsItem  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045eef0
//
// 0045eef0  83ec08               sub esp, 8
// 0045eef3  56                   push esi
// 0045eef4  8bf1                 mov esi, ecx
// 0045eef6  e8e5fcffff           call 0x45ebe0
// 0045eefb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0045eeff  b870c15e00           mov eax, 0x5ec170
// 0045ef04  89442404             mov dword ptr [esp + 4], eax
// 0045ef08  8d442404             lea eax, [esp + 4]
// 0045ef0c  c70654a18100         mov dword ptr [esi], 0x81a154
// 0045ef12  c7461044a18100       mov dword ptr [esi + 0x10], 0x81a144
// 0045ef19  c746143ca18100       mov dword ptr [esi + 0x14], 0x81a13c
// 0045ef20  c7462034a18100       mov dword ptr [esi + 0x20], 0x81a134
// 0045ef27  c7462424a18100       mov dword ptr [esi + 0x24], 0x81a124
// 0045ef2e  c7464414a18100       mov dword ptr [esi + 0x44], 0x81a114
// 0045ef35  c7466404a18100       mov dword ptr [esi + 0x64], 0x81a104
// 0045ef3c  c78684000000f4a08100 mov dword ptr [esi + 0x84], 0x81a0f4
// 0045ef46  c786a4000000e4a08100 mov dword ptr [esi + 0xa4], 0x81a0e4
// 0045ef50  c786c4000000d4a08100 mov dword ptr [esi + 0xc4], 0x81a0d4
// 0045ef5a  50                   push eax
// 0045ef5b  894c240c             mov dword ptr [esp + 0xc], ecx
// 0045ef5f  c7865801000000000000 mov dword ptr [esi + 0x158], 0
// 0045ef69  e882b31a00           call 0x60a2f0
// 0045ef6e  83c404               add esp, 4
// 0045ef71  84c0                 test al, al
// 0045ef73  752a                 jne 0x45ef9f
// 0045ef75  8d8660010000         lea eax, [esi + 0x160]
// 0045ef7b  85c0                 test eax, eax
// 0045ef7d  740d                 je 0x45ef8c
// 0045ef7f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0045ef83  8b542408             mov edx, dword ptr [esp + 8]
// 0045ef87  8908                 mov dword ptr [eax], ecx
// 0045ef89  895004               mov dword ptr [eax + 4], edx
// 0045ef8c  c78658010000e49c8100 mov dword ptr [esi + 0x158], 0x819ce4
// 0045ef96  8bc6                 mov eax, esi
// 0045ef98  5e                   pop esi
// 0045ef99  83c408               add esp, 8
// 0045ef9c  c20400               ret 4
// 0045ef9f  c7865801000000000000 mov dword ptr [esi + 0x158], 0
// 0045efa9  8bc6                 mov eax, esi
// 0045efab  5e                   pop esi
// 0045efac  83c408               add esp, 8
// 0045efaf  c20400               ret 4

#include <intrin.h>
// from server: 85% by colin
// Make this compile to the exact bytes below, then: roc check 2008-06 0045ecc0
//

// from server: 84% by king_originala
// Make this compile to the exact bytes below, then: roc check 2008-06 0045ecc0
//

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

typedef void (__cdecl *Fn)(void *);

struct List1 {
    void *a1;
    List1(void *a) : a1(a) {}
};

struct Pair {
    Fn function;
    List1 list;
    Pair(Fn f, const List1 &l) : function(f), list(l) {}
};

inline Pair bind(Fn f, void *a)
{
    return Pair(f, List1(a));
}

inline void *__cdecl operator new(unsigned int, void *p)
{
    return p;
}

extern const char targetTable[];

struct FunctionBase {
    unsigned long state;
    unsigned long padding;
    union { char buffer[8]; } functor;
    FunctionBase() : state(0) {}
};

struct Function : FunctionBase {
    __forceinline Function(Pair f) : FunctionBase()
    {
        assign(f);
    }
    __forceinline void assign(const Pair& f)
    {
        if (!reinterpret_cast<bool (__cdecl *)(Pair *)>(&func_0060a2f0)(const_cast<Pair*>(&f))) {
            new (&functor) Pair(f);
            state = (unsigned long)targetTable;
        } else {
            state = 0;
        }
    }
};

struct Item : S {
    Function target;
    Item(void *);
};

Item::Item(void *argument) : target(bind(&func_005ec170, argument))
{
}
