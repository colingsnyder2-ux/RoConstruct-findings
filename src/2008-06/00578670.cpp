// from server: 100% by king_originala
// roc 2008-06 00578670  unit: RBX::VTool::?$FactoryProduct::Creator  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00578670
//
// 00578670  6aff                 push -1
// 00578672  68c0987d00           push 0x7d98c0
// 00578677  64a100000000         mov eax, dword ptr fs:[0]
// 0057867d  50                   push eax
// 0057867e  64892500000000       mov dword ptr fs:[0], esp
// 00578685  83ec18               sub esp, 0x18
// 00578688  56                   push esi
// 00578689  57                   push edi
// 0057868a  8bf9                 mov edi, ecx
// 0057868c  6a02                 push 2
// 0057868e  8d4c240c             lea ecx, [esp + 0xc]
// 00578692  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0057869a  e8d12aeaff           call 0x41b170
// 0057869f  8b442418             mov eax, dword ptr [esp + 0x18]
// 005786a3  2b442414             sub eax, dword ptr [esp + 0x14]
// 005786a7  8b3590288000         mov esi, dword ptr [0x802890]
// 005786ad  c1f802               sar eax, 2
// 005786b0  c644242801           mov byte ptr [esp + 0x28], 1
// 005786b5  85c0                 test eax, eax
// 005786b7  7702                 ja 0x5786bb
// 005786b9  ffd6                 call esi
// 005786bb  8d4c2430             lea ecx, [esp + 0x30]
// 005786bf  51                   push ecx
// 005786c0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005786c4  e83756f1ff           call 0x48dd00
// 005786c9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005786cd  2b542414             sub edx, dword ptr [esp + 0x14]
// 005786d1  c1fa02               sar edx, 2
// 005786d4  83fa01               cmp edx, 1
// 005786d7  7702                 ja 0x5786db
// 005786d9  ffd6                 call esi
// 005786db  8b742414             mov esi, dword ptr [esp + 0x14]
// 005786df  6a08                 push 8
// 005786e1  83c604               add esi, 4
// 005786e4  e837821200           call 0x6a0920
// 005786e9  83c404               add esp, 4
// 005786ec  85c0                 test eax, eax
// 005786ee  740f                 je 0x5786ff
// 005786f0  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005786f4  c70014d78200         mov dword ptr [eax], 0x82d714
// 005786fa  894804               mov dword ptr [eax + 4], ecx
// 005786fd  eb02                 jmp 0x578701
// 005786ff  33c0                 xor eax, eax
// 00578701  8d542438             lea edx, [esp + 0x38]
// 00578705  8bc8                 mov ecx, eax
// 00578707  3bd6                 cmp edx, esi
// 00578709  7404                 je 0x57870f
// 0057870b  8b0e                 mov ecx, dword ptr [esi]
// 0057870d  8906                 mov dword ptr [esi], eax
// 0057870f  85c9                 test ecx, ecx
// 00578711  7408                 je 0x57871b
// 00578713  8b01                 mov eax, dword ptr [ecx]
// 00578715  8b10                 mov edx, dword ptr [eax]
// 00578717  6a01                 push 1
// 00578719  ffd2                 call edx
// 0057871b  8b0f                 mov ecx, dword ptr [edi]
// 0057871d  8b01                 mov eax, dword ptr [ecx]
// 0057871f  8b4004               mov eax, dword ptr [eax + 4]
// 00578722  8d542408             lea edx, [esp + 8]
// 00578726  52                   push edx
// 00578727  ffd0                 call eax
// 00578729  8d4c2408             lea ecx, [esp + 8]
// 0057872d  c644242800           mov byte ptr [esp + 0x28], 0
// 00578732  e8e927eaff           call 0x41af20
// 00578737  8b742434             mov esi, dword ptr [esp + 0x34]
// 0057873b  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00578743  85f6                 test esi, esi
// 00578745  742a                 je 0x578771
// 00578747  8d4e04               lea ecx, [esi + 4]
// 0057874a  83caff               or edx, 0xffffffff
// 0057874d  f00fc111             lock xadd dword ptr [ecx], edx
// 00578751  751e                 jne 0x578771
// 00578753  8b06                 mov eax, dword ptr [esi]
// 00578755  8b5004               mov edx, dword ptr [eax + 4]
// 00578758  8bce                 mov ecx, esi
// 0057875a  ffd2                 call edx
// 0057875c  8d4608               lea eax, [esi + 8]
// 0057875f  83c9ff               or ecx, 0xffffffff
// 00578762  f00fc108             lock xadd dword ptr [eax], ecx
// 00578766  7509                 jne 0x578771
// 00578768  8b16                 mov edx, dword ptr [esi]
// 0057876a  8b4208               mov eax, dword ptr [edx + 8]
// 0057876d  8bce                 mov ecx, esi
// 0057876f  ffd0                 call eax
// 00578771  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00578775  5f                   pop edi
// 00578776  5e                   pop esi
// 00578777  64890d00000000       mov dword ptr fs:[0], ecx
// 0057877e  83c424               add esp, 0x24
// 00578781  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern void (__cdecl* invalidParameter)();
void* __cdecl operator new(unsigned int) throw();

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void release();
};

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    if (control)
        control->release();
}

struct Object {
    virtual ~Object();
};

struct Slot {
    Object* object;
    void assign(Shared*);
};

struct Arguments {
    unsigned int bookkeeping[3];
    Slot* first;
    Slot* last;
    Slot* limit;

    Arguments(unsigned int);
    ~Arguments();
};

struct Receiver {
    virtual void unused();
    virtual void invoke(Arguments*);
};

struct Wrapper {
    void* vtable;
    void* object;
};

extern void* wrapperVtable[];

struct Creator {
    Receiver* receiver;
    void create(Shared, void*);
};

void Creator::create(Shared value, void* object)
{
    Arguments arguments(2);
    void (__cdecl* invalid)() = invalidParameter;

    if (static_cast<unsigned int>(arguments.last - arguments.first) <= 0)
        invalid();

    arguments.first->assign(&value);

    if (static_cast<unsigned int>(arguments.last - arguments.first) <= 1)
        invalid();

    Slot* slot = arguments.first + 1;
    Wrapper* wrapper = static_cast<Wrapper*>(operator new(8));
    if (wrapper) {
        wrapper->vtable = wrapperVtable;
        wrapper->object = object;
    } else {
        wrapper = 0;
    }

    Object* previous = reinterpret_cast<Object*>(wrapper);
    if (reinterpret_cast<void*>(&object) != reinterpret_cast<void*>(slot)) {
        previous = slot->object;
        slot->object = reinterpret_cast<Object*>(wrapper);
    }

    if (previous)
        delete previous;

    receiver->invoke(&arguments);
}
