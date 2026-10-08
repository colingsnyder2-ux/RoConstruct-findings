// from server: 95% by colin
// roc 2007-08 005766f0  unit: RBX::PartInstance  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005766f0
//
// 005766f0  8b814cffffff         mov eax, dword ptr [ecx - 0xb4]
// 005766f6  56                   push esi
// 005766f7  8b7064               mov esi, dword ptr [eax + 0x64]
// 005766fa  57                   push edi
// 005766fb  8bce                 mov ecx, esi
// 005766fd  e8fe99fbff           call 0x530100
// 00576702  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00576706  81c684000000         add esi, 0x84
// 0057670c  56                   push esi
// 0057670d  8bcf                 mov ecx, edi
// 0057670f  e8bc2ef9ff           call 0x5095d0
// 00576714  d94624               fld dword ptr [esi + 0x24]
// 00576717  d95f24               fstp dword ptr [edi + 0x24]
// 0057671a  8bc7                 mov eax, edi
// 0057671c  d94628               fld dword ptr [esi + 0x28]
// 0057671f  d95f28               fstp dword ptr [edi + 0x28]
// 00576722  d9462c               fld dword ptr [esi + 0x2c]
// 00576725  d95f2c               fstp dword ptr [edi + 0x2c]
// 00576728  5f                   pop edi
// 00576729  5e                   pop esi
// 0057672a  c20400               ret 4

struct PVInstance {
    char pad[0x24];
    float x;
    float y;
    float z;
};

struct Helper {
    char pad[0x64];
    void* ptr;
};

struct Base {
    char pad[0x24];
    float x;
    float y;
    float z;
};

struct Sub1 {
    void f();
};

struct Sub2 {
    void g(void*);
};

extern "C" void __stdcall sub_530100(void* p);
extern "C" void __stdcall sub_5095d0(void* dst, void* src);

struct PartInstance {
    PVInstance* getPV(PVInstance* dst);
};

PVInstance* PartInstance::getPV(PVInstance* dst) {
    Helper* h = *(Helper**)((char*)this - 0xb4);
    Sub1* s1 = (Sub1*)h->ptr;
    s1->f();
    Sub2* s2 = (Sub2*)((char*)s1 + 0x84);
    sub_5095d0(dst, s2);
    dst->x = *(float*)((char*)s2 + 0x24);
    dst->y = *(float*)((char*)s2 + 0x28);
    dst->z = *(float*)((char*)s2 + 0x2c);
    return dst;
}
