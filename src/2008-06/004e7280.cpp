// from server: 62% by colin
// roc 2008-06 004e7280  unit: RBX::ViewNew::Texture  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e7280
//
// 004e7280  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e7284  83f803               cmp eax, 3
// 004e7287  7441                 je 0x4e72ca
// 004e7289  85c0                 test eax, eax
// 004e728b  7517                 jne 0x4e72a4
// 004e728d  8b442408             mov eax, dword ptr [esp + 8]
// 004e7291  85c0                 test eax, eax
// 004e7293  743f                 je 0x4e72d4
// 004e7295  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e7299  8b11                 mov edx, dword ptr [ecx]
// 004e729b  8910                 mov dword ptr [eax], edx
// 004e729d  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e72a0  894804               mov dword ptr [eax + 4], ecx
// 004e72a3  c3                   ret 
// 004e72a4  83f801               cmp eax, 1
// 004e72a7  742b                 je 0x4e72d4
// 004e72a9  56                   push esi
// 004e72aa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e72ae  8b0e                 mov ecx, dword ptr [esi]
// 004e72b0  68d8199400           push 0x9419d8
// 004e72b5  ff1578288000         call dword ptr [0x802878]
// 004e72bb  0fb6d0               movzx edx, al
// 004e72be  f7da                 neg edx
// 004e72c0  1bd2                 sbb edx, edx
// 004e72c2  23542408             and edx, dword ptr [esp + 8]
// 004e72c6  8916                 mov dword ptr [esi], edx
// 004e72c8  5e                   pop esi
// 004e72c9  c3                   ret 
// 004e72ca  8b442408             mov eax, dword ptr [esp + 8]
// 004e72ce  c700d8199400         mov dword ptr [eax], 0x9419d8
// 004e72d4  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct S {
};

int __cdecl f(int a1, void* a2, int a3)
{
    if (a3 == 3) {
        *(int*)a2 = 0x9419d8;
        return 0;
    }
    if (a3 == 0) {
        if (a2 == 0)
            return 0;
        *(int*)a2 = *(int*)a1;
        *(int*)((char*)a2 + 4) = *(int*)(a1 + 4);
        return 0;
    }
    if (a3 == 1)
        return 0;
    {
        int* p = (int*)a2;
        int v = *p;
        int r = ((const type_info*)v)->operator==(*(const type_info*)0x9419d8);
        *p = r ? a1 : 0;
    }
    return 0;
}
