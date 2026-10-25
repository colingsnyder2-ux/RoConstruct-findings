// from server: 72% by atomic.potato
// roc 2011-06 005ff660  unit: RBX::DataModel  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005ff660
//
// 005ff660  51                   push ecx
// 005ff661  56                   push esi
// 005ff662  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ff666  81c178ffffff         add ecx, 0xffffff78
// 005ff66c  51                   push ecx
// 005ff66d  8bce                 mov ecx, esi
// 005ff66f  c744240800000000     mov dword ptr [esp + 8], 0
// 005ff677  ff15c804a400         call dword ptr [0xa404c8]
// 005ff67d  8bc6                 mov eax, esi
// 005ff67f  5e                   pop esi
// 005ff680  59                   pop ecx
// 005ff681  c20400               ret 4

extern "C" void __stdcall sub_a404c8(void*, void*, void*);

struct S_func_005ff660 {
    char pad[136];
    void* f(void* arg);
};

void* S_func_005ff660::f(void* arg)
{
    char* self = (char*)this - 136;
    void* tmp = 0;
    sub_a404c8(arg, &tmp, self);
    return arg;
}
