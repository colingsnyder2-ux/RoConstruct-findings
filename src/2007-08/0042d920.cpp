// from server: 100% by colin
// roc 2007-08 0042d920  unit: boost::any::_N::?$holder  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042d920
//
// 0042d920  53                   push ebx
// 0042d921  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0042d925  56                   push esi
// 0042d926  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042d92a  3bf3                 cmp esi, ebx
// 0042d92c  7435                 je 0x42d963
// 0042d92e  57                   push edi
// 0042d92f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0042d933  8b07                 mov eax, dword ptr [edi]
// 0042d935  8906                 mov dword ptr [esi], eax
// 0042d937  8b4f04               mov ecx, dword ptr [edi + 4]
// 0042d93a  85c9                 test ecx, ecx
// 0042d93c  7409                 je 0x42d947
// 0042d93e  8b11                 mov edx, dword ptr [ecx]
// 0042d940  8b4208               mov eax, dword ptr [edx + 8]
// 0042d943  ffd0                 call eax
// 0042d945  eb02                 jmp 0x42d949
// 0042d947  33c0                 xor eax, eax
// 0042d949  8b4e04               mov ecx, dword ptr [esi + 4]
// 0042d94c  85c9                 test ecx, ecx
// 0042d94e  894604               mov dword ptr [esi + 4], eax
// 0042d951  7408                 je 0x42d95b
// 0042d953  8b11                 mov edx, dword ptr [ecx]
// 0042d955  8b02                 mov eax, dword ptr [edx]
// 0042d957  6a01                 push 1
// 0042d959  ffd0                 call eax
// 0042d95b  83c608               add esi, 8
// 0042d95e  3bf3                 cmp esi, ebx
// 0042d960  75d1                 jne 0x42d933
// 0042d962  5f                   pop edi
// 0042d963  5e                   pop esi
// 0042d964  5b                   pop ebx
// 0042d965  c3                   ret 

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
