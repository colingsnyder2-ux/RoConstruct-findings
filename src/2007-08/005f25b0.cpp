// from server: 39% by colin
// roc 2007-08 005f25b0  unit: G3D::$$A6AXVColor3::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f25b0
//
// 005f25b0  6aff                 push -1
// 005f25b2  681bb67500           push 0x75b61b
// 005f25b7  64a100000000         mov eax, dword ptr fs:[0]
// 005f25bd  50                   push eax
// 005f25be  64892500000000       mov dword ptr fs:[0], esp
// 005f25c5  51                   push ecx
// 005f25c6  56                   push esi
// 005f25c7  6a10                 push 0x10
// 005f25c9  8bf1                 mov esi, ecx
// 005f25cb  e826d90300           call 0x62fef6
// 005f25d0  83c404               add esp, 4
// 005f25d3  89442404             mov dword ptr [esp + 4], eax
// 005f25d7  85c0                 test eax, eax
// 005f25d9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f25e1  740e                 je 0x5f25f1
// 005f25e3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005f25e7  51                   push ecx
// 005f25e8  8bc8                 mov ecx, eax
// 005f25ea  e8e1feffff           call 0x5f24d0
// 005f25ef  eb02                 jmp 0x5f25f3
// 005f25f1  33c0                 xor eax, eax
// 005f25f3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f25f7  8906                 mov dword ptr [esi], eax
// 005f25f9  8bc6                 mov eax, esi
// 005f25fb  5e                   pop esi
// 005f25fc  64890d00000000       mov dword ptr fs:[0], ecx
// 005f2603  83c410               add esp, 0x10
// 005f2606  c20400               ret 4

struct Color3 { float r, g, b; };

struct Holder {
    void construct(Color3* c);
};

struct S {
    void* p;
    S* init(Color3* c);
};

extern "C" void* __cdecl sub_0062fef6(unsigned int size);

S* S::init(Color3* c)
{
    void* mem = sub_0062fef6(0x10);
    if (mem) {
        ((Holder*)mem)->construct(c);
        p = mem;
    } else {
        p = 0;
    }
    return this;
}
