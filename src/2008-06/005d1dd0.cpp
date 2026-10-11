// from server: 82% by colin
// roc 2008-06 005d1dd0  unit: RBX::VBackpack::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d1dd0
//
// 005d1dd0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005d1dd4  85c0                 test eax, eax
// 005d1dd6  752f                 jne 0x5d1e07
// 005d1dd8  8b442408             mov eax, dword ptr [esp + 8]
// 005d1ddc  85c0                 test eax, eax
// 005d1dde  744c                 je 0x5d1e2c
// 005d1de0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d1de4  8b11                 mov edx, dword ptr [ecx]
// 005d1de6  8910                 mov dword ptr [eax], edx
// 005d1de8  8b5104               mov edx, dword ptr [ecx + 4]
// 005d1deb  895004               mov dword ptr [eax + 4], edx
// 005d1dee  8b5108               mov edx, dword ptr [ecx + 8]
// 005d1df1  895008               mov dword ptr [eax + 8], edx
// 005d1df4  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005d1df7  89500c               mov dword ptr [eax + 0xc], edx
// 005d1dfa  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005d1dfd  895010               mov dword ptr [eax + 0x10], edx
// 005d1e00  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 005d1e03  894814               mov dword ptr [eax + 0x14], ecx
// 005d1e06  c3                   ret 
// 005d1e07  83f801               cmp eax, 1
// 005d1e0a  7420                 je 0x5d1e2c
// 005d1e0c  56                   push esi
// 005d1e0d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005d1e11  8b0e                 mov ecx, dword ptr [esi]
// 005d1e13  68a8269500           push 0x9526a8
// 005d1e18  ff1578288000         call dword ptr [0x802878]
// 005d1e1e  0fb6d0               movzx edx, al
// 005d1e21  f7da                 neg edx
// 005d1e23  1bd2                 sbb edx, edx
// 005d1e25  23542408             and edx, dword ptr [esp + 8]
// 005d1e29  8916                 mov dword ptr [esi], edx
// 005d1e2b  5e                   pop esi
// 005d1e2c  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" void* __cdecl __RTtypeid(void*);

struct S {
};

void __cdecl f(int a1, void* a2, int a3)
{
    if (a3 == 0) {
        if (a2 == 0)
            return;
        int* src = (int*)a1;
        int* dst = (int*)a2;
        dst[0] = src[0];
        dst[1] = src[1];
        dst[2] = src[2];
        dst[3] = src[3];
        dst[4] = src[4];
        dst[5] = src[5];
        return;
    }
    if (a3 == 1)
        return;
    type_info* t = (type_info*)__RTtypeid(*(void**)a2);
    bool eq = t->operator==(*(type_info*)0x9526a8);
    *(int*)a2 = eq ? a1 : 0;
}
