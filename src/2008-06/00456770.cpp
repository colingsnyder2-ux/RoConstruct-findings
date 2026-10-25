// from server: 100% by king_originala
// roc 2008-06 00456770  unit: CRobloxReportView::CStatsItemRecord::CValueItem  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00456770
//
// 00456770  6aff                 push -1
// 00456772  6842247c00           push 0x7c2442
// 00456777  64a100000000         mov eax, dword ptr fs:[0]
// 0045677d  50                   push eax
// 0045677e  64892500000000       mov dword ptr fs:[0], esp
// 00456785  83ec14               sub esp, 0x14
// 00456788  56                   push esi
// 00456789  8bf1                 mov esi, ecx
// 0045678b  c744240400000000     mov dword ptr [esp + 4], 0
// 00456793  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00456796  83ec08               sub esp, 8
// 00456799  8bcc                 mov ecx, esp
// 0045679b  8901                 mov dword ptr [ecx], eax
// 0045679d  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 004567a3  89642410             mov dword ptr [esp + 0x10], esp
// 004567a7  894104               mov dword ptr [ecx + 4], eax
// 004567aa  85c0                 test eax, eax
// 004567ac  740c                 je 0x4567ba
// 004567ae  83c004               add eax, 4
// 004567b1  b901000000           mov ecx, 1
// 004567b6  f00fc108             lock xadd dword ptr [eax], ecx
// 004567ba  8d4c2414             lea ecx, [esp + 0x14]
// 004567be  e87db3fbff           call 0x411b40
// 004567c3  8bb684000000         mov esi, dword ptr [esi + 0x84]
// 004567c9  8b16                 mov edx, dword ptr [esi]
// 004567cb  8b4240               mov eax, dword ptr [edx + 0x40]
// 004567ce  8bce                 mov ecx, esi
// 004567d0  c744242001000000     mov dword ptr [esp + 0x20], 1
// 004567d8  ffd0                 call eax
// 004567da  8d8e38010000         lea ecx, [esi + 0x138]
// 004567e0  ff1564248000         call dword ptr [0x802464]
// 004567e6  8b742428             mov esi, dword ptr [esp + 0x28]
// 004567ea  50                   push eax
// 004567eb  8bce                 mov ecx, esi
// 004567ed  ff15103f8000         call dword ptr [0x803f10]
// 004567f3  8d4c240c             lea ecx, [esp + 0xc]
// 004567f7  c744240401000000     mov dword ptr [esp + 4], 1
// 004567ff  c644242000           mov byte ptr [esp + 0x20], 0
// 00456804  e8b70b1200           call 0x5773c0
// 00456809  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0045680d  8bc6                 mov eax, esi
// 0045680f  64890d00000000       mov dword ptr fs:[0], ecx
// 00456816  5e                   pop esi
// 00456817  83c420               add esp, 0x20
// 0045681a  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    void* vtable;
    volatile long count;
    void addRef();
};

inline void Control::addRef() {
    volatile long* p = &count;
    _InterlockedExchangeAdd(p, 1);
}

struct Shared {
    void* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control) {
    if (control)
        control->addRef();
}

struct Guard {
    char storage[12];
    Guard(Shared);
    ~Guard();
};

struct Text {
    const char* c_str() const;
};

struct Result {
    void* data;
    Result(const char*);
    Result(const Result&);
    ~Result();
};

extern const char* (__thiscall *text_c_str)(const Text*);
extern void (__thiscall *result_construct)(Result*, const char*);

inline const char* Text::c_str() const {
    return text_c_str(this);
}

inline Result::Result(const char* text) {
    result_construct(this, text);
}

struct Object {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual void update();

    char padding[0x134];
    Text text;
};

struct S {
    char padding[0x7c];
    Shared shared;
    Object* object;
    Result f(int);
};

Result S::f(int) {
    Guard guard(shared);
    Object* p = object;
    p->update();
    return Result(p->text.c_str());
}
