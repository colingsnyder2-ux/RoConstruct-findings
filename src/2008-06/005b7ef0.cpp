// from server: 56% by colin
// roc 2008-06 005b7ef0  unit: VStockSound::?$FactoryProduct  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b7ef0
//
// 005b7ef0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b7ef4  83f803               cmp eax, 3
// 005b7ef7  7441                 je 0x5b7f3a
// 005b7ef9  85c0                 test eax, eax
// 005b7efb  7517                 jne 0x5b7f14
// 005b7efd  8b442408             mov eax, dword ptr [esp + 8]
// 005b7f01  85c0                 test eax, eax
// 005b7f03  743f                 je 0x5b7f44
// 005b7f05  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b7f09  8b11                 mov edx, dword ptr [ecx]
// 005b7f0b  8910                 mov dword ptr [eax], edx
// 005b7f0d  8b4904               mov ecx, dword ptr [ecx + 4]
// 005b7f10  894804               mov dword ptr [eax + 4], ecx
// 005b7f13  c3                   ret 
// 005b7f14  83f801               cmp eax, 1
// 005b7f17  742b                 je 0x5b7f44
// 005b7f19  56                   push esi
// 005b7f1a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b7f1e  8b0e                 mov ecx, dword ptr [esi]
// 005b7f20  6838d69400           push 0x94d638
// 005b7f25  ff1578288000         call dword ptr [0x802878]
// 005b7f2b  0fb6d0               movzx edx, al
// 005b7f2e  f7da                 neg edx
// 005b7f30  1bd2                 sbb edx, edx
// 005b7f32  23542408             and edx, dword ptr [esp + 8]
// 005b7f36  8916                 mov dword ptr [esi], edx
// 005b7f38  5e                   pop esi
// 005b7f39  c3                   ret 
// 005b7f3a  8b442408             mov eax, dword ptr [esp + 8]
// 005b7f3e  c70038d69400         mov dword ptr [eax], 0x94d638
// 005b7f44  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" {
    bool __stdcall MSVCR90_type_info_equal(const type_info*, const type_info*);
}

struct S {
    int f(int a, int b, int c);
};

int S::f(int a, int b, int c)
{
    if (c == 3) {
        *(int*)b = 0x94d638;
        return 0;
    }
    if (c == 0) {
        if (b == 0)
            return 0;
        *(int*)b = *(int*)a;
        *(int*)(b + 4) = *(int*)(a + 4);
        return 0;
    }
    if (c == 1)
        return 0;
    {
        int* p = (int*)a;
        int v = *p;
        bool eq = MSVCR90_type_info_equal((const type_info*)v, (const type_info*)0x94d638);
        *p = eq ? b : 0;
    }
    return 0;
}
