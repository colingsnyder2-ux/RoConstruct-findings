// from server: 100% by colin
// roc 2008-06 00417bd0  unit: VCLuaFunction::?$CComContainedObject  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00417bd0
//
// 00417bd0  6aff                 push -1
// 00417bd2  68d1db7b00           push 0x7bdbd1
// 00417bd7  64a100000000         mov eax, dword ptr fs:[0]
// 00417bdd  50                   push eax
// 00417bde  64892500000000       mov dword ptr fs:[0], esp
// 00417be5  83ec08               sub esp, 8
// 00417be8  56                   push esi
// 00417be9  57                   push edi
// 00417bea  8bf1                 mov esi, ecx
// 00417bec  8dbe30010000         lea edi, [esi + 0x130]
// 00417bf2  8bcf                 mov ecx, edi
// 00417bf4  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00417bfc  897c2408             mov dword ptr [esp + 8], edi
// 00417c00  e88bb41400           call 0x563090
// 00417c05  b001                 mov al, 1
// 00417c07  8844240c             mov byte ptr [esp + 0xc], al
// 00417c0b  83be3c01000000       cmp dword ptr [esi + 0x13c], 0
// 00417c12  88442418             mov byte ptr [esp + 0x18], al
// 00417c16  7420                 je 0x417c38
// 00417c18  6a00                 push 0
// 00417c1a  6a00                 push 0
// 00417c1c  6a00                 push 0
// 00417c1e  6a00                 push 0
// 00417c20  6a00                 push 0
// 00417c22  8d4c2434             lea ecx, [esp + 0x34]
// 00417c26  ff1564248000         call dword ptr [0x802464]
// 00417c2c  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 00417c32  50                   push eax
// 00417c33  e8428d2800           call 0x6a097a
// 00417c38  8bcf                 mov ecx, edi
// 00417c3a  c644241800           mov byte ptr [esp + 0x18], 0
// 00417c3f  e89cb41400           call 0x5630e0
// 00417c44  8d4c2420             lea ecx, [esp + 0x20]
// 00417c48  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00417c50  ff1568248000         call dword ptr [0x802468]
// 00417c56  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00417c5a  5f                   pop edi
// 00417c5b  5e                   pop esi
// 00417c5c  64890d00000000       mov dword ptr fs:[0], ecx
// 00417c63  83c414               add esp, 0x14
// 00417c66  c21c00               ret 0x1c

namespace std {
template<class T> struct char_traits {};
template<class T> struct allocator {};

template<class C, class Traits = char_traits<C>,
         class Alloc = allocator<C> >
struct basic_string {
    char storage[28];
    __declspec(dllimport) ~basic_string();
    __declspec(dllimport) const C* c_str() const;
};
}

struct Lock {
    int value;
    unsigned char flag;
    int count;

    void acquire();
    void release();
};

struct LockGuard {
    Lock* lock;
    bool acquired;

    LockGuard(Lock& value);
    ~LockGuard();
};

inline LockGuard::LockGuard(Lock& value) : lock(&value) {
    lock->acquire();
    acquired = true;
}

inline LockGuard::~LockGuard() {
    if (acquired)
        lock->release();
}

struct Handler {
    void invoke(const char*, int, int, int, int, int);
};

struct S {
    char padding[0x130];
    Lock lock;
    Handler* handler;

    void f(std::basic_string<char> text);
};

void S::f(std::basic_string<char> text) {
    LockGuard guard(lock);
    if (handler)
        handler->invoke(text.c_str(), 0, 0, 0, 0, 0);
}
