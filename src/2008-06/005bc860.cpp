// from server: 100% by colin
// roc 2008-06 005bc860  unit: RBX::Soundscape::SoundService  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bc860
//
// 005bc860  83ec08               sub esp, 8
// 005bc863  56                   push esi
// 005bc864  8bf1                 mov esi, ecx
// 005bc866  e87523eaff           call 0x45ebe0
// 005bc86b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005bc86f  b870c15e00           mov eax, 0x5ec170
// 005bc874  89442404             mov dword ptr [esp + 4], eax
// 005bc878  8d442404             lea eax, [esp + 4]
// 005bc87c  c7061c7f8300         mov dword ptr [esi], 0x837f1c
// 005bc882  c74610107f8300       mov dword ptr [esi + 0x10], 0x837f10
// 005bc889  c74614087f8300       mov dword ptr [esi + 0x14], 0x837f08
// 005bc890  c74620007f8300       mov dword ptr [esi + 0x20], 0x837f00
// 005bc897  c74624f07e8300       mov dword ptr [esi + 0x24], 0x837ef0
// 005bc89e  c74644e07e8300       mov dword ptr [esi + 0x44], 0x837ee0
// 005bc8a5  c74664d07e8300       mov dword ptr [esi + 0x64], 0x837ed0
// 005bc8ac  c78684000000c07e8300 mov dword ptr [esi + 0x84], 0x837ec0
// 005bc8b6  c786a4000000b07e8300 mov dword ptr [esi + 0xa4], 0x837eb0
// 005bc8c0  c786c4000000a07e8300 mov dword ptr [esi + 0xc4], 0x837ea0
// 005bc8ca  50                   push eax
// 005bc8cb  894c240c             mov dword ptr [esp + 0xc], ecx
// 005bc8cf  c7865801000000000000 mov dword ptr [esi + 0x158], 0
// 005bc8d9  e812da0400           call 0x60a2f0
// 005bc8de  83c404               add esp, 4
// 005bc8e1  84c0                 test al, al
// 005bc8e3  752a                 jne 0x5bc90f
// 005bc8e5  8d8660010000         lea eax, [esi + 0x160]
// 005bc8eb  85c0                 test eax, eax
// 005bc8ed  740d                 je 0x5bc8fc
// 005bc8ef  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005bc8f3  8b542408             mov edx, dword ptr [esp + 8]
// 005bc8f7  8908                 mov dword ptr [eax], ecx
// 005bc8f9  895004               mov dword ptr [eax + 4], edx
// 005bc8fc  c7865801000054798300 mov dword ptr [esi + 0x158], 0x837954
// 005bc906  8bc6                 mov eax, esi
// 005bc908  5e                   pop esi
// 005bc909  83c408               add esp, 8
// 005bc90c  c20400               ret 4
// 005bc90f  c7865801000000000000 mov dword ptr [esi + 0x158], 0
// 005bc919  8bc6                 mov eax, esi
// 005bc91b  5e                   pop esi
// 005bc91c  83c408               add esp, 8
// 005bc91f  c20400               ret 4

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
