// from server: 83% by colin
// from server: 79% by king_originala
// roc 2008-06 00468e90  unit: DxUserInput  size: 472 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00468e90
//
// 00468e90  6aff                 push -1
// 00468e92  6889377c00           push 0x7c3789
// 00468e97  64a100000000         mov eax, dword ptr fs:[0]
// 00468e9d  50                   push eax
// 00468e9e  64892500000000       mov dword ptr fs:[0], esp
// 00468ea5  51                   push ecx
// 00468ea6  56                   push esi
// 00468ea7  8bf1                 mov esi, ecx
// 00468ea9  57                   push edi
// 00468eaa  8d7e28               lea edi, [esi + 0x28]
// 00468ead  8d462c               lea eax, [esi + 0x2c]
// 00468eb0  89742408             mov dword ptr [esp + 8], esi
// 00468eb4  c70604c48100         mov dword ptr [esi], 0x81c404
// 00468eba  c707f8c38100         mov dword ptr [edi], 0x81c3f8
// 00468ec0  c700ecc38100         mov dword ptr [eax], 0x81c3ec
// 00468ec6  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 00468ecc  c744241406000000     mov dword ptr [esp + 0x14], 6
// 00468ed4  85c9                 test ecx, ecx
// 00468ed6  740c                 je 0x468ee4
// 00468ed8  50                   push eax
// 00468ed9  81c130010000         add ecx, 0x130
// 00468edf  e89ccb1700           call 0x5e5a80
// 00468ee4  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 00468eea  85c0                 test eax, eax
// 00468eec  740c                 je 0x468efa
// 00468eee  57                   push edi
// 00468eef  8d8870010000         lea ecx, [eax + 0x170]
// 00468ef5  e886cb1700           call 0x5e5a80
// 00468efa  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 00468f00  85c0                 test eax, eax
// 00468f02  7424                 je 0x468f28
// 00468f04  8b08                 mov ecx, dword ptr [eax]
// 00468f06  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00468f09  50                   push eax
// 00468f0a  ffd2                 call edx
// 00468f0c  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 00468f12  85c0                 test eax, eax
// 00468f14  7412                 je 0x468f28
// 00468f16  8b08                 mov ecx, dword ptr [eax]
// 00468f18  8b5108               mov edx, dword ptr [ecx + 8]
// 00468f1b  50                   push eax
// 00468f1c  ffd2                 call edx
// 00468f1e  c7867801000000000000 mov dword ptr [esi + 0x178], 0
// 00468f28  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 00468f2e  85c0                 test eax, eax
// 00468f30  7424                 je 0x468f56
// 00468f32  8b08                 mov ecx, dword ptr [eax]
// 00468f34  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00468f37  50                   push eax
// 00468f38  ffd2                 call edx
// 00468f3a  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 00468f40  85c0                 test eax, eax
// 00468f42  7412                 je 0x468f56
// 00468f44  8b08                 mov ecx, dword ptr [eax]
// 00468f46  8b5108               mov edx, dword ptr [ecx + 8]
// 00468f49  50                   push eax
// 00468f4a  ffd2                 call edx
// 00468f4c  c7867c01000000000000 mov dword ptr [esi + 0x17c], 0
// 00468f56  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 00468f5d  741c                 je 0x468f7b
// 00468f5f  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 00468f65  85c0                 test eax, eax
// 00468f67  7412                 je 0x468f7b
// 00468f69  8b08                 mov ecx, dword ptr [eax]
// 00468f6b  8b5108               mov edx, dword ptr [ecx + 8]
// 00468f6e  50                   push eax
// 00468f6f  ffd2                 call edx
// 00468f71  c7867401000000000000 mov dword ptr [esi + 0x174], 0
// 00468f7b  8b4650               mov eax, dword ptr [esi + 0x50]
// 00468f7e  50                   push eax
// 00468f7f  e8c6792300           call 0x6a094a
// 00468f84  8bbe8c010000         mov edi, dword ptr [esi + 0x18c]
// 00468f8a  83c404               add esp, 4
// 00468f8d  c644241405           mov byte ptr [esp + 0x14], 5
// 00468f92  85ff                 test edi, edi
// 00468f94  742a                 je 0x468fc0
// 00468f96  8d4704               lea eax, [edi + 4]
// 00468f99  83c9ff               or ecx, 0xffffffff
// 00468f9c  f00fc108             lock xadd dword ptr [eax], ecx
// 00468fa0  751e                 jne 0x468fc0
// 00468fa2  8b17                 mov edx, dword ptr [edi]
// 00468fa4  8b4204               mov eax, dword ptr [edx + 4]
// 00468fa7  8bcf                 mov ecx, edi
// 00468fa9  ffd0                 call eax
// 00468fab  8d4f08               lea ecx, [edi + 8]
// 00468fae  83caff               or edx, 0xffffffff
// 00468fb1  f00fc111             lock xadd dword ptr [ecx], edx
// 00468fb5  7509                 jne 0x468fc0
// 00468fb7  8b07                 mov eax, dword ptr [edi]
// 00468fb9  8b5008               mov edx, dword ptr [eax + 8]
// 00468fbc  8bcf                 mov ecx, edi
// 00468fbe  ffd2                 call edx
// 00468fc0  8bbe84010000         mov edi, dword ptr [esi + 0x184]
// 00468fc6  c644241404           mov byte ptr [esp + 0x14], 4
// 00468fcb  85ff                 test edi, edi
// 00468fcd  742a                 je 0x468ff9
// 00468fcf  8d4704               lea eax, [edi + 4]
// 00468fd2  83c9ff               or ecx, 0xffffffff
// 00468fd5  f00fc108             lock xadd dword ptr [eax], ecx
// 00468fd9  751e                 jne 0x468ff9
// 00468fdb  8b17                 mov edx, dword ptr [edi]
// 00468fdd  8b4204               mov eax, dword ptr [edx + 4]
// 00468fe0  8bcf                 mov ecx, edi
// 00468fe2  ffd0                 call eax
// 00468fe4  8d4f08               lea ecx, [edi + 8]
// 00468fe7  83caff               or edx, 0xffffffff
// 00468fea  f00fc111             lock xadd dword ptr [ecx], edx
// 00468fee  7509                 jne 0x468ff9
// 00468ff0  8b07                 mov eax, dword ptr [edi]
// 00468ff2  8b5008               mov edx, dword ptr [eax + 8]
// 00468ff5  8bcf                 mov ecx, edi
// 00468ff7  ffd2                 call edx
// 00468ff9  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 00468fff  c644241403           mov byte ptr [esp + 0x14], 3
// 00469004  85c0                 test eax, eax
// 00469006  7408                 je 0x469010
// 00469008  8b08                 mov ecx, dword ptr [eax]
// 0046900a  8b5108               mov edx, dword ptr [ecx + 8]
// 0046900d  50                   push eax
// 0046900e  ffd2                 call edx
// 00469010  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 00469016  c644241402           mov byte ptr [esp + 0x14], 2
// 0046901b  85c0                 test eax, eax
// 0046901d  7408                 je 0x469027
// 0046901f  8b08                 mov ecx, dword ptr [eax]
// 00469021  8b5108               mov edx, dword ptr [ecx + 8]
// 00469024  50                   push eax
// 00469025  ffd2                 call edx
// 00469027  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0046902d  c644241401           mov byte ptr [esp + 0x14], 1
// 00469032  85c0                 test eax, eax
// 00469034  7408                 je 0x46903e
// 00469036  8b08                 mov ecx, dword ptr [eax]
// 00469038  8b5108               mov edx, dword ptr [ecx + 8]
// 0046903b  50                   push eax
// 0046903c  ffd2                 call edx
// 0046903e  8d4634               lea eax, [esi + 0x34]
// 00469041  50                   push eax
// 00469042  ff15dc228000         call dword ptr [0x8022dc]
// 00469048  8bce                 mov ecx, esi
// 0046904a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00469052  e819e7ffff           call 0x467770
// 00469057  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0046905b  5f                   pop edi
// 0046905c  5e                   pop esi
// 0046905d  64890d00000000       mov dword ptr fs:[0], ecx
// 00469064  83c410               add esp, 0x10
// 00469067  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void __stdcall DeleteCriticalSection(void*);
extern "C" void __cdecl sub_006a094a(void*);

struct Base {
    unsigned long vtable;
    char data[0x24];
    ~Base();
};

struct Registry {
    void remove(void*);
};

struct Device;
struct DeviceTable {
    void (__stdcall *slot0)(Device*);
    void (__stdcall *slot1)(Device*);
    unsigned long (__stdcall *release)(Device*);
    void (__stdcall *slots3[5])(Device*);
    void (__stdcall *stop)(Device*);
};

struct Device {
    DeviceTable* table;
};

struct DeviceHolder {
    Device* p;

    void reset()
    {
        if (p) {
            p->table->release(p);
            p = 0;
        }
    }

    ~DeviceHolder()
    {
        if (p)
            p->table->release(p);
    }
};

struct Control {
    virtual void slot0() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long references;
    volatile long weakReferences;
};

struct SharedHolder {
    void* p;
    Control* control;

    ~SharedHolder()
    {
        Control* c = control;
        if (c) {
            if (_InterlockedDecrement(&c->references) == 0) {
                c->dispose();
                if (_InterlockedDecrement(&c->weakReferences) == 0)
                    c->destroy();
            }
        }
    }
};

struct CriticalSection {
    char data[24];

    ~CriticalSection()
    {
        DeleteCriticalSection(this);
    }
};

struct S : Base {
    unsigned long secondaryVtable;
    unsigned long tertiaryVtable;
    unsigned long padding30;
    CriticalSection critical;
    unsigned long padding4c;
    void* buffer;
    char padding54[0x120];
    DeviceHolder device;
    DeviceHolder keyboard;
    DeviceHolder mouse;
    SharedHolder owner;
    SharedHolder service;

    ~S();
};

S::~S()
{
    vtable = 0x81c404;
    secondaryVtable = 0x81c3f8;
    tertiaryVtable = 0x81c3ec;

    if (service.p)
        ((Registry*)((char*)service.p + 0x130))->remove(&tertiaryVtable);
    if (service.p)
        ((Registry*)((char*)service.p + 0x170))->remove(&secondaryVtable);

    if (keyboard.p) {
        keyboard.p->table->stop(keyboard.p);
        keyboard.reset();
    }

    if (mouse.p) {
        mouse.p->table->stop(mouse.p);
        mouse.reset();
    }

    if (device.p)
        device.reset();

    sub_006a094a(buffer);
}
