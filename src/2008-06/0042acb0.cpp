// from server: 100% by king_originala
// roc 2008-06 0042acb0  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042acb0
//
// 0042acb0  64a100000000         mov eax, dword ptr fs:[0]
// 0042acb6  6aff                 push -1
// 0042acb8  6878f47b00           push 0x7bf478
// 0042acbd  50                   push eax
// 0042acbe  64892500000000       mov dword ptr fs:[0], esp
// 0042acc5  56                   push esi
// 0042acc6  8bf1                 mov esi, ecx
// 0042acc8  8b442414             mov eax, dword ptr [esp + 0x14]
// 0042accc  c70698058100         mov dword ptr [esi], 0x810598
// 0042acd2  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0042acda  c7460800000000       mov dword ptr [esi + 8], 0
// 0042ace1  85c0                 test eax, eax
// 0042ace3  7419                 je 0x42acfe
// 0042ace5  6a00                 push 0
// 0042ace7  8d4e10               lea ecx, [esi + 0x10]
// 0042acea  51                   push ecx
// 0042aceb  8d542424             lea edx, [esp + 0x24]
// 0042acef  894608               mov dword ptr [esi + 8], eax
// 0042acf2  8b00                 mov eax, dword ptr [eax]
// 0042acf4  52                   push edx
// 0042acf5  ffd0                 call eax
// 0042acf7  8b442420             mov eax, dword ptr [esp + 0x20]
// 0042acfb  83c40c               add esp, 0xc
// 0042acfe  c7462800000000       mov dword ptr [esi + 0x28], 0
// 0042ad05  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0042ad0d  85c0                 test eax, eax
// 0042ad0f  7415                 je 0x42ad26
// 0042ad11  8b00                 mov eax, dword ptr [eax]
// 0042ad13  85c0                 test eax, eax
// 0042ad15  740f                 je 0x42ad26
// 0042ad17  8d4c241c             lea ecx, [esp + 0x1c]
// 0042ad1b  6a01                 push 1
// 0042ad1d  51                   push ecx
// 0042ad1e  8bd1                 mov edx, ecx
// 0042ad20  52                   push edx
// 0042ad21  ffd0                 call eax
// 0042ad23  83c40c               add esp, 0xc
// 0042ad26  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0042ad2a  8bc6                 mov eax, esi
// 0042ad2c  64890d00000000       mov dword ptr fs:[0], ecx
// 0042ad33  5e                   pop esi
// 0042ad34  83c40c               add esp, 0xc
// 0042ad37  c22000               ret 0x20

typedef void (__cdecl *Manager)(void*, void*, int);

struct Function
{
    Manager* manager;
    unsigned char padding[4];
    unsigned char storage[24];

    Function(const Function& function);
    ~Function();
};

inline Function::Function(const Function& function)
{
    manager = 0;
    if (function.manager)
    {
        manager = function.manager;
        (*function.manager)(
            const_cast<unsigned char*>(function.storage), storage, 0);
    }
}

inline Function::~Function()
{
    if (manager)
    {
        Manager callback = *manager;
        if (callback)
            callback(storage, storage, 1);
    }
}

struct Holder
{
    unsigned char padding0[4];
    Function function;
    unsigned long trailing;

    Holder(Function value);
    virtual ~Holder();
};

Holder::Holder(Function value)
    : function(value), trailing(0)
{
}
