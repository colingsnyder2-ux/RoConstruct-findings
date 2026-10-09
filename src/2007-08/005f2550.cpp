// from server: 27% by colin
// roc 2007-08 005f2550  unit: G3D::$$A6AXVColor3::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f2550
//
// 005f2550  6aff                 push -1
// 005f2552  681bb67500           push 0x75b61b
// 005f2557  64a100000000         mov eax, dword ptr fs:[0]
// 005f255d  50                   push eax
// 005f255e  64892500000000       mov dword ptr fs:[0], esp
// 005f2565  51                   push ecx
// 005f2566  56                   push esi
// 005f2567  6a10                 push 0x10
// 005f2569  8bf1                 mov esi, ecx
// 005f256b  e886d90300           call 0x62fef6
// 005f2570  83c404               add esp, 4
// 005f2573  89442404             mov dword ptr [esp + 4], eax
// 005f2577  85c0                 test eax, eax
// 005f2579  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f2581  741b                 je 0x5f259e
// 005f2583  83c604               add esi, 4
// 005f2586  56                   push esi
// 005f2587  8bc8                 mov ecx, eax
// 005f2589  e842ffffff           call 0x5f24d0
// 005f258e  5e                   pop esi
// 005f258f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f2593  64890d00000000       mov dword ptr fs:[0], ecx
// 005f259a  83c410               add esp, 0x10
// 005f259d  c3                   ret 
// 005f259e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f25a2  33c0                 xor eax, eax
// 005f25a4  5e                   pop esi
// 005f25a5  64890d00000000       mov dword ptr fs:[0], ecx
// 005f25ac  83c410               add esp, 0x10
// 005f25af  c3                   ret 

struct Color3 {
    float r;
    float g;
    float b;
};

struct Holder {
    void construct(Color3* color);
};

struct Func {
    char pad[4];
    Holder* holder;
    void assign(Color3* color);
};

extern "C" void* __cdecl operator_new(unsigned int size);

void Func::assign(Color3* color) {
    Holder* h = (Holder*)operator_new(0x10);
    if (h != 0) {
        h->construct(color);
    }
    holder = h;
}
