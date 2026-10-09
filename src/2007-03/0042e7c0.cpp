// roc 2007-03 0042e7c0  unit: seg_00420000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042e7c0
//
// 0042e7c0  53                   push ebx
// 0042e7c1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0042e7c5  56                   push esi
// 0042e7c6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042e7ca  3bf3                 cmp esi, ebx
// 0042e7cc  7435                 je 0x42e803
// 0042e7ce  57                   push edi
// 0042e7cf  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0042e7d3  8b07                 mov eax, dword ptr [edi]
// 0042e7d5  8906                 mov dword ptr [esi], eax
// 0042e7d7  8b4f04               mov ecx, dword ptr [edi + 4]
// 0042e7da  85c9                 test ecx, ecx
// 0042e7dc  7409                 je 0x42e7e7
// 0042e7de  8b11                 mov edx, dword ptr [ecx]
// 0042e7e0  8b4208               mov eax, dword ptr [edx + 8]
// 0042e7e3  ffd0                 call eax
// 0042e7e5  eb02                 jmp 0x42e7e9
// 0042e7e7  33c0                 xor eax, eax
// 0042e7e9  8b4e04               mov ecx, dword ptr [esi + 4]
// 0042e7ec  85c9                 test ecx, ecx
// 0042e7ee  894604               mov dword ptr [esi + 4], eax
// 0042e7f1  7408                 je 0x42e7fb
// 0042e7f3  8b11                 mov edx, dword ptr [ecx]
// 0042e7f5  8b02                 mov eax, dword ptr [edx]
// 0042e7f7  6a01                 push 1
// 0042e7f9  ffd0                 call eax
// 0042e7fb  83c608               add esi, 8
// 0042e7fe  3bf3                 cmp esi, ebx
// 0042e800  75d1                 jne 0x42e7d3
// 0042e802  5f                   pop edi
// 0042e803  5e                   pop esi
// 0042e804  5b                   pop ebx
// 0042e805  c3                   ret 
// copied from an identical function in another client (function ?assign_range@ns_ROCX000006@@YAXPAUAnyValue@1@00@Z)

namespace ns_ROCX000006 {
struct Holder {
    void* vtable;
    void* data;
};

struct AnyValue {
    void* type;
    Holder* holder;
};

void assign_range(AnyValue* first, AnyValue* last, AnyValue* src) {
    while (first != last) {
        first->type = src->type;
        Holder* h = src->holder;
        void* newdata;
        if (h) {
            newdata = ((void* (__thiscall*)(Holder*))((void**)h->vtable)[2])(h);
        } else {
            newdata = 0;
        }
        Holder* old = first->holder;
        first->holder = (Holder*)newdata;
        if (old) {
            ((void (__thiscall*)(Holder*, int))((void**)old->vtable)[0])(old, 1);
        }
        first++;
    }
}
}
