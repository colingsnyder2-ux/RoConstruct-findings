// from server: 78% by colin
// roc 2007-08 005d1eb0  unit: RBX::P8Tool::?$GetSetImpl  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d1eb0
//
// 005d1eb0  8bc1                 mov eax, ecx
// 005d1eb2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d1eb6  85c9                 test ecx, ecx
// 005d1eb8  7405                 je 0x5d1ebf
// 005d1eba  83c1fc               add ecx, -4
// 005d1ebd  eb02                 jmp 0x5d1ec1
// 005d1ebf  33c9                 xor ecx, ecx
// 005d1ec1  8b9168010000         mov edx, dword ptr [ecx + 0x168]
// 005d1ec7  56                   push esi
// 005d1ec8  8b7010               mov esi, dword ptr [eax + 0x10]
// 005d1ecb  8b1432               mov edx, dword ptr [edx + esi]
// 005d1ece  03500c               add edx, dword ptr [eax + 0xc]
// 005d1ed1  8b4008               mov eax, dword ptr [eax + 8]
// 005d1ed4  57                   push edi
// 005d1ed5  8d8c0a68010000       lea ecx, [edx + ecx + 0x168]
// 005d1edc  ffd0                 call eax
// 005d1ede  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005d1ee2  8bf0                 mov esi, eax
// 005d1ee4  56                   push esi
// 005d1ee5  8bcf                 mov ecx, edi
// 005d1ee7  e8e476f3ff           call 0x5095d0
// 005d1eec  d94624               fld dword ptr [esi + 0x24]
// 005d1eef  d95f24               fstp dword ptr [edi + 0x24]
// 005d1ef2  8bc7                 mov eax, edi
// 005d1ef4  d94628               fld dword ptr [esi + 0x28]
// 005d1ef7  d95f28               fstp dword ptr [edi + 0x28]
// 005d1efa  d9462c               fld dword ptr [esi + 0x2c]
// 005d1efd  d95f2c               fstp dword ptr [edi + 0x2c]
// 005d1f00  5f                   pop edi
// 005d1f01  5e                   pop esi
// 005d1f02  c20800               ret 8

struct Arg0 {
    char pad[8];
    int field8;
    int fieldC;
    int field10;
};

struct Arg1 {
    char pad[0x24];
    float f24;
    float f28;
    float f2c;
};

struct Arg2 {
    char pad[0x168];
    int field168;
};

struct S {
    int method(Arg1* a, Arg2* b);
};

extern "C" int __stdcall sub_5095d0(Arg1* dst, Arg1* src);

int S::method(Arg1* a, Arg2* b)
{
    Arg0* self = (Arg0*)this;
    Arg2* p = b ? (Arg2*)((char*)b - 4) : 0;
    int edx = *(int*)((char*)p + 0x168);
    int esi = self->field10;
    edx = *(int*)(edx + esi);
    edx += self->fieldC;
    int (__stdcall *fn)(void*) = (int (__stdcall *)(void*))self->field8;
    Arg1* result = (Arg1*)fn((char*)p + edx + 0x168);
    sub_5095d0(a, result);
    a->f24 = result->f24;
    a->f28 = result->f28;
    a->f2c = result->f2c;
    return (int)a;
}
