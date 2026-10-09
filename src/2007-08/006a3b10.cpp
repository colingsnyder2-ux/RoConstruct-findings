// from server: 69% by colin
// roc 2007-08 006a3b10  unit: PAUHWND__::?$CArray  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a3b10
//
// 006a3b10  57                   push edi
// 006a3b11  8bf9                 mov edi, ecx
// 006a3b13  8b4710               mov eax, dword ptr [edi + 0x10]
// 006a3b16  85c0                 test eax, eax
// 006a3b18  7447                 je 0x6a3b61
// 006a3b1a  7e47                 jle 0x6a3b63
// 006a3b1c  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 006a3b1f  8b11                 mov edx, dword ptr [ecx]
// 006a3b21  83ba2801000000       cmp dword ptr [edx + 0x128], 0
// 006a3b28  7e37                 jle 0x6a3b61
// 006a3b2a  56                   push esi
// 006a3b2b  33f6                 xor esi, esi
// 006a3b2d  85c0                 test eax, eax
// 006a3b2f  7e2f                 jle 0x6a3b60
// 006a3b31  85f6                 test esi, esi
// 006a3b33  7c2e                 jl 0x6a3b63
// 006a3b35  3b7710               cmp esi, dword ptr [edi + 0x10]
// 006a3b38  7d29                 jge 0x6a3b63
// 006a3b3a  8b470c               mov eax, dword ptr [edi + 0xc]
// 006a3b3d  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006a3b40  83b92801000000       cmp dword ptr [ecx + 0x128], 0
// 006a3b47  750f                 jne 0x6a3b58
// 006a3b49  3b7710               cmp esi, dword ptr [edi + 0x10]
// 006a3b4c  7d15                 jge 0x6a3b63
// 006a3b4e  8bd0                 mov edx, eax
// 006a3b50  8b0cb2               mov ecx, dword ptr [edx + esi*4]
// 006a3b53  e8f8fbf9ff           call 0x643750
// 006a3b58  83c601               add esi, 1
// 006a3b5b  3b7710               cmp esi, dword ptr [edi + 0x10]
// 006a3b5e  7cd1                 jl 0x6a3b31
// 006a3b60  5e                   pop esi
// 006a3b61  5f                   pop edi
// 006a3b62  c3                   ret 
// 006a3b63  e9b8c3f8ff           jmp 0x62ff20

struct HWND__;

struct Inner {
    char pad[0x128];
    int field128;
};

struct CArray {
    char pad0[0xc];
    Inner** data;
    int size;
    int capacity;

    void Method();
};

void Inner_Method(Inner* p);

void CArray::Method()
{
    if (size == 0)
        return;
    if (size <= 0)
        goto err;
    if (data[0]->field128 <= 0)
        return;
    for (int i = 0; i < size; ++i) {
        if (i < 0)
            goto err;
        if (i >= size)
            goto err;
        if (data[i]->field128 == 0) {
            if (i >= size)
                goto err;
            Inner_Method(data[i]);
        }
    }
    return;
err:
    extern void Error();
    Error();
}
