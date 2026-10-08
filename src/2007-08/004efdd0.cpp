// from server: 51% by colin
// roc 2007-08 004efdd0  unit: RBX::Render::VChunk::?$WeakReferenceCountedPointer  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004efdd0
//
// 004efdd0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004efdd4  8b442414             mov eax, dword ptr [esp + 0x14]
// 004efdd8  3bc8                 cmp ecx, eax
// 004efdda  7411                 je 0x4efded
// 004efddc  8b542418             mov edx, dword ptr [esp + 0x18]
// 004efde0  8b12                 mov edx, dword ptr [edx]
// 004efde2  3911                 cmp dword ptr [ecx], edx
// 004efde4  7407                 je 0x4efded
// 004efde6  83c104               add ecx, 4
// 004efde9  3bc8                 cmp ecx, eax
// 004efdeb  75f5                 jne 0x4efde2
// 004efded  8b442404             mov eax, dword ptr [esp + 4]
// 004efdf1  8b542408             mov edx, dword ptr [esp + 8]
// 004efdf5  8910                 mov dword ptr [eax], edx
// 004efdf7  894804               mov dword ptr [eax + 4], ecx
// 004efdfa  c3                   ret 

struct S {
    void f(int* a, int* b, int* c, int* d, int* e);
};

void S::f(int* a, int* b, int* c, int* d, int* e)
{
    int* p = c;
    int* end = e;
    if (p != end) {
        int v = *d;
        while (*p != v) {
            p++;
            if (p == end)
                break;
        }
    }
    *a = *b;
    a[1] = (int)p;
}
