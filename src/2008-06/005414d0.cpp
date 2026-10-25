// from server: 100% by king_originala
// roc 2008-06 005414d0  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005414d0
//
// 005414d0  55                   push ebp
// 005414d1  8bec                 mov ebp, esp
// 005414d3  51                   push ecx
// 005414d4  894dfc               mov dword ptr [ebp - 4], ecx
// 005414d7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005414da  83780c00             cmp dword ptr [eax + 0xc], 0
// 005414de  7438                 je 0x541518
// 005414e0  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005414e3  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005414e6  52                   push edx
// 005414e7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005414ea  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005414ed  51                   push ecx
// 005414ee  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005414f1  e8aaffffff           call 0x5414a0
// 005414f6  8b55fc               mov edx, dword ptr [ebp - 4]
// 005414f9  8b45fc               mov eax, dword ptr [ebp - 4]
// 005414fc  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 005414ff  2b480c               sub ecx, dword ptr [eax + 0xc]
// 00541502  c1f902               sar ecx, 2
// 00541505  51                   push ecx
// 00541506  8b55fc               mov edx, dword ptr [ebp - 4]
// 00541509  8b420c               mov eax, dword ptr [edx + 0xc]
// 0054150c  50                   push eax
// 0054150d  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00541510  83c108               add ecx, 8
// 00541513  e8f8200000           call 0x543610
// 00541518  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054151b  c7410c00000000       mov dword ptr [ecx + 0xc], 0
// 00541522  8b55fc               mov edx, dword ptr [ebp - 4]
// 00541525  c7421000000000       mov dword ptr [edx + 0x10], 0
// 0054152c  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054152f  c7401400000000       mov dword ptr [eax + 0x14], 0
// 00541536  8be5                 mov esp, ebp
// 00541538  5d                   pop ebp
// 00541539  c3                   ret 

#pragma optimize("", off)

struct Allocator {
    void deallocate(int* p, unsigned int count);
};

struct S {
    unsigned int unused[2];
    Allocator allocator;
    int* first;
    int* last;
    int* limit;

    void destroy(int* begin, int* end);
    void f();
};

void S::f() {
    if (first != 0) {
        destroy(first, last);
        allocator.deallocate(first, limit - first);
    }
    first = 0;
    last = 0;
    limit = 0;
}
