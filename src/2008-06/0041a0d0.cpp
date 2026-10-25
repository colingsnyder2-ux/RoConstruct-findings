// from server: 100% by king_originala
// roc 2008-06 0041a0d0  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041a0d0
//
// 0041a0d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041a0d4  85c0                 test eax, eax
// 0041a0d6  7513                 jne 0x41a0eb
// 0041a0d8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041a0dc  85c9                 test ecx, ecx
// 0041a0de  7466                 je 0x41a146
// 0041a0e0  8b442404             mov eax, dword ptr [esp + 4]
// 0041a0e4  50                   push eax
// 0041a0e5  e886f8ffff           call 0x419970
// 0041a0ea  c3                   ret 
// 0041a0eb  56                   push esi
// 0041a0ec  83f801               cmp eax, 1
// 0041a0ef  7536                 jne 0x41a127
// 0041a0f1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041a0f5  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0041a0f8  85f6                 test esi, esi
// 0041a0fa  7449                 je 0x41a145
// 0041a0fc  8d5604               lea edx, [esi + 4]
// 0041a0ff  83c8ff               or eax, 0xffffffff
// 0041a102  f00fc102             lock xadd dword ptr [edx], eax
// 0041a106  753d                 jne 0x41a145
// 0041a108  8b16                 mov edx, dword ptr [esi]
// 0041a10a  8b4204               mov eax, dword ptr [edx + 4]
// 0041a10d  8bce                 mov ecx, esi
// 0041a10f  ffd0                 call eax
// 0041a111  8d4e08               lea ecx, [esi + 8]
// 0041a114  83caff               or edx, 0xffffffff
// 0041a117  f00fc111             lock xadd dword ptr [ecx], edx
// 0041a11b  7528                 jne 0x41a145
// 0041a11d  8b06                 mov eax, dword ptr [esi]
// 0041a11f  8b5008               mov edx, dword ptr [eax + 8]
// 0041a122  8bce                 mov ecx, esi
// 0041a124  5e                   pop esi
// 0041a125  ffe2                 jmp edx
// 0041a127  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041a12b  8b0e                 mov ecx, dword ptr [esi]
// 0041a12d  6840c79200           push 0x92c740
// 0041a132  ff1578288000         call dword ptr [0x802878]
// 0041a138  0fb6c0               movzx eax, al
// 0041a13b  f7d8                 neg eax
// 0041a13d  1bc0                 sbb eax, eax
// 0041a13f  23442408             and eax, dword ptr [esp + 8]
// 0041a143  8906                 mov dword ptr [esi], eax
// 0041a145  5e                   pop esi
// 0041a146  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct TypeInfo {
    unsigned long data;
};

extern const TypeInfo targetType;
extern bool (__thiscall *typeEqual)(const TypeInfo*, const TypeInfo&);

struct RefCount {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Storage {
    void* value;
    unsigned long reserved[2];
    RefCount* control;

    void __thiscall copy(void*);
};

void __cdecl manage(void* destination, Storage* source, int operation)
{
    if (operation == 0) {
        if (source)
            source->copy(destination);
    } else if (operation == 1) {
        RefCount* control = source->control;
        if (control && _InterlockedDecrement(&control->strong) == 0) {
            control->dispose();
            if (_InterlockedDecrement(&control->weak) == 0)
                control->destroy();
        }
    } else {
        source->value =
            typeEqual(static_cast<const TypeInfo*>(source->value), targetType)
            ? destination : 0;
    }
}
