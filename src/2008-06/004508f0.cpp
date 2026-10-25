// from server: 100% by king_originala
// roc 2008-06 004508f0  unit: CRobloxDoc  size: 377 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004508f0
//
// 004508f0  64a100000000         mov eax, dword ptr fs:[0]
// 004508f6  6aff                 push -1
// 004508f8  6848367c00           push 0x7c3648
// 004508fd  50                   push eax
// 004508fe  64892500000000       mov dword ptr fs:[0], esp
// 00450905  83ec24               sub esp, 0x24
// 00450908  53                   push ebx
// 00450909  56                   push esi
// 0045090a  57                   push edi
// 0045090b  8d44240c             lea eax, [esp + 0xc]
// 0045090f  50                   push eax
// 00450910  8bf1                 mov esi, ecx
// 00450912  e82927fbff           call 0x403040
// 00450917  833800               cmp dword ptr [eax], 0
// 0045091a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0045091e  0f95c3               setne bl
// 00450921  85c0                 test eax, eax
// 00450923  742c                 je 0x450951
// 00450925  8bf8                 mov edi, eax
// 00450927  83c004               add eax, 4
// 0045092a  83c9ff               or ecx, 0xffffffff
// 0045092d  f00fc108             lock xadd dword ptr [eax], ecx
// 00450931  751e                 jne 0x450951
// 00450933  8b17                 mov edx, dword ptr [edi]
// 00450935  8b4204               mov eax, dword ptr [edx + 4]
// 00450938  8bcf                 mov ecx, edi
// 0045093a  ffd0                 call eax
// 0045093c  8d4f08               lea ecx, [edi + 8]
// 0045093f  83caff               or edx, 0xffffffff
// 00450942  f00fc111             lock xadd dword ptr [ecx], edx
// 00450946  7509                 jne 0x450951
// 00450948  8b07                 mov eax, dword ptr [edi]
// 0045094a  8b5008               mov edx, dword ptr [eax + 8]
// 0045094d  8bcf                 mov ecx, edi
// 0045094f  ffd2                 call edx
// 00450951  84db                 test bl, bl
// 00450953  0f84fc000000         je 0x450a55
// 00450959  8d442414             lea eax, [esp + 0x14]
// 0045095d  50                   push eax
// 0045095e  8bce                 mov ecx, esi
// 00450960  e8db26fbff           call 0x403040
// 00450965  8b10                 mov edx, dword ptr [eax]
// 00450967  83ec08               sub esp, 8
// 0045096a  8bcc                 mov ecx, esp
// 0045096c  8911                 mov dword ptr [ecx], edx
// 0045096e  8b4004               mov eax, dword ptr [eax + 4]
// 00450971  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00450979  89642414             mov dword ptr [esp + 0x14], esp
// 0045097d  894104               mov dword ptr [ecx + 4], eax
// 00450980  85c0                 test eax, eax
// 00450982  740c                 je 0x450990
// 00450984  83c004               add eax, 4
// 00450987  b901000000           mov ecx, 1
// 0045098c  f00fc108             lock xadd dword ptr [eax], ecx
// 00450990  8d4c242c             lea ecx, [esp + 0x2c]
// 00450994  e8a711fcff           call 0x411b40
// 00450999  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0045099d  b302                 mov bl, 2
// 0045099f  885c2438             mov byte ptr [esp + 0x38], bl
// 004509a3  85ff                 test edi, edi
// 004509a5  742a                 je 0x4509d1
// 004509a7  8d5704               lea edx, [edi + 4]
// 004509aa  83c8ff               or eax, 0xffffffff
// 004509ad  f00fc102             lock xadd dword ptr [edx], eax
// 004509b1  751e                 jne 0x4509d1
// 004509b3  8b17                 mov edx, dword ptr [edi]
// 004509b5  8b4204               mov eax, dword ptr [edx + 4]
// 004509b8  8bcf                 mov ecx, edi
// 004509ba  ffd0                 call eax
// 004509bc  8d4f08               lea ecx, [edi + 8]
// 004509bf  83caff               or edx, 0xffffffff
// 004509c2  f00fc111             lock xadd dword ptr [ecx], edx
// 004509c6  7509                 jne 0x4509d1
// 004509c8  8b07                 mov eax, dword ptr [edi]
// 004509ca  8b5008               mov edx, dword ptr [eax + 8]
// 004509cd  8bcf                 mov ecx, edi
// 004509cf  ffd2                 call edx
// 004509d1  8d44241c             lea eax, [esp + 0x1c]
// 004509d5  50                   push eax
// 004509d6  8bce                 mov ecx, esi
// 004509d8  e86326fbff           call 0x403040
// 004509dd  8b00                 mov eax, dword ptr [eax]
// 004509df  8b90f0010000         mov edx, dword ptr [eax + 0x1f0]
// 004509e5  8d88f0010000         lea ecx, [eax + 0x1f0]
// 004509eb  8b4204               mov eax, dword ptr [edx + 4]
// 004509ee  c644243803           mov byte ptr [esp + 0x38], 3
// 004509f3  ffd0                 call eax
// 004509f5  0fb6f8               movzx edi, al
// 004509f8  8b442420             mov eax, dword ptr [esp + 0x20]
// 004509fc  885c2438             mov byte ptr [esp + 0x38], bl
// 00450a00  85c0                 test eax, eax
// 00450a02  742c                 je 0x450a30
// 00450a04  8bf0                 mov esi, eax
// 00450a06  83c004               add eax, 4
// 00450a09  83c9ff               or ecx, 0xffffffff
// 00450a0c  f00fc108             lock xadd dword ptr [eax], ecx
// 00450a10  751e                 jne 0x450a30
// 00450a12  8b16                 mov edx, dword ptr [esi]
// 00450a14  8b4204               mov eax, dword ptr [edx + 4]
// 00450a17  8bce                 mov ecx, esi
// 00450a19  ffd0                 call eax
// 00450a1b  8d4e08               lea ecx, [esi + 8]
// 00450a1e  83caff               or edx, 0xffffffff
// 00450a21  f00fc111             lock xadd dword ptr [ecx], edx
// 00450a25  7509                 jne 0x450a30
// 00450a27  8b06                 mov eax, dword ptr [esi]
// 00450a29  8b5008               mov edx, dword ptr [eax + 8]
// 00450a2c  8bce                 mov ecx, esi
// 00450a2e  ffd2                 call edx
// 00450a30  8d4c2424             lea ecx, [esp + 0x24]
// 00450a34  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00450a3c  e87f691200           call 0x5773c0
// 00450a41  8bc7                 mov eax, edi
// 00450a43  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00450a47  64890d00000000       mov dword ptr fs:[0], ecx
// 00450a4e  5f                   pop edi
// 00450a4f  5e                   pop esi
// 00450a50  5b                   pop ebx
// 00450a51  83c430               add esp, 0x30
// 00450a54  c3                   ret 
// 00450a55  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00450a59  5f                   pop edi
// 00450a5a  5e                   pop esi
// 00450a5b  33c0                 xor eax, eax
// 00450a5d  64890d00000000       mov dword ptr fs:[0], ecx
// 00450a64  5b                   pop ebx
// 00450a65  83c430               add esp, 0x30
// 00450a68  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Interface {
    virtual void unused();
    virtual bool query();
};

struct Object {
    unsigned char padding[0x1f0];
    Interface interfaceValue;
};

struct Pointer {
    Object* object;
    Control* control;

    Pointer() throw();
    Pointer(const Pointer& other);
    ~Pointer();
    const Pointer& reference() const throw();
};

inline Pointer::Pointer() throw() {
}

inline Pointer::Pointer(const Pointer& other)
    : object(other.object), control(other.control) {
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Pointer::~Pointer() {
    if (control) {
        Control* p = control;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

inline const Pointer& Pointer::reference() const throw() {
    return *this;
}

struct Guard {
    unsigned char storage[12];
    Guard(Pointer value);
    ~Guard();
};

struct Source;

struct S {
    unsigned char padding[0x94];
    Source* source;
    Pointer get() throw();
    int f();
};

int S::f() {
    if (get().object != 0) {
        Guard guard(get().reference());
        int result = get().object->interfaceValue.query();
        return result;
    }
    return 0;
}
