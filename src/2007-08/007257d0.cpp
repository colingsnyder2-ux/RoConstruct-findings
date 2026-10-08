// from server: 100% by colin
// roc 2007-08 007257d0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007257d0
//
// 007257d0  56                   push esi
// 007257d1  8bf1                 mov esi, ecx
// 007257d3  ff15f8e67700         call dword ptr [0x77e6f8]
// 007257d9  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 007257e0  c7067c527800         mov dword ptr [esi], 0x78527c
// 007257e6  8bc6                 mov eax, esi
// 007257e8  5e                   pop esi
// 007257e9  c3                   ret 

struct S {
    void* vfptr;
    int pad[2];
    int field_c;
    S* init();
};

extern "C" void (__stdcall *sub_77e6f8)();
extern void* sub_78527c;

S* S::init()
{
    sub_77e6f8();
    field_c = 0;
    vfptr = &sub_78527c;
    return this;
}
