// from server: 79% by colin
// roc 2007-08 00574620  unit: RBX::P8PartInstance::?$GetSetImpl  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00574620
//
// 00574620  8bc1                 mov eax, ecx
// 00574622  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00574626  83ec0c               sub esp, 0xc
// 00574629  85c9                 test ecx, ecx
// 0057462b  7405                 je 0x574632
// 0057462d  83c1fc               add ecx, -4
// 00574630  eb02                 jmp 0x574634
// 00574632  33c9                 xor ecx, ecx
// 00574634  56                   push esi
// 00574635  8b7010               mov esi, dword ptr [eax + 0x10]
// 00574638  8d542404             lea edx, [esp + 4]
// 0057463c  52                   push edx
// 0057463d  8b91ec000000         mov edx, dword ptr [ecx + 0xec]
// 00574643  8b1432               mov edx, dword ptr [edx + esi]
// 00574646  03500c               add edx, dword ptr [eax + 0xc]
// 00574649  8b4008               mov eax, dword ptr [eax + 8]
// 0057464c  8d8c0aec000000       lea ecx, [edx + ecx + 0xec]
// 00574653  ffd0                 call eax
// 00574655  d900                 fld dword ptr [eax]
// 00574657  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057465b  d919                 fstp dword ptr [ecx]
// 0057465d  5e                   pop esi
// 0057465e  d94004               fld dword ptr [eax + 4]
// 00574661  d95904               fstp dword ptr [ecx + 4]
// 00574664  d94008               fld dword ptr [eax + 8]
// 00574667  8bc1                 mov eax, ecx
// 00574669  d95908               fstp dword ptr [ecx + 8]
// 0057466c  83c40c               add esp, 0xc
// 0057466f  c20800               ret 8

struct PartInstance;

struct GetSetImpl {
    char pad[8];
    float* (__thiscall *fn)(void*, float*);
    int offset;
    int index;
    float* get(float* out, PartInstance* part);
};

float* GetSetImpl::get(float* out, PartInstance* part)
{
    char* base;
    if (part)
        base = (char*)part - 4;
    else
        base = 0;

    float tmp[3];
    int idx = this->index;
    char* p = base + 0xec;
    int off = *(int*)(p + idx);
    off += this->offset;
    float* result = (float*)(p + off);
    float* r = this->fn(result, tmp);
    out[0] = r[0];
    out[1] = r[1];
    out[2] = r[2];
    return out;
}
