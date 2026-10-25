// from server: 100% by colin
// roc 2008-06 00618d70  unit: RBX::VTool::?$FactoryProduct  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00618d70
//
// 00618d70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00618d74  85c0                 test eax, eax
// 00618d76  7513                 jne 0x618d8b
// 00618d78  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00618d7c  85c9                 test ecx, ecx
// 00618d7e  7466                 je 0x618de6
// 00618d80  8b442404             mov eax, dword ptr [esp + 4]
// 00618d84  50                   push eax
// 00618d85  e816fcffff           call 0x6189a0
// 00618d8a  c3                   ret 
// 00618d8b  56                   push esi
// 00618d8c  83f801               cmp eax, 1
// 00618d8f  7536                 jne 0x618dc7
// 00618d91  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00618d95  8b7114               mov esi, dword ptr [ecx + 0x14]
// 00618d98  85f6                 test esi, esi
// 00618d9a  7449                 je 0x618de5
// 00618d9c  8d5604               lea edx, [esi + 4]
// 00618d9f  83c8ff               or eax, 0xffffffff
// 00618da2  f00fc102             lock xadd dword ptr [edx], eax
// 00618da6  753d                 jne 0x618de5
// 00618da8  8b16                 mov edx, dword ptr [esi]
// 00618daa  8b4204               mov eax, dword ptr [edx + 4]
// 00618dad  8bce                 mov ecx, esi
// 00618daf  ffd0                 call eax
// 00618db1  8d4e08               lea ecx, [esi + 8]
// 00618db4  83caff               or edx, 0xffffffff
// 00618db7  f00fc111             lock xadd dword ptr [ecx], edx
// 00618dbb  7528                 jne 0x618de5
// 00618dbd  8b06                 mov eax, dword ptr [esi]
// 00618dbf  8b5008               mov edx, dword ptr [eax + 8]
// 00618dc2  8bce                 mov ecx, esi
// 00618dc4  5e                   pop esi
// 00618dc5  ffe2                 jmp edx
// 00618dc7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00618dcb  8b0e                 mov ecx, dword ptr [esi]
// 00618dcd  6818ae9500           push 0x95ae18
// 00618dd2  ff1578288000         call dword ptr [0x802878]
// 00618dd8  0fb6c0               movzx eax, al
// 00618ddb  f7d8                 neg eax
// 00618ddd  1bc0                 sbb eax, eax
// 00618ddf  23442408             and eax, dword ptr [esp + 8]
// 00618de3  8906                 mov dword ptr [esi], eax
// 00618de5  5e                   pop esi
// 00618de6  c3                   ret 

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
    unsigned long reserved[4];
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
