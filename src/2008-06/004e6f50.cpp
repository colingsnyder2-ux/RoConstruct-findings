// from server: 100% by king_originala
// roc 2008-06 004e6f50  unit: RBX::ViewNew::PartChunk  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e6f50
//
// 004e6f50  6aff                 push -1
// 004e6f52  684ba57c00           push 0x7ca54b
// 004e6f57  64a100000000         mov eax, dword ptr fs:[0]
// 004e6f5d  50                   push eax
// 004e6f5e  64892500000000       mov dword ptr fs:[0], esp
// 004e6f65  83ec08               sub esp, 8
// 004e6f68  56                   push esi
// 004e6f69  57                   push edi
// 004e6f6a  6a18                 push 0x18
// 004e6f6c  8bf1                 mov esi, ecx
// 004e6f6e  e8bd150200           call 0x508530
// 004e6f73  8bf8                 mov edi, eax
// 004e6f75  83c404               add esp, 4
// 004e6f78  897c2408             mov dword ptr [esp + 8], edi
// 004e6f7c  33c0                 xor eax, eax
// 004e6f7e  89442418             mov dword ptr [esp + 0x18], eax
// 004e6f82  3bf8                 cmp edi, eax
// 004e6f84  7450                 je 0x4e6fd6
// 004e6f86  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004e6f89  3bc8                 cmp ecx, eax
// 004e6f8b  7405                 je 0x4e6f92
// 004e6f8d  e8beffffff           call 0x4e6f50
// 004e6f92  50                   push eax
// 004e6f93  8b06                 mov eax, dword ptr [esi]
// 004e6f95  50                   push eax
// 004e6f96  51                   push ecx
// 004e6f97  89642418             mov dword ptr [esp + 0x18], esp
// 004e6f9b  8bc4                 mov eax, esp
// 004e6f9d  68702a5000           push 0x502a70
// 004e6fa2  6820084f00           push 0x4f0820
// 004e6fa7  6a01                 push 1
// 004e6fa9  6a04                 push 4
// 004e6fab  8d4e10               lea ecx, [esi + 0x10]
// 004e6fae  51                   push ecx
// 004e6faf  50                   push eax
// 004e6fb0  e801ac1b00           call 0x6a1bb6
// 004e6fb5  d94604               fld dword ptr [esi + 4]
// 004e6fb8  83ec0c               sub esp, 0xc
// 004e6fbb  8bc4                 mov eax, esp
// 004e6fbd  d918                 fstp dword ptr [eax]
// 004e6fbf  8bcf                 mov ecx, edi
// 004e6fc1  d94608               fld dword ptr [esi + 8]
// 004e6fc4  89642424             mov dword ptr [esp + 0x24], esp
// 004e6fc8  d95804               fstp dword ptr [eax + 4]
// 004e6fcb  d9460c               fld dword ptr [esi + 0xc]
// 004e6fce  d95808               fstp dword ptr [eax + 8]
// 004e6fd1  e82afeffff           call 0x4e6e00
// 004e6fd6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e6fda  5f                   pop edi
// 004e6fdb  64890d00000000       mov dword ptr fs:[0], ecx
// 004e6fe2  5e                   pop esi
// 004e6fe3  83c414               add esp, 0x14
// 004e6fe6  c3                   ret 

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

extern "C" void __stdcall copy_element(void*, const void*);
extern "C" void __stdcall destroy_element(void*);
extern "C" void __stdcall copy_array(
    void*, const void*, unsigned int, int,
    void (__stdcall *)(void*, const void*),
    void (__stdcall *)(void*));

struct Handle {
    unsigned int value;
    Handle(const Handle&);
};

inline Handle::Handle(const Handle& other)
{
    copy_array(this, &other, 4, 1, copy_element, destroy_element);
}

struct Vector {
    float x, y, z;
    Vector(const Vector&);
};

inline Vector::Vector(const Vector& other)
    : x(other.x), y(other.y), z(other.z)
{
}

struct S {
    int value;
    Vector position;
    Handle handle;
    S* child;

    S(Vector, Handle, int, S*);
    S* clone();
};

S* S::clone()
{
    return new S(position, handle, value, child ? child->clone() : 0);
}
