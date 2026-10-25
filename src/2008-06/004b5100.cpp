// from server: 100% by colin
// roc 2008-06 004b5100  unit: RBX::Network::Replicator::DeleteInstanceItem  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b5100
//
// 004b5100  83ec08               sub esp, 8
// 004b5103  56                   push esi
// 004b5104  8bf1                 mov esi, ecx
// 004b5106  e8d59afaff           call 0x45ebe0
// 004b510b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004b510f  b870c15e00           mov eax, 0x5ec170
// 004b5114  89442404             mov dword ptr [esp + 4], eax
// 004b5118  8d442404             lea eax, [esp + 4]
// 004b511c  c7069c4e8200         mov dword ptr [esi], 0x824e9c
// 004b5122  c746108c4e8200       mov dword ptr [esi + 0x10], 0x824e8c
// 004b5129  c74614844e8200       mov dword ptr [esi + 0x14], 0x824e84
// 004b5130  c746207c4e8200       mov dword ptr [esi + 0x20], 0x824e7c
// 004b5137  c746246c4e8200       mov dword ptr [esi + 0x24], 0x824e6c
// 004b513e  c746445c4e8200       mov dword ptr [esi + 0x44], 0x824e5c
// 004b5145  c746644c4e8200       mov dword ptr [esi + 0x64], 0x824e4c
// 004b514c  c786840000003c4e8200 mov dword ptr [esi + 0x84], 0x824e3c
// 004b5156  c786a40000002c4e8200 mov dword ptr [esi + 0xa4], 0x824e2c
// 004b5160  c786c40000001c4e8200 mov dword ptr [esi + 0xc4], 0x824e1c
// 004b516a  50                   push eax
// 004b516b  894c240c             mov dword ptr [esp + 0xc], ecx
// 004b516f  c7865801000000000000 mov dword ptr [esi + 0x158], 0
// 004b5179  e872511500           call 0x60a2f0
// 004b517e  83c404               add esp, 4
// 004b5181  84c0                 test al, al
// 004b5183  752a                 jne 0x4b51af
// 004b5185  8d8660010000         lea eax, [esi + 0x160]
// 004b518b  85c0                 test eax, eax
// 004b518d  740d                 je 0x4b519c
// 004b518f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b5193  8b542408             mov edx, dword ptr [esp + 8]
// 004b5197  8908                 mov dword ptr [eax], ecx
// 004b5199  895004               mov dword ptr [eax + 4], edx
// 004b519c  c786580100002c4a8200 mov dword ptr [esi + 0x158], 0x824a2c
// 004b51a6  8bc6                 mov eax, esi
// 004b51a8  5e                   pop esi
// 004b51a9  83c408               add esp, 8
// 004b51ac  c20400               ret 4
// 004b51af  c7865801000000000000 mov dword ptr [esi + 0x158], 0
// 004b51b9  8bc6                 mov eax, esi
// 004b51bb  5e                   pop esi
// 004b51bc  83c408               add esp, 8
// 004b51bf  c20400               ret 4

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
