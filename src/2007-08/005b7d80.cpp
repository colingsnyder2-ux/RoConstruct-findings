// from server: 69% by colin
// roc 2007-08 005b7d80  unit: RBX::$02::?$SurfaceDescriptor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7d80
//
// 005b7d80  8b442404             mov eax, dword ptr [esp + 4]
// 005b7d84  85c0                 test eax, eax
// 005b7d86  7405                 je 0x5b7d8d
// 005b7d88  8d48fc               lea ecx, [eax - 4]
// 005b7d8b  eb02                 jmp 0x5b7d8f
// 005b7d8d  33c9                 xor ecx, ecx
// 005b7d8f  e8fcbafbff           call 0x573890
// 005b7d94  8b542408             mov edx, dword ptr [esp + 8]
// 005b7d98  8d4810               lea ecx, [eax + 0x10]
// 005b7d9b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b7d9f  50                   push eax
// 005b7da0  52                   push edx
// 005b7da1  e88a180000           call 0x5b9630
// 005b7da6  c20c00               ret 0xc

struct SurfaceDescriptor
{
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
};

extern "C" void* __cdecl sub_573890(void*);
extern "C" void __cdecl sub_5b9630(void*, void*);

void __stdcall sub_5b7d80(void* a, void* b, void* c)
{
    void* p = a;
    void* q;
    if (p != 0)
        q = (char*)p - 4;
    else
        q = 0;
    void* r = sub_573890(q);
    sub_5b9630(b, c);
}
