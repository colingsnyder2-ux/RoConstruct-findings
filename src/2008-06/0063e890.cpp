// from server: 76% by colin
// from server: 73% by king_originala
// roc 2008-06 0063e890  unit: RBX::RocketTool  size: 403 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063e890
//
// 0063e890  64a100000000         mov eax, dword ptr fs:[0]
// 0063e896  6aff                 push -1
// 0063e898  6860a87d00           push 0x7da860
// 0063e89d  50                   push eax
// 0063e89e  64892500000000       mov dword ptr fs:[0], esp
// 0063e8a5  83ec5c               sub esp, 0x5c
// 0063e8a8  55                   push ebp
// 0063e8a9  56                   push esi
// 0063e8aa  8bf1                 mov esi, ecx
// 0063e8ac  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0063e8af  8b4628               mov eax, dword ptr [esi + 0x28]
// 0063e8b2  51                   push ecx
// 0063e8b3  89462c               mov dword ptr [esi + 0x2c], eax
// 0063e8b6  e8d590f9ff           call 0x5d7990
// 0063e8bb  8be8                 mov ebp, eax
// 0063e8bd  83c404               add esp, 4
// 0063e8c0  85ed                 test ebp, ebp
// 0063e8c2  0f8448010000         je 0x63ea10
// 0063e8c8  53                   push ebx
// 0063e8c9  83cbff               or ebx, 0xffffffff
// 0063e8cc  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 0063e8d0  57                   push edi
// 0063e8d1  755b                 jne 0x63e92e
// 0063e8d3  8b16                 mov edx, dword ptr [esi]
// 0063e8d5  8b5240               mov edx, dword ptr [edx + 0x40]
// 0063e8d8  8d442414             lea eax, [esp + 0x14]
// 0063e8dc  50                   push eax
// 0063e8dd  8bce                 mov ecx, esi
// 0063e8df  ffd2                 call edx
// 0063e8e1  8b08                 mov ecx, dword ptr [eax]
// 0063e8e3  83c004               add eax, 4
// 0063e8e6  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0063e8e9  50                   push eax
// 0063e8ea  8d4e20               lea ecx, [esi + 0x20]
// 0063e8ed  c744247800000000     mov dword ptr [esp + 0x78], 0
// 0063e8f5  e8b63cdcff           call 0x4025b0
// 0063e8fa  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0063e8fe  895c2474             mov dword ptr [esp + 0x74], ebx
// 0063e902  85ff                 test edi, edi
// 0063e904  7428                 je 0x63e92e
// 0063e906  8d5704               lea edx, [edi + 4]
// 0063e909  8bc3                 mov eax, ebx
// 0063e90b  f00fc102             lock xadd dword ptr [edx], eax
// 0063e90f  751d                 jne 0x63e92e
// 0063e911  8b17                 mov edx, dword ptr [edi]
// 0063e913  8b4204               mov eax, dword ptr [edx + 4]
// 0063e916  8bcf                 mov ecx, edi
// 0063e918  ffd0                 call eax
// 0063e91a  8d4f08               lea ecx, [edi + 8]
// 0063e91d  8bd3                 mov edx, ebx
// 0063e91f  f00fc111             lock xadd dword ptr [ecx], edx
// 0063e923  7509                 jne 0x63e92e
// 0063e925  8b07                 mov eax, dword ptr [edi]
// 0063e927  8b5008               mov edx, dword ptr [eax + 8]
// 0063e92a  8bcf                 mov ecx, edi
// 0063e92c  ffd2                 call edx
// 0063e92e  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0063e931  8d44241c             lea eax, [esp + 0x1c]
// 0063e935  50                   push eax
// 0063e936  e815aaf1ff           call 0x559350
// 0063e93b  50                   push eax
// 0063e93c  8d4c2418             lea ecx, [esp + 0x18]
// 0063e940  51                   push ecx
// 0063e941  e83a2df6ff           call 0x5a1680
// 0063e946  83c408               add esp, 8
// 0063e949  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0063e94d  c744247401000000     mov dword ptr [esp + 0x74], 1
// 0063e955  85ff                 test edi, edi
// 0063e957  7428                 je 0x63e981
// 0063e959  8d5704               lea edx, [edi + 4]
// 0063e95c  8bc3                 mov eax, ebx
// 0063e95e  f00fc102             lock xadd dword ptr [edx], eax
// 0063e962  751d                 jne 0x63e981
// 0063e964  8b17                 mov edx, dword ptr [edi]
// 0063e966  8b4204               mov eax, dword ptr [edx + 4]
// 0063e969  8bcf                 mov ecx, edi
// 0063e96b  ffd0                 call eax
// 0063e96d  8d4f08               lea ecx, [edi + 8]
// 0063e970  8bd3                 mov edx, ebx
// 0063e972  f00fc111             lock xadd dword ptr [ecx], edx
// 0063e976  7509                 jne 0x63e981
// 0063e978  8b07                 mov eax, dword ptr [edi]
// 0063e97a  8b5008               mov edx, dword ptr [eax + 8]
// 0063e97d  8bcf                 mov ecx, edi
// 0063e97f  ffd2                 call edx
// 0063e981  8b4618               mov eax, dword ptr [esi + 0x18]
// 0063e984  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0063e988  50                   push eax
// 0063e989  8bcf                 mov ecx, edi
// 0063e98b  e860bff1ff           call 0x55a8f0
// 0063e990  8b06                 mov eax, dword ptr [esi]
// 0063e992  8bcd                 mov ecx, ebp
// 0063e994  89442410             mov dword ptr [esp + 0x10], eax
// 0063e998  e813a3f5ff           call 0x598cb0
// 0063e99d  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0063e9a1  50                   push eax
// 0063e9a2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0063e9a6  8b4044               mov eax, dword ptr [eax + 0x44]
// 0063e9a9  51                   push ecx
// 0063e9aa  8d54242c             lea edx, [esp + 0x2c]
// 0063e9ae  52                   push edx
// 0063e9af  8bce                 mov ecx, esi
// 0063e9b1  ffd0                 call eax
// 0063e9b3  50                   push eax
// 0063e9b4  8d8f28020000         lea ecx, [edi + 0x228]
// 0063e9ba  e8f19bfaff           call 0x5e85b0
// 0063e9bf  8b16                 mov edx, dword ptr [esi]
// 0063e9c1  8b4248               mov eax, dword ptr [edx + 0x48]
// 0063e9c4  8bce                 mov ecx, esi
// 0063e9c6  ffd0                 call eax
// 0063e9c8  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0063e9cb  50                   push eax
// 0063e9cc  51                   push ecx
// 0063e9cd  e8de1df4ff           call 0x5807b0
// 0063e9d2  83c404               add esp, 4
// 0063e9d5  8bc8                 mov ecx, eax
// 0063e9d7  e844eef7ff           call 0x5bd820
// 0063e9dc  8b742418             mov esi, dword ptr [esp + 0x18]
// 0063e9e0  895c2474             mov dword ptr [esp + 0x74], ebx
// 0063e9e4  85f6                 test esi, esi
// 0063e9e6  7426                 je 0x63ea0e
// 0063e9e8  8d5604               lea edx, [esi + 4]
// 0063e9eb  8bc3                 mov eax, ebx
// 0063e9ed  f00fc102             lock xadd dword ptr [edx], eax
// 0063e9f1  751b                 jne 0x63ea0e
// 0063e9f3  8b16                 mov edx, dword ptr [esi]
// 0063e9f5  8b4204               mov eax, dword ptr [edx + 4]
// 0063e9f8  8bce                 mov ecx, esi
// 0063e9fa  ffd0                 call eax
// 0063e9fc  8d4e08               lea ecx, [esi + 8]
// 0063e9ff  f00fc119             lock xadd dword ptr [ecx], ebx
// 0063ea03  7509                 jne 0x63ea0e
// 0063ea05  8b16                 mov edx, dword ptr [esi]
// 0063ea07  8b4208               mov eax, dword ptr [edx + 8]
// 0063ea0a  8bce                 mov ecx, esi
// 0063ea0c  ffd0                 call eax
// 0063ea0e  5f                   pop edi
// 0063ea0f  5b                   pop ebx
// 0063ea10  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0063ea14  5e                   pop esi
// 0063ea15  5d                   pop ebp
// 0063ea16  64890d00000000       mov dword ptr fs:[0], ecx
// 0063ea1d  83c468               add esp, 0x68
// 0063ea20  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control* control;
    Reference& operator=(const Reference&);
};

struct Object;

struct Shared {
    Object* object;
    Reference reference;
    __forceinline Shared& operator=(const Shared&);
    __forceinline ~Shared();
};

__forceinline Shared& Shared::operator=(const Shared& other)
{
    object = other.object;
    reference = other.reference;
    return *this;
}

__forceinline Shared::~Shared()
{
    Control* p = reference.control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Transform {
    float data[18];
};

struct TransformProperty {
    void assign(const Transform&);
};

struct Object {
    char padding[0x228];
    TransformProperty transform;
    Shared getObject();
    void setParent(void*);
};

struct Actor {
    const Transform& getTransform();
};

namespace RBX {
    class Instance;
    class ServiceProvider {
    public:
        void notify(int);
    };
}

extern Actor* __cdecl findActor(RBX::Instance*);
extern Shared __cdecl convert(const Shared&) throw();
extern RBX::ServiceProvider* __cdecl func_005807b0(RBX::Instance*);

struct Tool {
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
    virtual Shared createObject();
    virtual Transform makeTransform(int, const Transform&);
    virtual int getNotification();

    char padding[0x14];
    RBX::Instance* parent;
    Shared stored;
    int field24;
    int field28;
    int field2c;

    void execute(int);
};

void Tool::execute(int argument)
{
    field2c = field28;
    Actor* actor = findActor(parent);
    if (actor) {
        if (!stored.object)
            stored = createObject();

        Shared selected = convert(stored.object->getObject());
        selected.object->setParent(parent);
        selected.object->transform.assign(
            makeTransform(argument, actor->getTransform()));
        func_005807b0(parent)->notify(getNotification());
    }
}
