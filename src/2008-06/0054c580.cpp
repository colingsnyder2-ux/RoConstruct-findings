// from server: 100% by king_originala
// roc 2008-06 0054c580  unit: RBX::RenderBase::Mesh  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054c580
//
// 0054c580  55                   push ebp
// 0054c581  8bec                 mov ebp, esp
// 0054c583  51                   push ecx
// 0054c584  894dfc               mov dword ptr [ebp - 4], ecx
// 0054c587  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054c58a  83780c00             cmp dword ptr [eax + 0xc], 0
// 0054c58e  7437                 je 0x54c5c7
// 0054c590  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054c593  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0054c596  52                   push edx
// 0054c597  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054c59a  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0054c59d  51                   push ecx
// 0054c59e  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054c5a1  e8eac8f0ff           call 0x458e90
// 0054c5a6  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054c5a9  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054c5ac  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 0054c5af  2b480c               sub ecx, dword ptr [eax + 0xc]
// 0054c5b2  d1f9                 sar ecx, 1
// 0054c5b4  51                   push ecx
// 0054c5b5  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054c5b8  8b420c               mov eax, dword ptr [edx + 0xc]
// 0054c5bb  50                   push eax
// 0054c5bc  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054c5bf  83c108               add ecx, 8
// 0054c5c2  e819fef8ff           call 0x4dc3e0
// 0054c5c7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054c5ca  c7410c00000000       mov dword ptr [ecx + 0xc], 0
// 0054c5d1  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054c5d4  c7421000000000       mov dword ptr [edx + 0x10], 0
// 0054c5db  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054c5de  c7401400000000       mov dword ptr [eax + 0x14], 0
// 0054c5e5  8be5                 mov esp, ebp
// 0054c5e7  5d                   pop ebp
// 0054c5e8  c3                   ret 

#pragma optimize("", off)

struct S_func_00458e90 {
    void f(int a1, int a2);
};

struct Allocator {
    int unused;
    void deallocate(short* p, unsigned int count);
};

struct S {
    int unused[2];
    Allocator allocator;
    short* first;
    short* last;
    short* limit;
    void clear();
};

void S::clear()
{
    if (first != 0) {
        reinterpret_cast<S_func_00458e90*>(this)->f(
            reinterpret_cast<int>(first), reinterpret_cast<int>(last));
        allocator.deallocate(first, limit - first);
    }
    first = 0;
    last = 0;
    limit = 0;
}
