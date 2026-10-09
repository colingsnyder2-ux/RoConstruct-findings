// from server: 86% by colin
// roc 2007-08 004142f0  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004142f0
//
// 004142f0  8bc1                 mov eax, ecx
// 004142f2  c70000727800         mov dword ptr [eax], 0x787200
// 004142f8  8b0df8238c00         mov ecx, dword ptr [0x8c23f8]
// 004142fe  894804               mov dword ptr [eax + 4], ecx
// 00414301  8b15fc238c00         mov edx, dword ptr [0x8c23fc]
// 00414307  8bca                 mov ecx, edx
// 00414309  895008               mov dword ptr [eax + 8], edx
// 0041430c  33d2                 xor edx, edx
// 0041430e  3bca                 cmp ecx, edx
// 00414310  740e                 je 0x414320
// 00414312  56                   push esi
// 00414313  83c104               add ecx, 4
// 00414316  be01000000           mov esi, 1
// 0041431b  f00fc131             lock xadd dword ptr [ecx], esi
// 0041431f  5e                   pop esi
// 00414320  89500c               mov dword ptr [eax + 0xc], edx
// 00414323  895010               mov dword ptr [eax + 0x10], edx
// 00414326  895014               mov dword ptr [eax + 0x14], edx
// 00414329  895018               mov dword ptr [eax + 0x18], edx
// 0041432c  89501c               mov dword ptr [eax + 0x1c], edx
// 0041432f  c70008727800         mov dword ptr [eax], 0x787208
// 00414335  895020               mov dword ptr [eax + 0x20], edx
// 00414338  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct DU {
    void* vptr;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    void* field20;
    DU* init();
};

extern void* g_8c23f8;
extern void* g_8c23fc;

DU* DU::init() {
    DU* self = this;
    self->vptr = (void*)0x787200;
    self->field4 = g_8c23f8;
    void* p = g_8c23fc;
    self->field8 = p;
    if (p != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)p + 4), 1);
    }
    self->fieldC = 0;
    self->field10 = 0;
    self->field14 = 0;
    self->field18 = 0;
    self->field1C = 0;
    self->vptr = (void*)0x787208;
    self->field20 = 0;
    return self;
}
