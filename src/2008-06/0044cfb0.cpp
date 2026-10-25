// from server: 100% by king_originala
// roc 2008-06 0044cfb0  unit: CRobloxModule  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044cfb0
//
// 0044cfb0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044cfb4  85c0                 test eax, eax
// 0044cfb6  7531                 jne 0x44cfe9
// 0044cfb8  8b442408             mov eax, dword ptr [esp + 8]
// 0044cfbc  85c0                 test eax, eax
// 0044cfbe  0f8480000000         je 0x44d044
// 0044cfc4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0044cfc8  8b11                 mov edx, dword ptr [ecx]
// 0044cfca  8910                 mov dword ptr [eax], edx
// 0044cfcc  8b5104               mov edx, dword ptr [ecx + 4]
// 0044cfcf  895004               mov dword ptr [eax + 4], edx
// 0044cfd2  8b4908               mov ecx, dword ptr [ecx + 8]
// 0044cfd5  894808               mov dword ptr [eax + 8], ecx
// 0044cfd8  85c9                 test ecx, ecx
// 0044cfda  7468                 je 0x44d044
// 0044cfdc  83c104               add ecx, 4
// 0044cfdf  b801000000           mov eax, 1
// 0044cfe4  f00fc101             lock xadd dword ptr [ecx], eax
// 0044cfe8  c3                   ret 
// 0044cfe9  56                   push esi
// 0044cfea  83f801               cmp eax, 1
// 0044cfed  7536                 jne 0x44d025
// 0044cfef  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044cff3  8b7108               mov esi, dword ptr [ecx + 8]
// 0044cff6  85f6                 test esi, esi
// 0044cff8  7449                 je 0x44d043
// 0044cffa  8d5604               lea edx, [esi + 4]
// 0044cffd  83c8ff               or eax, 0xffffffff
// 0044d000  f00fc102             lock xadd dword ptr [edx], eax
// 0044d004  753d                 jne 0x44d043
// 0044d006  8b16                 mov edx, dword ptr [esi]
// 0044d008  8b4204               mov eax, dword ptr [edx + 4]
// 0044d00b  8bce                 mov ecx, esi
// 0044d00d  ffd0                 call eax
// 0044d00f  8d4e08               lea ecx, [esi + 8]
// 0044d012  83caff               or edx, 0xffffffff
// 0044d015  f00fc111             lock xadd dword ptr [ecx], edx
// 0044d019  7528                 jne 0x44d043
// 0044d01b  8b06                 mov eax, dword ptr [esi]
// 0044d01d  8b5008               mov edx, dword ptr [eax + 8]
// 0044d020  8bce                 mov ecx, esi
// 0044d022  5e                   pop esi
// 0044d023  ffe2                 jmp edx
// 0044d025  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0044d029  8b0e                 mov ecx, dword ptr [esi]
// 0044d02b  68f01a9300           push 0x931af0
// 0044d030  ff1578288000         call dword ptr [0x802878]
// 0044d036  0fb6c0               movzx eax, al
// 0044d039  f7d8                 neg eax
// 0044d03b  1bc0                 sbb eax, eax
// 0044d03d  23442408             and eax, dword ptr [esp + 8]
// 0044d041  8906                 mov dword ptr [esi], eax
// 0044d043  5e                   pop esi
// 0044d044  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Buffer {
    void* object;
    void* auxiliary;
    Control* control;
};

struct TypeInfo {
    void* vtable;
};

typedef bool (__thiscall *TypeEqual)(const TypeInfo*, const TypeInfo&);
extern TypeEqual typeEqual;
extern const TypeInfo expectedType;

void __cdecl manager(const Buffer* source, Buffer* destination, int operation)
{
    if (operation == 0) {
        if (destination) {
            destination->object = source->object;
            destination->auxiliary = source->auxiliary;
            destination->control = source->control;
            if (destination->control)
                _InterlockedIncrement(&destination->control->strong);
        }
    } else if (operation == 1) {
        Control* control = destination->control;
        if (control && _InterlockedDecrement(&control->strong) == 0) {
            control->dispose();
            if (_InterlockedDecrement(&control->weak) == 0)
                control->destroy();
        }
    } else {
        destination->object =
            typeEqual(static_cast<const TypeInfo*>(destination->object), expectedType)
            ? const_cast<Buffer*>(source) : 0;
    }
}
