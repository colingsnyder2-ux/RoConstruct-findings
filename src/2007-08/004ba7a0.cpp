// from server: 39% by colin
// roc 2007-08 004ba7a0  unit: RakPeer  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ba7a0
//
// 004ba7a0  8b542404             mov edx, dword ptr [esp + 4]
// 004ba7a4  85d2                 test edx, edx
// 004ba7a6  57                   push edi
// 004ba7a7  8bf9                 mov edi, ecx
// 004ba7a9  7459                 je 0x4ba804
// 004ba7ab  8b8fac020000         mov ecx, dword ptr [edi + 0x2ac]
// 004ba7b1  56                   push esi
// 004ba7b2  33f6                 xor esi, esi
// 004ba7b4  85c9                 test ecx, ecx
// 004ba7b6  764b                 jbe 0x4ba803
// 004ba7b8  8b87a8020000         mov eax, dword ptr [edi + 0x2a8]
// 004ba7be  8bff                 mov edi, edi
// 004ba7c0  3910                 cmp dword ptr [eax], edx
// 004ba7c2  740f                 je 0x4ba7d3
// 004ba7c4  83c601               add esi, 1
// 004ba7c7  83c004               add eax, 4
// 004ba7ca  3bf1                 cmp esi, ecx
// 004ba7cc  72f2                 jb 0x4ba7c0
// 004ba7ce  5e                   pop esi
// 004ba7cf  5f                   pop edi
// 004ba7d0  c20400               ret 4
// 004ba7d3  83feff               cmp esi, -1
// 004ba7d6  742b                 je 0x4ba803
// 004ba7d8  8b87a8020000         mov eax, dword ptr [edi + 0x2a8]
// 004ba7de  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 004ba7e1  8b11                 mov edx, dword ptr [ecx]
// 004ba7e3  8b4208               mov eax, dword ptr [edx + 8]
// 004ba7e6  57                   push edi
// 004ba7e7  ffd0                 call eax
// 004ba7e9  8b87a8020000         mov eax, dword ptr [edi + 0x2a8]
// 004ba7ef  8b8fac020000         mov ecx, dword ptr [edi + 0x2ac]
// 004ba7f5  8b5488fc             mov edx, dword ptr [eax + ecx*4 - 4]
// 004ba7f9  8914b0               mov dword ptr [eax + esi*4], edx
// 004ba7fc  8387ac020000ff       add dword ptr [edi + 0x2ac], -1
// 004ba803  5e                   pop esi
// 004ba804  5f                   pop edi
// 004ba805  c20400               ret 4

struct RakPeer {
    int findAndRemove(void* p);
};

int RakPeer::findAndRemove(void* p) {
    if (p == 0) {
        return 0;
    }
    unsigned int count = *(unsigned int*)((char*)this + 0x2ac);
    unsigned int i = 0;
    if (count != 0) {
        void** arr = *(void***)((char*)this + 0x2a8);
        while (arr[i] != p) {
            i++;
            if (i >= count) {
                return 0;
            }
        }
        if (i != (unsigned int)-1) {
            void* obj = arr[i];
            void** vtable = *(void***)obj;
            void (*fn)(void*, void*) = (void (*)(void*, void*))vtable[2];
            fn(obj, this);
            void** arr2 = *(void***)((char*)this + 0x2a8);
            unsigned int count2 = *(unsigned int*)((char*)this + 0x2ac);
            arr2[i] = arr2[count2 - 1];
            *(unsigned int*)((char*)this + 0x2ac) = count2 - 1;
        }
    }
    return 0;
}
