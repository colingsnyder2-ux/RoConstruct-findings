// from server: 55% by colin
// roc 2007-08 00414610  unit: DHTMLWindow  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00414610
//
// 00414610  83ec0c               sub esp, 0xc
// 00414613  56                   push esi
// 00414614  8bf1                 mov esi, ecx
// 00414616  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0041461a  3bce                 cmp ecx, esi
// 0041461c  7446                 je 0x414664
// 0041461e  8b11                 mov edx, dword ptr [ecx]
// 00414620  53                   push ebx
// 00414621  57                   push edi
// 00414622  33ff                 xor edi, edi
// 00414624  33c0                 xor eax, eax
// 00414626  33db                 xor ebx, ebx
// 00414628  85d2                 test edx, edx
// 0041462a  7411                 je 0x41463d
// 0041462c  8b5908               mov ebx, dword ptr [ecx + 8]
// 0041462f  50                   push eax
// 00414630  8b4104               mov eax, dword ptr [ecx + 4]
// 00414633  50                   push eax
// 00414634  8bca                 mov ecx, edx
// 00414636  8bfa                 mov edi, edx
// 00414638  ffd1                 call ecx
// 0041463a  83c408               add esp, 8
// 0041463d  8d54240c             lea edx, [esp + 0xc]
// 00414641  3bf2                 cmp esi, edx
// 00414643  7411                 je 0x414656
// 00414645  8bcf                 mov ecx, edi
// 00414647  8b3e                 mov edi, dword ptr [esi]
// 00414649  890e                 mov dword ptr [esi], ecx
// 0041464b  8bc8                 mov ecx, eax
// 0041464d  8b4604               mov eax, dword ptr [esi + 4]
// 00414650  894e04               mov dword ptr [esi + 4], ecx
// 00414653  895e08               mov dword ptr [esi + 8], ebx
// 00414656  85ff                 test edi, edi
// 00414658  7408                 je 0x414662
// 0041465a  6a01                 push 1
// 0041465c  50                   push eax
// 0041465d  ffd7                 call edi
// 0041465f  83c408               add esp, 8
// 00414662  5f                   pop edi
// 00414663  5b                   pop ebx
// 00414664  8bc6                 mov eax, esi
// 00414666  5e                   pop esi
// 00414667  83c40c               add esp, 0xc
// 0041466a  c20400               ret 4

struct DHTMLWindow {
    void* field0;
    void* field4;
    void* field8;
    DHTMLWindow* assign(DHTMLWindow* other);
};

DHTMLWindow* DHTMLWindow::assign(DHTMLWindow* other) {
    if (other != this) {
        void* new0 = 0;
        void* new4 = 0;
        void* new8 = 0;
        void* old0 = other->field0;
        if (old0 != 0) {
            new8 = other->field8;
            new4 = other->field4;
            new0 = old0;
            void (*fn)(void*, void*) = (void (*)(void*, void*))old0;
            fn(new4, new0);
        }
        void* tmp0 = this->field0;
        void* tmp4 = this->field4;
        this->field0 = new0;
        this->field4 = new4;
        this->field8 = new8;
        if (tmp0 != 0) {
            void (*fn2)(void*, void*) = (void (*)(void*, void*))tmp0;
            fn2(tmp4, (void*)1);
        }
    }
    return this;
}
