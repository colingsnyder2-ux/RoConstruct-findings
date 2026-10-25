// from server: 100% by king_originala
// roc 2008-06 0062fa10  unit: RBX::BodyMover  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062fa10
//
// 0062fa10  83ec08               sub esp, 8
// 0062fa13  53                   push ebx
// 0062fa14  56                   push esi
// 0062fa15  57                   push edi
// 0062fa16  8bf9                 mov edi, ecx
// 0062fa18  33c9                 xor ecx, ecx
// 0062fa1a  894c240c             mov dword ptr [esp + 0xc], ecx
// 0062fa1e  394c2418             cmp dword ptr [esp + 0x18], ecx
// 0062fa22  751b                 jne 0x62fa3f
// 0062fa24  8d44240c             lea eax, [esp + 0xc]
// 0062fa28  50                   push eax
// 0062fa29  8d4f10               lea ecx, [edi + 0x10]
// 0062fa2c  e8cfb0f9ff           call 0x5cab00
// 0062fa31  833800               cmp dword ptr [eax], 0
// 0062fa34  b901000000           mov ecx, 1
// 0062fa39  7404                 je 0x62fa3f
// 0062fa3b  8ad9                 mov bl, cl
// 0062fa3d  eb02                 jmp 0x62fa41
// 0062fa3f  32db                 xor bl, bl
// 0062fa41  f6c101               test cl, 1
// 0062fa44  7432                 je 0x62fa78
// 0062fa46  8b742410             mov esi, dword ptr [esp + 0x10]
// 0062fa4a  85f6                 test esi, esi
// 0062fa4c  742a                 je 0x62fa78
// 0062fa4e  8d4e04               lea ecx, [esi + 4]
// 0062fa51  83caff               or edx, 0xffffffff
// 0062fa54  f00fc111             lock xadd dword ptr [ecx], edx
// 0062fa58  751e                 jne 0x62fa78
// 0062fa5a  8b06                 mov eax, dword ptr [esi]
// 0062fa5c  8b5004               mov edx, dword ptr [eax + 4]
// 0062fa5f  8bce                 mov ecx, esi
// 0062fa61  ffd2                 call edx
// 0062fa63  8d4608               lea eax, [esi + 8]
// 0062fa66  83c9ff               or ecx, 0xffffffff
// 0062fa69  f00fc108             lock xadd dword ptr [eax], ecx
// 0062fa6d  7509                 jne 0x62fa78
// 0062fa6f  8b16                 mov edx, dword ptr [esi]
// 0062fa71  8b4208               mov eax, dword ptr [edx + 8]
// 0062fa74  8bce                 mov ecx, esi
// 0062fa76  ffd0                 call eax
// 0062fa78  84db                 test bl, bl
// 0062fa7a  7452                 je 0x62face
// 0062fa7c  8d4c240c             lea ecx, [esp + 0xc]
// 0062fa80  51                   push ecx
// 0062fa81  8d4f10               lea ecx, [edi + 0x10]
// 0062fa84  e877b0f9ff           call 0x5cab00
// 0062fa89  8b742410             mov esi, dword ptr [esp + 0x10]
// 0062fa8d  8b10                 mov edx, dword ptr [eax]
// 0062fa8f  8bbac8020000         mov edi, dword ptr [edx + 0x2c8]
// 0062fa95  85f6                 test esi, esi
// 0062fa97  742a                 je 0x62fac3
// 0062fa99  8d4604               lea eax, [esi + 4]
// 0062fa9c  83c9ff               or ecx, 0xffffffff
// 0062fa9f  f00fc108             lock xadd dword ptr [eax], ecx
// 0062faa3  751e                 jne 0x62fac3
// 0062faa5  8b16                 mov edx, dword ptr [esi]
// 0062faa7  8b4204               mov eax, dword ptr [edx + 4]
// 0062faaa  8bce                 mov ecx, esi
// 0062faac  ffd0                 call eax
// 0062faae  8d4e08               lea ecx, [esi + 8]
// 0062fab1  83caff               or edx, 0xffffffff
// 0062fab4  f00fc111             lock xadd dword ptr [ecx], edx
// 0062fab8  7509                 jne 0x62fac3
// 0062faba  8b06                 mov eax, dword ptr [esi]
// 0062fabc  8b5008               mov edx, dword ptr [eax + 8]
// 0062fabf  8bce                 mov ecx, esi
// 0062fac1  ffd2                 call edx
// 0062fac3  8bc7                 mov eax, edi
// 0062fac5  5f                   pop edi
// 0062fac6  5e                   pop esi
// 0062fac7  5b                   pop ebx
// 0062fac8  83c408               add esp, 8
// 0062facb  c20400               ret 4
// 0062face  5f                   pop edi
// 0062facf  5e                   pop esi
// 0062fad0  33c0                 xor eax, eax
// 0062fad2  5b                   pop ebx
// 0062fad3  83c408               add esp, 8
// 0062fad6  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;

    void release();
};

__forceinline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0)
    {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Object
{
    char padding[0x2C8];
    void* value;
};

struct Shared
{
    Object* object;
    Control* control;

    ~Shared();
};

__forceinline Shared::~Shared()
{
    if (control)
        control->release();
}

struct Weak
{
    Shared lock();
};

struct S
{
    char padding[0x10];
    Weak parent;

    void* f(int argument);
};

void* S::f(int argument)
{
    if (!argument && parent.lock().object)
        return parent.lock().object->value;
    return 0;
}
