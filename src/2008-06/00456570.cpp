// from server: 100% by king_originala
// roc 2008-06 00456570  unit: CRobloxReportView::CStatsItemRecord::CNameItem  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00456570
//
// 00456570  6aff                 push -1
// 00456572  6842247c00           push 0x7c2442
// 00456577  64a100000000         mov eax, dword ptr fs:[0]
// 0045657d  50                   push eax
// 0045657e  64892500000000       mov dword ptr fs:[0], esp
// 00456585  83ec14               sub esp, 0x14
// 00456588  56                   push esi
// 00456589  8bf1                 mov esi, ecx
// 0045658b  c744240400000000     mov dword ptr [esp + 4], 0
// 00456593  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00456596  83ec08               sub esp, 8
// 00456599  8bcc                 mov ecx, esp
// 0045659b  8901                 mov dword ptr [ecx], eax
// 0045659d  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 004565a3  89642410             mov dword ptr [esp + 0x10], esp
// 004565a7  894104               mov dword ptr [ecx + 4], eax
// 004565aa  85c0                 test eax, eax
// 004565ac  740c                 je 0x4565ba
// 004565ae  83c004               add eax, 4
// 004565b1  b901000000           mov ecx, 1
// 004565b6  f00fc108             lock xadd dword ptr [eax], ecx
// 004565ba  8d4c2414             lea ecx, [esp + 0x14]
// 004565be  e87db5fbff           call 0x411b40
// 004565c3  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 004565c9  81c110010000         add ecx, 0x110
// 004565cf  c744242001000000     mov dword ptr [esp + 0x20], 1
// 004565d7  ff1564248000         call dword ptr [0x802464]
// 004565dd  8b742428             mov esi, dword ptr [esp + 0x28]
// 004565e1  50                   push eax
// 004565e2  8bce                 mov ecx, esi
// 004565e4  ff15103f8000         call dword ptr [0x803f10]
// 004565ea  8d4c240c             lea ecx, [esp + 0xc]
// 004565ee  c744240401000000     mov dword ptr [esp + 4], 1
// 004565f6  c644242000           mov byte ptr [esp + 0x20], 0
// 004565fb  e8c00d1200           call 0x5773c0
// 00456600  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00456604  8bc6                 mov eax, esi
// 00456606  64890d00000000       mov dword ptr fs:[0], ecx
// 0045660d  5e                   pop esi
// 0045660e  83c420               add esp, 0x20
// 00456611  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" void __cdecl _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)

struct Control {
    long reserved;
    volatile long references;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control) {
        volatile long* count = &control->references;
        _ReadWriteBarrier();
        _InterlockedExchangeAdd(count, 1);
    }
}

struct Guard {
    unsigned char storage[12];

    Guard(Shared);
    ~Guard();
};

struct Text;
struct Result;

extern const char* (__thiscall *text_c_str)(const Text*);
extern void (__thiscall *result_construct)(Result*, const char*);

struct Text {
    const char* c_str() const;
};

inline const char* Text::c_str() const
{
    return text_c_str(this);
}

struct Result {
    void* value;

    Result(const char*);
    ~Result();
};

inline Result::Result(const char* text)
{
    result_construct(this, text);
}

struct Owner {
    unsigned char padding[0x110];
    Text text;
};

struct S {
    unsigned char padding[0x7c];
    Shared shared;
    Owner* owner;

    Result f(void*);
};

Result S::f(void*)
{
    Guard guard(shared);
    return Result(owner->text.c_str());
}
