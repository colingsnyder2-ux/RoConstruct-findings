// from server: 56% by colin
// roc 2007-08 0055f040  unit: RBX::ClearBackpack  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055f040
//
// 0055f040  8b442404             mov eax, dword ptr [esp + 4]
// 0055f044  8b80c0000000         mov eax, dword ptr [eax + 0xc0]
// 0055f04a  85c0                 test eax, eax
// 0055f04c  7418                 je 0x55f066
// 0055f04e  8b4804               mov ecx, dword ptr [eax + 4]
// 0055f051  85c9                 test ecx, ecx
// 0055f053  7411                 je 0x55f066
// 0055f055  8b4008               mov eax, dword ptr [eax + 8]
// 0055f058  2bc1                 sub eax, ecx
// 0055f05a  c1f803               sar eax, 3
// 0055f05d  33c9                 xor ecx, ecx
// 0055f05f  3bc8                 cmp ecx, eax
// 0055f061  1bc0                 sbb eax, eax
// 0055f063  f7d8                 neg eax
// 0055f065  c3                   ret 
// 0055f066  33c0                 xor eax, eax
// 0055f068  33c9                 xor ecx, ecx
// 0055f06a  3bc8                 cmp ecx, eax
// 0055f06c  1bc0                 sbb eax, eax
// 0055f06e  f7d8                 neg eax
// 0055f070  c3                   ret 

struct Backpack {
    char pad[0xc0];
    void* field_c0;
    int method();
};

int Backpack::method()
{
    void* p = field_c0;
    if (p) {
        int* begin = *(int**)((char*)p + 4);
        if (begin) {
            int* end = *(int**)((char*)p + 8);
            int count = (int)(((char*)end - (char*)begin) >> 3);
            int zero = 0;
            return (zero < count) ? 1 : 0;
        }
    }
    return 0;
}
