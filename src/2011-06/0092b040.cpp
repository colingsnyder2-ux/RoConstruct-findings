// from server: 41% by atomic.potato
// roc 2011-06 0092b040  unit: ResourceGroupHelper::UpdateMaterialRenderableVisitor  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0092b040
//
// 0092b040  6aff                 push -1
// 0092b042  64a100000000         mov eax, dword ptr fs:[0]
// 0092b048  68f307a100           push 0xa107f3
// 0092b04d  50                   push eax
// 0092b04e  64892500000000       mov dword ptr fs:[0], esp
// 0092b055  81ecc8000000         sub esp, 0xc8
// 0092b05b  53                   push ebx
// 0092b05c  55                   push ebp
// 0092b05d  56                   push esi
// 0092b05e  57                   push edi
// 0092b05f  8bbc24e8000000       mov edi, dword ptr [esp + 0xe8]
// 0092b066  57                   push edi
// 0092b067  8bf1                 mov esi, ecx
// 0092b069  e822eeffff           call 0x929e90
// 0092b06e  8be8                 mov ebp, eax
// 0092b070  57                   push edi
// 0092b071  8d442414             lea eax, [esp + 0x14]
// 0092b075  50                   push eax
// 0092b076  8bce                 mov ecx, esi
// 0092b078  8bda                 mov ebx, edx
// 0092b07a  e821efffff           call 0x929fa0
// 0092b07f  8b4e04               mov ecx, dword ptr [esi + 4]
// 0092b082  8b442410             mov eax, dword ptr [esp + 0x10]
// 0092b086  3bc1                 cmp eax, ecx
// 0092b088  0f84eb000000         je 0x92b179
// 0092b08e  8b4834               mov ecx, dword ptr [eax + 0x34]
// 0092b091  3bcb                 cmp ecx, ebx
// 0092b093  0f8fed000000         jg 0x92b186
// 0092b099  7c0b                 jl 0x92b0a6
// 0092b09b  8b5030               mov edx, dword ptr [eax + 0x30]
// 0092b09e  3bd5                 cmp edx, ebp
// 0092b0a0  0f83e0000000         jae 0x92b186
// 0092b0a6  896830               mov dword ptr [eax + 0x30], ebp
// 0092b0a9  689852af00           push 0xaf5298
// 0092b0ae  8d4c2418             lea ecx, [esp + 0x18]
// 0092b0b2  895834               mov dword ptr [eax + 0x34], ebx
// 0092b0b5  ff15c404a400         call dword ptr [0xa404c4]
// 0092b0bb  6a00                 push 0
// 0092b0bd  8d442418             lea eax, [esp + 0x18]
// 0092b0c1  6a02                 push 2
// 0092b0c3  50                   push eax
// 0092b0c4  c78424ec00000000000000 mov dword ptr [esp + 0xec], 0
// 0092b0cf  ff15e018a400         call dword ptr [0xa418e0]
// 0092b0d5  8bc8                 mov ecx, eax
// 0092b0d7  ff15e418a400         call dword ptr [0xa418e4]
// 0092b0dd  83cdff               or ebp, 0xffffffff
// 0092b0e0  8d4c2414             lea ecx, [esp + 0x14]
// 0092b0e4  89ac24e0000000       mov dword ptr [esp + 0xe0], ebp
// 0092b0eb  ff15d004a400         call dword ptr [0xa404d0]
// 0092b0f1  80bc24f000000000     cmp byte ptr [esp + 0xf0], 0
// 0092b0f9  8d5d02               lea ebx, [ebp + 2]
// 0092b0fc  7468                 je 0x92b166
// 0092b0fe  8d4c244c             lea ecx, [esp + 0x4c]
// 0092b102  e8a9e7ffff           call 0x9298b0
// 0092b107  57                   push edi
// 0092b108  8bce                 mov ecx, esi
// 0092b10a  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 0092b111  e81afaffff           call 0x92ab30
// 0092b116  8d4c2430             lea ecx, [esp + 0x30]
// 0092b11a  51                   push ecx
// 0092b11b  8d4c2450             lea ecx, [esp + 0x50]
// 0092b11f  e8dce5ffff           call 0x929700
// 0092b124  8b8c24ec000000       mov ecx, dword ptr [esp + 0xec]
// 0092b12b  50                   push eax
// 0092b12c  c68424e400000002     mov byte ptr [esp + 0xe4], 2
// 0092b134  ff15a804a400         call dword ptr [0xa404a8]
// 0092b13a  8d4c2430             lea ecx, [esp + 0x30]
// 0092b13e  889c24e0000000       mov byte ptr [esp + 0xe0], bl
// 0092b145  ff15d004a400         call dword ptr [0xa404d0]
// 0092b14b  8d4c244c             lea ecx, [esp + 0x4c]
// 0092b14f  89ac24e0000000       mov dword ptr [esp + 0xe0], ebp
// 0092b156  e805e5ffff           call 0x929660
// 0092b15b  8bce                 mov ecx, esi
// 0092b15d  e8cefbffff           call 0x92ad30
// 0092b162  8ac3                 mov al, bl
// 0092b164  eb22                 jmp 0x92b188
// 0092b166  57                   push edi
// 0092b167  8bce                 mov ecx, esi
// 0092b169  e8c2f9ffff           call 0x92ab30
// 0092b16e  8bce                 mov ecx, esi
// 0092b170  e8bbfbffff           call 0x92ad30
// 0092b175  8ac3                 mov al, bl
// 0092b177  eb0f                 jmp 0x92b188
// 0092b179  57                   push edi
// 0092b17a  8bce                 mov ecx, esi
// 0092b17c  e82ff8ffff           call 0x92a9b0
// 0092b181  8928                 mov dword ptr [eax], ebp
// 0092b183  895804               mov dword ptr [eax + 4], ebx
// 0092b186  32c0                 xor al, al
// 0092b188  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 0092b18f  5f                   pop edi
// 0092b190  5e                   pop esi
// 0092b191  5d                   pop ebp
// 0092b192  5b                   pop ebx
// 0092b193  64890d00000000       mov dword ptr fs:[0], ecx
// 0092b19a  81c4d4000000         add esp, 0xd4
// 0092b1a0  c20c00               ret 0xc

struct String {
    void* pad[4];
    String(const char*);
    String(const String&);
    ~String();
    String& operator=(const String&);
};

struct Visitor {
    char pad0[4];
    void* end;
    char pad8[0x28];
    int field30;
    int field34;
};

struct Helper {
    char pad0[4];
    Visitor* end;
    void sub_929e90(int);
    void sub_929fa0(void*, int);
    void sub_92a9b0(int);
    void sub_92ab30(int);
    void sub_92ad30();
    void sub_9298b0();
    void sub_929700(void*);
    void sub_929660();
    bool sub_92b040(int, int);
};

extern "C" {
    void* __stdcall sub_a404c4(void*, const char*);
    void* __stdcall sub_a418e0(void*, int, void*);
    void* __stdcall sub_a418e4(void*);
    void* __stdcall sub_a404d0(void*);
    void* __stdcall sub_a404a8(void*, void*);
}

bool Helper::sub_92b040(int a, int b)
{
    int ebp = 0;
    int ebx = 0;
    Visitor* it;
    char buf[0x30];
    char buf2[0x30];
    bool flag;

    sub_929e90(a);
    ebp = (int)this;
    sub_929fa0(&it, a);
    ebx = b;

    if (it == end) {
        sub_92a9b0(a);
        *(int*)this = ebp;
        *(int*)((char*)this + 4) = ebx;
        return false;
    }

    if (it->field34 > ebx) {
        return false;
    }
    if (it->field34 == ebx && (unsigned)it->field30 >= (unsigned)ebp) {
        return false;
    }

    it->field30 = ebp;
    it->field34 = ebx;

    String tmp("time has evoluated ! reload the resourcegroup!");
    sub_a418e0(&tmp, 2, 0);
    sub_a418e4(0);
    sub_a404d0(&tmp);

    flag = *(bool*)((char*)this + 0x30);
    ebx = 2;

    if (flag) {
        sub_9298b0();
        sub_92ab30(a);
        sub_929700(buf2);
        sub_a404a8(buf, buf2);
        sub_a404d0(buf);
        sub_929660();
        sub_92ad30();
        return true;
    } else {
        sub_92ab30(a);
        sub_92ad30();
        return true;
    }
}
