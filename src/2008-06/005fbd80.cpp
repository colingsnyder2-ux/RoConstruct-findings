// from server: 69% by colin
// from server: 65% by king_originala
// roc 2008-06 005fbd80  unit: RBX::LocalBackpack  size: 385 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fbd80
//
// 005fbd80  6aff                 push -1
// 005fbd82  6868917d00           push 0x7d9168
// 005fbd87  64a100000000         mov eax, dword ptr fs:[0]
// 005fbd8d  50                   push eax
// 005fbd8e  64892500000000       mov dword ptr fs:[0], esp
// 005fbd95  83ec10               sub esp, 0x10
// 005fbd98  8b81a0010000         mov eax, dword ptr [ecx + 0x1a0]
// 005fbd9e  57                   push edi
// 005fbd9f  8db9a0010000         lea edi, [ecx + 0x1a0]
// 005fbda5  897c2404             mov dword ptr [esp + 4], edi
// 005fbda9  85c0                 test eax, eax
// 005fbdab  0f8440010000         je 0x5fbef1
// 005fbdb1  55                   push ebp
// 005fbdb2  56                   push esi
// 005fbdb3  8d442414             lea eax, [esp + 0x14]
// 005fbdb7  50                   push eax
// 005fbdb8  81c108010000         add ecx, 0x108
// 005fbdbe  e8ed57e9ff           call 0x4915b0
// 005fbdc3  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005fbdc7  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005fbdcf  85ed                 test ebp, ebp
// 005fbdd1  0f848c000000         je 0x5fbe63
// 005fbdd7  8b750c               mov esi, dword ptr [ebp + 0xc]
// 005fbdda  3b7510               cmp esi, dword ptr [ebp + 0x10]
// 005fbddd  7606                 jbe 0x5fbde5
// 005fbddf  ff1590288000         call dword ptr [0x802890]
// 005fbde5  8b7d00               mov edi, dword ptr [ebp]
// 005fbde8  53                   push ebx
// 005fbde9  8da42400000000       lea esp, [esp]
// 005fbdf0  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 005fbdf3  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 005fbdf6  7606                 jbe 0x5fbdfe
// 005fbdf8  ff1590288000         call dword ptr [0x802890]
// 005fbdfe  8b4500               mov eax, dword ptr [ebp]
// 005fbe01  85ff                 test edi, edi
// 005fbe03  7404                 je 0x5fbe09
// 005fbe05  3bf8                 cmp edi, eax
// 005fbe07  7406                 je 0x5fbe0f
// 005fbe09  ff1590288000         call dword ptr [0x802890]
// 005fbe0f  3bf3                 cmp esi, ebx
// 005fbe11  744b                 je 0x5fbe5e
// 005fbe13  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005fbe19  85ff                 test edi, edi
// 005fbe1b  7539                 jne 0x5fbe56
// 005fbe1d  ffd3                 call ebx
// 005fbe1f  33c0                 xor eax, eax
// 005fbe21  3b7010               cmp esi, dword ptr [eax + 0x10]
// 005fbe24  7202                 jb 0x5fbe28
// 005fbe26  ffd3                 call ebx
// 005fbe28  8b06                 mov eax, dword ptr [esi]
// 005fbe2a  8b8848010000         mov ecx, dword ptr [eax + 0x148]
// 005fbe30  8b542410             mov edx, dword ptr [esp + 0x10]
// 005fbe34  3b0a                 cmp ecx, dword ptr [edx]
// 005fbe36  740a                 je 0x5fbe42
// 005fbe38  8b01                 mov eax, dword ptr [ecx]
// 005fbe3a  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 005fbe40  ffd2                 call edx
// 005fbe42  85ff                 test edi, edi
// 005fbe44  7514                 jne 0x5fbe5a
// 005fbe46  ffd3                 call ebx
// 005fbe48  33c0                 xor eax, eax
// 005fbe4a  3b7010               cmp esi, dword ptr [eax + 0x10]
// 005fbe4d  7202                 jb 0x5fbe51
// 005fbe4f  ffd3                 call ebx
// 005fbe51  83c608               add esi, 8
// 005fbe54  eb9a                 jmp 0x5fbdf0
// 005fbe56  8b07                 mov eax, dword ptr [edi]
// 005fbe58  ebc7                 jmp 0x5fbe21
// 005fbe5a  8b07                 mov eax, dword ptr [edi]
// 005fbe5c  ebec                 jmp 0x5fbe4a
// 005fbe5e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005fbe62  5b                   pop ebx
// 005fbe63  8b0f                 mov ecx, dword ptr [edi]
// 005fbe65  8b01                 mov eax, dword ptr [ecx]
// 005fbe67  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 005fbe6d  ffd2                 call edx
// 005fbe6f  8d44240c             lea eax, [esp + 0xc]
// 005fbe73  3bc7                 cmp eax, edi
// 005fbe75  7406                 je 0x5fbe7d
// 005fbe77  c70700000000         mov dword ptr [edi], 0
// 005fbe7d  8b7704               mov esi, dword ptr [edi + 4]
// 005fbe80  c7470400000000       mov dword ptr [edi + 4], 0
// 005fbe87  85f6                 test esi, esi
// 005fbe89  742a                 je 0x5fbeb5
// 005fbe8b  8d4e04               lea ecx, [esi + 4]
// 005fbe8e  83caff               or edx, 0xffffffff
// 005fbe91  f00fc111             lock xadd dword ptr [ecx], edx
// 005fbe95  751e                 jne 0x5fbeb5
// 005fbe97  8b06                 mov eax, dword ptr [esi]
// 005fbe99  8b5004               mov edx, dword ptr [eax + 4]
// 005fbe9c  8bce                 mov ecx, esi
// 005fbe9e  ffd2                 call edx
// 005fbea0  8d4608               lea eax, [esi + 8]
// 005fbea3  83c9ff               or ecx, 0xffffffff
// 005fbea6  f00fc108             lock xadd dword ptr [eax], ecx
// 005fbeaa  7509                 jne 0x5fbeb5
// 005fbeac  8b16                 mov edx, dword ptr [esi]
// 005fbeae  8b4208               mov eax, dword ptr [edx + 8]
// 005fbeb1  8bce                 mov ecx, esi
// 005fbeb3  ffd0                 call eax
// 005fbeb5  8b742418             mov esi, dword ptr [esp + 0x18]
// 005fbeb9  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005fbec1  85f6                 test esi, esi
// 005fbec3  742a                 je 0x5fbeef
// 005fbec5  8d4e04               lea ecx, [esi + 4]
// 005fbec8  83caff               or edx, 0xffffffff
// 005fbecb  f00fc111             lock xadd dword ptr [ecx], edx
// 005fbecf  751e                 jne 0x5fbeef
// 005fbed1  8b06                 mov eax, dword ptr [esi]
// 005fbed3  8b5004               mov edx, dword ptr [eax + 4]
// 005fbed6  8bce                 mov ecx, esi
// 005fbed8  ffd2                 call edx
// 005fbeda  8d4608               lea eax, [esi + 8]
// 005fbedd  83c9ff               or ecx, 0xffffffff
// 005fbee0  f00fc108             lock xadd dword ptr [eax], ecx
// 005fbee4  7509                 jne 0x5fbeef
// 005fbee6  8b16                 mov edx, dword ptr [esi]
// 005fbee8  8b4208               mov eax, dword ptr [edx + 8]
// 005fbeeb  8bce                 mov ecx, esi
// 005fbeed  ffd0                 call eax
// 005fbeef  5e                   pop esi
// 005fbef0  5d                   pop ebp
// 005fbef1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005fbef5  5f                   pop edi
// 005fbef6  64890d00000000       mov dword ptr fs:[0], ecx
// 005fbefd  83c41c               add esp, 0x1c
// 005fbf00  c3                   ret 
#include <intrin.h>

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* invalid_parameter_noinfo)();

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

template<class T> struct Shared {
    T* ptr;
    Control* control;
    __forceinline ~Shared();
    __forceinline Shared& operator=(const Shared& other);
};

template<class T> __forceinline Shared<T>::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

template<class T>
__forceinline Shared<T>& Shared<T>::operator=(const Shared& other)
{
    if (this != &other)
        ptr = other.ptr;
    Control* old = control;
    control = other.control;
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
    if (old && _InterlockedExchangeAdd(&old->strong, -1) == 0) {
        old->dispose();
        if (_InterlockedExchangeAdd(&old->weak, -1) == 0)
            old->destroy();
    }
    return *this;
}

struct Object {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void finish();
    virtual void detach();
};

struct Child {
    char padding[0x148];
    Object* object;
};

struct Vector;

struct Proxy {
    Vector* owner;
};

struct Iterator {
    Proxy* proxy;
    Shared<Child>* current;
    __forceinline Shared<Child>& operator*() const;
    __forceinline Iterator& operator++();
    __forceinline bool operator!=(const Iterator& other) const;
};

struct Vector {
    Proxy* proxy;
    char padding[8];
    Shared<Child>* first;
    Shared<Child>* last;
    __forceinline Iterator begin();
    __forceinline Iterator end();
};

__forceinline Iterator Vector::begin()
{
    Shared<Child>* p = first;
    if (p > last)
        invalid_parameter_noinfo();
    Iterator result = { proxy, p };
    return result;
}

__forceinline Iterator Vector::end()
{
    Shared<Child>* p = last;
    if (first > p)
        invalid_parameter_noinfo();
    Iterator result = { proxy, p };
    return result;
}

__forceinline bool Iterator::operator!=(const Iterator& other) const
{
    if (!proxy || proxy != other.proxy)
        invalid_parameter_noinfo();
    return current != other.current;
}

__forceinline Shared<Child>& Iterator::operator*() const
{
    if (!proxy)
        invalid_parameter_noinfo();
    Vector* owner = proxy ? proxy->owner : 0;
    if (current >= owner->last)
        invalid_parameter_noinfo();
    return *current;
}

__forceinline Iterator& Iterator::operator++()
{
    if (!proxy)
        invalid_parameter_noinfo();
    Vector* owner = proxy ? proxy->owner : 0;
    if (current >= owner->last)
        invalid_parameter_noinfo();
    ++current;
    return *this;
}

struct Holder {
    Shared<Vector> get();
};

struct S {
    char padding0[0x108];
    Holder children;
    char padding1[0x1a0 - 0x108 - sizeof(Holder)];
    Shared<Object> active;
    void f();
};

void S::f()
{
    if (active.ptr) {
        Shared<Vector> list = children.get();
        if (list.ptr) {
            for (Iterator i = list.ptr->begin(); i != list.ptr->end(); ++i) {
                Object* object = (*i).ptr->object;
                _ReadWriteBarrier();
                if (object != active.ptr)
                    object->detach();
            }
        }
        active.ptr->finish();
        Shared<Object> empty = { 0, 0 };
        active = empty;
    }
}
