// from server: 100% by king_originala
// roc 2008-06 004f0a20  unit: RBX::RenderBase::VMaterialBase::?$WeakReferenceCountedPointer  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f0a20
//
// 004f0a20  6aff                 push -1
// 004f0a22  6871ad7c00           push 0x7cad71
// 004f0a27  64a100000000         mov eax, dword ptr fs:[0]
// 004f0a2d  50                   push eax
// 004f0a2e  64892500000000       mov dword ptr fs:[0], esp
// 004f0a35  83ec08               sub esp, 8
// 004f0a38  c744240400000000     mov dword ptr [esp + 4], 0
// 004f0a40  56                   push esi
// 004f0a41  c744240400000000     mov dword ptr [esp + 4], 0
// 004f0a49  8b4904               mov ecx, dword ptr [ecx + 4]
// 004f0a4c  8b01                 mov eax, dword ptr [ecx]
// 004f0a4e  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004f0a52  8b401c               mov eax, dword ptr [eax + 0x1c]
// 004f0a55  8d542404             lea edx, [esp + 4]
// 004f0a59  52                   push edx
// 004f0a5a  8d542424             lea edx, [esp + 0x24]
// 004f0a5e  52                   push edx
// 004f0a5f  56                   push esi
// 004f0a60  c744242001000000     mov dword ptr [esp + 0x20], 1
// 004f0a68  ffd0                 call eax
// 004f0a6a  8b442404             mov eax, dword ptr [esp + 4]
// 004f0a6e  c744240801000000     mov dword ptr [esp + 8], 1
// 004f0a76  c644241400           mov byte ptr [esp + 0x14], 0
// 004f0a7b  85c0                 test eax, eax
// 004f0a7d  7427                 je 0x4f0aa6
// 004f0a7f  83c004               add eax, 4
// 004f0a82  50                   push eax
// 004f0a83  ff15ac218000         call dword ptr [0x8021ac]
// 004f0a89  85c0                 test eax, eax
// 004f0a8b  7519                 jne 0x4f0aa6
// 004f0a8d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f0a91  e8faa2f6ff           call 0x45ad90
// 004f0a96  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f0a9a  85c9                 test ecx, ecx
// 004f0a9c  7408                 je 0x4f0aa6
// 004f0a9e  8b11                 mov edx, dword ptr [ecx]
// 004f0aa0  8b02                 mov eax, dword ptr [edx]
// 004f0aa2  6a01                 push 1
// 004f0aa4  ffd0                 call eax
// 004f0aa6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f0aaa  8bc6                 mov eax, esi
// 004f0aac  5e                   pop esi
// 004f0aad  64890d00000000       mov dword ptr fs:[0], ecx
// 004f0ab4  83c414               add esp, 0x14
// 004f0ab7  c21000               ret 0x10

extern "C" long (__stdcall *InterlockedDecrement)(volatile long *);

struct Control {
    virtual ~Control();
    volatile long references;
    void release();
};

struct Temporary {
    Control *control;
    Temporary();
    ~Temporary();
};

inline Temporary::Temporary() : control(0) {}

inline Temporary::~Temporary()
{
    if (control && InterlockedDecrement(&control->references) == 0) {
        control->release();
        if (control)
            delete control;
    }
}

struct Value {
    unsigned long data[3];
};

struct Result {
    unsigned long data;
    ~Result();
};

struct Interface {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual Result get(const Value &, Temporary &);
};

struct S {
    unsigned long reserved;
    Interface *object;
    Result get(Value);
};

Result S::get(Value value)
{
    Temporary temporary;
    return object->get(value, temporary);
}
