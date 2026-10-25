// from server: 100% by king_originala
// roc 2008-06 00542500  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00542500
//
// 00542500  55                   push ebp
// 00542501  8bec                 mov ebp, esp
// 00542503  51                   push ecx
// 00542504  894dfc               mov dword ptr [ebp - 4], ecx
// 00542507  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054250a  83780c00             cmp dword ptr [eax + 0xc], 0
// 0054250e  743f                 je 0x54254f
// 00542510  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00542513  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00542516  52                   push edx
// 00542517  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054251a  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0054251d  51                   push ecx
// 0054251e  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00542521  e8ca1d0000           call 0x5442f0
// 00542526  8b55fc               mov edx, dword ptr [ebp - 4]
// 00542529  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054252c  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 0054252f  2b480c               sub ecx, dword ptr [eax + 0xc]
// 00542532  8bc1                 mov eax, ecx
// 00542534  99                   cdq 
// 00542535  b928000000           mov ecx, 0x28
// 0054253a  f7f9                 idiv ecx
// 0054253c  50                   push eax
// 0054253d  8b55fc               mov edx, dword ptr [ebp - 4]
// 00542540  8b420c               mov eax, dword ptr [edx + 0xc]
// 00542543  50                   push eax
// 00542544  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00542547  83c108               add ecx, 8
// 0054254a  e8c1100000           call 0x543610
// 0054254f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00542552  c7410c00000000       mov dword ptr [ecx + 0xc], 0
// 00542559  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054255c  c7421000000000       mov dword ptr [edx + 0x10], 0
// 00542563  8b45fc               mov eax, dword ptr [ebp - 4]
// 00542566  c7401400000000       mov dword ptr [eax + 0x14], 0
// 0054256d  8be5                 mov esp, ebp
// 0054256f  5d                   pop ebp
// 00542570  c3                   ret 

#pragma optimize("", off)

struct Element {
    char data[40];
};

struct Allocator {
    char data[4];
    void deallocate(Element* p, unsigned int count);
};

struct S {
    char padding[8];
    Allocator allocator;
    Element* first;
    Element* last;
    Element* limit;

    void destroy(Element* begin, Element* end);
    void clear_storage();
};

void S::clear_storage()
{
    if (first != 0) {
        destroy(first, last);
        allocator.deallocate(first, limit - first);
    }
    first = 0;
    last = 0;
    limit = 0;
}
