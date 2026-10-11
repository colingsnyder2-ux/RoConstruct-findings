// from server: 93% by colin
// roc 2008-06 0066ecb0  unit: RBX::HUMAN::GettingUp  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066ecb0
//
// 0066ecb0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066ecb4  85c0                 test eax, eax
// 0066ecb6  7523                 jne 0x66ecdb
// 0066ecb8  8b442408             mov eax, dword ptr [esp + 8]
// 0066ecbc  85c0                 test eax, eax
// 0066ecbe  7440                 je 0x66ed00
// 0066ecc0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0066ecc4  8b11                 mov edx, dword ptr [ecx]
// 0066ecc6  8910                 mov dword ptr [eax], edx
// 0066ecc8  8b5104               mov edx, dword ptr [ecx + 4]
// 0066eccb  895004               mov dword ptr [eax + 4], edx
// 0066ecce  8b5108               mov edx, dword ptr [ecx + 8]
// 0066ecd1  895008               mov dword ptr [eax + 8], edx
// 0066ecd4  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0066ecd7  89480c               mov dword ptr [eax + 0xc], ecx
// 0066ecda  c3                   ret 
// 0066ecdb  83f801               cmp eax, 1
// 0066ecde  7420                 je 0x66ed00
// 0066ece0  56                   push esi
// 0066ece1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066ece5  8b0e                 mov ecx, dword ptr [esi]
// 0066ece7  68e02c9600           push 0x962ce0
// 0066ecec  ff1578288000         call dword ptr [0x802878]
// 0066ecf2  0fb6d0               movzx edx, al
// 0066ecf5  f7da                 neg edx
// 0066ecf7  1bd2                 sbb edx, edx
// 0066ecf9  23542408             and edx, dword ptr [esp + 8]
// 0066ecfd  8916                 mov dword ptr [esi], edx
// 0066ecff  5e                   pop esi
// 0066ed00  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" {
    typedef void (__stdcall *PFN)(void);
}

struct S {
};

void __cdecl f(int a, int b, int c)
{
    if (c == 0) {
        if (b != 0) {
            *(int*)(b + 0) = *(int*)(a + 0);
            *(int*)(b + 4) = *(int*)(a + 4);
            *(int*)(b + 8) = *(int*)(a + 8);
            *(int*)(b + 12) = *(int*)(a + 12);
        }
        return;
    }
    if (c == 1)
        return;
    {
        int* p = (int*)b;
        const type_info* ti = (const type_info*)*p;
        bool r = ti->operator==(*(const type_info*)0x962ce0);
        int v = r ? 0 : -1;
        *p = v & a;
    }
}
