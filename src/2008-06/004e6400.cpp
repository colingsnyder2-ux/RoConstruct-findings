// from server: 98% by EspClaude
// roc 2008-06 004e6400  unit: RBX::ViewNew::Part  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e6400
//
// 004e6400  6aff                 push -1
// 004e6402  68e8a47c00           push 0x7ca4e8
// 004e6407  64a100000000         mov eax, dword ptr fs:[0]
// 004e640d  50                   push eax
// 004e640e  64892500000000       mov dword ptr fs:[0], esp
// 004e6415  51                   push ecx
// 004e6416  56                   push esi
// 004e6417  57                   push edi
// 004e6418  8bf9                 mov edi, ecx
// 004e641a  8db728ffffff         lea esi, [edi - 0xd8]
// 004e6420  c744240800000000     mov dword ptr [esp + 8], 0
// 004e6428  85f6                 test esi, esi
// 004e642a  740e                 je 0x4e643a
// 004e642c  8d4604               lea eax, [esi + 4]
// 004e642f  50                   push eax
// 004e6430  8974240c             mov dword ptr [esp + 0xc], esi
// 004e6434  ff15b0218000         call dword ptr [0x8021b0]
// 004e643a  8b47f8               mov eax, dword ptr [edi - 8]
// 004e643d  8b4804               mov ecx, dword ptr [eax + 4]
// 004e6440  8b442420             mov eax, dword ptr [esp + 0x20]
// 004e6444  8b11                 mov edx, dword ptr [ecx]
// 004e6446  8b5210               mov edx, dword ptr [edx + 0x10]
// 004e6449  50                   push eax
// 004e644a  8d44240c             lea eax, [esp + 0xc]
// 004e644e  50                   push eax
// 004e644f  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004e6457  ffd2                 call edx
// 004e6459  8b442408             mov eax, dword ptr [esp + 8]
// 004e645d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004e6465  85c0                 test eax, eax
// 004e6467  742f                 je 0x4e6498
// 004e6469  83c004               add eax, 4
// 004e646c  50                   push eax
// 004e646d  ff15ac218000         call dword ptr [0x8021ac]
// 004e6473  85c0                 test eax, eax
// 004e6475  7519                 jne 0x4e6490
// 004e6477  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e647b  e81049f7ff           call 0x45ad90
// 004e6480  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e6484  85c9                 test ecx, ecx
// 004e6486  7408                 je 0x4e6490
// 004e6488  8b01                 mov eax, dword ptr [ecx]
// 004e648a  8b10                 mov edx, dword ptr [eax]
// 004e648c  6a01                 push 1
// 004e648e  ffd2                 call edx
// 004e6490  c744240800000000     mov dword ptr [esp + 8], 0
// 004e6498  807c242000           cmp byte ptr [esp + 0x20], 0
// 004e649d  8b06                 mov eax, dword ptr [esi]
// 004e649f  8b5024               mov edx, dword ptr [eax + 0x24]
// 004e64a2  8bce                 mov ecx, esi
// 004e64a4  7533                 jne 0x4e64d9
// 004e64a6  ffd2                 call edx
// 004e64a8  d905ac9b8100         fld dword ptr [0x819bac]
// 004e64ae  d8d1                 fcom st(1)
// 004e64b0  dfe0                 fnstsw ax
// 004e64b2  ddd9                 fstp st(1)
// 004e64b4  f6c441               test ah, 0x41
// 004e64b7  7551                 jne 0x4e650a
// 004e64b9  8b06                 mov eax, dword ptr [esi]
// 004e64bb  8b5020               mov edx, dword ptr [eax + 0x20]
// 004e64be  51                   push ecx
// 004e64bf  8bce                 mov ecx, esi
// 004e64c1  d91c24               fstp dword ptr [esp]
// 004e64c4  ffd2                 call edx
// 004e64c6  5f                   pop edi
// 004e64c7  5e                   pop esi
// 004e64c8  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e64cc  64890d00000000       mov dword ptr fs:[0], ecx
// 004e64d3  83c410               add esp, 0x10
// 004e64d6  c20800               ret 8
// 004e64d9  ffd2                 call edx
// 004e64db  d81d94748200         fcomp dword ptr [0x827494]
// 004e64e1  dfe0                 fnstsw ax
// 004e64e3  f6c405               test ah, 5
// 004e64e6  7a24                 jp 0x4e650c
// 004e64e8  8b06                 mov eax, dword ptr [esi]
// 004e64ea  d9ee                 fldz 
// 004e64ec  8b5020               mov edx, dword ptr [eax + 0x20]
// 004e64ef  51                   push ecx
// 004e64f0  8bce                 mov ecx, esi
// 004e64f2  d91c24               fstp dword ptr [esp]
// 004e64f5  ffd2                 call edx
// 004e64f7  5f                   pop edi
// 004e64f8  5e                   pop esi
// 004e64f9  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e64fd  64890d00000000       mov dword ptr fs:[0], ecx
// 004e6504  83c410               add esp, 0x10
// 004e6507  c20800               ret 8
// 004e650a  ddd8                 fstp st(0)
// 004e650c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e6510  5f                   pop edi
// 004e6511  5e                   pop esi
// 004e6512  64890d00000000       mov dword ptr fs:[0], ecx
// 004e6519  83c410               add esp, 0x10
// 004e651c  c20800               ret 8

// from server: 90% by colin
// roc 2008-06 004e6400  unit: RBX::ViewNew::Part  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e6400
//

extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(volatile long*);
extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(volatile long*);

extern const float limit;
extern const float threshold;

struct Ev { bool on; };
struct Base {
    virtual ~Base();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void setValue(float);
    virtual float getValue();

    volatile long references;
    void* resource;
    char padding[196];

    struct Link* link;
    int extra;

    void releaseResource();
};

struct Reference {
    Base* pointer;

    Reference(Base*);
    ~Reference();
};

struct Receiver {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void update(const Reference&, Ev);
};

struct Link {
    void* first;
    Receiver* receiver;
};

struct Listener {
    virtual void update(int, Ev) = 0;
};

struct Part : Base, Listener {
    void update(int, Ev);
};

inline Reference::Reference(Base* p) : pointer(0)
{
    if (p) {
        pointer = p;
        InterlockedIncrement(&p->references);
    }
}

inline Reference::~Reference()
{
    if (pointer) {
        if (InterlockedDecrement(&pointer->references) == 0) {
            pointer->releaseResource();
            if (pointer)
                delete pointer;
        }
        pointer = 0;
    }
}

void Part::update(int, Ev ev)
{
    link->receiver->update(Reference(this), ev);
    Base* object = this;

    if (!ev.on) {
        if (object->getValue() < 0.5f)
            object->setValue(0.5f);
    } else {
        if (object->getValue() < 1.0f)
            object->setValue(0.0f);
    }
}
