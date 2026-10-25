// from server: 100% by king_originala
// roc 2008-06 00603f00  unit: RBX::UnifiedImageWidget  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00603f00
//
// 00603f00  6aff                 push -1
// 00603f02  68fb7b7c00           push 0x7c7bfb
// 00603f07  64a100000000         mov eax, dword ptr fs:[0]
// 00603f0d  50                   push eax
// 00603f0e  64892500000000       mov dword ptr fs:[0], esp
// 00603f15  83ec18               sub esp, 0x18
// 00603f18  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00603f1c  53                   push ebx
// 00603f1d  55                   push ebp
// 00603f1e  56                   push esi
// 00603f1f  33f6                 xor esi, esi
// 00603f21  8974240c             mov dword ptr [esp + 0xc], esi
// 00603f25  3bce                 cmp ecx, esi
// 00603f27  7439                 je 0x603f62
// 00603f29  8d44241c             lea eax, [esp + 0x1c]
// 00603f2d  50                   push eax
// 00603f2e  e85d70e2ff           call 0x42af90
// 00603f33  50                   push eax
// 00603f34  8d4c2418             lea ecx, [esp + 0x18]
// 00603f38  51                   push ecx
// 00603f39  c744243401000000     mov dword ptr [esp + 0x34], 1
// 00603f41  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00603f49  e872dbffff           call 0x601ac0
// 00603f4e  83c408               add esp, 8
// 00603f51  8d5e03               lea ebx, [esi + 3]
// 00603f54  8b742410             mov esi, dword ptr [esp + 0x10]
// 00603f58  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 00603f60  eb11                 jmp 0x603f73
// 00603f62  8974240c             mov dword ptr [esp + 0xc], esi
// 00603f66  89742410             mov dword ptr [esp + 0x10], esi
// 00603f6a  8d44240c             lea eax, [esp + 0xc]
// 00603f6e  bb04000000           mov ebx, 4
// 00603f73  8b10                 mov edx, dword ptr [eax]
// 00603f75  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00603f79  895500               mov dword ptr [ebp], edx
// 00603f7c  8b4004               mov eax, dword ptr [eax + 4]
// 00603f7f  894504               mov dword ptr [ebp + 4], eax
// 00603f82  85c0                 test eax, eax
// 00603f84  740c                 je 0x603f92
// 00603f86  83c004               add eax, 4
// 00603f89  b901000000           mov ecx, 1
// 00603f8e  f00fc108             lock xadd dword ptr [eax], ecx
// 00603f92  83cb08               or ebx, 8
// 00603f95  f6c304               test bl, 4
// 00603f98  7435                 je 0x603fcf
// 00603f9a  83e3fb               and ebx, 0xfffffffb
// 00603f9d  895c240c             mov dword ptr [esp + 0xc], ebx
// 00603fa1  85f6                 test esi, esi
// 00603fa3  742a                 je 0x603fcf
// 00603fa5  8d5604               lea edx, [esi + 4]
// 00603fa8  83c8ff               or eax, 0xffffffff
// 00603fab  f00fc102             lock xadd dword ptr [edx], eax
// 00603faf  751e                 jne 0x603fcf
// 00603fb1  8b16                 mov edx, dword ptr [esi]
// 00603fb3  8b4204               mov eax, dword ptr [edx + 4]
// 00603fb6  8bce                 mov ecx, esi
// 00603fb8  ffd0                 call eax
// 00603fba  8d4e08               lea ecx, [esi + 8]
// 00603fbd  83caff               or edx, 0xffffffff
// 00603fc0  f00fc111             lock xadd dword ptr [ecx], edx
// 00603fc4  7509                 jne 0x603fcf
// 00603fc6  8b06                 mov eax, dword ptr [esi]
// 00603fc8  8b5008               mov edx, dword ptr [eax + 8]
// 00603fcb  8bce                 mov ecx, esi
// 00603fcd  ffd2                 call edx
// 00603fcf  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 00603fd7  f6c302               test bl, 2
// 00603fda  7439                 je 0x604015
// 00603fdc  8b742418             mov esi, dword ptr [esp + 0x18]
// 00603fe0  83e3fd               and ebx, 0xfffffffd
// 00603fe3  895c240c             mov dword ptr [esp + 0xc], ebx
// 00603fe7  85f6                 test esi, esi
// 00603fe9  742a                 je 0x604015
// 00603feb  8d4604               lea eax, [esi + 4]
// 00603fee  83c9ff               or ecx, 0xffffffff
// 00603ff1  f00fc108             lock xadd dword ptr [eax], ecx
// 00603ff5  751e                 jne 0x604015
// 00603ff7  8b16                 mov edx, dword ptr [esi]
// 00603ff9  8b4204               mov eax, dword ptr [edx + 4]
// 00603ffc  8bce                 mov ecx, esi
// 00603ffe  ffd0                 call eax
// 00604000  8d4e08               lea ecx, [esi + 8]
// 00604003  83caff               or edx, 0xffffffff
// 00604006  f00fc111             lock xadd dword ptr [ecx], edx
// 0060400a  7509                 jne 0x604015
// 0060400c  8b06                 mov eax, dword ptr [esi]
// 0060400e  8b5008               mov edx, dword ptr [eax + 8]
// 00604011  8bce                 mov ecx, esi
// 00604013  ffd2                 call edx
// 00604015  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0060401d  f6c301               test bl, 1
// 00604020  7439                 je 0x60405b
// 00604022  8b742420             mov esi, dword ptr [esp + 0x20]
// 00604026  83e3fe               and ebx, 0xfffffffe
// 00604029  895c240c             mov dword ptr [esp + 0xc], ebx
// 0060402d  85f6                 test esi, esi
// 0060402f  742a                 je 0x60405b
// 00604031  8d4604               lea eax, [esi + 4]
// 00604034  83c9ff               or ecx, 0xffffffff
// 00604037  f00fc108             lock xadd dword ptr [eax], ecx
// 0060403b  751e                 jne 0x60405b
// 0060403d  8b16                 mov edx, dword ptr [esi]
// 0060403f  8b4204               mov eax, dword ptr [edx + 4]
// 00604042  8bce                 mov ecx, esi
// 00604044  ffd0                 call eax
// 00604046  8d4e08               lea ecx, [esi + 8]
// 00604049  83caff               or edx, 0xffffffff
// 0060404c  f00fc111             lock xadd dword ptr [ecx], edx
// 00604050  7509                 jne 0x60405b
// 00604052  8b06                 mov eax, dword ptr [esi]
// 00604054  8b5008               mov edx, dword ptr [eax + 8]
// 00604057  8bce                 mov ecx, esi
// 00604059  ffd2                 call edx
// 0060405b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0060405f  5e                   pop esi
// 00604060  8bc5                 mov eax, ebp
// 00604062  5d                   pop ebp
// 00604063  5b                   pop ebx
// 00604064  64890d00000000       mov dword ptr fs:[0], ecx
// 0060406b  83c424               add esp, 0x24
// 0060406e  c3                   ret 

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

struct BaseTag;
struct ImageTag;

template<class T>
struct Pointer {
    T* object;
    Control* control;

    Pointer();
    Pointer(const Pointer&);
    ~Pointer();
};

template<class T>
inline Pointer<T>::Pointer() : object(0), control(0)
{
}

template<class T>
inline Pointer<T>::Pointer(const Pointer& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

template<class T>
inline Pointer<T>::~Pointer()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

typedef Pointer<BaseTag> BasePointer;
typedef Pointer<ImageTag> ImagePointer;

struct Source {
    BasePointer get();
};

ImagePointer __cdecl convert(const BasePointer&);

ImagePointer __cdecl makeImagePointer(Source* source)
{
    return source ? convert(source->get()) : ImagePointer();
}
