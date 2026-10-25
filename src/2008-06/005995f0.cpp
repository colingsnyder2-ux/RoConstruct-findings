// from server: 100% by king_originala
// roc 2008-06 005995f0  unit: RBX::VPartInstance::?$FactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005995f0
//
// 005995f0  8b442404             mov eax, dword ptr [esp + 4]
// 005995f4  53                   push ebx
// 005995f5  56                   push esi
// 005995f6  85c0                 test eax, eax
// 005995f8  740d                 je 0x599607
// 005995fa  83b82403000000       cmp dword ptr [eax + 0x324], 0
// 00599601  7404                 je 0x599607
// 00599603  b301                 mov bl, 1
// 00599605  eb02                 jmp 0x599609
// 00599607  32db                 xor bl, bl
// 00599609  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059960d  85f6                 test esi, esi
// 0059960f  742a                 je 0x59963b
// 00599611  8d4604               lea eax, [esi + 4]
// 00599614  83c9ff               or ecx, 0xffffffff
// 00599617  f00fc108             lock xadd dword ptr [eax], ecx
// 0059961b  751e                 jne 0x59963b
// 0059961d  8b16                 mov edx, dword ptr [esi]
// 0059961f  8b4204               mov eax, dword ptr [edx + 4]
// 00599622  8bce                 mov ecx, esi
// 00599624  ffd0                 call eax
// 00599626  8d4e08               lea ecx, [esi + 8]
// 00599629  83caff               or edx, 0xffffffff
// 0059962c  f00fc111             lock xadd dword ptr [ecx], edx
// 00599630  7509                 jne 0x59963b
// 00599632  8b06                 mov eax, dword ptr [esi]
// 00599634  8b5008               mov edx, dword ptr [eax + 8]
// 00599637  8bce                 mov ecx, esi
// 00599639  ffd2                 call edx
// 0059963b  5e                   pop esi
// 0059963c  8ac3                 mov al, bl
// 0059963e  5b                   pop ebx
// 0059963f  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Part {
    char padding[0x324];
    int value;
};

struct Control {
    virtual void slot0();
    virtual void dispose();
    virtual void destroy();

    volatile long strongCount;
    volatile long weakCount;
};

bool __cdecl f(Part* part, Control* control)
{
    bool result = part && part->value != 0;

    if (control) {
        if (_InterlockedDecrement(&control->strongCount) == 0) {
            control->dispose();
            if (_InterlockedDecrement(&control->weakCount) == 0)
                control->destroy();
        }
    }

    return result;
}
