// from server: 59% by colin
// from server: 58% by king_originala
// roc 2008-06 00497f40  unit: RBX::Network::Players  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00497f40
//
// 00497f40  83ec08               sub esp, 8
// 00497f43  53                   push ebx
// 00497f44  55                   push ebp
// 00497f45  56                   push esi
// 00497f46  57                   push edi
// 00497f47  8bf9                 mov edi, ecx
// 00497f49  8bb798010000         mov esi, dword ptr [edi + 0x198]
// 00497f4f  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 00497f52  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00497f5a  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 00497f5d  7606                 jbe 0x497f65
// 00497f5f  ff1590288000         call dword ptr [0x802890]
// 00497f65  8b2e                 mov ebp, dword ptr [esi]
// 00497f67  8bb798010000         mov esi, dword ptr [edi + 0x198]
// 00497f6d  8b7e10               mov edi, dword ptr [esi + 0x10]
// 00497f70  397e0c               cmp dword ptr [esi + 0xc], edi
// 00497f73  7606                 jbe 0x497f7b
// 00497f75  ff1590288000         call dword ptr [0x802890]
// 00497f7b  8b06                 mov eax, dword ptr [esi]
// 00497f7d  89442410             mov dword ptr [esp + 0x10], eax
// 00497f81  85ed                 test ebp, ebp
// 00497f83  7406                 je 0x497f8b
// 00497f85  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 00497f89  740a                 je 0x497f95
// 00497f8b  8b3590288000         mov esi, dword ptr [0x802890]
// 00497f91  ffd6                 call esi
// 00497f93  eb06                 jmp 0x497f9b
// 00497f95  8b3590288000         mov esi, dword ptr [0x802890]
// 00497f9b  3bdf                 cmp ebx, edi
// 00497f9d  7475                 je 0x498014
// 00497f9f  85ed                 test ebp, ebp
// 00497fa1  752d                 jne 0x497fd0
// 00497fa3  ffd6                 call esi
// 00497fa5  33c0                 xor eax, eax
// 00497fa7  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 00497faa  7202                 jb 0x497fae
// 00497fac  ffd6                 call esi
// 00497fae  8b0b                 mov ecx, dword ptr [ebx]
// 00497fb0  8b542420             mov edx, dword ptr [esp + 0x20]
// 00497fb4  3991b4010000         cmp dword ptr [ecx + 0x1b4], edx
// 00497fba  741e                 je 0x497fda
// 00497fbc  85ed                 test ebp, ebp
// 00497fbe  7515                 jne 0x497fd5
// 00497fc0  ffd6                 call esi
// 00497fc2  33c0                 xor eax, eax
// 00497fc4  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 00497fc7  7202                 jb 0x497fcb
// 00497fc9  ffd6                 call esi
// 00497fcb  83c308               add ebx, 8
// 00497fce  ebb1                 jmp 0x497f81
// 00497fd0  8b4500               mov eax, dword ptr [ebp]
// 00497fd3  ebd2                 jmp 0x497fa7
// 00497fd5  8b4500               mov eax, dword ptr [ebp]
// 00497fd8  ebea                 jmp 0x497fc4
// 00497fda  85ed                 test ebp, ebp
// 00497fdc  7531                 jne 0x49800f
// 00497fde  ffd6                 call esi
// 00497fe0  3b5d10               cmp ebx, dword ptr [ebp + 0x10]
// 00497fe3  7202                 jb 0x497fe7
// 00497fe5  ffd6                 call esi
// 00497fe7  8b0b                 mov ecx, dword ptr [ebx]
// 00497fe9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00497fed  8908                 mov dword ptr [eax], ecx
// 00497fef  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00497ff2  894804               mov dword ptr [eax + 4], ecx
// 00497ff5  85c9                 test ecx, ecx
// 00497ff7  742c                 je 0x498025
// 00497ff9  83c104               add ecx, 4
// 00497ffc  ba01000000           mov edx, 1
// 00498001  f00fc111             lock xadd dword ptr [ecx], edx
// 00498005  5f                   pop edi
// 00498006  5e                   pop esi
// 00498007  5d                   pop ebp
// 00498008  5b                   pop ebx
// 00498009  83c408               add esp, 8
// 0049800c  c20800               ret 8
// 0049800f  8b6d00               mov ebp, dword ptr [ebp]
// 00498012  ebcc                 jmp 0x497fe0
// 00498014  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00498018  c70000000000         mov dword ptr [eax], 0
// 0049801e  c7400400000000       mov dword ptr [eax + 4], 0
// 00498025  5f                   pop edi
// 00498026  5e                   pop esi
// 00498027  5d                   pop ebp
// 00498028  5b                   pop ebx
// 00498029  83c408               add esp, 8
// 0049802c  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Object {
    char padding[0x1b4];
    int key;
};

struct Control {
    long reserved;
    volatile long references;
};

struct Pair {
    Object* object;
    Control* control;

    Pair();
    Pair(const Pair&);
};

inline Pair::Pair() {
    object = 0;
    control = 0;
}

inline Pair::Pair(const Pair& other) {
    object = other.object;
    control = other.control;
    if (control)
        _InterlockedIncrement(&control->references);
}

struct Vector;

struct Proxy {
    Vector* owner;
};

struct Vector {
    Proxy* proxy;
    unsigned long reserved[2];
    Pair* first;
    Pair* last;
};

struct EndIterator {
    Proxy* proxy;
    Pair* position;
};

struct Players {
    char padding[0x198];
    Vector* entries;

    Pair find(int key);
};

Pair Players::find(int key) {
    Vector* vector = entries;
    Pair* position = vector->first;
    EndIterator finish;
    finish.proxy = 0;

    if (position > vector->last)
        _invalid_parameter_noinfo();

    Proxy* proxy = vector->proxy;
    vector = entries;
    Pair* end = vector->last;

    if (vector->first > end)
        _invalid_parameter_noinfo();

    finish.proxy = vector->proxy;
    void (__cdecl* invalid)() = _invalid_parameter_noinfo;

    for (;;) {
        if (!proxy || proxy != finish.proxy)
            invalid();

        if (position == end)
            break;

        Vector* owner;
        if (!proxy) {
            invalid();
            owner = 0;
        } else {
            owner = proxy->owner;
        }

        if (position >= owner->last)
            invalid();

        if (position->object->key == key) {
            if (!proxy)
                invalid();
            else
                proxy = reinterpret_cast<Proxy*>(proxy->owner);

            if (position >= reinterpret_cast<Vector*>(proxy)->last)
                invalid();

            return Pair(*position);
        }

        if (!proxy) {
            invalid();
            owner = 0;
        } else {
            owner = proxy->owner;
        }

        if (position >= owner->last)
            invalid();

        ++position;
    }

    return Pair();
}
