// from server: 72% by colin
// roc 2007-08 00530740  unit: RBX::P8ModelInstance::?$GetSetImpl  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00530740
//
// 00530740  8bc1                 mov eax, ecx
// 00530742  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00530746  85c9                 test ecx, ecx
// 00530748  7405                 je 0x53074f
// 0053074a  83c1fc               add ecx, -4
// 0053074d  eb02                 jmp 0x530751
// 0053074f  33c9                 xor ecx, ecx
// 00530751  8b91ec000000         mov edx, dword ptr [ecx + 0xec]
// 00530757  56                   push esi
// 00530758  8b7010               mov esi, dword ptr [eax + 0x10]
// 0053075b  8b1432               mov edx, dword ptr [edx + esi]
// 0053075e  03500c               add edx, dword ptr [eax + 0xc]
// 00530761  8b4008               mov eax, dword ptr [eax + 8]
// 00530764  57                   push edi
// 00530765  8d8c0aec000000       lea ecx, [edx + ecx + 0xec]
// 0053076c  ffd0                 call eax
// 0053076e  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00530772  8bf0                 mov esi, eax
// 00530774  56                   push esi
// 00530775  8bcf                 mov ecx, edi
// 00530777  e8548efdff           call 0x5095d0
// 0053077c  d94624               fld dword ptr [esi + 0x24]
// 0053077f  d95f24               fstp dword ptr [edi + 0x24]
// 00530782  8bc7                 mov eax, edi
// 00530784  d94628               fld dword ptr [esi + 0x28]
// 00530787  d95f28               fstp dword ptr [edi + 0x28]
// 0053078a  d9462c               fld dword ptr [esi + 0x2c]
// 0053078d  d95f2c               fstp dword ptr [edi + 0x2c]
// 00530790  5f                   pop edi
// 00530791  5e                   pop esi
// 00530792  c20800               ret 8

struct P8ModelInstance_GetSetImpl {
    void* field_0x08;
    int field_0x0c;
    int field_0x10;
    char pad[0xec - 0x14];
    int field_0xec;
    void* method_0x08;

    void* __thiscall GetSet(void* arg1, void* arg2);
};

struct Target {
    char pad0[0x24];
    float f24;
    float f28;
    float f2c;
};

extern "C" void __stdcall sub_005095D0(void* dst, void* src);

void* __thiscall P8ModelInstance_GetSetImpl::GetSet(void* arg1, void* arg2)
{
    P8ModelInstance_GetSetImpl* self = this;
    char* p = (char*)arg1;
    if (p != 0)
        p -= 4;
    else
        p = 0;

    int* vtbl = *(int**)(p + 0xec);
    int idx = self->field_0x10;
    int off = vtbl[idx];
    off += self->field_0x0c;
    void* fn = self->method_0x08;
    char* obj = (char*)p + off + 0xec;

    typedef void* (__thiscall *Fn)(void*);
    void* result = ((Fn)fn)(obj);

    Target* dst = (Target*)arg2;
    sub_005095D0(dst, result);
    dst->f24 = *(float*)((char*)result + 0x24);
    dst->f28 = *(float*)((char*)result + 0x28);
    dst->f2c = *(float*)((char*)result + 0x2c);
    return dst;
}
