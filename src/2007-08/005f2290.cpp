// from server: 41% by colin
// roc 2007-08 005f2290  unit: G3D::$$A6AXVCoordinateFrame::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f2290
//
// 005f2290  6aff                 push -1
// 005f2292  681bb67500           push 0x75b61b
// 005f2297  64a100000000         mov eax, dword ptr fs:[0]
// 005f229d  50                   push eax
// 005f229e  64892500000000       mov dword ptr fs:[0], esp
// 005f22a5  51                   push ecx
// 005f22a6  56                   push esi
// 005f22a7  6a10                 push 0x10
// 005f22a9  8bf1                 mov esi, ecx
// 005f22ab  e846dc0300           call 0x62fef6
// 005f22b0  83c404               add esp, 4
// 005f22b3  89442404             mov dword ptr [esp + 4], eax
// 005f22b7  85c0                 test eax, eax
// 005f22b9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f22c1  741b                 je 0x5f22de
// 005f22c3  83c604               add esi, 4
// 005f22c6  56                   push esi
// 005f22c7  8bc8                 mov ecx, eax
// 005f22c9  e8e2feffff           call 0x5f21b0
// 005f22ce  5e                   pop esi
// 005f22cf  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f22d3  64890d00000000       mov dword ptr fs:[0], ecx
// 005f22da  83c410               add esp, 0x10
// 005f22dd  c3                   ret 
// 005f22de  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f22e2  33c0                 xor eax, eax
// 005f22e4  5e                   pop esi
// 005f22e5  64890d00000000       mov dword ptr fs:[0], ecx
// 005f22ec  83c410               add esp, 0x10
// 005f22ef  c3                   ret 

struct Inner {
    void init(void*);
};

struct Outer {
    char pad[4];
    Inner inner;
    void func();
};

extern "C" void* __cdecl func_62fef6(unsigned int);
extern "C" void __cdecl func_5f21b0();

void Outer::func()
{
    void* p = func_62fef6(0x10);
    if (p) {
        ((Inner*)p)->init(&this->inner);
    }
}
