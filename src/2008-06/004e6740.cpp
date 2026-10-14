// from server: 94% by colin
// roc 2008-06 004e6740  unit: RBX::ViewNew::Part  size: 360 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e6740
//
// 004e6740  6aff                 push -1
// 004e6742  68e8a47c00           push 0x7ca4e8
// 004e6747  64a100000000         mov eax, dword ptr fs:[0]
// 004e674d  50                   push eax
// 004e674e  64892500000000       mov dword ptr fs:[0], esp
// 004e6755  51                   push ecx
// 004e6756  56                   push esi
// 004e6757  8bf1                 mov esi, ecx
// 004e6759  83bebc00000000       cmp dword ptr [esi + 0xbc], 0
// 004e6760  0f8432010000         je 0x4e6898
// 004e6766  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 004e676c  57                   push edi
// 004e676d  8b3dac218000         mov edi, dword ptr [0x8021ac]
// 004e6773  85c0                 test eax, eax
// 004e6775  7431                 je 0x4e67a8
// 004e6777  83c004               add eax, 4
// 004e677a  50                   push eax
// 004e677b  ffd7                 call edi
// 004e677d  85c0                 test eax, eax
// 004e677f  751d                 jne 0x4e679e
// 004e6781  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 004e6787  e80446f7ff           call 0x45ad90
// 004e678c  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 004e6792  85c9                 test ecx, ecx
// 004e6794  7408                 je 0x4e679e
// 004e6796  8b01                 mov eax, dword ptr [ecx]
// 004e6798  8b10                 mov edx, dword ptr [eax]
// 004e679a  6a01                 push 1
// 004e679c  ffd2                 call edx
// 004e679e  c786cc00000000000000 mov dword ptr [esi + 0xcc], 0
// 004e67a8  8d4604               lea eax, [esi + 4]
// 004e67ab  50                   push eax
// 004e67ac  8974240c             mov dword ptr [esp + 0xc], esi
// 004e67b0  ff15b0218000         call dword ptr [0x8021b0]
// 004e67b6  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 004e67bc  8b4804               mov ecx, dword ptr [eax + 4]
// 004e67bf  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 004e67c5  83b8c801000000       cmp dword ptr [eax + 0x1c8], 0
// 004e67cc  8b11                 mov edx, dword ptr [ecx]
// 004e67ce  8b12                 mov edx, dword ptr [edx]
// 004e67d0  0f94c0               sete al
// 004e67d3  0fb6c0               movzx eax, al
// 004e67d6  50                   push eax
// 004e67d7  8d44240c             lea eax, [esp + 0xc]
// 004e67db  50                   push eax
// 004e67dc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004e67e4  ffd2                 call edx
// 004e67e6  8b442408             mov eax, dword ptr [esp + 8]
// 004e67ea  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004e67f2  85c0                 test eax, eax
// 004e67f4  742b                 je 0x4e6821
// 004e67f6  83c004               add eax, 4
// 004e67f9  50                   push eax
// 004e67fa  ffd7                 call edi
// 004e67fc  85c0                 test eax, eax
// 004e67fe  7519                 jne 0x4e6819
// 004e6800  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e6804  e88745f7ff           call 0x45ad90
// 004e6809  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e680d  85c9                 test ecx, ecx
// 004e680f  7408                 je 0x4e6819
// 004e6811  8b01                 mov eax, dword ptr [ecx]
// 004e6813  8b10                 mov edx, dword ptr [eax]
// 004e6815  6a01                 push 1
// 004e6817  ffd2                 call edx
// 004e6819  c744240800000000     mov dword ptr [esp + 8], 0
// 004e6821  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 004e6827  8b16                 mov edx, dword ptr [esi]
// 004e6829  83b8c801000000       cmp dword ptr [eax + 0x1c8], 0
// 004e6830  8b4224               mov eax, dword ptr [edx + 0x24]
// 004e6833  5f                   pop edi
// 004e6834  8bce                 mov ecx, esi
// 004e6836  7430                 je 0x4e6868
// 004e6838  ffd0                 call eax
// 004e683a  d905ac9b8100         fld dword ptr [0x819bac]
// 004e6840  d8d1                 fcom st(1)
// 004e6842  dfe0                 fnstsw ax
// 004e6844  ddd9                 fstp st(1)
// 004e6846  f6c441               test ah, 0x41
// 004e6849  754b                 jne 0x4e6896
// 004e684b  8b16                 mov edx, dword ptr [esi]
// 004e684d  8b4220               mov eax, dword ptr [edx + 0x20]
// 004e6850  51                   push ecx
// 004e6851  8bce                 mov ecx, esi
// 004e6853  d91c24               fstp dword ptr [esp]
// 004e6856  ffd0                 call eax
// 004e6858  5e                   pop esi
// 004e6859  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e685d  64890d00000000       mov dword ptr fs:[0], ecx
// 004e6864  83c410               add esp, 0x10
// 004e6867  c3                   ret 
// 004e6868  ffd0                 call eax
// 004e686a  d81d94748200         fcomp dword ptr [0x827494]
// 004e6870  dfe0                 fnstsw ax
// 004e6872  f6c405               test ah, 5
// 004e6875  7a21                 jp 0x4e6898
// 004e6877  8b16                 mov edx, dword ptr [esi]
// 004e6879  d9ee                 fldz 
// 004e687b  8b4220               mov eax, dword ptr [edx + 0x20]
// 004e687e  51                   push ecx
// 004e687f  8bce                 mov ecx, esi
// 004e6881  d91c24               fstp dword ptr [esp]
// 004e6884  ffd0                 call eax
// 004e6886  5e                   pop esi
// 004e6887  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e688b  64890d00000000       mov dword ptr fs:[0], ecx
// 004e6892  83c410               add esp, 0x10
// 004e6895  c3                   ret 
// 004e6896  ddd8                 fstp st(0)
// 004e6898  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e689c  5e                   pop esi
// 004e689d  64890d00000000       mov dword ptr fs:[0], ecx
// 004e68a4  83c410               add esp, 0x10
// 004e68a7  c3                   ret 

extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(volatile long*);
extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(volatile long*);

extern const float minimumValue;
extern const float zeroValue;

struct Ref {
    virtual ~Ref();
    volatile long count;
    void dispose();
};

struct Handle {
    Ref* p;
    Handle(Ref*);
    ~Handle();
};

inline Handle::Handle(Ref* q) : p(q)
{
    InterlockedIncrement(&p->count);
}

inline Handle::~Handle()
{
    if (p) {
        if (InterlockedDecrement(&p->count) == 0) {
            p->dispose();
            if (p)
                delete p;
        }
        p = 0;
    }
}

struct State {
    char padding[0x1c8];
    int enabled;
};

struct Receiver {
    virtual void update(const Handle&, bool);
};

struct Holder {
    int padding;
    Receiver* receiver;
};

struct S : Ref {
    char padding[0xb4];
    State* state;
    char padding2[12];
    Ref* cached;
    Holder* holder;

    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void setValue(float);
    virtual float getValue();

    void f();
};

void S::f()
{
    if (state) {
        if (cached) {
            if (InterlockedDecrement(&cached->count) == 0) {
                cached->dispose();
                if (cached)
                    delete cached;
            }
            cached = 0;
        }

        {
            Handle reference(this);
            Receiver* receiver = holder->receiver;
            receiver->update(reference, state->enabled == 0);
        }

        if (state->enabled) {
            if (getValue() < minimumValue)
                setValue(minimumValue);
        } else {
            if (getValue() < zeroValue)
                setValue(0.0f);
        }
    }
}
