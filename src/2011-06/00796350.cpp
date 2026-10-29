// roc 2011-06 00796350  unit: RBX::VHttp::?$sp_counted_impl_p  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00796350
//
// 00796350  53                   push ebx
// 00796351  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00796355  56                   push esi
// 00796356  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0079635a  3bf3                 cmp esi, ebx
// 0079635c  742a                 je 0x796388
// 0079635e  57                   push edi
// 0079635f  8d7e08               lea edi, [esi + 8]
// 00796362  8b06                 mov eax, dword ptr [esi]
// 00796364  85c0                 test eax, eax
// 00796366  7415                 je 0x79637d
// 00796368  8b00                 mov eax, dword ptr [eax]
// 0079636a  85c0                 test eax, eax
// 0079636c  7409                 je 0x796377
// 0079636e  6a02                 push 2
// 00796370  57                   push edi
// 00796371  57                   push edi
// 00796372  ffd0                 call eax
// 00796374  83c40c               add esp, 0xc
// 00796377  c70600000000         mov dword ptr [esi], 0
// 0079637d  83c628               add esi, 0x28
// 00796380  83c728               add edi, 0x28
// 00796383  3bf3                 cmp esi, ebx
// 00796385  75db                 jne 0x796362
// 00796387  5f                   pop edi
// 00796388  5e                   pop esi
// 00796389  5b                   pop ebx
// 0079638a  c3                   ret 
// copied from an identical function in another client (function ?destroy_range@ns_ROCX000003@@YAXPAUElem@1@0@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
namespace ns_ROCX000003 {
// from server: 100% by atomic.potato
struct Elem {
    void* p;
    int pad[9];
};

struct Range {
    Elem* first;
    Elem* last;
};

void destroy_range(Elem* first, Elem* last) {
    while (first != last) {
        void** pp = (void**)first;
        void* obj = *pp;
        if (obj != 0) {
            void* fn = *(void**)obj;
            if (fn != 0) {
                typedef void (__cdecl *Fn)(void*, void*, int);
                ((Fn)fn)((void*)((char*)first + 8), (void*)((char*)first + 8), 2);
            }
            *pp = 0;
        }
        first = (Elem*)((char*)first + 0x28);
    }
}
}