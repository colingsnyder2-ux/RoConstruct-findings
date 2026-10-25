// from server: 100% by colin
// roc 2008-06 004b3b40  unit: RBX::Network::VMarker::?$SignalDesc  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b3b40
//
// 004b3b40  64a100000000         mov eax, dword ptr fs:[0]
// 004b3b46  6aff                 push -1
// 004b3b48  6868917d00           push 0x7d9168
// 004b3b4d  50                   push eax
// 004b3b4e  64892500000000       mov dword ptr fs:[0], esp
// 004b3b55  83ec08               sub esp, 8
// 004b3b58  56                   push esi
// 004b3b59  8bf1                 mov esi, ecx
// 004b3b5b  e8206afeff           call 0x49a580
// 004b3b60  85c0                 test eax, eax
// 004b3b62  0f85ac000000         jne 0x4b3c14
// 004b3b68  53                   push ebx
// 004b3b69  8d442408             lea eax, [esp + 8]
// 004b3b6d  57                   push edi
// 004b3b6e  50                   push eax
// 004b3b6f  e8dcc8fdff           call 0x490450
// 004b3b74  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004b3b78  6890029700           push 0x970290
// 004b3b7d  68f0694900           push 0x4969f0
// 004b3b82  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004b3b8a  e8a1370a00           call 0x557330
// 004b3b8f  83c40c               add esp, 0xc
// 004b3b92  e85927feff           call 0x4962f0
// 004b3b97  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 004b3b9d  2b8e9c010000         sub ecx, dword ptr [esi + 0x19c]
// 004b3ba3  8bf8                 mov edi, eax
// 004b3ba5  c1f903               sar ecx, 3
// 004b3ba8  3bf9                 cmp edi, ecx
// 004b3baa  7206                 jb 0x4b3bb2
// 004b3bac  ff1590288000         call dword ptr [0x802890]
// 004b3bb2  8b969c010000         mov edx, dword ptr [esi + 0x19c]
// 004b3bb8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b3bbc  8d04fa               lea eax, [edx + edi*8]
// 004b3bbf  8d542410             lea edx, [esp + 0x10]
// 004b3bc3  8908                 mov dword ptr [eax], ecx
// 004b3bc5  52                   push edx
// 004b3bc6  8d4804               lea ecx, [eax + 4]
// 004b3bc9  e8e2e9f4ff           call 0x4025b0
// 004b3bce  56                   push esi
// 004b3bcf  8bcb                 mov ecx, ebx
// 004b3bd1  e81a6d0a00           call 0x55a8f0
// 004b3bd6  8b742410             mov esi, dword ptr [esp + 0x10]
// 004b3bda  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004b3be2  85f6                 test esi, esi
// 004b3be4  742a                 je 0x4b3c10
// 004b3be6  8d4604               lea eax, [esi + 4]
// 004b3be9  83c9ff               or ecx, 0xffffffff
// 004b3bec  f00fc108             lock xadd dword ptr [eax], ecx
// 004b3bf0  751e                 jne 0x4b3c10
// 004b3bf2  8b16                 mov edx, dword ptr [esi]
// 004b3bf4  8b4204               mov eax, dword ptr [edx + 4]
// 004b3bf7  8bce                 mov ecx, esi
// 004b3bf9  ffd0                 call eax
// 004b3bfb  8d4e08               lea ecx, [esi + 8]
// 004b3bfe  83caff               or edx, 0xffffffff
// 004b3c01  f00fc111             lock xadd dword ptr [ecx], edx
// 004b3c05  7509                 jne 0x4b3c10
// 004b3c07  8b06                 mov eax, dword ptr [esi]
// 004b3c09  8b5008               mov edx, dword ptr [eax + 8]
// 004b3c0c  8bce                 mov ecx, esi
// 004b3c0e  ffd2                 call edx
// 004b3c10  5f                   pop edi
// 004b3c11  8bc3                 mov eax, ebx
// 004b3c13  5b                   pop ebx
// 004b3c14  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b3c18  5e                   pop esi
// 004b3c19  64890d00000000       mov dword ptr fs:[0], ecx
// 004b3c20  83c414               add esp, 0x14
// 004b3c23  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct S;

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void release();
};

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Reference {
    Control* control;
    Reference& operator=(const Reference&);
};

struct Object {
    void attach(S*);
};

struct Pair {
    Object* object;
    Reference reference;
    ~Pair();
};

inline Pair::~Pair()
{
    if (reference.control)
        reference.control->release();
}

Pair __cdecl make_pair();
unsigned int __cdecl get_index();
void __cdecl cleanup();
extern unsigned int cleanup_data;
void __cdecl register_cleanup(void (__cdecl*)(), unsigned int*);

struct S {
    unsigned char padding[0x19c];
    Pair* begin;
    Pair* end;

    Object* lookup();
    Object* get();
};

Object* S::get()
{
    Object* result = lookup();
    if (!result) {
        Pair value = make_pair();
        result = value.object;
        register_cleanup(cleanup, &cleanup_data);
        unsigned int index = get_index();
        if (index >= static_cast<unsigned int>(end - begin))
            _invalid_parameter_noinfo();
        Pair* slot = begin + index;
        slot->object = value.object;
        slot->reference = value.reference;
        result->attach(this);
    }
    return result;
}
