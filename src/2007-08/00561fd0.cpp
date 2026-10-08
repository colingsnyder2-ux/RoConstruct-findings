// from server: 61% by colin
// roc 2007-08 00561fd0  unit: RBX::ClearStarterpack  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00561fd0
//
// 00561fd0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00561fd3  85c9                 test ecx, ecx
// 00561fd5  7436                 je 0x56200d
// 00561fd7  e884aff2ff           call 0x48cf60
// 00561fdc  85c0                 test eax, eax
// 00561fde  742d                 je 0x56200d
// 00561fe0  8b80c0000000         mov eax, dword ptr [eax + 0xc0]
// 00561fe6  85c0                 test eax, eax
// 00561fe8  7418                 je 0x562002
// 00561fea  8b4804               mov ecx, dword ptr [eax + 4]
// 00561fed  85c9                 test ecx, ecx
// 00561fef  7411                 je 0x562002
// 00561ff1  8b4008               mov eax, dword ptr [eax + 8]
// 00561ff4  2bc1                 sub eax, ecx
// 00561ff6  c1f803               sar eax, 3
// 00561ff9  33c9                 xor ecx, ecx
// 00561ffb  3bc8                 cmp ecx, eax
// 00561ffd  1bc0                 sbb eax, eax
// 00561fff  f7d8                 neg eax
// 00562001  c3                   ret 
// 00562002  33c0                 xor eax, eax
// 00562004  33c9                 xor ecx, ecx
// 00562006  3bc8                 cmp ecx, eax
// 00562008  1bc0                 sbb eax, eax
// 0056200a  f7d8                 neg eax
// 0056200c  c3                   ret 
// 0056200d  32c0                 xor al, al
// 0056200f  c3                   ret 

struct T_func_00561fd0 {
    char pad[0xc];
    void* field_c;
    bool m();
};

extern "C" void* __stdcall func_0048cf60(void*);

bool T_func_00561fd0::m()
{
    void* p = field_c;
    if (p != 0) {
        return false;
    }
    void* q = func_0048cf60(p);
    if (q == 0) {
        return false;
    }
    void* r = *(void**)((char*)q + 0xc0);
    if (r == 0) {
        return false;
    }
    char* begin = *(char**)((char*)r + 4);
    if (begin == 0) {
        return false;
    }
    char* end = *(char**)((char*)r + 8);
    int count = (int)((end - begin) >> 3);
    return count != 0;
}
