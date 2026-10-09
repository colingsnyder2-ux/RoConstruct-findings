// from server: 39% by colin
// roc 2007-08 005f1f70  unit: G3D::$$A6AXVVector3::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f1f70
//
// 005f1f70  6aff                 push -1
// 005f1f72  681bb67500           push 0x75b61b
// 005f1f77  64a100000000         mov eax, dword ptr fs:[0]
// 005f1f7d  50                   push eax
// 005f1f7e  64892500000000       mov dword ptr fs:[0], esp
// 005f1f85  51                   push ecx
// 005f1f86  56                   push esi
// 005f1f87  6a10                 push 0x10
// 005f1f89  8bf1                 mov esi, ecx
// 005f1f8b  e866df0300           call 0x62fef6
// 005f1f90  83c404               add esp, 4
// 005f1f93  89442404             mov dword ptr [esp + 4], eax
// 005f1f97  85c0                 test eax, eax
// 005f1f99  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f1fa1  740e                 je 0x5f1fb1
// 005f1fa3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005f1fa7  51                   push ecx
// 005f1fa8  8bc8                 mov ecx, eax
// 005f1faa  e8e1feffff           call 0x5f1e90
// 005f1faf  eb02                 jmp 0x5f1fb3
// 005f1fb1  33c0                 xor eax, eax
// 005f1fb3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f1fb7  8906                 mov dword ptr [esi], eax
// 005f1fb9  8bc6                 mov eax, esi
// 005f1fbb  5e                   pop esi
// 005f1fbc  64890d00000000       mov dword ptr fs:[0], ecx
// 005f1fc3  83c410               add esp, 0x10
// 005f1fc6  c20400               ret 4

struct Vector3 {
    float x, y, z;
};

struct S {
    void* m_ptr;
    S* Assign(Vector3* v);
};

extern "C" void* __cdecl operator_new(unsigned int size);

struct Helper {
    void Init(Vector3* v);
};

S* S::Assign(Vector3* v)
{
    void* mem = operator_new(0x10);
    if (mem != 0)
    {
        ((Helper*)mem)->Init(v);
        m_ptr = mem;
    }
    else
    {
        m_ptr = 0;
    }
    return this;
}
