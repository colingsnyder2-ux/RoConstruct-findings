// from server: 62% by colin
// roc 2007-08 005b7e10  unit: RBX::$04::?$SurfaceDescriptor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7e10
//
// 005b7e10  8b442404             mov eax, dword ptr [esp + 4]
// 005b7e14  85c0                 test eax, eax
// 005b7e16  7405                 je 0x5b7e1d
// 005b7e18  8d48fc               lea ecx, [eax - 4]
// 005b7e1b  eb02                 jmp 0x5b7e1f
// 005b7e1d  33c9                 xor ecx, ecx
// 005b7e1f  e86cbafbff           call 0x573890
// 005b7e24  8b542408             mov edx, dword ptr [esp + 8]
// 005b7e28  8d4820               lea ecx, [eax + 0x20]
// 005b7e2b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b7e2f  50                   push eax
// 005b7e30  52                   push edx
// 005b7e31  e8fa170000           call 0x5b9630
// 005b7e36  c20c00               ret 0xc

struct SurfaceDescriptor;

extern "C" void* __cdecl sub_573890(void*);
extern "C" void __cdecl sub_5b9630(void*, void*, void*);

struct SurfaceDescriptor
{
    void assign(void*, void*, void*);
};

void SurfaceDescriptor::assign(void* a, void* b, void* c)
{
    void* p = a;
    void* q;
    if (p != 0)
        q = (char*)p - 4;
    else
        q = 0;
    void* r = sub_573890(q);
    void* s = (char*)r + 0x20;
    sub_5b9630(s, b, c);
}
