// from server: 100% by king_originala
// roc 2008-06 00418f10  unit: VCLuaFunction::?$CComAggObject  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00418f10
//
// 00418f10  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00418f14  85c0                 test eax, eax
// 00418f16  7537                 jne 0x418f4f
// 00418f18  8b442408             mov eax, dword ptr [esp + 8]
// 00418f1c  85c0                 test eax, eax
// 00418f1e  0f8486000000         je 0x418faa
// 00418f24  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00418f28  8b11                 mov edx, dword ptr [ecx]
// 00418f2a  8910                 mov dword ptr [eax], edx
// 00418f2c  8b5104               mov edx, dword ptr [ecx + 4]
// 00418f2f  895004               mov dword ptr [eax + 4], edx
// 00418f32  8b5108               mov edx, dword ptr [ecx + 8]
// 00418f35  895008               mov dword ptr [eax + 8], edx
// 00418f38  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00418f3b  89480c               mov dword ptr [eax + 0xc], ecx
// 00418f3e  85c9                 test ecx, ecx
// 00418f40  7468                 je 0x418faa
// 00418f42  83c104               add ecx, 4
// 00418f45  b801000000           mov eax, 1
// 00418f4a  f00fc101             lock xadd dword ptr [ecx], eax
// 00418f4e  c3                   ret 
// 00418f4f  56                   push esi
// 00418f50  83f801               cmp eax, 1
// 00418f53  7536                 jne 0x418f8b
// 00418f55  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00418f59  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00418f5c  85f6                 test esi, esi
// 00418f5e  7449                 je 0x418fa9
// 00418f60  8d5604               lea edx, [esi + 4]
// 00418f63  83c8ff               or eax, 0xffffffff
// 00418f66  f00fc102             lock xadd dword ptr [edx], eax
// 00418f6a  753d                 jne 0x418fa9
// 00418f6c  8b16                 mov edx, dword ptr [esi]
// 00418f6e  8b4204               mov eax, dword ptr [edx + 4]
// 00418f71  8bce                 mov ecx, esi
// 00418f73  ffd0                 call eax
// 00418f75  8d4e08               lea ecx, [esi + 8]
// 00418f78  83caff               or edx, 0xffffffff
// 00418f7b  f00fc111             lock xadd dword ptr [ecx], edx
// 00418f7f  7528                 jne 0x418fa9
// 00418f81  8b06                 mov eax, dword ptr [esi]
// 00418f83  8b5008               mov edx, dword ptr [eax + 8]
// 00418f86  8bce                 mov ecx, esi
// 00418f88  5e                   pop esi
// 00418f89  ffe2                 jmp edx
// 00418f8b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00418f8f  8b0e                 mov ecx, dword ptr [esi]
// 00418f91  6820c59200           push 0x92c520
// 00418f96  ff1578288000         call dword ptr [0x802878]
// 00418f9c  0fb6c0               movzx eax, al
// 00418f9f  f7d8                 neg eax
// 00418fa1  1bc0                 sbb eax, eax
// 00418fa3  23442408             and eax, dword ptr [esp + 8]
// 00418fa7  8906                 mov dword ptr [esi], eax
// 00418fa9  5e                   pop esi
// 00418faa  c3                   ret 

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
