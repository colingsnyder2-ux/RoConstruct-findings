// from server: 100% by colin
// roc 2008-06 005ac4f0  unit: RBX::VScriptContext::?$FactoryProduct  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ac4f0
//
// 005ac4f0  51                   push ecx
// 005ac4f1  8b442418             mov eax, dword ptr [esp + 0x18]
// 005ac4f5  56                   push esi
// 005ac4f6  8b742414             mov esi, dword ptr [esp + 0x14]
// 005ac4fa  57                   push edi
// 005ac4fb  8bf8                 mov edi, eax
// 005ac4fd  3bf0                 cmp esi, eax
// 005ac4ff  7438                 je 0x5ac539
// 005ac501  8b06                 mov eax, dword ptr [esi]
// 005ac503  83ec08               sub esp, 8
// 005ac506  8bcc                 mov ecx, esp
// 005ac508  8901                 mov dword ptr [ecx], eax
// 005ac50a  8b4604               mov eax, dword ptr [esi + 4]
// 005ac50d  89642410             mov dword ptr [esp + 0x10], esp
// 005ac511  894104               mov dword ptr [ecx + 4], eax
// 005ac514  85c0                 test eax, eax
// 005ac516  740c                 je 0x5ac524
// 005ac518  83c004               add eax, 4
// 005ac51b  b901000000           mov ecx, 1
// 005ac520  f00fc108             lock xadd dword ptr [eax], ecx
// 005ac524  8b542434             mov edx, dword ptr [esp + 0x34]
// 005ac528  52                   push edx
// 005ac529  8d4c2430             lea ecx, [esp + 0x30]
// 005ac52d  e8eeaefdff           call 0x587420
// 005ac532  83c608               add esi, 8
// 005ac535  3bf7                 cmp esi, edi
// 005ac537  75c8                 jne 0x5ac501
// 005ac539  8b442410             mov eax, dword ptr [esp + 0x10]
// 005ac53d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005ac541  8b542428             mov edx, dword ptr [esp + 0x28]
// 005ac545  8908                 mov dword ptr [eax], ecx
// 005ac547  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ac54b  895004               mov dword ptr [eax + 4], edx
// 005ac54e  8b542430             mov edx, dword ptr [esp + 0x30]
// 005ac552  5f                   pop edi
// 005ac553  894808               mov dword ptr [eax + 8], ecx
// 005ac556  89500c               mov dword ptr [eax + 0xc], edx
// 005ac559  5e                   pop esi
// 005ac55a  59                   pop ecx
// 005ac55b  c3                   ret 

extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    long reserved;
    volatile long references;
};

struct Shared {
    void* pointer;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->references);
}

struct Iterator {
    void* owner;
    Shared* current;
};

struct Function {
    unsigned long a;
    unsigned long b;
    unsigned long c;
    unsigned long d;

    void invoke(unsigned long, Shared);
};

Function __cdecl process(Iterator first, Iterator last, Function function)
{
    Shared* current = first.current;
    Shared* end = last.current;
    for (; current != end; ++current)
        function.invoke(function.c, *current);
    return function;
}
