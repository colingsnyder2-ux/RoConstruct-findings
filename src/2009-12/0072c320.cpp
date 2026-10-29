// roc 2009-12 0072c320  unit: RBX::BaseThreadPool::UPoolData::XP6AXV?$shared_ptr::V?$bind_t::?$thread_data  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0072c320
//
// 0072c320  53                   push ebx
// 0072c321  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0072c325  56                   push esi
// 0072c326  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0072c32a  3bf3                 cmp esi, ebx
// 0072c32c  742a                 je 0x72c358
// 0072c32e  57                   push edi
// 0072c32f  8d7e08               lea edi, [esi + 8]
// 0072c332  8b06                 mov eax, dword ptr [esi]
// 0072c334  85c0                 test eax, eax
// 0072c336  7415                 je 0x72c34d
// 0072c338  8b00                 mov eax, dword ptr [eax]
// 0072c33a  85c0                 test eax, eax
// 0072c33c  7409                 je 0x72c347
// 0072c33e  6a02                 push 2
// 0072c340  57                   push edi
// 0072c341  57                   push edi
// 0072c342  ffd0                 call eax
// 0072c344  83c40c               add esp, 0xc
// 0072c347  c70600000000         mov dword ptr [esi], 0
// 0072c34d  83c628               add esi, 0x28
// 0072c350  83c728               add edi, 0x28
// 0072c353  3bf3                 cmp esi, ebx
// 0072c355  75db                 jne 0x72c332
// 0072c357  5f                   pop edi
// 0072c358  5e                   pop esi
// 0072c359  5b                   pop ebx
// 0072c35a  c3                   ret 
// copied from an identical function in another client (function ?destroy_range@ns_ROCX000003@@YAXPAUElem@1@0@Z)

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
