// from server: 91% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_dragvector_bfeed95c87d22232.cpp

// Candidate translation unit (score above; library headers required).
#include <vector>
#include <boost/shared_ptr.hpp>
// from server: 87% by king_originala
// roc 2008-06 00665f20  unit: RBX::PartDragTool  size: 479 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00665f20
//
// 00665f20  6aff                 push -1
// 00665f22  6857c17d00           push 0x7dc157
// 00665f27  64a100000000         mov eax, dword ptr fs:[0]
// 00665f2d  50                   push eax
// 00665f2e  64892500000000       mov dword ptr fs:[0], esp
// 00665f35  83ec1c               sub esp, 0x1c
// 00665f38  53                   push ebx
// 00665f39  56                   push esi
// 00665f3a  8bf1                 mov esi, ecx
// 00665f3c  57                   push edi
// 00665f3d  8974240c             mov dword ptr [esp + 0xc], esi
// 00665f41  8b442440             mov eax, dword ptr [esp + 0x40]
// 00665f45  33db                 xor ebx, ebx
// 00665f47  50                   push eax
// 00665f48  895c2434             mov dword ptr [esp + 0x34], ebx
// 00665f4c  e89ffafaff           call 0x6159f0
// 00665f51  c706b4cb8400         mov dword ptr [esi], 0x84cbb4
// 00665f57  c746049ccb8400       mov dword ptr [esi + 4], 0x84cb9c
// 00665f5e  895e1c               mov dword ptr [esi + 0x1c], ebx
// 00665f61  895e20               mov dword ptr [esi + 0x20], ebx
// 00665f64  8b442448             mov eax, dword ptr [esp + 0x48]
// 00665f68  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00665f6c  894e24               mov dword ptr [esi + 0x24], ecx
// 00665f6f  894628               mov dword ptr [esi + 0x28], eax
// 00665f72  3bc3                 cmp eax, ebx
// 00665f74  740c                 je 0x665f82
// 00665f76  83c004               add eax, 4
// 00665f79  ba01000000           mov edx, 1
// 00665f7e  f00fc110             lock xadd dword ptr [eax], edx
// 00665f82  55                   push ebp
// 00665f83  d9ee                 fldz 
// 00665f85  8b442440             mov eax, dword ptr [esp + 0x40]
// 00665f89  d9562c               fst dword ptr [esi + 0x2c]
// 00665f8c  d95e30               fstp dword ptr [esi + 0x30]
// 00665f8f  6a70                 push 0x70
// 00665f91  885e34               mov byte ptr [esi + 0x34], bl
// 00665f94  d900                 fld dword ptr [eax]
// 00665f96  d95e38               fstp dword ptr [esi + 0x38]
// 00665f99  c644243804           mov byte ptr [esp + 0x38], 4
// 00665f9e  d94004               fld dword ptr [eax + 4]
// 00665fa1  d95e3c               fstp dword ptr [esi + 0x3c]
// 00665fa4  d94008               fld dword ptr [eax + 8]
// 00665fa7  d95e40               fstp dword ptr [esi + 0x40]
// 00665faa  e871a90300           call 0x6a0920
// 00665faf  83c404               add esp, 4
// 00665fb2  89442440             mov dword ptr [esp + 0x40], eax
// 00665fb6  c644243405           mov byte ptr [esp + 0x34], 5
// 00665fbb  3bc3                 cmp eax, ebx
// 00665fbd  740b                 je 0x665fca
// 00665fbf  8bc8                 mov ecx, eax
// 00665fc1  e83a690000           call 0x66c900
// 00665fc6  8be8                 mov ebp, eax
// 00665fc8  eb02                 jmp 0x665fcc
// 00665fca  33ed                 xor ebp, ebp
// 00665fcc  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 00665fcf  c644243404           mov byte ptr [esp + 0x34], 4
// 00665fd4  3bef                 cmp ebp, edi
// 00665fd6  7414                 je 0x665fec
// 00665fd8  3bfb                 cmp edi, ebx
// 00665fda  7410                 je 0x665fec
// 00665fdc  8bcf                 mov ecx, edi
// 00665fde  e81d640000           call 0x66c400
// 00665fe3  57                   push edi
// 00665fe4  e891a60300           call 0x6a067a
// 00665fe9  83c404               add esp, 4
// 00665fec  6a04                 push 4
// 00665fee  896e1c               mov dword ptr [esi + 0x1c], ebp
// 00665ff1  e82aa90300           call 0x6a0920
// 00665ff6  83c404               add esp, 4
// 00665ff9  3bc3                 cmp eax, ebx
// 00665ffb  7408                 je 0x666005
// 00665ffd  8d4c2414             lea ecx, [esp + 0x14]
// 00666001  8908                 mov dword ptr [eax], ecx
// 00666003  eb02                 jmp 0x666007
// 00666005  33c0                 xor eax, eax
// 00666007  89442414             mov dword ptr [esp + 0x14], eax
// 0066600b  895c2420             mov dword ptr [esp + 0x20], ebx
// 0066600f  895c2424             mov dword ptr [esp + 0x24], ebx
// 00666013  895c2428             mov dword ptr [esp + 0x28], ebx
// 00666017  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0066601b  8d542440             lea edx, [esp + 0x40]
// 0066601f  52                   push edx
// 00666020  8d4c2418             lea ecx, [esp + 0x18]
// 00666024  c644243807           mov byte ptr [esp + 0x38], 7
// 00666029  897c2444             mov dword ptr [esp + 0x44], edi
// 0066602d  e86eb3dbff           call 0x4213a0
// 00666032  6a2c                 push 0x2c
// 00666034  e8e7a80300           call 0x6a0920
// 00666039  83c404               add esp, 4
// 0066603c  89442440             mov dword ptr [esp + 0x40], eax
// 00666040  c644243408           mov byte ptr [esp + 0x34], 8
// 00666045  3bc3                 cmp eax, ebx
// 00666047  7416                 je 0x66605f
// 00666049  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0066604d  51                   push ecx
// 0066604e  8d542418             lea edx, [esp + 0x18]
// 00666052  52                   push edx
// 00666053  57                   push edi
// 00666054  8bc8                 mov ecx, eax
// 00666056  e8e584faff           call 0x60e540
// 0066605b  8bf8                 mov edi, eax
// 0066605d  eb02                 jmp 0x666061
// 0066605f  33ff                 xor edi, edi
// 00666061  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 00666064  c644243407           mov byte ptr [esp + 0x34], 7
// 00666069  3bfd                 cmp edi, ebp
// 0066606b  7414                 je 0x666081
// 0066606d  3beb                 cmp ebp, ebx
// 0066606f  7410                 je 0x666081
// 00666071  8bcd                 mov ecx, ebp
// 00666073  e88886faff           call 0x60e700
// 00666078  55                   push ebp
// 00666079  e8fca50300           call 0x6a067a
// 0066607e  83c404               add esp, 4
// 00666081  8b442420             mov eax, dword ptr [esp + 0x20]
// 00666085  897e20               mov dword ptr [esi + 0x20], edi
// 00666088  5d                   pop ebp
// 00666089  3bc3                 cmp eax, ebx
// 0066608b  7409                 je 0x666096
// 0066608d  50                   push eax
// 0066608e  e8e7a50300           call 0x6a067a
// 00666093  83c404               add esp, 4
// 00666096  8b442410             mov eax, dword ptr [esp + 0x10]
// 0066609a  50                   push eax
// 0066609b  895c2420             mov dword ptr [esp + 0x20], ebx
// 0066609f  895c2424             mov dword ptr [esp + 0x24], ebx
// 006660a3  895c2428             mov dword ptr [esp + 0x28], ebx
// 006660a7  e8cea50300           call 0x6a067a
// 006660ac  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 006660b0  83c404               add esp, 4
// 006660b3  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 006660bb  3bfb                 cmp edi, ebx
// 006660bd  742a                 je 0x6660e9
// 006660bf  8d4f04               lea ecx, [edi + 4]
// 006660c2  83caff               or edx, 0xffffffff
// 006660c5  f00fc111             lock xadd dword ptr [ecx], edx
// 006660c9  751e                 jne 0x6660e9
// 006660cb  8b07                 mov eax, dword ptr [edi]
// 006660cd  8b5004               mov edx, dword ptr [eax + 4]
// 006660d0  8bcf                 mov ecx, edi
// 006660d2  ffd2                 call edx
// 006660d4  8d4708               lea eax, [edi + 8]
// 006660d7  83c9ff               or ecx, 0xffffffff
// 006660da  f00fc108             lock xadd dword ptr [eax], ecx
// 006660de  7509                 jne 0x6660e9
// 006660e0  8b17                 mov edx, dword ptr [edi]
// 006660e2  8b4208               mov eax, dword ptr [edx + 8]
// 006660e5  8bcf                 mov ecx, edi
// 006660e7  ffd0                 call eax
// 006660e9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006660ed  5f                   pop edi
// 006660ee  8bc6                 mov eax, esi
// 006660f0  5e                   pop esi
// 006660f1  5b                   pop ebx
// 006660f2  64890d00000000       mov dword ptr fs:[0], ecx
// 006660f9  83c428               add esp, 0x28
// 006660fc  c21400               ret 0x14

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

typedef boost::shared_ptr<void> Shared;

struct Vector3
{
    float x, y, z;
};

struct Base
{
    unsigned int table1, table2;
    int a, b, c;
    unsigned char flag;
    int argument;
    Base(int);
    ~Base();
};

struct First
{
    unsigned char data[112];
    First();
    ~First();
};

struct List:std::vector<int>{void append(int*);};

struct Second
{
    unsigned char data[44];
    Second(int, List*, int);
    ~Second();
};

template<class T> struct Owner
{
    T* pointer;
    Owner();
    Owner(int);
    ~Owner();
    void reset(T*);
};

template<class T>
__forceinline Owner<T>::Owner() : pointer(0) {}

template<class T>
__forceinline Owner<T>::Owner(int) : pointer(0) {}

template<class T>
__forceinline Owner<T>::~Owner()
{
    delete pointer;
}

template<class T>
__forceinline void Owner<T>::reset(T* value)
{
    if (value != pointer && pointer)
        delete pointer;
    pointer = value;
}

struct PartDragTool : Base
{
    Owner<First> first;
    Owner<Second> second;
    Shared shared;
    float x, y;
    unsigned char active;
    Vector3 position;
    PartDragTool(int, const Vector3&, int, Shared);
};

PartDragTool::PartDragTool(int object, const Vector3& point,
                          int argument, Shared value)
    : Base(argument),
      first((table1 = 0x84cbb4, table2 = 0x84cb9c, 0)),
      shared(value), x(0.0f), y(0.0f), active(0)
{
    position.x = point.x;
    position.y = point.y;
    position.z = point.z;

    first.reset(new First);

    List objects;
    int entry = object;
    objects.append(&entry);

    second.reset(new Second(object, &objects, argument));
}
