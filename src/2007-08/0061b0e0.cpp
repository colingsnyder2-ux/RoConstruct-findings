// from server: 74% by colin
// roc 2007-08 0061b0e0  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061b0e0
//
// 0061b0e0  8b442408             mov eax, dword ptr [esp + 8]
// 0061b0e4  85c0                 test eax, eax
// 0061b0e6  56                   push esi
// 0061b0e7  8bf1                 mov esi, ecx
// 0061b0e9  740b                 je 0x61b0f6
// 0061b0eb  50                   push eax
// 0061b0ec  e8af67f1ff           call 0x5318a0
// 0061b0f1  83c404               add esp, 4
// 0061b0f4  eb02                 jmp 0x61b0f8
// 0061b0f6  33c0                 xor eax, eax
// 0061b0f8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0061b0fb  8d54240c             lea edx, [esp + 0xc]
// 0061b0ff  8944240c             mov dword ptr [esp + 0xc], eax
// 0061b103  8b01                 mov eax, dword ptr [ecx]
// 0061b105  8b4008               mov eax, dword ptr [eax + 8]
// 0061b108  52                   push edx
// 0061b109  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0061b10d  52                   push edx
// 0061b10e  ffd0                 call eax
// 0061b110  5e                   pop esi
// 0061b111  c20800               ret 8

struct RefPropDescriptor {
    void construct(void* get, void* set);
};

extern "C" void* __cdecl sub_005318a0(void*);

void RefPropDescriptor::construct(void* get, void* set)
{
    void* g;
    if (get) {
        g = sub_005318a0(get);
    } else {
        g = 0;
    }
    void* p = *(void**)((char*)this + 0x1c);
    void* vt = *(void**)p;
    void (*fn)(void*, void*, void*) = *(void (**)(void*, void*, void*))((char*)vt + 8);
    fn(p, g, set);
}
