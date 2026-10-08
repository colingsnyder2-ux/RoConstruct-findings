// from server: 97% by colin
// roc 2007-08 00724ed2  unit: CXTIconHandle  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00724ed2
//
// 00724ed2  8b442404             mov eax, dword ptr [esp + 4]
// 00724ed6  85c0                 test eax, eax
// 00724ed8  7c0d                 jl 0x724ee7
// 00724eda  3b4104               cmp eax, dword ptr [ecx + 4]
// 00724edd  7d08                 jge 0x724ee7
// 00724edf  8b09                 mov ecx, dword ptr [ecx]
// 00724ee1  8d0481               lea eax, [ecx + eax*4]
// 00724ee4  c20400               ret 4
// 00724ee7  6a00                 push 0
// 00724ee9  6a00                 push 0
// 00724eeb  6a01                 push 1
// 00724eed  688c0000c0           push 0xc000008c
// 00724ef2  ff150cd37700         call dword ptr [0x77d30c]

extern "C" __declspec(noreturn) void __stdcall RaiseException(unsigned long, unsigned long, unsigned long, const unsigned long*);

struct CXTIconHandle {
    int* data;
    int size;
    int* get(int index);
};

int* CXTIconHandle::get(int index)
{
    if (index < 0 || index >= size)
        RaiseException(0xc000008c, 1, 0, 0);
    return data + index;
}
