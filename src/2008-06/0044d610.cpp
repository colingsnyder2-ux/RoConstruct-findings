// from server: 61% by colin
// from server: 58% by king_originala
// roc 2008-06 0044d610  unit: RBX::VGameSettings::?$FactoryProduct::Creator  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044d610
//
// 0044d610  6aff                 push -1
// 0044d612  6886147c00           push 0x7c1486
// 0044d617  64a100000000         mov eax, dword ptr fs:[0]
// 0044d61d  50                   push eax
// 0044d61e  64892500000000       mov dword ptr fs:[0], esp
// 0044d625  83ec34               sub esp, 0x34
// 0044d628  53                   push ebx
// 0044d629  56                   push esi
// 0044d62a  57                   push edi
// 0044d62b  8bd9                 mov ebx, ecx
// 0044d62d  6a48                 push 0x48
// 0044d62f  895c2410             mov dword ptr [esp + 0x10], ebx
// 0044d633  e8e8322500           call 0x6a0920
// 0044d638  83c404               add esp, 4
// 0044d63b  89442410             mov dword ptr [esp + 0x10], eax
// 0044d63f  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0044d647  85c0                 test eax, eax
// 0044d649  740b                 je 0x44d656
// 0044d64b  8bc8                 mov ecx, eax
// 0044d64d  e86efaffff           call 0x44d0c0
// 0044d652  8bf0                 mov esi, eax
// 0044d654  eb02                 jmp 0x44d658
// 0044d656  33f6                 xor esi, esi
// 0044d658  8d7b04               lea edi, [ebx + 4]
// 0044d65b  56                   push esi
// 0044d65c  8bcf                 mov ecx, edi
// 0044d65e  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0044d666  8933                 mov dword ptr [ebx], esi
// 0044d668  e843feffff           call 0x44d4b0
// 0044d66d  56                   push esi
// 0044d66e  56                   push esi
// 0044d66f  57                   push edi
// 0044d670  e89bfd0200           call 0x47d410
// 0044d675  8b0b                 mov ecx, dword ptr [ebx]
// 0044d677  83c404               add esp, 4
// 0044d67a  8bc4                 mov eax, esp
// 0044d67c  8908                 mov dword ptr [eax], ecx
// 0044d67e  8b3f                 mov edi, dword ptr [edi]
// 0044d680  c744245001000000     mov dword ptr [esp + 0x50], 1
// 0044d688  89642418             mov dword ptr [esp + 0x18], esp
// 0044d68c  897804               mov dword ptr [eax + 4], edi
// 0044d68f  85ff                 test edi, edi
// 0044d691  740c                 je 0x44d69f
// 0044d693  83c704               add edi, 4
// 0044d696  ba01000000           mov edx, 1
// 0044d69b  f00fc117             lock xadd dword ptr [edi], edx
// 0044d69f  8d44241c             lea eax, [esp + 0x1c]
// 0044d6a3  6860d74100           push 0x41d760
// 0044d6a8  50                   push eax
// 0044d6a9  e8c2e01e00           call 0x63b770
// 0044d6ae  8d4c2424             lea ecx, [esp + 0x24]
// 0044d6b2  51                   push ecx
// 0044d6b3  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0044d6bb  e830cc1b00           call 0x60a2f0
// 0044d6c0  83c414               add esp, 0x14
// 0044d6c3  84c0                 test al, al
// 0044d6c5  7536                 jne 0x44d6fd
// 0044d6c7  8b442418             mov eax, dword ptr [esp + 0x18]
// 0044d6cb  8b542414             mov edx, dword ptr [esp + 0x14]
// 0044d6cf  8944242c             mov dword ptr [esp + 0x2c], eax
// 0044d6d3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0044d6d7  89542428             mov dword ptr [esp + 0x28], edx
// 0044d6db  89442430             mov dword ptr [esp + 0x30], eax
// 0044d6df  85c0                 test eax, eax
// 0044d6e1  7410                 je 0x44d6f3
// 0044d6e3  83c004               add eax, 4
// 0044d6e6  b901000000           mov ecx, 1
// 0044d6eb  f00fc108             lock xadd dword ptr [eax], ecx
// 0044d6ef  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0044d6f3  c7442420a86d8100     mov dword ptr [esp + 0x20], 0x816da8
// 0044d6fb  eb0c                 jmp 0x44d709
// 0044d6fd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0044d701  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0044d709  85c0                 test eax, eax
// 0044d70b  742c                 je 0x44d739
// 0044d70d  8bf0                 mov esi, eax
// 0044d70f  83c004               add eax, 4
// 0044d712  83caff               or edx, 0xffffffff
// 0044d715  f00fc110             lock xadd dword ptr [eax], edx
// 0044d719  751e                 jne 0x44d739
// 0044d71b  8b06                 mov eax, dword ptr [esi]
// 0044d71d  8b5004               mov edx, dword ptr [eax + 4]
// 0044d720  8bce                 mov ecx, esi
// 0044d722  ffd2                 call edx
// 0044d724  8d4608               lea eax, [esi + 8]
// 0044d727  83c9ff               or ecx, 0xffffffff
// 0044d72a  f00fc108             lock xadd dword ptr [eax], ecx
// 0044d72e  7509                 jne 0x44d739
// 0044d730  8b16                 mov edx, dword ptr [esi]
// 0044d732  8b4208               mov eax, dword ptr [edx + 8]
// 0044d735  8bce                 mov ecx, esi
// 0044d737  ffd0                 call eax
// 0044d739  68b86d8100           push 0x816db8
// 0044d73e  8d4c2424             lea ecx, [esp + 0x24]
// 0044d742  51                   push ecx
// 0044d743  8d4b08               lea ecx, [ebx + 8]
// 0044d746  c644245002           mov byte ptr [esp + 0x50], 2
// 0044d74b  e8809a1400           call 0x5971d0
// 0044d750  8b442420             mov eax, dword ptr [esp + 0x20]
// 0044d754  c644244804           mov byte ptr [esp + 0x48], 4
// 0044d759  85c0                 test eax, eax
// 0044d75b  7415                 je 0x44d772
// 0044d75d  8b00                 mov eax, dword ptr [eax]
// 0044d75f  85c0                 test eax, eax
// 0044d761  740f                 je 0x44d772
// 0044d763  8d542428             lea edx, [esp + 0x28]
// 0044d767  6a01                 push 1
// 0044d769  52                   push edx
// 0044d76a  8bca                 mov ecx, edx
// 0044d76c  51                   push ecx
// 0044d76d  ffd0                 call eax
// 0044d76f  83c40c               add esp, 0xc
// 0044d772  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0044d776  5f                   pop edi
// 0044d777  5e                   pop esi
// 0044d778  8bc3                 mov eax, ebx
// 0044d77a  64890d00000000       mov dword ptr fs:[0], ecx
// 0044d781  5b                   pop ebx
// 0044d782  83c440               add esp, 0x40
// 0044d785  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern void* __cdecl operator new(unsigned int);
extern void __cdecl operator delete(void*);

struct Object {
    unsigned char data[72];
    Object();
};

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct ControlPtr {
    Control* value;
    ControlPtr(Object*);
    ~ControlPtr();
};

struct __declspec(dllimport) Shared {
    Object* object;
    Control* control;
    Shared(Object*, Control*);
    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct Bound {
    void* function;
    Object* object;
    Control* control;
};

extern void __cdecl func_0041d760();
extern void __cdecl func_0047d410(...);
extern void __cdecl func_0063b770(
    Bound*, void (__cdecl*)(), Shared);
extern bool __cdecl func_0060a2f0(const Bound*);

typedef void (__cdecl* Manager)(void*, void*, int);

struct FunctionTable {
    Manager manager;
};

extern const FunctionTable function_table;
extern const unsigned char callback_tag[];

struct Function {
    const FunctionTable* table;
    unsigned int padding;
    void* function;
    Object* object;
    Control* control;
    unsigned int tail[3];
    Function(const Bound&);
    ~Function();
};

__forceinline Function::Function(const Bound& b)
{
    padding = 0;
    if (!func_0060a2f0(&b)) {
        object = b.object;
        function = b.function;
        control = b.control;
        if (control)
            _InterlockedExchangeAdd(&control->strong, 1);
        table = &function_table;
    } else {
        table = 0;
    }
}

__forceinline Function::~Function()
{
    if (table) {
        Manager manager = table->manager;
        if (manager)
            manager(&function, &function, 1);
    }
}

struct Callback {
    unsigned char data[32];
    void initialize(const Function&, const unsigned char*);
};

struct S {
    Object* object;
    ControlPtr control;
    Callback callback;
    S();
};

S::S()
    : object(new Object), control(object)
{
    func_0047d410(&control, object, object);
    Bound b;
    func_0063b770(&b, func_0041d760, Shared(object, control.value));
    Function f(b);
    Control* p = b.control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
    callback.initialize(f, callback_tag);
}
