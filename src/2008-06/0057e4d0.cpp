// from server: 100% by colin
// roc 2008-06 0057e4d0  unit: RBX::ClearBackpack  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057e4d0
//
// 0057e4d0  51                   push ecx
// 0057e4d1  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057e4d5  56                   push esi
// 0057e4d6  8b742414             mov esi, dword ptr [esp + 0x14]
// 0057e4da  57                   push edi
// 0057e4db  8bf8                 mov edi, eax
// 0057e4dd  3bf0                 cmp esi, eax
// 0057e4df  7431                 je 0x57e512
// 0057e4e1  8b06                 mov eax, dword ptr [esi]
// 0057e4e3  83ec08               sub esp, 8
// 0057e4e6  8bcc                 mov ecx, esp
// 0057e4e8  8901                 mov dword ptr [ecx], eax
// 0057e4ea  8b4604               mov eax, dword ptr [esi + 4]
// 0057e4ed  89642410             mov dword ptr [esp + 0x10], esp
// 0057e4f1  894104               mov dword ptr [ecx + 4], eax
// 0057e4f4  85c0                 test eax, eax
// 0057e4f6  740c                 je 0x57e504
// 0057e4f8  83c004               add eax, 4
// 0057e4fb  b901000000           mov ecx, 1
// 0057e500  f00fc108             lock xadd dword ptr [eax], ecx
// 0057e504  ff54242c             call dword ptr [esp + 0x2c]
// 0057e508  83c608               add esi, 8
// 0057e50b  83c408               add esp, 8
// 0057e50e  3bf7                 cmp esi, edi
// 0057e510  75cf                 jne 0x57e4e1
// 0057e512  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057e516  8b542424             mov edx, dword ptr [esp + 0x24]
// 0057e51a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057e51e  5f                   pop edi
// 0057e51f  8910                 mov dword ptr [eax], edx
// 0057e521  894804               mov dword ptr [eax + 4], ecx
// 0057e524  5e                   pop esi
// 0057e525  59                   pop ecx
// 0057e526  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)


struct Control {
    long reserved;
    volatile long references;
};

struct Shared {
    void* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->references);
}

struct Iterator {
    void* owner;
    Shared* position;
};

struct Function {
    void (__cdecl *callback)(Shared);
    unsigned long state;
    Function(const Function&);
};

__forceinline Function::Function(const Function& other)
    : callback(other.callback), state(other.state)
{
}

Function __cdecl apply(Iterator first, Iterator last, Function function)
{
    Shared* current = first.position;
    Shared* end = last.position;
    for (; current != end; ++current)
        function.callback(*current);
    return function;
}
