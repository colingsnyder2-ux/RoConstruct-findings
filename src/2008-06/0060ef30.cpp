// from server: 80% by king_originala
// roc 2008-06 0060ef30  unit: RBX::BlockBlockContact  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060ef30
//
// 0060ef30  64a100000000         mov eax, dword ptr fs:[0]
// 0060ef36  6aff                 push -1
// 0060ef38  6868917d00           push 0x7d9168
// 0060ef3d  50                   push eax
// 0060ef3e  64892500000000       mov dword ptr fs:[0], esp
// 0060ef45  83ec08               sub esp, 8
// 0060ef48  53                   push ebx
// 0060ef49  55                   push ebp
// 0060ef4a  56                   push esi
// 0060ef4b  57                   push edi
// 0060ef4c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0060ef50  57                   push edi
// 0060ef51  e87afdffff           call 0x60ecd0
// 0060ef56  8b4710               mov eax, dword ptr [edi + 0x10]
// 0060ef59  2b470c               sub eax, dword ptr [edi + 0xc]
// 0060ef5c  83c404               add esp, 4
// 0060ef5f  c1f803               sar eax, 3
// 0060ef62  33db                 xor ebx, ebx
// 0060ef64  85c0                 test eax, eax
// 0060ef66  0f8613010000         jbe 0x60f07f
// 0060ef6c  3bd8                 cmp ebx, eax
// 0060ef6e  7206                 jb 0x60ef76
// 0060ef70  ff1590288000         call dword ptr [0x802890]
// 0060ef76  8b470c               mov eax, dword ptr [edi + 0xc]
// 0060ef79  8d542410             lea edx, [esp + 0x10]
// 0060ef7d  8d0cd8               lea ecx, [eax + ebx*8]
// 0060ef80  52                   push edx
// 0060ef81  e87abbfbff           call 0x5cab00
// 0060ef86  8b742414             mov esi, dword ptr [esp + 0x14]
// 0060ef8a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0060ef8e  83ec08               sub esp, 8
// 0060ef91  8bc4                 mov eax, esp
// 0060ef93  8928                 mov dword ptr [eax], ebp
// 0060ef95  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0060ef9d  89642430             mov dword ptr [esp + 0x30], esp
// 0060efa1  897004               mov dword ptr [eax + 4], esi
// 0060efa4  85f6                 test esi, esi
// 0060efa6  740c                 je 0x60efb4
// 0060efa8  8d4604               lea eax, [esi + 4]
// 0060efab  b901000000           mov ecx, 1
// 0060efb0  f00fc108             lock xadd dword ptr [eax], ecx
// 0060efb4  e837a6f8ff           call 0x5995f0
// 0060efb9  83c408               add esp, 8
// 0060efbc  84c0                 test al, al
// 0060efbe  7477                 je 0x60f037
// 0060efc0  6a00                 push 0
// 0060efc2  8bcd                 mov ecx, ebp
// 0060efc4  e857edf8ff           call 0x59dd20
// 0060efc9  8b5710               mov edx, dword ptr [edi + 0x10]
// 0060efcc  2b570c               sub edx, dword ptr [edi + 0xc]
// 0060efcf  83e2f8               and edx, 0xfffffff8
// 0060efd2  83fa08               cmp edx, 8
// 0060efd5  7560                 jne 0x60f037
// 0060efd7  f60550f0960001       test byte ptr [0x96f050], 1
// 0060efde  751b                 jne 0x60effb
// 0060efe0  d9ee                 fldz 
// 0060efe2  830d50f0960001       or dword ptr [0x96f050], 1
// 0060efe9  d91544f09600         fst dword ptr [0x96f044]
// 0060efef  d91548f09600         fst dword ptr [0x96f048]
// 0060eff5  d91d4cf09600         fstp dword ptr [0x96f04c]
// 0060effb  6844f09600           push 0x96f044
// 0060f000  8bcd                 mov ecx, ebp
// 0060f002  e809eaf8ff           call 0x59da10
// 0060f007  f60550f0960001       test byte ptr [0x96f050], 1
// 0060f00e  751b                 jne 0x60f02b
// 0060f010  d9ee                 fldz 
// 0060f012  830d50f0960001       or dword ptr [0x96f050], 1
// 0060f019  d91544f09600         fst dword ptr [0x96f044]
// 0060f01f  d91548f09600         fst dword ptr [0x96f048]
// 0060f025  d91d4cf09600         fstp dword ptr [0x96f04c]
// 0060f02b  6844f09600           push 0x96f044
// 0060f030  8bcd                 mov ecx, ebp
// 0060f032  e899eaf8ff           call 0x59dad0
// 0060f037  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0060f03f  85f6                 test esi, esi
// 0060f041  742a                 je 0x60f06d
// 0060f043  8d4604               lea eax, [esi + 4]
// 0060f046  83c9ff               or ecx, 0xffffffff
// 0060f049  f00fc108             lock xadd dword ptr [eax], ecx
// 0060f04d  751e                 jne 0x60f06d
// 0060f04f  8b16                 mov edx, dword ptr [esi]
// 0060f051  8b4204               mov eax, dword ptr [edx + 4]
// 0060f054  8bce                 mov ecx, esi
// 0060f056  ffd0                 call eax
// 0060f058  8d4e08               lea ecx, [esi + 8]
// 0060f05b  83caff               or edx, 0xffffffff
// 0060f05e  f00fc111             lock xadd dword ptr [ecx], edx
// 0060f062  7509                 jne 0x60f06d
// 0060f064  8b06                 mov eax, dword ptr [esi]
// 0060f066  8b5008               mov edx, dword ptr [eax + 8]
// 0060f069  8bce                 mov ecx, esi
// 0060f06b  ffd2                 call edx
// 0060f06d  8b4710               mov eax, dword ptr [edi + 0x10]
// 0060f070  2b470c               sub eax, dword ptr [edi + 0xc]
// 0060f073  43                   inc ebx
// 0060f074  c1f803               sar eax, 3
// 0060f077  3bd8                 cmp ebx, eax
// 0060f079  0f82f7feffff         jb 0x60ef76
// 0060f07f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0060f083  5f                   pop edi
// 0060f084  5e                   pop esi
// 0060f085  5d                   pop ebp
// 0060f086  64890d00000000       mov dword ptr fs:[0], ecx
// 0060f08d  5b                   pop ebx
// 0060f08e  83c414               add esp, 0x14
// 0060f091  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct Vector3 {
    float x, y, z;
    Vector3();
};

inline Vector3::Vector3() : x(0.0f), y(0.0f), z(0.0f) {}

struct Object {
    void setState(int);
    void setLinear(const Vector3&);
    void setAngular(const Vector3&);
};

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Pointer {
    Object* object;
    Control* control;

    Pointer(const Pointer&);
    ~Pointer();
    Pointer get();
};

inline Pointer::Pointer(const Pointer& other) {
    Object* p = other.object;
    Control* c = other.control;
    object = p;
    control = c;
    if (c)
        _InterlockedExchangeAdd(&c->strong, 1);
}

inline Pointer::~Pointer() {
    Control* c = control;
    if (c && _InterlockedExchangeAdd(&c->strong, -1) == 1) {
        c->dispose();
        if (_InterlockedExchangeAdd(&c->weak, -1) == 1)
            c->destroy();
    }
}

struct Collection {
    char padding[12];
    Pointer* first;
    Pointer* last;

    unsigned int size() const;
    Pointer& at(unsigned int);
};

inline unsigned int Collection::size() const {
    return static_cast<unsigned int>(last - first);
}

inline Pointer& Collection::at(unsigned int index) {
    if (index >= size())
        _invalid_parameter_noinfo();
    return first[index];
}

extern void __cdecl prepare(Collection*);
extern bool __cdecl eligible(Pointer);

inline const Vector3& zeroVector() {
    static Vector3 value;
    return value;
}

void __cdecl process(Collection* collection) {
    prepare(collection);
    for (unsigned int index = 0; index < collection->size(); ++index) {
        Pointer pointer = collection->at(index).get();
        Object* object = pointer.object;
        if (eligible(pointer)) {
            object->setState(0);
            if (collection->size() == 1) {
                object->setLinear(zeroVector());
                object->setAngular(zeroVector());
            }
        }
    }
}
