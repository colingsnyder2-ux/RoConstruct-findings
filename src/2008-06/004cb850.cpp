// from server: 100% by king_originala
// roc 2008-06 004cb850  unit: RBX::VInstance::?$NonFactoryProduct  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cb850
//
// 004cb850  85c9                 test ecx, ecx
// 004cb852  7405                 je 0x4cb859
// 004cb854  8d41f4               lea eax, [ecx - 0xc]
// 004cb857  eb02                 jmp 0x4cb85b
// 004cb859  33c0                 xor eax, eax
// 004cb85b  56                   push esi
// 004cb85c  57                   push edi
// 004cb85d  8b7804               mov edi, dword ptr [eax + 4]
// 004cb860  85c9                 test ecx, ecx
// 004cb862  7405                 je 0x4cb869
// 004cb864  8d41f4               lea eax, [ecx - 0xc]
// 004cb867  eb02                 jmp 0x4cb86b
// 004cb869  33c0                 xor eax, eax
// 004cb86b  8b5004               mov edx, dword ptr [eax + 4]
// 004cb86e  85c9                 test ecx, ecx
// 004cb870  7405                 je 0x4cb877
// 004cb872  8d41f4               lea eax, [ecx - 0xc]
// 004cb875  eb02                 jmp 0x4cb879
// 004cb877  33c0                 xor eax, eax
// 004cb879  8b4004               mov eax, dword ptr [eax + 4]
// 004cb87c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004cb880  83c050               add eax, 0x50
// 004cb883  85f6                 test esi, esi
// 004cb885  7405                 je 0x4cb88c
// 004cb887  8d4e50               lea ecx, [esi + 0x50]
// 004cb88a  eb02                 jmp 0x4cb88e
// 004cb88c  33c9                 xor ecx, ecx
// 004cb88e  83c758               add edi, 0x58
// 004cb891  57                   push edi
// 004cb892  83c254               add edx, 0x54
// 004cb895  52                   push edx
// 004cb896  50                   push eax
// 004cb897  51                   push ecx
// 004cb898  e843b1ffff           call 0x4c69e0
// 004cb89d  8b7604               mov esi, dword ptr [esi + 4]
// 004cb8a0  83c410               add esp, 0x10
// 004cb8a3  85f6                 test esi, esi
// 004cb8a5  742a                 je 0x4cb8d1
// 004cb8a7  8d4604               lea eax, [esi + 4]
// 004cb8aa  83c9ff               or ecx, 0xffffffff
// 004cb8ad  f00fc108             lock xadd dword ptr [eax], ecx
// 004cb8b1  751e                 jne 0x4cb8d1
// 004cb8b3  8b16                 mov edx, dword ptr [esi]
// 004cb8b5  8b4204               mov eax, dword ptr [edx + 4]
// 004cb8b8  8bce                 mov ecx, esi
// 004cb8ba  ffd0                 call eax
// 004cb8bc  8d4e08               lea ecx, [esi + 8]
// 004cb8bf  83caff               or edx, 0xffffffff
// 004cb8c2  f00fc111             lock xadd dword ptr [ecx], edx
// 004cb8c6  7509                 jne 0x4cb8d1
// 004cb8c8  8b06                 mov eax, dword ptr [esi]
// 004cb8ca  8b5008               mov edx, dword ptr [eax + 8]
// 004cb8cd  8bce                 mov ecx, esi
// 004cb8cf  ffd2                 call edx
// 004cb8d1  5f                   pop edi
// 004cb8d2  5e                   pop esi
// 004cb8d3  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct RefCount {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Object {
    char padding[0x50];
    long x;
    long y;
    long z;
};

struct Source {
    long reserved;
    RefCount* control;
    char padding[0x48];
    long value;
};

struct Context {
    long reserved;
    Object* object;
    long padding;
};

extern "C" void __cdecl transfer(long*, long*, long*, long*);

struct S {
    void f(Source*);
};

void S::f(Source* source)
{
    Object* z = (this ? reinterpret_cast<Context*>(
        reinterpret_cast<char*>(this) - 12) : 0)->object;
    Object* y = (this ? reinterpret_cast<Context*>(
        reinterpret_cast<char*>(this) - 12) : 0)->object;
    long* x = &(this ? reinterpret_cast<Context*>(
        reinterpret_cast<char*>(this) - 12) : 0)->object->x;

    long* value = source ? &source->value : 0;
    transfer(value, x, &y->y, &z->z);

    RefCount* control = source->control;
    if (control && _InterlockedDecrement(&control->strong) == 0) {
        control->dispose();
        if (_InterlockedDecrement(&control->weak) == 0)
            control->destroy();
    }
}
