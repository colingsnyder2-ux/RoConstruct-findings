// from server: 100% by king_originala
// roc 2008-06 005ef180  unit: RBX::$01::?$SurfaceDescriptor  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ef180
//
// 005ef180  56                   push esi
// 005ef181  57                   push edi
// 005ef182  6820b19700           push 0x97b120
// 005ef187  6890d65e00           push 0x5ed690
// 005ef18c  8bf9                 mov edi, ecx
// 005ef18e  e89d81f6ff           call 0x557330
// 005ef193  e898e4ffff           call 0x5ed630
// 005ef198  6a08                 push 8
// 005ef19a  8907                 mov dword ptr [edi], eax
// 005ef19c  8d7704               lea esi, [edi + 4]
// 005ef19f  e87c170b00           call 0x6a0920
// 005ef1a4  83c40c               add esp, 0xc
// 005ef1a7  85c0                 test eax, eax
// 005ef1a9  7411                 je 0x5ef1bc
// 005ef1ab  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ef1af  c700f4fc8300         mov dword ptr [eax], 0x83fcf4
// 005ef1b5  8b11                 mov edx, dword ptr [ecx]
// 005ef1b7  895004               mov dword ptr [eax + 4], edx
// 005ef1ba  eb02                 jmp 0x5ef1be
// 005ef1bc  33c0                 xor eax, eax
// 005ef1be  8d54240c             lea edx, [esp + 0xc]
// 005ef1c2  8bc8                 mov ecx, eax
// 005ef1c4  3bd6                 cmp edx, esi
// 005ef1c6  7404                 je 0x5ef1cc
// 005ef1c8  8b0e                 mov ecx, dword ptr [esi]
// 005ef1ca  8906                 mov dword ptr [esi], eax
// 005ef1cc  85c9                 test ecx, ecx
// 005ef1ce  7408                 je 0x5ef1d8
// 005ef1d0  8b01                 mov eax, dword ptr [ecx]
// 005ef1d2  8b10                 mov edx, dword ptr [eax]
// 005ef1d4  6a01                 push 1
// 005ef1d6  ffd2                 call edx
// 005ef1d8  8bc7                 mov eax, edi
// 005ef1da  5f                   pop edi
// 005ef1db  5e                   pop esi
// 005ef1dc  c20400               ret 4

struct Holder
{
    virtual void __thiscall destroy(unsigned int);
};

extern "C" void __cdecl sub_557330(int, int);
extern "C" int* __cdecl sub_5ED630();
extern "C" int* __cdecl sub_6A0920(int);
extern int holderVtable[];

struct PointerSlot
{
    int* value;
    void assign(int*& source);
};

struct SurfaceDescriptor
{
    int* field0;
    PointerSlot field4;
    SurfaceDescriptor(int*);
};

__forceinline void PointerSlot::assign(int*& source)
{
    int* mem = sub_6A0920(8);
    if (mem)
    {
        mem[0] = (int)holderVtable;
        mem[1] = *source;
    }
    else
    {
        mem = 0;
    }

    int* old = mem;
    if (&source != &value)
    {
        old = value;
        value = mem;
    }

    if (old)
        ((Holder*)old)->destroy(1);
}

SurfaceDescriptor::SurfaceDescriptor(int* p)
{
    sub_557330(0x5ed690, 0x97b120);
    field0 = sub_5ED630();
    field4.assign(p);
}
