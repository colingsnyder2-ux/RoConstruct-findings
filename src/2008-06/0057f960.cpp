// from server: 76% by colin
// from server: 72% by colin
// roc 2008-06 0057f960  unit: RBX::VModelInstance::?$FilteredSelection  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057f960
//
// 0057f960  6aff                 push -1
// 0057f962  6868617c00           push 0x7c6168
// 0057f967  64a100000000         mov eax, dword ptr fs:[0]
// 0057f96d  50                   push eax
// 0057f96e  64892500000000       mov dword ptr fs:[0], esp
// 0057f975  83ec14               sub esp, 0x14
// 0057f978  53                   push ebx
// 0057f979  55                   push ebp
// 0057f97a  56                   push esi
// 0057f97b  57                   push edi
// 0057f97c  8be9                 mov ebp, ecx
// 0057f97e  8b4500               mov eax, dword ptr [ebp]
// 0057f981  8b742434             mov esi, dword ptr [esp + 0x34]
// 0057f985  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0057f988  50                   push eax
// 0057f989  83c614               add esi, 0x14
// 0057f98c  8d442414             lea eax, [esp + 0x14]
// 0057f990  50                   push eax
// 0057f991  83c108               add ecx, 8
// 0057f994  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0057f99c  e86fc00900           call 0x61ba10
// 0057f9a1  8b542434             mov edx, dword ptr [esp + 0x34]
// 0057f9a5  8b18                 mov ebx, dword ptr [eax]
// 0057f9a7  8b4804               mov ecx, dword ptr [eax + 4]
// 0057f9aa  89742418             mov dword ptr [esp + 0x18], esi
// 0057f9ae  8b721c               mov esi, dword ptr [edx + 0x1c]
// 0057f9b1  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0057f9b4  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0057f9b8  894c2420             mov dword ptr [esp + 0x20], ecx
// 0057f9bc  397e14               cmp dword ptr [esi + 0x14], edi
// 0057f9bf  7606                 jbe 0x57f9c7
// 0057f9c1  ff1590288000         call dword ptr [0x802890]
// 0057f9c7  8b7608               mov esi, dword ptr [esi + 8]
// 0057f9ca  85db                 test ebx, ebx
// 0057f9cc  7404                 je 0x57f9d2
// 0057f9ce  3bde                 cmp ebx, esi
// 0057f9d0  740a                 je 0x57f9dc
// 0057f9d2  8b3590288000         mov esi, dword ptr [0x802890]
// 0057f9d8  ffd6                 call esi
// 0057f9da  eb06                 jmp 0x57f9e2
// 0057f9dc  8b3590288000         mov esi, dword ptr [0x802890]
// 0057f9e2  397c2420             cmp dword ptr [esp + 0x20], edi
// 0057f9e6  7469                 je 0x57fa51
// 0057f9e8  85db                 test ebx, ebx
// 0057f9ea  0f85b0000000         jne 0x57faa0
// 0057f9f0  ffd6                 call esi
// 0057f9f2  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057f9f6  3b4310               cmp eax, dword ptr [ebx + 0x10]
// 0057f9f9  7202                 jb 0x57f9fd
// 0057f9fb  ffd6                 call esi
// 0057f9fd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057fa01  8b01                 mov eax, dword ptr [ecx]
// 0057fa03  6a00                 push 0
// 0057fa05  6878959200           push 0x929578
// 0057fa0a  68b4959200           push 0x9295b4
// 0057fa0f  6a00                 push 0
// 0057fa11  50                   push eax
// 0057fa12  e8af1d1200           call 0x6a17c6
// 0057fa17  83c414               add esp, 0x14
// 0057fa1a  85c0                 test eax, eax
// 0057fa1c  7433                 je 0x57fa51
// 0057fa1e  8d542410             lea edx, [esp + 0x10]
// 0057fa22  52                   push edx
// 0057fa23  8d4c241c             lea ecx, [esp + 0x1c]
// 0057fa27  83c504               add ebp, 4
// 0057fa2a  e8817ae9ff           call 0x4174b0
// 0057fa2f  8bc8                 mov ecx, eax
// 0057fa31  e8cad5f2ff           call 0x4ad000
// 0057fa36  3a4500               cmp al, byte ptr [ebp]
// 0057fa39  7416                 je 0x57fa51
// 0057fa3b  55                   push ebp
// 0057fa3c  8d442414             lea eax, [esp + 0x14]
// 0057fa40  50                   push eax
// 0057fa41  8d4c2420             lea ecx, [esp + 0x20]
// 0057fa45  e8667ae9ff           call 0x4174b0
// 0057fa4a  8bc8                 mov ecx, eax
// 0057fa4c  e88fd7f2ff           call 0x4ad1e0
// 0057fa51  8b742438             mov esi, dword ptr [esp + 0x38]
// 0057fa55  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0057fa5d  85f6                 test esi, esi
// 0057fa5f  742a                 je 0x57fa8b
// 0057fa61  8d4e04               lea ecx, [esi + 4]
// 0057fa64  83caff               or edx, 0xffffffff
// 0057fa67  f00fc111             lock xadd dword ptr [ecx], edx
// 0057fa6b  751e                 jne 0x57fa8b
// 0057fa6d  8b06                 mov eax, dword ptr [esi]
// 0057fa6f  8b5004               mov edx, dword ptr [eax + 4]
// 0057fa72  8bce                 mov ecx, esi
// 0057fa74  ffd2                 call edx
// 0057fa76  8d4608               lea eax, [esi + 8]
// 0057fa79  83c9ff               or ecx, 0xffffffff
// 0057fa7c  f00fc108             lock xadd dword ptr [eax], ecx
// 0057fa80  7509                 jne 0x57fa8b
// 0057fa82  8b16                 mov edx, dword ptr [esi]
// 0057fa84  8b4208               mov eax, dword ptr [edx + 8]
// 0057fa87  8bce                 mov ecx, esi
// 0057fa89  ffd0                 call eax
// 0057fa8b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057fa8f  5f                   pop edi
// 0057fa90  5e                   pop esi
// 0057fa91  5d                   pop ebp
// 0057fa92  5b                   pop ebx
// 0057fa93  64890d00000000       mov dword ptr fs:[0], ecx
// 0057fa9a  83c420               add esp, 0x20
// 0057fa9d  c20800               ret 8
// 0057faa0  8b1b                 mov ebx, dword ptr [ebx]
// 0057faa2  e94bffffff           jmp 0x57f9f2

// from server: 68% by king_originala
// roc 2008-06 0057f960  unit: RBX::VModelInstance::?$FilteredSelection  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057f960
//
// 0057f960  6aff                 push -1
// 0057f962  6868617c00           push 0x7c6168
// 0057f967  64a100000000         mov eax, dword ptr fs:[0]
// 0057f96d  50                   push eax
// 0057f96e  64892500000000       mov dword ptr fs:[0], esp
// 0057f975  83ec14               sub esp, 0x14
// 0057f978  53                   push ebx
// 0057f979  55                   push ebp
// 0057f97a  56                   push esi
// 0057f97b  57                   push edi
// 0057f97c  8be9                 mov ebp, ecx
// 0057f97e  8b4500               mov eax, dword ptr [ebp]
// 0057f981  8b742434             mov esi, dword ptr [esp + 0x34]
// 0057f985  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0057f988  50                   push eax
// 0057f989  83c614               add esi, 0x14
// 0057f98c  8d442414             lea eax, [esp + 0x14]
// 0057f990  50                   push eax
// 0057f991  83c108               add ecx, 8
// 0057f994  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0057f99c  e86fc00900           call 0x61ba10
// 0057f9a1  8b542434             mov edx, dword ptr [esp + 0x34]
// 0057f9a5  8b18                 mov ebx, dword ptr [eax]
// 0057f9a7  8b4804               mov ecx, dword ptr [eax + 4]
// 0057f9aa  89742418             mov dword ptr [esp + 0x18], esi
// 0057f9ae  8b721c               mov esi, dword ptr [edx + 0x1c]
// 0057f9b1  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0057f9b4  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0057f9b8  894c2420             mov dword ptr [esp + 0x20], ecx
// 0057f9bc  397e14               cmp dword ptr [esi + 0x14], edi
// 0057f9bf  7606                 jbe 0x57f9c7
// 0057f9c1  ff1590288000         call dword ptr [0x802890]
// 0057f9c7  8b7608               mov esi, dword ptr [esi + 8]
// 0057f9ca  85db                 test ebx, ebx
// 0057f9cc  7404                 je 0x57f9d2
// 0057f9ce  3bde                 cmp ebx, esi
// 0057f9d0  740a                 je 0x57f9dc
// 0057f9d2  8b3590288000         mov esi, dword ptr [0x802890]
// 0057f9d8  ffd6                 call esi
// 0057f9da  eb06                 jmp 0x57f9e2
// 0057f9dc  8b3590288000         mov esi, dword ptr [0x802890]
// 0057f9e2  397c2420             cmp dword ptr [esp + 0x20], edi
// 0057f9e6  7469                 je 0x57fa51
// 0057f9e8  85db                 test ebx, ebx
// 0057f9ea  0f85b0000000         jne 0x57faa0
// 0057f9f0  ffd6                 call esi
// 0057f9f2  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057f9f6  3b4310               cmp eax, dword ptr [ebx + 0x10]
// 0057f9f9  7202                 jb 0x57f9fd
// 0057f9fb  ffd6                 call esi
// 0057f9fd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057fa01  8b01                 mov eax, dword ptr [ecx]
// 0057fa03  6a00                 push 0
// 0057fa05  6878959200           push 0x929578
// 0057fa0a  68b4959200           push 0x9295b4
// 0057fa0f  6a00                 push 0
// 0057fa11  50                   push eax
// 0057fa12  e8af1d1200           call 0x6a17c6
// 0057fa17  83c414               add esp, 0x14
// 0057fa1a  85c0                 test eax, eax
// 0057fa1c  7433                 je 0x57fa51
// 0057fa1e  8d542410             lea edx, [esp + 0x10]
// 0057fa22  52                   push edx
// 0057fa23  8d4c241c             lea ecx, [esp + 0x1c]
// 0057fa27  83c504               add ebp, 4
// 0057fa2a  e8817ae9ff           call 0x4174b0
// 0057fa2f  8bc8                 mov ecx, eax
// 0057fa31  e8cad5f2ff           call 0x4ad000
// 0057fa36  3a4500               cmp al, byte ptr [ebp]
// 0057fa39  7416                 je 0x57fa51
// 0057fa3b  55                   push ebp
// 0057fa3c  8d442414             lea eax, [esp + 0x14]
// 0057fa40  50                   push eax
// 0057fa41  8d4c2420             lea ecx, [esp + 0x20]
// 0057fa45  e8667ae9ff           call 0x4174b0
// 0057fa4a  8bc8                 mov ecx, eax
// 0057fa4c  e88fd7f2ff           call 0x4ad1e0
// 0057fa51  8b742438             mov esi, dword ptr [esp + 0x38]
// 0057fa55  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0057fa5d  85f6                 test esi, esi
// 0057fa5f  742a                 je 0x57fa8b
// 0057fa61  8d4e04               lea ecx, [esi + 4]
// 0057fa64  83caff               or edx, 0xffffffff
// 0057fa67  f00fc111             lock xadd dword ptr [ecx], edx
// 0057fa6b  751e                 jne 0x57fa8b
// 0057fa6d  8b06                 mov eax, dword ptr [esi]
// 0057fa6f  8b5004               mov edx, dword ptr [eax + 4]
// 0057fa72  8bce                 mov ecx, esi
// 0057fa74  ffd2                 call edx
// 0057fa76  8d4608               lea eax, [esi + 8]
// 0057fa79  83c9ff               or ecx, 0xffffffff
// 0057fa7c  f00fc108             lock xadd dword ptr [eax], ecx
// 0057fa80  7509                 jne 0x57fa8b
// 0057fa82  8b16                 mov edx, dword ptr [esi]
// 0057fa84  8b4208               mov eax, dword ptr [edx + 8]
// 0057fa87  8bce                 mov ecx, esi
// 0057fa89  ffd0                 call eax
// 0057fa8b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057fa8f  5f                   pop edi
// 0057fa90  5e                   pop esi
// 0057fa91  5d                   pop ebp
// 0057fa92  5b                   pop ebx
// 0057fa93  64890d00000000       mov dword ptr fs:[0], ecx
// 0057fa9a  83c420               add esp, 0x20
// 0057fa9d  c20800               ret 8
// 0057faa0  8b1b                 mov ebx, dword ptr [ebx]
// 0057faa2  e94bffffff           jmp 0x57f9f2
#include <intrin.h>

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" {
    extern void (__cdecl* _invalid_parameter_noinfo)();
    void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
}

extern char propertyDescriptorType;
extern char boolPropertyDescriptorType;

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
    __forceinline void release() {
        if (_InterlockedDecrement(&strong) == 0) {
            dispose();
            if (_InterlockedDecrement(&weak) == 0)
                destroy();
        }
    }
};

struct Instance;
struct Property;
struct Vector;

struct Shared {
    Instance* pointer;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    if (control)
        control->release();
}

struct Proxy {
    Vector* owner;
};

struct Position {
    Proxy* proxy;
    Property** current;
};

struct Search {
    Proxy* proxy;
    unsigned reserved[2];
    Property** first;
    Property** last;
    Position find(Property* property);
};

struct Vector {
    unsigned reserved[2];
    Search search;
};

struct Instance {
    unsigned reserved[7];
    Vector* properties;
};

struct Value {
    bool get();
    void set(const bool* value);
};

struct Iterator {
    void* owner;
    Proxy* proxy;
    Property** current;
    Iterator(void* object, const Position& position);
    Value* get(void** temporary);
};

inline Iterator::Iterator(void* object, const Position& position)
    : owner(object), proxy(position.proxy), current(position.current)
{
}

struct Selection {
    Property* property;
    bool selected;
    void apply(Shared instance);
};

void Selection::apply(Shared instance)
{
    void* object = reinterpret_cast<char*>(instance.pointer) + 20;
    Iterator iterator(object,
                      instance.pointer->properties->search.find(property));

    Proxy* proxy = iterator.proxy;
    _ReadWriteBarrier();
    Vector* vector = instance.pointer->properties;
    Property** end = vector->search.last;
    if (vector->search.first > end)
        _invalid_parameter_noinfo();

    Proxy* expected = vector->search.proxy;
    if (!proxy || proxy != expected)
        _invalid_parameter_noinfo();

    if (iterator.current != end) {
        if (!proxy)
            _invalid_parameter_noinfo();
        else
            proxy = reinterpret_cast<Proxy*>(proxy->owner);

        if (iterator.current >= reinterpret_cast<Search*>(proxy)->last)
            _invalid_parameter_noinfo();

        if (__RTDynamicCast(*iterator.current, 0,
                            &propertyDescriptorType,
                            &boolPropertyDescriptorType, 0)) {
            void* temporary[2];
            if (iterator.get(temporary)->get() != selected)
                iterator.get(temporary)->set(&selected);
        }
    }
}
