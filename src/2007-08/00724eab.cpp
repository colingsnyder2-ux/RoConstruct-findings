// from server: 51% by colin
// roc 2007-08 00724eab  unit: CXTIconHandle  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00724eab
//
// 00724eab  8b442404             mov eax, dword ptr [esp + 4]
// 00724eaf  85c0                 test eax, eax
// 00724eb1  7c0d                 jl 0x724ec0
// 00724eb3  3b4104               cmp eax, dword ptr [ecx + 4]
// 00724eb6  7d08                 jge 0x724ec0
// 00724eb8  8b09                 mov ecx, dword ptr [ecx]
// 00724eba  8d0441               lea eax, [ecx + eax*2]
// 00724ebd  c20400               ret 4
// 00724ec0  6a00                 push 0
// 00724ec2  6a00                 push 0
// 00724ec4  6a01                 push 1
// 00724ec6  688c0000c0           push 0xc000008c
// 00724ecb  ff150cd37700         call dword ptr [0x77d30c]

extern "C" __declspec(dllimport) void __stdcall RaiseException(unsigned long, unsigned long, unsigned long, const unsigned long*);

struct CXTIconHandle {
    short* at(int idx) const;
    short* m_data;
    int m_count;
};

short* CXTIconHandle::at(int idx) const {
    if (idx < 0 || idx >= m_count) {
        RaiseException(0xc000008c, 1, 0, 0);
    }
    return m_data + idx;
}
