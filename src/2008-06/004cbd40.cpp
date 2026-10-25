// from server: 100% by colin
// roc 2008-06 004cbd40  unit: RBX::VInstance::?$NonFactoryProduct  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cbd40
//
// 004cbd40  8b442404             mov eax, dword ptr [esp + 4]
// 004cbd44  56                   push esi
// 004cbd45  8bf1                 mov esi, ecx
// 004cbd47  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cbd4b  c70600000000         mov dword ptr [esi], 0
// 004cbd51  c7460400000000       mov dword ptr [esi + 4], 0
// 004cbd58  894608               mov dword ptr [esi + 8], eax
// 004cbd5b  894e0c               mov dword ptr [esi + 0xc], ecx
// 004cbd5e  c6461000             mov byte ptr [esi + 0x10], 0
// 004cbd62  8b4004               mov eax, dword ptr [eax + 4]
// 004cbd65  8b11                 mov edx, dword ptr [ecx]
// 004cbd67  8b92b0000000         mov edx, dword ptr [edx + 0xb0]
// 004cbd6d  57                   push edi
// 004cbd6e  8bb8582d0000         mov edi, dword ptr [eax + 0x2d58]
// 004cbd74  8b80542d0000         mov eax, dword ptr [eax + 0x2d54]
// 004cbd7a  57                   push edi
// 004cbd7b  50                   push eax
// 004cbd7c  ffd2                 call edx
// 004cbd7e  8bf8                 mov edi, eax
// 004cbd80  e80b2bfdff           call 0x49e890
// 004cbd85  8b8044010000         mov eax, dword ptr [eax + 0x144]
// 004cbd8b  03c7                 add eax, edi
// 004cbd8d  50                   push eax
// 004cbd8e  8d4e18               lea ecx, [esi + 0x18]
// 004cbd91  894614               mov dword ptr [esi + 0x14], eax
// 004cbd94  e82793fdff           call 0x4a50c0
// 004cbd99  5f                   pop edi
// 004cbd9a  c7862c01000002000000 mov dword ptr [esi + 0x12c], 2
// 004cbda4  c7863001000000000000 mov dword ptr [esi + 0x130], 0
// 004cbdae  8bc6                 mov eax, esi
// 004cbdb0  5e                   pop esi
// 004cbdb1  c20800               ret 8

struct VTable {
    char pad[0xb0];
    int (__thiscall *func)(void*, int, int);
};

struct Obj1 {
    char pad[4];
    char* field4;
};

struct Obj2 {
    VTable* vtable;
};

struct Inner {
    char pad[0x144];
    int field144;
};

struct Outer {
    char pad[0x2d54];
    int field2d54;
    int field2d58;
};

struct Sub {
    char pad[0x18];
    int field0;
    void construct(int v);
};

struct Target {
    int field0;
    int field4;
    Obj1* field8;
    Obj2* fieldC;
    char field10;
    char pad11[3];
    int field14;
    Sub sub;
    char pad2c[0xf8];
    int field12c;
    int field130;
    void* init(Obj1* a, Obj2* b);
};

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
extern "C" void* __cdecl getInner();

void* Target::init(Obj1* a, Obj2* b) {
    field0 = 0;
    field4 = 0;
    field8 = a;
    fieldC = b;
    field10 = 0;
    Outer* o = (Outer*)a->field4;
    int r = b->vtable->func(b, o->field2d54, o->field2d58);
    Inner* in = (Inner*)getInner();
    int v = in->field144 + r;
    field14 = v;
    sub.construct(v);
    field12c = 2;
    field130 = 0;

    return this;
}
