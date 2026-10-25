// from server: 100% by king_originala
// roc 2008-06 0054d9c0  unit: RBX::RenderBase::Mesh  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054d9c0
//
// 0054d9c0  55                   push ebp
// 0054d9c1  8bec                 mov ebp, esp
// 0054d9c3  51                   push ecx
// 0054d9c4  894dfc               mov dword ptr [ebp - 4], ecx
// 0054d9c7  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054d9ca  83780c00             cmp dword ptr [eax + 0xc], 0
// 0054d9ce  743f                 je 0x54da0f
// 0054d9d0  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054d9d3  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0054d9d6  52                   push edx
// 0054d9d7  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054d9da  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0054d9dd  51                   push ecx
// 0054d9de  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054d9e1  e8aab4f0ff           call 0x458e90
// 0054d9e6  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054d9e9  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054d9ec  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 0054d9ef  2b480c               sub ecx, dword ptr [eax + 0xc]
// 0054d9f2  8bc1                 mov eax, ecx
// 0054d9f4  99                   cdq 
// 0054d9f5  b90c000000           mov ecx, 0xc
// 0054d9fa  f7f9                 idiv ecx
// 0054d9fc  50                   push eax
// 0054d9fd  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054da00  8b420c               mov eax, dword ptr [edx + 0xc]
// 0054da03  50                   push eax
// 0054da04  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054da07  83c108               add ecx, 8
// 0054da0a  e8d1e9f8ff           call 0x4dc3e0
// 0054da0f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054da12  c7410c00000000       mov dword ptr [ecx + 0xc], 0
// 0054da19  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054da1c  c7421000000000       mov dword ptr [edx + 0x10], 0
// 0054da23  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054da26  c7401400000000       mov dword ptr [eax + 0x14], 0
// 0054da2d  8be5                 mov esp, ebp
// 0054da2f  5d                   pop ebp
// 0054da30  c3                   ret 

#pragma optimize("", off)

struct Element {
    int data[3];
};

struct Allocator {
    int state;
    void deallocate(Element* p, unsigned int count);
};

struct Mesh {
    int reserved[2];
    Allocator allocator;
    Element* first;
    Element* last;
    Element* limit;

    void destroy(int first, int last);
    void clear();
};

void Mesh::clear()
{
    if (first != 0) {
        destroy((int)first, (int)last);
        allocator.deallocate(first, (unsigned int)(limit - first));
    }

    first = 0;
    last = 0;
    limit = 0;
}
