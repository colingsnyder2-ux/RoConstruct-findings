// from server: 62% by colin
// roc 2007-08 005d1f10  unit: RBX::P8Tool::?$GetSetImpl  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d1f10
//
// 005d1f10  8bc1                 mov eax, ecx
// 005d1f12  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d1f16  83ec0c               sub esp, 0xc
// 005d1f19  85c9                 test ecx, ecx
// 005d1f1b  7405                 je 0x5d1f22
// 005d1f1d  83c1fc               add ecx, -4
// 005d1f20  eb02                 jmp 0x5d1f24
// 005d1f22  33c9                 xor ecx, ecx
// 005d1f24  56                   push esi
// 005d1f25  8b7010               mov esi, dword ptr [eax + 0x10]
// 005d1f28  8d542404             lea edx, [esp + 4]
// 005d1f2c  52                   push edx
// 005d1f2d  8b9168010000         mov edx, dword ptr [ecx + 0x168]
// 005d1f33  8b1432               mov edx, dword ptr [edx + esi]
// 005d1f36  03500c               add edx, dword ptr [eax + 0xc]
// 005d1f39  8b4008               mov eax, dword ptr [eax + 8]
// 005d1f3c  8d8c0a68010000       lea ecx, [edx + ecx + 0x168]
// 005d1f43  ffd0                 call eax
// 005d1f45  d900                 fld dword ptr [eax]
// 005d1f47  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005d1f4b  d919                 fstp dword ptr [ecx]
// 005d1f4d  5e                   pop esi
// 005d1f4e  d94004               fld dword ptr [eax + 4]
// 005d1f51  d95904               fstp dword ptr [ecx + 4]
// 005d1f54  d94008               fld dword ptr [eax + 8]
// 005d1f57  8bc1                 mov eax, ecx
// 005d1f59  d95908               fstp dword ptr [ecx + 8]
// 005d1f5c  83c40c               add esp, 0xc
// 005d1f5f  c20800               ret 8

struct S {
    char pad[8];
    int m8;
    int mc;
    int m10;
    float* f(int, int);
};

float* S::f(int a, int b)
{
    int* p = (int*)a;
    if (p)
        p = (int*)((char*)p - 4);
    else
        p = 0;

    int idx = m10;
    int off = *(int*)((char*)p + 0x168);
    off = *(int*)(off + idx);
    off += mc;

    float* (*fn)(void*, float*) = (float* (*)(void*, float*))m8;
    float* r = fn((char*)p + off + 0x168, (float*)&a);

    float* out = (float*)b;
    out[0] = r[0];
    out[1] = r[1];
    out[2] = r[2];
    return out;
}
