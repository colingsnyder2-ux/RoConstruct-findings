// from server: 100% by king_originala
// roc 2008-06 0040e560  unit: CBrowserView  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040e560
//
// 0040e560  56                   push esi
// 0040e561  57                   push edi
// 0040e562  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0040e566  57                   push edi
// 0040e567  8bf1                 mov esi, ecx
// 0040e569  e816262900           call 0x6a0b84
// 0040e56e  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0040e571  85c9                 test ecx, ecx
// 0040e573  740d                 je 0x40e582
// 0040e575  8b01                 mov eax, dword ptr [ecx]
// 0040e577  8b5058               mov edx, dword ptr [eax + 0x58]
// 0040e57a  57                   push edi
// 0040e57b  ffd2                 call edx
// 0040e57d  5f                   pop edi
// 0040e57e  5e                   pop esi
// 0040e57f  c20400               ret 4
// 0040e582  8bce                 mov ecx, esi
// 0040e584  e8eb232900           call 0x6a0974
// 0040e589  85c0                 test eax, eax
// 0040e58b  740f                 je 0x40e59c
// 0040e58d  57                   push edi
// 0040e58e  8bce                 mov ecx, esi
// 0040e590  e8df232900           call 0x6a0974
// 0040e595  8bc8                 mov ecx, eax
// 0040e597  e87e262900           call 0x6a0c1a
// 0040e59c  5f                   pop edi
// 0040e59d  5e                   pop esi
// 0040e59e  c20400               ret 4

struct Receiver {
    void forward(int value);
};

struct CBrowserView {
    char padding[0x54];
    void* receiver;

    void initial(int value);
    Receiver* lookup();
    void method(int value);
};

void CBrowserView::method(int value) {
    initial(value);
    if (receiver) {
        void* p = receiver;
        void** table = *(void***)p;
        void (__thiscall *fn)(void*, int) =
            (void (__thiscall *)(void*, int))table[0x58 / 4];
        fn(p, value);
    } else if (lookup()) {
        lookup()->forward(value);
    }
}
