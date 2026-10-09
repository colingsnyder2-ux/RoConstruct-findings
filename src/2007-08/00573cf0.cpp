// from server: 82% by colin
// roc 2007-08 00573cf0  unit: RBX::VPartInstance::?$FactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573cf0
//
// 00573cf0  8b442404             mov eax, dword ptr [esp + 4]
// 00573cf4  85c0                 test eax, eax
// 00573cf6  53                   push ebx
// 00573cf7  56                   push esi
// 00573cf8  740d                 je 0x573d07
// 00573cfa  83b8dc01000000       cmp dword ptr [eax + 0x1dc], 0
// 00573d01  7404                 je 0x573d07
// 00573d03  b301                 mov bl, 1
// 00573d05  eb02                 jmp 0x573d09
// 00573d07  32db                 xor bl, bl
// 00573d09  8b742410             mov esi, dword ptr [esp + 0x10]
// 00573d0d  85f6                 test esi, esi
// 00573d0f  742a                 je 0x573d3b
// 00573d11  8d4604               lea eax, [esi + 4]
// 00573d14  83c9ff               or ecx, 0xffffffff
// 00573d17  f00fc108             lock xadd dword ptr [eax], ecx
// 00573d1b  751e                 jne 0x573d3b
// 00573d1d  8b16                 mov edx, dword ptr [esi]
// 00573d1f  8b4204               mov eax, dword ptr [edx + 4]
// 00573d22  8bce                 mov ecx, esi
// 00573d24  ffd0                 call eax
// 00573d26  8d4e08               lea ecx, [esi + 8]
// 00573d29  83caff               or edx, 0xffffffff
// 00573d2c  f00fc111             lock xadd dword ptr [ecx], edx
// 00573d30  7509                 jne 0x573d3b
// 00573d32  8b06                 mov eax, dword ptr [esi]
// 00573d34  8b5008               mov edx, dword ptr [eax + 8]
// 00573d37  8bce                 mov ecx, esi
// 00573d39  ffd2                 call edx
// 00573d3b  5e                   pop esi
// 00573d3c  8ac3                 mov al, bl
// 00573d3e  5b                   pop ebx
// 00573d3f  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    volatile long refCount1;
    volatile long refCount2;
};

struct FactoryProduct {
    char pad[0x1dc];
    int field_1dc;
};

bool func_00573cf0(FactoryProduct* a, RefCounted* b)
{
    bool result;
    if (a != 0 && a->field_1dc != 0)
        result = true;
    else
        result = false;

    if (b != 0) {
        if (_InterlockedExchangeAdd(&b->refCount1, -1) != 0) {
        } else {
            b->unknown1();
        }
        if (_InterlockedExchangeAdd(&b->refCount2, -1) != 0) {
        } else {
            b->unknown2();
        }
    }
    return result;
}
