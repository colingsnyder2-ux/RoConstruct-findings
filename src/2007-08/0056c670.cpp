// from server: 100% by colin
// roc 2007-08 0056c670  unit: RBX::StandardOut  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056c670
//
// 0056c670  33d2                 xor edx, edx
// 0056c672  39510c               cmp dword ptr [ecx + 0xc], edx
// 0056c675  742e                 je 0x56c6a5
// 0056c677  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0056c67a  3bc2                 cmp eax, edx
// 0056c67c  56                   push esi
// 0056c67d  7406                 je 0x56c685
// 0056c67f  8b7110               mov esi, dword ptr [ecx + 0x10]
// 0056c682  897010               mov dword ptr [eax + 0x10], esi
// 0056c685  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0056c688  3bc2                 cmp eax, edx
// 0056c68a  7406                 je 0x56c692
// 0056c68c  8b7114               mov esi, dword ptr [ecx + 0x14]
// 0056c68f  897014               mov dword ptr [eax + 0x14], esi
// 0056c692  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0056c695  3908                 cmp dword ptr [eax], ecx
// 0056c697  7505                 jne 0x56c69e
// 0056c699  8b7114               mov esi, dword ptr [ecx + 0x14]
// 0056c69c  8930                 mov dword ptr [eax], esi
// 0056c69e  895114               mov dword ptr [ecx + 0x14], edx
// 0056c6a1  895110               mov dword ptr [ecx + 0x10], edx
// 0056c6a4  5e                   pop esi
// 0056c6a5  c3                   ret 

struct RBX_StandardOut {
    char pad0[0xc];
    void* field_c;
    void* field_10;
    void* field_14;
    void m();
};

void RBX_StandardOut::m()
{
    if (field_c == 0)
        return;

    if (field_14 != 0) {
        void* p = field_10;
        *(void**)((char*)field_14 + 0x10) = p;
    }

    if (field_10 != 0) {
        void* p = field_14;
        *(void**)((char*)field_10 + 0x14) = p;
    }

    void* p = field_c;
    if (*(void**)p == this) {
        void* q = field_14;
        *(void**)p = q;
    }

    field_14 = 0;
    field_10 = 0;
}
