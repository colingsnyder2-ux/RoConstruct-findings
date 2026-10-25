// from server: 100% by tester
// roc 2008-06 0042b550  unit: EventHandler  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042b550
//
// 0042b550  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042b554  85c0                 test eax, eax
// 0042b556  7537                 jne 0x42b58f
// 0042b558  8b442408             mov eax, dword ptr [esp + 8]
// 0042b55c  85c0                 test eax, eax
// 0042b55e  0f8486000000         je 0x42b5ea
// 0042b564  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0042b568  8b11                 mov edx, dword ptr [ecx]
// 0042b56a  8910                 mov dword ptr [eax], edx
// 0042b56c  8b5104               mov edx, dword ptr [ecx + 4]
// 0042b56f  895004               mov dword ptr [eax + 4], edx
// 0042b572  8b5108               mov edx, dword ptr [ecx + 8]
// 0042b575  895008               mov dword ptr [eax + 8], edx
// 0042b578  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0042b57b  89480c               mov dword ptr [eax + 0xc], ecx
// 0042b57e  85c9                 test ecx, ecx
// 0042b580  7468                 je 0x42b5ea
// 0042b582  83c104               add ecx, 4
// 0042b585  b801000000           mov eax, 1
// 0042b58a  f00fc101             lock xadd dword ptr [ecx], eax
// 0042b58e  c3                   ret 
// 0042b58f  56                   push esi
// 0042b590  83f801               cmp eax, 1
// 0042b593  7536                 jne 0x42b5cb
// 0042b595  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042b599  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0042b59c  85f6                 test esi, esi
// 0042b59e  7449                 je 0x42b5e9
// 0042b5a0  8d5604               lea edx, [esi + 4]
// 0042b5a3  83c8ff               or eax, 0xffffffff
// 0042b5a6  f00fc102             lock xadd dword ptr [edx], eax
// 0042b5aa  753d                 jne 0x42b5e9
// 0042b5ac  8b16                 mov edx, dword ptr [esi]
// 0042b5ae  8b4204               mov eax, dword ptr [edx + 4]
// 0042b5b1  8bce                 mov ecx, esi
// 0042b5b3  ffd0                 call eax
// 0042b5b5  8d4e08               lea ecx, [esi + 8]
// 0042b5b8  83caff               or edx, 0xffffffff
// 0042b5bb  f00fc111             lock xadd dword ptr [ecx], edx
// 0042b5bf  7528                 jne 0x42b5e9
// 0042b5c1  8b06                 mov eax, dword ptr [esi]
// 0042b5c3  8b5008               mov edx, dword ptr [eax + 8]
// 0042b5c6  8bce                 mov ecx, esi
// 0042b5c8  5e                   pop esi
// 0042b5c9  ffe2                 jmp edx
// 0042b5cb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042b5cf  8b0e                 mov ecx, dword ptr [esi]
// 0042b5d1  68b8e99200           push 0x92e9b8
// 0042b5d6  ff1578288000         call dword ptr [0x802878]
// 0042b5dc  0fb6c0               movzx eax, al
// 0042b5df  f7d8                 neg eax
// 0042b5e1  1bc0                 sbb eax, eax
// 0042b5e3  23442408             and eax, dword ptr [esp + 8]
// 0042b5e7  8906                 mov dword ptr [esi], eax
// 0042b5e9  5e                   pop esi
// 0042b5ea  c3                   ret 

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
