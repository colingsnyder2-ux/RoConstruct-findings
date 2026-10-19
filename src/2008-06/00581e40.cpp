// from server: 78% by colin
// from server: 69% by king_originala
// roc 2008-06 00581e40  unit: RBX::VPVInstance::?$FilteredSelection  size: 412 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00581e40
//
// 00581e40  6aff                 push -1
// 00581e42  6868917d00           push 0x7d9168
// 00581e47  64a100000000         mov eax, dword ptr fs:[0]
// 00581e4d  50                   push eax
// 00581e4e  64892500000000       mov dword ptr fs:[0], esp
// 00581e55  83ec0c               sub esp, 0xc
// 00581e58  53                   push ebx
// 00581e59  56                   push esi
// 00581e5a  8b742424             mov esi, dword ptr [esp + 0x24]
// 00581e5e  8bd9                 mov ebx, ecx
// 00581e60  56                   push esi
// 00581e61  895c240c             mov dword ptr [esp + 0xc], ebx
// 00581e65  e8568efdff           call 0x55acc0
// 00581e6a  83bb3401000000       cmp dword ptr [ebx + 0x134], 0
// 00581e71  0f8552010000         jne 0x581fc9
// 00581e77  8b4608               mov eax, dword ptr [esi + 8]
// 00581e7a  50                   push eax
// 00581e7b  e830fee9ff           call 0x421cb0
// 00581e80  50                   push eax
// 00581e81  8d4c2414             lea ecx, [esp + 0x14]
// 00581e85  51                   push ecx
// 00581e86  e8b56b0900           call 0x618a40
// 00581e8b  83c40c               add esp, 0xc
// 00581e8e  8b10                 mov edx, dword ptr [eax]
// 00581e90  83c004               add eax, 4
// 00581e93  50                   push eax
// 00581e94  8d8b38010000         lea ecx, [ebx + 0x138]
// 00581e9a  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00581ea2  899334010000         mov dword ptr [ebx + 0x134], edx
// 00581ea8  e80307e8ff           call 0x4025b0
// 00581ead  8b442410             mov eax, dword ptr [esp + 0x10]
// 00581eb1  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00581eb9  85c0                 test eax, eax
// 00581ebb  742c                 je 0x581ee9
// 00581ebd  8bf0                 mov esi, eax
// 00581ebf  83c004               add eax, 4
// 00581ec2  83c9ff               or ecx, 0xffffffff
// 00581ec5  f00fc108             lock xadd dword ptr [eax], ecx
// 00581ec9  751e                 jne 0x581ee9
// 00581ecb  8b16                 mov edx, dword ptr [esi]
// 00581ecd  8b4204               mov eax, dword ptr [edx + 4]
// 00581ed0  8bce                 mov ecx, esi
// 00581ed2  ffd0                 call eax
// 00581ed4  8d4e08               lea ecx, [esi + 8]
// 00581ed7  83caff               or edx, 0xffffffff
// 00581eda  f00fc111             lock xadd dword ptr [ecx], edx
// 00581ede  7509                 jne 0x581ee9
// 00581ee0  8b06                 mov eax, dword ptr [esi]
// 00581ee2  8b5008               mov edx, dword ptr [eax + 8]
// 00581ee5  8bce                 mov ecx, esi
// 00581ee7  ffd2                 call edx
// 00581ee9  8b8334010000         mov eax, dword ptr [ebx + 0x134]
// 00581eef  85c0                 test eax, eax
// 00581ef1  0f84d2000000         je 0x581fc9
// 00581ef7  8bb054010000         mov esi, dword ptr [eax + 0x154]
// 00581efd  55                   push ebp
// 00581efe  57                   push edi
// 00581eff  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00581f02  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 00581f05  7606                 jbe 0x581f0d
// 00581f07  ff1590288000         call dword ptr [0x802890]
// 00581f0d  8b2e                 mov ebp, dword ptr [esi]
// 00581f0f  90                   nop 
// 00581f10  8b8334010000         mov eax, dword ptr [ebx + 0x134]
// 00581f16  8bb054010000         mov esi, dword ptr [eax + 0x154]
// 00581f1c  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00581f1f  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00581f22  7606                 jbe 0x581f2a
// 00581f24  ff1590288000         call dword ptr [0x802890]
// 00581f2a  8b36                 mov esi, dword ptr [esi]
// 00581f2c  85ed                 test ebp, ebp
// 00581f2e  7404                 je 0x581f34
// 00581f30  3bee                 cmp ebp, esi
// 00581f32  740a                 je 0x581f3e
// 00581f34  8b3590288000         mov esi, dword ptr [0x802890]
// 00581f3a  ffd6                 call esi
// 00581f3c  eb06                 jmp 0x581f44
// 00581f3e  8b3590288000         mov esi, dword ptr [0x802890]
// 00581f44  3bfb                 cmp edi, ebx
// 00581f46  7469                 je 0x581fb1
// 00581f48  85ed                 test ebp, ebp
// 00581f4a  755b                 jne 0x581fa7
// 00581f4c  ffd6                 call esi
// 00581f4e  33c0                 xor eax, eax
// 00581f50  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00581f53  7202                 jb 0x581f57
// 00581f55  ffd6                 call esi
// 00581f57  8b07                 mov eax, dword ptr [edi]
// 00581f59  6a00                 push 0
// 00581f5b  681c7f9400           push 0x947f1c
// 00581f60  687c909200           push 0x92907c
// 00581f65  6a00                 push 0
// 00581f67  50                   push eax
// 00581f68  e859f81100           call 0x6a17c6
// 00581f6d  83c414               add esp, 0x14
// 00581f70  8944242c             mov dword ptr [esp + 0x2c], eax
// 00581f74  85c0                 test eax, eax
// 00581f76  7414                 je 0x581f8c
// 00581f78  8d4c242c             lea ecx, [esp + 0x2c]
// 00581f7c  51                   push ecx
// 00581f7d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00581f81  81c13c010000         add ecx, 0x13c
// 00581f87  e814f4e9ff           call 0x4213a0
// 00581f8c  85ed                 test ebp, ebp
// 00581f8e  751c                 jne 0x581fac
// 00581f90  ffd6                 call esi
// 00581f92  33c0                 xor eax, eax
// 00581f94  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00581f97  7202                 jb 0x581f9b
// 00581f99  ffd6                 call esi
// 00581f9b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00581f9f  83c708               add edi, 8
// 00581fa2  e969ffffff           jmp 0x581f10
// 00581fa7  8b4500               mov eax, dword ptr [ebp]
// 00581faa  eba4                 jmp 0x581f50
// 00581fac  8b4500               mov eax, dword ptr [ebp]
// 00581faf  ebe3                 jmp 0x581f94
// 00581fb1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00581fb5  8d8130010000         lea eax, [ecx + 0x130]
// 00581fbb  8b8934010000         mov ecx, dword ptr [ecx + 0x134]
// 00581fc1  50                   push eax
// 00581fc2  e8b951feff           call 0x567180
// 00581fc7  5f                   pop edi
// 00581fc8  5d                   pop ebp
// 00581fc9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00581fcd  5e                   pop esi
// 00581fce  5b                   pop ebx
// 00581fcf  64890d00000000       mov dword ptr fs:[0], ecx
// 00581fd6  83c418               add esp, 0x18
// 00581fd9  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* const _invalid_parameter_noinfo)();

namespace RBX {
    class Instance {
    public:
        virtual ~Instance();
        char pad[0x100];
        Instance* next;
    };

    class ServiceProvider : public Instance {
    public:
        ServiceProvider* finish();
    };

    class PVInstance : public Instance {};
}

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Entry {
    RBX::Instance* object;
    Control* control;
};

struct Vector;

struct Proxy {
    Vector* owner;
};

struct Vector {
    Proxy* volatile proxy;
    unsigned int reserved[2];
    Entry* first;
    Entry* last;
};

struct Source {
    char pad[0x154];
    Vector* children;
    void connect(void*);
};

struct Shared {
    Source* object;
    Control* control;
    ~Shared();
};

__forceinline Shared::~Shared() {
    if (control) {
        Control* p = control;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct ControlHolder {
    Control* control;
    void assign(Control* const&);
};

struct Listener {
    void append(RBX::PVInstance* const&);
};

struct Argument {
    unsigned int reserved[2];
    RBX::Instance* object;
};

RBX::ServiceProvider* __cdecl func_00421cb0(RBX::Instance*);
Shared __cdecl func_00618a40(RBX::ServiceProvider*);

struct S {
    char pad[0x130];
    unsigned int connection;
    Source* source;
    ControlHolder holder;
    Listener listener;

    void base(Argument*);
    void f(Argument*);
};

void S::f(Argument* arg) {
    base(arg);
    if (!source) {
        {
            const Shared& value =
                func_00618a40(func_00421cb0(arg->object));
            source = value.object;
            holder.assign(value.control);
        }

        if (source) {
            Vector* v = source->children;
            Entry* current = v->first;
            if (current > v->last)
                _invalid_parameter_noinfo();
            Proxy* proxy = v->proxy;

            for (;;) {
                v = source->children;
                Entry* end = v->last;
                if (v->first > end)
                    _invalid_parameter_noinfo();

                Proxy* endProxy = v->proxy;
                if (!proxy || proxy != endProxy)
                    _invalid_parameter_noinfo();

                void (__cdecl* invalid)() = _invalid_parameter_noinfo;

                if (current == end)
                    break;

                if (!proxy)
                    invalid();
                Vector* owner = proxy ? proxy->owner : 0;
                if (current >= owner->last)
                    invalid();

                RBX::PVInstance* object =
                    dynamic_cast<RBX::PVInstance*>(current->object);
                if (object)
                    listener.append(object);

                if (!proxy)
                    invalid();
                owner = proxy ? proxy->owner : 0;
                if (current >= owner->last)
                    invalid();
                ++current;
            }

            source->connect(&connection);
        }
    }
}
