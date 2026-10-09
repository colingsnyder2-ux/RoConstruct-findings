// from server: 93% by colin
// roc 2007-08 004151f0  unit: VCLuaFunction::?$CComObject  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004151f0
//
// 004151f0  56                   push esi
// 004151f1  8bf1                 mov esi, ecx
// 004151f3  c706f4727800         mov dword ptr [esi], 0x7872f4
// 004151f9  c74604cc727800       mov dword ptr [esi + 4], 0x7872cc
// 00415200  c74608010000c0       mov dword ptr [esi + 8], 0xc0000001
// 00415207  8b0d44ae8b00         mov ecx, dword ptr [0x8bae44]
// 0041520d  8b01                 mov eax, dword ptr [ecx]
// 0041520f  8b5008               mov edx, dword ptr [eax + 8]
// 00415212  ffd2                 call edx
// 00415214  8bce                 mov ecx, esi
// 00415216  e875ebffff           call 0x413d90
// 0041521b  f644240801           test byte ptr [esp + 8], 1
// 00415220  7409                 je 0x41522b
// 00415222  56                   push esi
// 00415223  e83aaa2100           call 0x62fc62
// 00415228  83c404               add esp, 4
// 0041522b  8bc6                 mov eax, esi
// 0041522d  5e                   pop esi
// 0041522e  c20400               ret 4

struct VCLuaFunction {
    void* vtable0;
    void* vtable1;
    int field8;
    VCLuaFunction* destroy(char flag);
};

extern void* g_8bae44;
extern void sub_00413d90();
extern void sub_0062fc62(void* p);

VCLuaFunction* VCLuaFunction::destroy(char flag)
{
    vtable0 = (void*)0x7872f4;
    vtable1 = (void*)0x7872cc;
    field8 = (int)0xc0000001;

    void* p = g_8bae44;
    void** vt = *(void***)p;
    void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vt[2];
    fn(p);

    sub_00413d90();

    if (flag & 1) {
        sub_0062fc62(this);
    }

    return this;
}
