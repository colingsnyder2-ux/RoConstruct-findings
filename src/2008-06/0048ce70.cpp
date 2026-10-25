// from server: 100% by tester
// roc 2008-06 0048ce70  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048ce70
//
// 0048ce70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0048ce74  85c0                 test eax, eax
// 0048ce76  7537                 jne 0x48ceaf
// 0048ce78  8b442408             mov eax, dword ptr [esp + 8]
// 0048ce7c  85c0                 test eax, eax
// 0048ce7e  0f8486000000         je 0x48cf0a
// 0048ce84  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048ce88  8b11                 mov edx, dword ptr [ecx]
// 0048ce8a  8910                 mov dword ptr [eax], edx
// 0048ce8c  8b5104               mov edx, dword ptr [ecx + 4]
// 0048ce8f  895004               mov dword ptr [eax + 4], edx
// 0048ce92  8b5108               mov edx, dword ptr [ecx + 8]
// 0048ce95  895008               mov dword ptr [eax + 8], edx
// 0048ce98  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0048ce9b  89480c               mov dword ptr [eax + 0xc], ecx
// 0048ce9e  85c9                 test ecx, ecx
// 0048cea0  7468                 je 0x48cf0a
// 0048cea2  83c104               add ecx, 4
// 0048cea5  b801000000           mov eax, 1
// 0048ceaa  f00fc101             lock xadd dword ptr [ecx], eax
// 0048ceae  c3                   ret 
// 0048ceaf  56                   push esi
// 0048ceb0  83f801               cmp eax, 1
// 0048ceb3  7536                 jne 0x48ceeb
// 0048ceb5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048ceb9  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0048cebc  85f6                 test esi, esi
// 0048cebe  7449                 je 0x48cf09
// 0048cec0  8d5604               lea edx, [esi + 4]
// 0048cec3  83c8ff               or eax, 0xffffffff
// 0048cec6  f00fc102             lock xadd dword ptr [edx], eax
// 0048ceca  753d                 jne 0x48cf09
// 0048cecc  8b16                 mov edx, dword ptr [esi]
// 0048cece  8b4204               mov eax, dword ptr [edx + 4]
// 0048ced1  8bce                 mov ecx, esi
// 0048ced3  ffd0                 call eax
// 0048ced5  8d4e08               lea ecx, [esi + 8]
// 0048ced8  83caff               or edx, 0xffffffff
// 0048cedb  f00fc111             lock xadd dword ptr [ecx], edx
// 0048cedf  7528                 jne 0x48cf09
// 0048cee1  8b06                 mov eax, dword ptr [esi]
// 0048cee3  8b5008               mov edx, dword ptr [eax + 8]
// 0048cee6  8bce                 mov ecx, esi
// 0048cee8  5e                   pop esi
// 0048cee9  ffe2                 jmp edx
// 0048ceeb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048ceef  8b0e                 mov ecx, dword ptr [esi]
// 0048cef1  6808549300           push 0x935408
// 0048cef6  ff1578288000         call dword ptr [0x802878]
// 0048cefc  0fb6c0               movzx eax, al
// 0048ceff  f7d8                 neg eax
// 0048cf01  1bc0                 sbb eax, eax
// 0048cf03  23442408             and eax, dword ptr [esp + 8]
// 0048cf07  8906                 mov dword ptr [esi], eax
// 0048cf09  5e                   pop esi
// 0048cf0a  c3                   ret 

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
