// from server: 54% by colin
// roc 2007-08 00404110  unit: ATL::CRegObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00404110
//
// 00404110  56                   push esi
// 00404111  8d7104               lea esi, [ecx + 4]
// 00404114  8d442408             lea eax, [esp + 8]
// 00404118  50                   push eax
// 00404119  8bce                 mov ecx, esi
// 0040411b  e800e7ffff           call 0x402820
// 00404120  83f8ff               cmp eax, -1
// 00404123  7506                 jne 0x40412b
// 00404125  33c0                 xor eax, eax
// 00404127  5e                   pop esi
// 00404128  c20400               ret 4
// 0040412b  85c0                 test eax, eax
// 0040412d  7c0f                 jl 0x40413e
// 0040412f  3b4608               cmp eax, dword ptr [esi + 8]
// 00404132  7d0a                 jge 0x40413e
// 00404134  8b4e04               mov ecx, dword ptr [esi + 4]
// 00404137  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0040413a  5e                   pop esi
// 0040413b  c20400               ret 4
// 0040413e  6a00                 push 0
// 00404140  6a00                 push 0
// 00404142  6a01                 push 1
// 00404144  688c0000c0           push 0xc000008c
// 00404149  ff150cd37700         call dword ptr [0x77d30c]

struct CRegObject {
    char pad[4];
    int m_unknown4;
    int m_count;
    int m_data;
    int Find(const char* name);
};

extern "C" int __stdcall sub_402820(int* out, const char* name);
extern "C" void __stdcall RaiseException(unsigned long code, unsigned long flags, unsigned long count, const unsigned long* args);

int CRegObject::Find(const char* name)
{
    int index;
    if (sub_402820(&index, name) == -1)
        return 0;
    if (index < 0 || index >= m_count)
    {
        RaiseException(0xc000008c, 1, 0, 0);
    }
    return *(int*)(m_data + index * 4);
}
