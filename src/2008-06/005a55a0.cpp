// from server: 100% by colin
// roc 2008-06 005a55a0  unit: RBX::VWorkspace::?$BoundFuncDesc  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a55a0
//
// 005a55a0  6aff                 push -1
// 005a55a2  68b92e7d00           push 0x7d2eb9
// 005a55a7  64a100000000         mov eax, dword ptr fs:[0]
// 005a55ad  50                   push eax
// 005a55ae  64892500000000       mov dword ptr fs:[0], esp
// 005a55b5  83ec2c               sub esp, 0x2c
// 005a55b8  53                   push ebx
// 005a55b9  55                   push ebp
// 005a55ba  56                   push esi
// 005a55bb  57                   push edi
// 005a55bc  8bd9                 mov ebx, ecx
// 005a55be  83ec20               sub esp, 0x20
// 005a55c1  8bc4                 mov eax, esp
// 005a55c3  c70000000000         mov dword ptr [eax], 0
// 005a55c9  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 005a55cd  c744246400000000     mov dword ptr [esp + 0x64], 0
// 005a55d5  89642430             mov dword ptr [esp + 0x30], esp
// 005a55d9  85c9                 test ecx, ecx
// 005a55db  741b                 je 0x5a55f8
// 005a55dd  8908                 mov dword ptr [eax], ecx
// 005a55df  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 005a55e3  8b11                 mov edx, dword ptr [ecx]
// 005a55e5  83c008               add eax, 8
// 005a55e8  6a00                 push 0
// 005a55ea  50                   push eax
// 005a55eb  8d842480000000       lea eax, [esp + 0x80]
// 005a55f2  50                   push eax
// 005a55f3  ffd2                 call edx
// 005a55f5  83c40c               add esp, 0xc
// 005a55f8  8d442438             lea eax, [esp + 0x38]
// 005a55fc  50                   push eax
// 005a55fd  e8aef6ffff           call 0x5a4cb0
// 005a5602  8b7004               mov esi, dword ptr [eax + 4]
// 005a5605  8b38                 mov edi, dword ptr [eax]
// 005a5607  83c424               add esp, 0x24
// 005a560a  897c2410             mov dword ptr [esp + 0x10], edi
// 005a560e  89742414             mov dword ptr [esp + 0x14], esi
// 005a5612  85f6                 test esi, esi
// 005a5614  740c                 je 0x5a5622
// 005a5616  8d4e04               lea ecx, [esi + 4]
// 005a5619  ba01000000           mov edx, 1
// 005a561e  f00fc111             lock xadd dword ptr [ecx], edx
// 005a5622  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005a5626  c644244401           mov byte ptr [esp + 0x44], 1
// 005a562b  85ed                 test ebp, ebp
// 005a562d  742c                 je 0x5a565b
// 005a562f  8d4504               lea eax, [ebp + 4]
// 005a5632  83c9ff               or ecx, 0xffffffff
// 005a5635  f00fc108             lock xadd dword ptr [eax], ecx
// 005a5639  7520                 jne 0x5a565b
// 005a563b  8b5500               mov edx, dword ptr [ebp]
// 005a563e  8b4204               mov eax, dword ptr [edx + 4]
// 005a5641  8bcd                 mov ecx, ebp
// 005a5643  ffd0                 call eax
// 005a5645  8d4d08               lea ecx, [ebp + 8]
// 005a5648  83caff               or edx, 0xffffffff
// 005a564b  f00fc111             lock xadd dword ptr [ecx], edx
// 005a564f  750a                 jne 0x5a565b
// 005a5651  8b4500               mov eax, dword ptr [ebp]
// 005a5654  8b5008               mov edx, dword ptr [eax + 8]
// 005a5657  8bcd                 mov ecx, ebp
// 005a5659  ffd2                 call edx
// 005a565b  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 005a565f  50                   push eax
// 005a5660  8d4c2424             lea ecx, [esp + 0x24]
// 005a5664  ff1558248000         call dword ptr [0x802458]
// 005a566a  8b17                 mov edx, dword ptr [edi]
// 005a566c  8b5204               mov edx, dword ptr [edx + 4]
// 005a566f  8d442420             lea eax, [esp + 0x20]
// 005a5673  50                   push eax
// 005a5674  8bcf                 mov ecx, edi
// 005a5676  c644244802           mov byte ptr [esp + 0x48], 2
// 005a567b  ffd2                 call edx
// 005a567d  8d4c2420             lea ecx, [esp + 0x20]
// 005a5681  c644244401           mov byte ptr [esp + 0x44], 1
// 005a5686  ff1568248000         call dword ptr [0x802468]
// 005a568c  53                   push ebx
// 005a568d  8bcf                 mov ecx, edi
// 005a568f  e85c52fbff           call 0x55a8f0
// 005a5694  c644244400           mov byte ptr [esp + 0x44], 0
// 005a5699  85f6                 test esi, esi
// 005a569b  742a                 je 0x5a56c7
// 005a569d  8d4604               lea eax, [esi + 4]
// 005a56a0  83c9ff               or ecx, 0xffffffff
// 005a56a3  f00fc108             lock xadd dword ptr [eax], ecx
// 005a56a7  751e                 jne 0x5a56c7
// 005a56a9  8b16                 mov edx, dword ptr [esi]
// 005a56ab  8b4204               mov eax, dword ptr [edx + 4]
// 005a56ae  8bce                 mov ecx, esi
// 005a56b0  ffd0                 call eax
// 005a56b2  8d4e08               lea ecx, [esi + 8]
// 005a56b5  83caff               or edx, 0xffffffff
// 005a56b8  f00fc111             lock xadd dword ptr [ecx], edx
// 005a56bc  7509                 jne 0x5a56c7
// 005a56be  8b06                 mov eax, dword ptr [esi]
// 005a56c0  8b5008               mov edx, dword ptr [eax + 8]
// 005a56c3  8bce                 mov ecx, esi
// 005a56c5  ffd2                 call edx
// 005a56c7  8b442450             mov eax, dword ptr [esp + 0x50]
// 005a56cb  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 005a56d3  85c0                 test eax, eax
// 005a56d5  7415                 je 0x5a56ec
// 005a56d7  8b00                 mov eax, dword ptr [eax]
// 005a56d9  85c0                 test eax, eax
// 005a56db  740f                 je 0x5a56ec
// 005a56dd  8d4c2458             lea ecx, [esp + 0x58]
// 005a56e1  6a01                 push 1
// 005a56e3  51                   push ecx
// 005a56e4  8bd1                 mov edx, ecx
// 005a56e6  52                   push edx
// 005a56e7  ffd0                 call eax
// 005a56e9  83c40c               add esp, 0xc
// 005a56ec  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005a56f0  8bc7                 mov eax, edi
// 005a56f2  5f                   pop edi
// 005a56f3  5e                   pop esi
// 005a56f4  5d                   pop ebp
// 005a56f5  64890d00000000       mov dword ptr fs:[0], ecx
// 005a56fc  5b                   pop ebx
// 005a56fd  83c438               add esp, 0x38
// 005a5700  c22400               ret 0x24

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

namespace std {
    template<class T> struct char_traits;
    template<class T> struct allocator;

    template<class T, class Traits, class Allocator>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const T*);
        ~basic_string();
    };
}

typedef std::basic_string<char, std::char_traits<char>,
                          std::allocator<char> > String;

extern String* (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

namespace std {
    template<class T, class Traits, class Allocator>
    inline basic_string<T, Traits, Allocator>::basic_string(const T* text) {
        stringConstruct(this, text);
    }

    template<class T, class Traits, class Allocator>
    inline basic_string<T, Traits, Allocator>::~basic_string() {
        stringDestroy(this);
    }
}

struct Owner;

struct Object {
    virtual void slot0() = 0;
    virtual void setName(const String&) = 0;
    void attach(Owner*);
};

struct Control {
    virtual void slot0() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
    void addRef();
    void release();
};

inline void Control::addRef() {
    _InterlockedIncrement(&strong);
}

inline void Control::release() {
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Temporary {
    Object* object;
    Control* control;
    ~Temporary();
};

struct Shared {
    Object* object;
    Control* control;
    Shared(const Temporary&);
    ~Shared();
};

inline Temporary::~Temporary() {
    if (control)
        control->release();
}

inline Shared::Shared(const Temporary& other)
    : object(other.object), control(other.control) {
    if (control)
        control->addRef();
}

inline Shared::~Shared() {
    if (control)
        control->release();
}

struct Function {
    typedef void (__cdecl *Manager)(void*, void*, int);
    Manager* manager;
    unsigned int reserved;
    unsigned char data[24];
    Function(const Function&);
    ~Function();
};

inline Function::Function(const Function& other) : manager(0) {
    if (other.manager) {
        manager = other.manager;
        (*other.manager)(const_cast<unsigned char*>(other.data), data, 0);
    }
}

inline Function::~Function() {
    if (manager) {
        Manager f = *manager;
        if (f)
            f(data, data, 1);
    }
}

Temporary __cdecl createObject(Function);

struct Owner {
    Object* create(const char*, Function);
};

Object* Owner::create(const char* name, Function function) {
    Shared object(createObject(function));
    {
        String text(name);
        object.object->setName(text);
    }
    object.object->attach(this);
    return object.object;
}
