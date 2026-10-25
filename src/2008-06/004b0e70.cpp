// from server: 100% by king_originala
// roc 2008-06 004b0e70  unit: RBX::Network::Replicator::NewInstanceItem  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b0e70
//
// 004b0e70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b0e74  85c0                 test eax, eax
// 004b0e76  753d                 jne 0x4b0eb5
// 004b0e78  8b442408             mov eax, dword ptr [esp + 8]
// 004b0e7c  85c0                 test eax, eax
// 004b0e7e  0f848c000000         je 0x4b0f10
// 004b0e84  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b0e88  8b11                 mov edx, dword ptr [ecx]
// 004b0e8a  8910                 mov dword ptr [eax], edx
// 004b0e8c  8b5104               mov edx, dword ptr [ecx + 4]
// 004b0e8f  895004               mov dword ptr [eax + 4], edx
// 004b0e92  8b5108               mov edx, dword ptr [ecx + 8]
// 004b0e95  895008               mov dword ptr [eax + 8], edx
// 004b0e98  8b510c               mov edx, dword ptr [ecx + 0xc]
// 004b0e9b  89500c               mov dword ptr [eax + 0xc], edx
// 004b0e9e  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 004b0ea1  894810               mov dword ptr [eax + 0x10], ecx
// 004b0ea4  85c9                 test ecx, ecx
// 004b0ea6  7468                 je 0x4b0f10
// 004b0ea8  83c104               add ecx, 4
// 004b0eab  b801000000           mov eax, 1
// 004b0eb0  f00fc101             lock xadd dword ptr [ecx], eax
// 004b0eb4  c3                   ret 
// 004b0eb5  56                   push esi
// 004b0eb6  83f801               cmp eax, 1
// 004b0eb9  7536                 jne 0x4b0ef1
// 004b0ebb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b0ebf  8b7110               mov esi, dword ptr [ecx + 0x10]
// 004b0ec2  85f6                 test esi, esi
// 004b0ec4  7449                 je 0x4b0f0f
// 004b0ec6  8d5604               lea edx, [esi + 4]
// 004b0ec9  83c8ff               or eax, 0xffffffff
// 004b0ecc  f00fc102             lock xadd dword ptr [edx], eax
// 004b0ed0  753d                 jne 0x4b0f0f
// 004b0ed2  8b16                 mov edx, dword ptr [esi]
// 004b0ed4  8b4204               mov eax, dword ptr [edx + 4]
// 004b0ed7  8bce                 mov ecx, esi
// 004b0ed9  ffd0                 call eax
// 004b0edb  8d4e08               lea ecx, [esi + 8]
// 004b0ede  83caff               or edx, 0xffffffff
// 004b0ee1  f00fc111             lock xadd dword ptr [ecx], edx
// 004b0ee5  7528                 jne 0x4b0f0f
// 004b0ee7  8b06                 mov eax, dword ptr [esi]
// 004b0ee9  8b5008               mov edx, dword ptr [eax + 8]
// 004b0eec  8bce                 mov ecx, esi
// 004b0eee  5e                   pop esi
// 004b0eef  ffe2                 jmp edx
// 004b0ef1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004b0ef5  8b0e                 mov ecx, dword ptr [esi]
// 004b0ef7  6878b39300           push 0x93b378
// 004b0efc  ff1578288000         call dword ptr [0x802878]
// 004b0f02  0fb6c0               movzx eax, al
// 004b0f05  f7d8                 neg eax
// 004b0f07  1bc0                 sbb eax, eax
// 004b0f09  23442408             and eax, dword ptr [esp + 8]
// 004b0f0d  8906                 mov dword ptr [esi], eax
// 004b0f0f  5e                   pop esi
// 004b0f10  c3                   ret 

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

struct Functor {
    unsigned long a;
    unsigned long b;
    unsigned long c;
    unsigned long d;
    Control* control;
};

struct TypeInfo {
    unsigned long data;
};

extern TypeInfo functorType;
extern bool (__thiscall *typeEqual)(const TypeInfo*, const TypeInfo&);

void __cdecl manage(const Functor* source, Functor* destination, int operation)
{
    if (operation == 0) {
        if (destination) {
            destination->a = source->a;
            destination->b = source->b;
            destination->c = source->c;
            destination->d = source->d;
            destination->control = source->control;
            if (destination->control)
                _InterlockedIncrement(&destination->control->strong);
        }
    } else if (operation == 1) {
        Control* p = destination->control;
        if (p && _InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    } else {
        const TypeInfo* type = *reinterpret_cast<const TypeInfo**>(destination);
        *reinterpret_cast<const Functor**>(destination) =
            typeEqual(type, functorType) ? source : 0;
    }
}
