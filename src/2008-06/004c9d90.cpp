// from server: 100% by king_originala
// roc 2008-06 004c9d90  unit: RBX::VInstance::?$NonFactoryProduct  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c9d90
//
// 004c9d90  6aff                 push -1
// 004c9d92  6838077d00           push 0x7d0738
// 004c9d97  64a100000000         mov eax, dword ptr fs:[0]
// 004c9d9d  50                   push eax
// 004c9d9e  64892500000000       mov dword ptr fs:[0], esp
// 004c9da5  51                   push ecx
// 004c9da6  53                   push ebx
// 004c9da7  55                   push ebp
// 004c9da8  56                   push esi
// 004c9da9  57                   push edi
// 004c9daa  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004c9dae  8b07                 mov eax, dword ptr [edi]
// 004c9db0  8bf1                 mov esi, ecx
// 004c9db2  8906                 mov dword ptr [esi], eax
// 004c9db4  8b4704               mov eax, dword ptr [edi + 4]
// 004c9db7  89742410             mov dword ptr [esp + 0x10], esi
// 004c9dbb  894604               mov dword ptr [esi + 4], eax
// 004c9dbe  85c0                 test eax, eax
// 004c9dc0  740c                 je 0x4c9dce
// 004c9dc2  83c004               add eax, 4
// 004c9dc5  b901000000           mov ecx, 1
// 004c9dca  f00fc108             lock xadd dword ptr [eax], ecx
// 004c9dce  dd4708               fld qword ptr [edi + 8]
// 004c9dd1  8d5f10               lea ebx, [edi + 0x10]
// 004c9dd4  dd5e08               fstp qword ptr [esi + 8]
// 004c9dd7  8d6e10               lea ebp, [esi + 0x10]
// 004c9dda  53                   push ebx
// 004c9ddb  8bcd                 mov ecx, ebp
// 004c9ddd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004c9de5  e836940400           call 0x513220
// 004c9dea  d94324               fld dword ptr [ebx + 0x24]
// 004c9ded  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004c9df1  d95d24               fstp dword ptr [ebp + 0x24]
// 004c9df4  d94328               fld dword ptr [ebx + 0x28]
// 004c9df7  8bc6                 mov eax, esi
// 004c9df9  d95d28               fstp dword ptr [ebp + 0x28]
// 004c9dfc  d9432c               fld dword ptr [ebx + 0x2c]
// 004c9dff  d95d2c               fstp dword ptr [ebp + 0x2c]
// 004c9e02  d94740               fld dword ptr [edi + 0x40]
// 004c9e05  d95e40               fstp dword ptr [esi + 0x40]
// 004c9e08  8b5744               mov edx, dword ptr [edi + 0x44]
// 004c9e0b  895644               mov dword ptr [esi + 0x44], edx
// 004c9e0e  d94748               fld dword ptr [edi + 0x48]
// 004c9e11  5f                   pop edi
// 004c9e12  d95e48               fstp dword ptr [esi + 0x48]
// 004c9e15  5e                   pop esi
// 004c9e16  5d                   pop ebp
// 004c9e17  5b                   pop ebx
// 004c9e18  64890d00000000       mov dword ptr fs:[0], ecx
// 004c9e1f  83c410               add esp, 0x10
// 004c9e22  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

__forceinline void increment(volatile long* counter)
{
    _InterlockedExchangeAdd(counter, 1);
}

struct ControlBlock {
    long reserved;
    volatile long references;
};

struct SharedHandle {
    void* object;
    ControlBlock* control;

    SharedHandle(const SharedHandle&);
    ~SharedHandle();
};

__forceinline SharedHandle::SharedHandle(const SharedHandle& other)
    : object(other.object), control(other.control)
{
    if (control)
        increment(&control->references);
}

struct Matrix {
    float values[9];
    Matrix(const Matrix&);
};

struct Camera {
    Matrix rotation;
    float x;
    float y;
    float z;
};

struct S {
    SharedHandle handle;
    double time;
    Camera camera;
    float value;
    int flags;
    float weight;

    S(const S&);
};

S::S(const S& other)
    : handle(other.handle),
      time(other.time),
      camera(other.camera),
      value(other.value),
      flags(other.flags),
      weight(other.weight)
{
}
