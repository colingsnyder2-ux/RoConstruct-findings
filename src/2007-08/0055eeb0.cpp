// from server: 76% by colin
// roc 2007-08 0055eeb0  unit: RBX::ClearBackpack  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055eeb0
//
// 0055eeb0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0055eeb3  50                   push eax
// 0055eeb4  e86769f3ff           call 0x495820
// 0055eeb9  83c404               add esp, 4
// 0055eebc  85c0                 test eax, eax
// 0055eebe  7438                 je 0x55eef8
// 0055eec0  8bc8                 mov ecx, eax
// 0055eec2  e81999f2ff           call 0x4887e0
// 0055eec7  85c0                 test eax, eax
// 0055eec9  742d                 je 0x55eef8
// 0055eecb  8b80c0000000         mov eax, dword ptr [eax + 0xc0]
// 0055eed1  85c0                 test eax, eax
// 0055eed3  7418                 je 0x55eeed
// 0055eed5  8b4804               mov ecx, dword ptr [eax + 4]
// 0055eed8  85c9                 test ecx, ecx
// 0055eeda  7411                 je 0x55eeed
// 0055eedc  8b4008               mov eax, dword ptr [eax + 8]
// 0055eedf  2bc1                 sub eax, ecx
// 0055eee1  c1f803               sar eax, 3
// 0055eee4  33c9                 xor ecx, ecx
// 0055eee6  3bc8                 cmp ecx, eax
// 0055eee8  1bc0                 sbb eax, eax
// 0055eeea  f7d8                 neg eax
// 0055eeec  c3                   ret 
// 0055eeed  33c0                 xor eax, eax
// 0055eeef  33c9                 xor ecx, ecx
// 0055eef1  3bc8                 cmp ecx, eax
// 0055eef3  1bc0                 sbb eax, eax
// 0055eef5  f7d8                 neg eax
// 0055eef7  c3                   ret 
// 0055eef8  32c0                 xor al, al
// 0055eefa  c3                   ret 

struct RBX_ClearBackpack {
    int field_0x0;
    int field_0x4;
    int field_0x8;
    int field_0xc;
    bool method();
};

extern "C" void* __cdecl sub_495820(int);
extern "C" void* __cdecl sub_4887E0(void*);

bool RBX_ClearBackpack::method()
{
    void* p = sub_495820(field_0xc);
    if (!p)
        return false;
    void* q = sub_4887E0(p);
    if (!q)
        return false;
    int* r = *(int**)((char*)q + 0xc0);
    if (r) {
        int start = r[1];
        if (start) {
            int end = r[2];
            int count = (end - start) >> 3;
            return count != 0;
        }
    }
    return false;
}
