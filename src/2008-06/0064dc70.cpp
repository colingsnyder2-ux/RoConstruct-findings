// from server: 53% by atomic.potato
// roc 2008-06 0064dc70  unit: RBX::Point  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064dc70
//
// 0064dc70  8bc1                 mov eax, ecx
// 0064dc72  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0064dc75  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0064dc78  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 0064dc7b  85c9                 test ecx, ecx
// 0064dc7d  740d                 je 0x64dc8c
// 0064dc7f  8d501c               lea edx, [eax + 0x1c]
// 0064dc82  52                   push edx
// 0064dc83  83c028               add eax, 0x28
// 0064dc86  50                   push eax
// 0064dc87  e82453fcff           call 0x612fb0
// 0064dc8c  c3                   ret 

struct Point
{
    int pad0[3];
    int *value;
    int pad1[6];
    int f();
};

extern "C" void __cdecl Call612fb0(int *, int *);

int Point::f()
{
    int *p = *(int **)((char *)value + 0x10);
    if (*(int **)((char *)p + 0x2c))
        Call612fb0((int *)((char *)this + 0x28),
                   (int *)((char *)this + 0x1c));
    return (int)this;
}
