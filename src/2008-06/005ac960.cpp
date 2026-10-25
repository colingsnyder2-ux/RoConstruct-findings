// from server: 100% by tester
// roc 2008-06 005ac960  unit: RBX::VScriptContext::?$FactoryProduct  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ac960
//
// 005ac960  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ac964  85c0                 test eax, eax
// 005ac966  7537                 jne 0x5ac99f
// 005ac968  8b442408             mov eax, dword ptr [esp + 8]
// 005ac96c  85c0                 test eax, eax
// 005ac96e  0f8486000000         je 0x5ac9fa
// 005ac974  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ac978  8b11                 mov edx, dword ptr [ecx]
// 005ac97a  8910                 mov dword ptr [eax], edx
// 005ac97c  8b5104               mov edx, dword ptr [ecx + 4]
// 005ac97f  895004               mov dword ptr [eax + 4], edx
// 005ac982  8b5108               mov edx, dword ptr [ecx + 8]
// 005ac985  895008               mov dword ptr [eax + 8], edx
// 005ac988  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 005ac98b  89480c               mov dword ptr [eax + 0xc], ecx
// 005ac98e  85c9                 test ecx, ecx
// 005ac990  7468                 je 0x5ac9fa
// 005ac992  83c104               add ecx, 4
// 005ac995  b801000000           mov eax, 1
// 005ac99a  f00fc101             lock xadd dword ptr [ecx], eax
// 005ac99e  c3                   ret 
// 005ac99f  56                   push esi
// 005ac9a0  83f801               cmp eax, 1
// 005ac9a3  7536                 jne 0x5ac9db
// 005ac9a5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ac9a9  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005ac9ac  85f6                 test esi, esi
// 005ac9ae  7449                 je 0x5ac9f9
// 005ac9b0  8d5604               lea edx, [esi + 4]
// 005ac9b3  83c8ff               or eax, 0xffffffff
// 005ac9b6  f00fc102             lock xadd dword ptr [edx], eax
// 005ac9ba  753d                 jne 0x5ac9f9
// 005ac9bc  8b16                 mov edx, dword ptr [esi]
// 005ac9be  8b4204               mov eax, dword ptr [edx + 4]
// 005ac9c1  8bce                 mov ecx, esi
// 005ac9c3  ffd0                 call eax
// 005ac9c5  8d4e08               lea ecx, [esi + 8]
// 005ac9c8  83caff               or edx, 0xffffffff
// 005ac9cb  f00fc111             lock xadd dword ptr [ecx], edx
// 005ac9cf  7528                 jne 0x5ac9f9
// 005ac9d1  8b06                 mov eax, dword ptr [esi]
// 005ac9d3  8b5008               mov edx, dword ptr [eax + 8]
// 005ac9d6  8bce                 mov ecx, esi
// 005ac9d8  5e                   pop esi
// 005ac9d9  ffe2                 jmp edx
// 005ac9db  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ac9df  8b0e                 mov ecx, dword ptr [esi]
// 005ac9e1  6838c99400           push 0x94c938
// 005ac9e6  ff1578288000         call dword ptr [0x802878]
// 005ac9ec  0fb6c0               movzx eax, al
// 005ac9ef  f7d8                 neg eax
// 005ac9f1  1bc0                 sbb eax, eax
// 005ac9f3  23442408             and eax, dword ptr [esp + 8]
// 005ac9f7  8906                 mov dword ptr [esi], eax
// 005ac9f9  5e                   pop esi
// 005ac9fa  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct TypeInfo
{
    void* table;
};

extern TypeInfo expected_type;
extern bool (__thiscall *type_equal)(const TypeInfo*, const TypeInfo*);

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Value
{
    const TypeInfo* type;
    void* first;
    void* second;
    Control* control;
};

void __cdecl func_00418f10(const Value* source, Value* destination, int operation)
{
    if (operation == 0)
    {
        if (destination)
        {
            destination->type = source->type;
            destination->first = source->first;
            destination->second = source->second;
            Control* control = source->control;
            destination->control = control;
            if (control)
                _InterlockedIncrement(&control->strong);
        }
    }
    else if (operation == 1)
    {
        Control* control = destination->control;
        if (control && _InterlockedDecrement(&control->strong) == 0)
        {
            control->dispose();
            if (_InterlockedDecrement(&control->weak) == 0)
                control->destroy();
        }
    }
    else
    {
        destination->type = type_equal(destination->type, &expected_type)
            ? reinterpret_cast<const TypeInfo*>(source) : 0;
    }
}
