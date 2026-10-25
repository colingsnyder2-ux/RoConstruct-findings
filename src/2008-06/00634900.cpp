// from server: 100% by king_originala
// roc 2008-06 00634900  unit: G3D::$$A6AXVColor3::V?$function::?$holder  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00634900
//
// 00634900  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00634904  85c0                 test eax, eax
// 00634906  7527                 jne 0x63492f
// 00634908  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063490c  85c9                 test ecx, ecx
// 0063490e  747a                 je 0x63498a
// 00634910  8b442404             mov eax, dword ptr [esp + 4]
// 00634914  8b10                 mov edx, dword ptr [eax]
// 00634916  8911                 mov dword ptr [ecx], edx
// 00634918  8b4004               mov eax, dword ptr [eax + 4]
// 0063491b  894104               mov dword ptr [ecx + 4], eax
// 0063491e  85c0                 test eax, eax
// 00634920  7468                 je 0x63498a
// 00634922  83c004               add eax, 4
// 00634925  b901000000           mov ecx, 1
// 0063492a  f00fc108             lock xadd dword ptr [eax], ecx
// 0063492e  c3                   ret 
// 0063492f  56                   push esi
// 00634930  83f801               cmp eax, 1
// 00634933  7536                 jne 0x63496b
// 00634935  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00634939  8b7204               mov esi, dword ptr [edx + 4]
// 0063493c  85f6                 test esi, esi
// 0063493e  7449                 je 0x634989
// 00634940  8d4604               lea eax, [esi + 4]
// 00634943  83c9ff               or ecx, 0xffffffff
// 00634946  f00fc108             lock xadd dword ptr [eax], ecx
// 0063494a  753d                 jne 0x634989
// 0063494c  8b16                 mov edx, dword ptr [esi]
// 0063494e  8b4204               mov eax, dword ptr [edx + 4]
// 00634951  8bce                 mov ecx, esi
// 00634953  ffd0                 call eax
// 00634955  8d4e08               lea ecx, [esi + 8]
// 00634958  83caff               or edx, 0xffffffff
// 0063495b  f00fc111             lock xadd dword ptr [ecx], edx
// 0063495f  7528                 jne 0x634989
// 00634961  8b06                 mov eax, dword ptr [esi]
// 00634963  8b5008               mov edx, dword ptr [eax + 8]
// 00634966  8bce                 mov ecx, esi
// 00634968  5e                   pop esi
// 00634969  ffe2                 jmp edx
// 0063496b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063496f  8b0e                 mov ecx, dword ptr [esi]
// 00634971  6850ec9500           push 0x95ec50
// 00634976  ff1578288000         call dword ptr [0x802878]
// 0063497c  0fb6c0               movzx eax, al
// 0063497f  f7d8                 neg eax
// 00634981  1bc0                 sbb eax, eax
// 00634983  23442408             and eax, dword ptr [esp + 8]
// 00634987  8906                 mov dword ptr [esi], eax
// 00634989  5e                   pop esi
// 0063498a  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct TypeInfo;
extern const TypeInfo adapterType;
extern bool (__thiscall *typeEqual)(const TypeInfo*, const TypeInfo*);

struct Buffer {
    void* value;
    Control* control;
};

void __cdecl manage(const Buffer* source, Buffer* destination, int operation)
{
    if (operation == 0) {
        if (destination) {
            destination->value = source->value;
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
        destination->value =
            typeEqual(static_cast<const TypeInfo*>(destination->value), &adapterType)
            ? const_cast<Buffer*>(source) : 0;
    }
}
