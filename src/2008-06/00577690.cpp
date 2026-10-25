// from server: 100% by king_originala
// roc 2008-06 00577690  unit: RBX::PAVTool::?$sp_counted_impl_pd  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577690
//
// 00577690  64a100000000         mov eax, dword ptr fs:[0]
// 00577696  6aff                 push -1
// 00577698  68ae077d00           push 0x7d07ae
// 0057769d  50                   push eax
// 0057769e  b901000000           mov ecx, 1
// 005776a3  64892500000000       mov dword ptr fs:[0], esp
// 005776aa  840d24529700         test byte ptr [0x975224], cl
// 005776b0  752f                 jne 0x5776e1
// 005776b2  090d24529700         or dword ptr [0x975224], ecx
// 005776b8  33c0                 xor eax, eax
// 005776ba  68c0d37f00           push 0x7fd3c0
// 005776bf  a318529700           mov dword ptr [0x975218], eax
// 005776c4  a31c529700           mov dword ptr [0x97521c], eax
// 005776c9  a314529700           mov dword ptr [0x975214], eax
// 005776ce  a220529700           mov byte ptr [0x975220], al
// 005776d3  880d21529700         mov byte ptr [0x975221], cl
// 005776d9  e8d1a01200           call 0x6a17af
// 005776de  83c404               add esp, 4
// 005776e1  8b0c24               mov ecx, dword ptr [esp]
// 005776e4  b814529700           mov eax, 0x975214
// 005776e9  64890d00000000       mov dword ptr fs:[0], ecx
// 005776f0  83c40c               add esp, 0xc
// 005776f3  c3                   ret 

struct S
{
    void* first;
    void* second;
    void* third;
    bool active;
    bool enabled;

    S();
    ~S();
};

__forceinline S::S()
{
    second = 0;
    third = 0;
    first = 0;
    active = false;
    enabled = true;

    if (second)
        this->~S();
}

S* __cdecl get_instance()
{
    static S instance;
    return &instance;
}
