// from server: 100% by king_originala
// roc 2008-06 005bca50  unit: RBX::Stats::I::?$TypedStatsItem  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bca50
//
// 005bca50  6aff                 push -1
// 005bca52  68c12f7c00           push 0x7c2fc1
// 005bca57  64a100000000         mov eax, dword ptr fs:[0]
// 005bca5d  50                   push eax
// 005bca5e  64892500000000       mov dword ptr fs:[0], esp
// 005bca65  83ec2c               sub esp, 0x2c
// 005bca68  8b442440             mov eax, dword ptr [esp + 0x40]
// 005bca6c  53                   push ebx
// 005bca6d  55                   push ebp
// 005bca6e  56                   push esi
// 005bca6f  57                   push edi
// 005bca70  8bd9                 mov ebx, ecx
// 005bca72  50                   push eax
// 005bca73  8d4c241c             lea ecx, [esp + 0x1c]
// 005bca77  51                   push ecx
// 005bca78  e853ffffff           call 0x5bc9d0
// 005bca7d  8b7004               mov esi, dword ptr [eax + 4]
// 005bca80  8b38                 mov edi, dword ptr [eax]
// 005bca82  83c408               add esp, 8
// 005bca85  897c2410             mov dword ptr [esp + 0x10], edi
// 005bca89  89742414             mov dword ptr [esp + 0x14], esi
// 005bca8d  85f6                 test esi, esi
// 005bca8f  740c                 je 0x5bca9d
// 005bca91  8d5604               lea edx, [esi + 4]
// 005bca94  b801000000           mov eax, 1
// 005bca99  f00fc102             lock xadd dword ptr [edx], eax
// 005bca9d  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005bcaa1  c744244400000000     mov dword ptr [esp + 0x44], 0
// 005bcaa9  85ed                 test ebp, ebp
// 005bcaab  742c                 je 0x5bcad9
// 005bcaad  8d4d04               lea ecx, [ebp + 4]
// 005bcab0  83caff               or edx, 0xffffffff
// 005bcab3  f00fc111             lock xadd dword ptr [ecx], edx
// 005bcab7  7520                 jne 0x5bcad9
// 005bcab9  8b4500               mov eax, dword ptr [ebp]
// 005bcabc  8b5004               mov edx, dword ptr [eax + 4]
// 005bcabf  8bcd                 mov ecx, ebp
// 005bcac1  ffd2                 call edx
// 005bcac3  8d4508               lea eax, [ebp + 8]
// 005bcac6  83c9ff               or ecx, 0xffffffff
// 005bcac9  f00fc108             lock xadd dword ptr [eax], ecx
// 005bcacd  750a                 jne 0x5bcad9
// 005bcacf  8b5500               mov edx, dword ptr [ebp]
// 005bcad2  8b4208               mov eax, dword ptr [edx + 8]
// 005bcad5  8bcd                 mov ecx, ebp
// 005bcad7  ffd0                 call eax
// 005bcad9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005bcadd  51                   push ecx
// 005bcade  8d4c2424             lea ecx, [esp + 0x24]
// 005bcae2  ff1558248000         call dword ptr [0x802458]
// 005bcae8  8b17                 mov edx, dword ptr [edi]
// 005bcaea  8b5204               mov edx, dword ptr [edx + 4]
// 005bcaed  8d442420             lea eax, [esp + 0x20]
// 005bcaf1  50                   push eax
// 005bcaf2  8bcf                 mov ecx, edi
// 005bcaf4  c644244801           mov byte ptr [esp + 0x48], 1
// 005bcaf9  ffd2                 call edx
// 005bcafb  8d4c2420             lea ecx, [esp + 0x20]
// 005bcaff  c644244400           mov byte ptr [esp + 0x44], 0
// 005bcb04  ff1568248000         call dword ptr [0x802468]
// 005bcb0a  53                   push ebx
// 005bcb0b  8bcf                 mov ecx, edi
// 005bcb0d  e8deddf9ff           call 0x55a8f0
// 005bcb12  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 005bcb1a  85f6                 test esi, esi
// 005bcb1c  742a                 je 0x5bcb48
// 005bcb1e  8d4604               lea eax, [esi + 4]
// 005bcb21  83c9ff               or ecx, 0xffffffff
// 005bcb24  f00fc108             lock xadd dword ptr [eax], ecx
// 005bcb28  751e                 jne 0x5bcb48
// 005bcb2a  8b16                 mov edx, dword ptr [esi]
// 005bcb2c  8b4204               mov eax, dword ptr [edx + 4]
// 005bcb2f  8bce                 mov ecx, esi
// 005bcb31  ffd0                 call eax
// 005bcb33  8d4e08               lea ecx, [esi + 8]
// 005bcb36  83caff               or edx, 0xffffffff
// 005bcb39  f00fc111             lock xadd dword ptr [ecx], edx
// 005bcb3d  7509                 jne 0x5bcb48
// 005bcb3f  8b06                 mov eax, dword ptr [esi]
// 005bcb41  8b5008               mov edx, dword ptr [eax + 8]
// 005bcb44  8bce                 mov ecx, esi
// 005bcb46  ffd2                 call edx
// 005bcb48  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005bcb4c  8bc7                 mov eax, edi
// 005bcb4e  5f                   pop edi
// 005bcb4f  5e                   pop esi
// 005bcb50  5d                   pop ebp
// 005bcb51  5b                   pop ebx
// 005bcb52  64890d00000000       mov dword ptr fs:[0], ecx
// 005bcb59  83c438               add esp, 0x38
// 005bcb5c  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct String;
extern void (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

inline String::String(const char* text) {
    stringConstruct(this, text);
}

inline String::~String() {
    stringDestroy(this);
}

struct S;

struct Object {
    char storage[0x178];
    void attach(S*);
};

struct Named {
    virtual void reserved() = 0;
    virtual void setName(const String&) = 0;
};

struct Result {
    Object* object;
    Control* control;
    Result(const Result&);
    ~Result();
    const Result& reference() const;
};

inline const Result& Result::reference() const {
    return *this;
}

inline Result::Result(const Result& other)
    : object(other.object), control(other.control) {
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline Result::~Result() {
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

Result __cdecl createObject(unsigned int);

struct S {
    Object* f(const char*, unsigned int);
};

Object* S::f(const char* name, unsigned int kind) {
    Result result(createObject(kind).reference());
    reinterpret_cast<Named*>(result.object)->setName(String(name));
    result.object->attach(this);
    return result.object;
}
