// from server: 100% by king_originala
// roc 2008-06 006430e0  unit: RBX::ScriptMouseCommand  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006430e0
//
// 006430e0  6aff                 push -1
// 006430e2  68bbab7d00           push 0x7dabbb
// 006430e7  64a100000000         mov eax, dword ptr fs:[0]
// 006430ed  50                   push eax
// 006430ee  64892500000000       mov dword ptr fs:[0], esp
// 006430f5  83ec0c               sub esp, 0xc
// 006430f8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006430fc  56                   push esi
// 006430fd  57                   push edi
// 006430fe  8bf1                 mov esi, ecx
// 00643100  50                   push eax
// 00643101  8974240c             mov dword ptr [esp + 0xc], esi
// 00643105  e8e628fdff           call 0x6159f0
// 0064310a  c70694a88400         mov dword ptr [esi], 0x84a894
// 00643110  c746047ca88400       mov dword ptr [esi + 4], 0x84a87c
// 00643117  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 0064311e  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00643126  c7462000000000       mov dword ptr [esi + 0x20], 0
// 0064312d  8d4c240c             lea ecx, [esp + 0xc]
// 00643131  51                   push ecx
// 00643132  c644242001           mov byte ptr [esp + 0x20], 1
// 00643137  e8c4c4fbff           call 0x5ff600
// 0064313c  83c404               add esp, 4
// 0064313f  8b10                 mov edx, dword ptr [eax]
// 00643141  83c004               add eax, 4
// 00643144  50                   push eax
// 00643145  8d4e20               lea ecx, [esi + 0x20]
// 00643148  c644242002           mov byte ptr [esp + 0x20], 2
// 0064314d  89561c               mov dword ptr [esi + 0x1c], edx
// 00643150  e85bf4dbff           call 0x4025b0
// 00643155  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00643159  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0064315e  85ff                 test edi, edi
// 00643160  742a                 je 0x64318c
// 00643162  8d4704               lea eax, [edi + 4]
// 00643165  83c9ff               or ecx, 0xffffffff
// 00643168  f00fc108             lock xadd dword ptr [eax], ecx
// 0064316c  751e                 jne 0x64318c
// 0064316e  8b17                 mov edx, dword ptr [edi]
// 00643170  8b4204               mov eax, dword ptr [edx + 4]
// 00643173  8bcf                 mov ecx, edi
// 00643175  ffd0                 call eax
// 00643177  8d4f08               lea ecx, [edi + 8]
// 0064317a  83caff               or edx, 0xffffffff
// 0064317d  f00fc111             lock xadd dword ptr [ecx], edx
// 00643181  7509                 jne 0x64318c
// 00643183  8b07                 mov eax, dword ptr [edi]
// 00643185  8b5008               mov edx, dword ptr [eax + 8]
// 00643188  8bcf                 mov ecx, edi
// 0064318a  ffd2                 call edx
// 0064318c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0064318f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00643193  89b064010000         mov dword ptr [eax + 0x164], esi
// 00643199  5f                   pop edi
// 0064319a  8bc6                 mov eax, esi
// 0064319c  5e                   pop esi
// 0064319d  64890d00000000       mov dword ptr fs:[0], ecx
// 006431a4  83c418               add esp, 0x18
// 006431a7  c20400               ret 4

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

struct Reference {
    Control* control;
    Reference();
    Reference& operator=(const Reference&);
    ~Reference();
};

inline Reference::Reference() : control(0)
{
}

inline Reference::~Reference()
{
    if (control)
        control->release();
}

struct ScriptMouseCommand;

struct Product {
    char padding[0x164];
    ScriptMouseCommand* command;
};

struct SharedProduct {
    Product* object;
    Reference reference;
    SharedProduct();
    SharedProduct& operator=(const SharedProduct&);
};

inline SharedProduct::SharedProduct() : object(0)
{
}

inline SharedProduct& SharedProduct::operator=(const SharedProduct& other)
{
    object = other.object;
    reference = other.reference;
    return *this;
}

SharedProduct __cdecl createProduct();

struct Primary {
    virtual ~Primary();
};

struct Secondary {
    virtual ~Secondary();
};

struct Base : Primary, Secondary {
    char storage[20];
    Base(int);
    ~Base();
};

struct ScriptMouseCommand : Base {
    SharedProduct product;
    ScriptMouseCommand(int);
    ~ScriptMouseCommand();
};

ScriptMouseCommand::ScriptMouseCommand(int argument)
    : Base(argument), product()
{
    product = createProduct();
    product.object->command = this;
}
