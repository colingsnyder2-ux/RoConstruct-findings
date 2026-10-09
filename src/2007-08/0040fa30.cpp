// from server: 25% by colin
// roc 2007-08 0040fa30  unit: CopyVerb  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040fa30
//
// 0040fa30  8bc1                 mov eax, ecx
// 0040fa32  33c9                 xor ecx, ecx
// 0040fa34  394c2404             cmp dword ptr [esp + 4], ecx
// 0040fa38  740e                 je 0x40fa48
// 0040fa3a  c74004b06d7800       mov dword ptr [eax + 4], 0x786db0
// 0040fa41  c740280c6d7800       mov dword ptr [eax + 0x28], 0x786d0c
// 0040fa48  8b5004               mov edx, dword ptr [eax + 4]
// 0040fa4b  c7009c6d7800         mov dword ptr [eax], 0x786d9c
// 0040fa51  8b5204               mov edx, dword ptr [edx + 4]
// 0040fa54  c7440204946d7800     mov dword ptr [edx + eax + 4], 0x786d94
// 0040fa5c  8b155c228c00         mov edx, dword ptr [0x8c225c]
// 0040fa62  894808               mov dword ptr [eax + 8], ecx
// 0040fa65  89480c               mov dword ptr [eax + 0xc], ecx
// 0040fa68  894810               mov dword ptr [eax + 0x10], ecx
// 0040fa6b  895014               mov dword ptr [eax + 0x14], edx
// 0040fa6e  894818               mov dword ptr [eax + 0x18], ecx
// 0040fa71  894820               mov dword ptr [eax + 0x20], ecx
// 0040fa74  894824               mov dword ptr [eax + 0x24], ecx
// 0040fa77  8b4804               mov ecx, dword ptr [eax + 4]
// 0040fa7a  c700c46d7800         mov dword ptr [eax], 0x786dc4
// 0040fa80  8b5104               mov edx, dword ptr [ecx + 4]
// 0040fa83  c7440204bc6d7800     mov dword ptr [edx + eax + 4], 0x786dbc
// 0040fa8b  c20400               ret 4

struct CopyVerb {
    void construct(int);
};

void CopyVerb::construct(int flag) {
    if (flag != 0) {
        *(int*)((char*)this + 4) = 0x786db0;
        *(int*)((char*)this + 0x28) = 0x786d0c;
    }
    int* p4 = *(int**)((char*)this + 4);
    *(int*)this = 0x786d9c;
    int* p4b = *(int**)((char*)p4 + 4);
    *(int*)((char*)p4b + (int)this + 4) = 0x786d94;
    int g = *(int*)0x8c225c;
    *(int*)((char*)this + 8) = 0;
    *(int*)((char*)this + 0xc) = 0;
    *(int*)((char*)this + 0x10) = 0;
    *(int*)((char*)this + 0x14) = g;
    *(int*)((char*)this + 0x18) = 0;
    *(int*)((char*)this + 0x20) = 0;
    *(int*)((char*)this + 0x24) = 0;
    int* q4 = *(int**)((char*)this + 4);
    *(int*)this = 0x786dc4;
    int* q4b = *(int**)((char*)q4 + 4);
    *(int*)((char*)q4b + (int)this + 4) = 0x786dbc;
}
