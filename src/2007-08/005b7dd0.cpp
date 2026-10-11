// from server: 62% by colin
// roc 2007-08 005b7dd0  unit: $0A::?$SurfaceDescriptor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7dd0
//
// 005b7dd0  8b442404             mov eax, dword ptr [esp + 4]
// 005b7dd4  85c0                 test eax, eax
// 005b7dd6  7405                 je 0x5b7ddd
// 005b7dd8  8d48fc               lea ecx, [eax - 4]
// 005b7ddb  eb02                 jmp 0x5b7ddf
// 005b7ddd  33c9                 xor ecx, ecx
// 005b7ddf  e8acbafbff           call 0x573890
// 005b7de4  8b542408             mov edx, dword ptr [esp + 8]
// 005b7de8  8d4818               lea ecx, [eax + 0x18]
// 005b7deb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b7def  50                   push eax
// 005b7df0  52                   push edx
// 005b7df1  e83a180000           call 0x5b9630
// 005b7df6  c20c00               ret 0xc

struct SurfaceDescriptor;

extern "C" void* __cdecl sub_573890(void*);
extern "C" void __cdecl sub_5b9630(void*, void*, void*);

struct SurfaceDescriptor {
    void assign(void*, void*, void*);
};

void SurfaceDescriptor::assign(void* a, void* b, void* c) {
    void* p = a;
    void* q;
    if (p != 0) {
        q = (char*)p - 4;
    } else {
        q = 0;
    }
    void* r = sub_573890(q);
    sub_5b9630((char*)r + 0x18, b, c);
}
