// from server: 98% by colin
// roc 2007-08 00675890  unit: CXTPCustomizeSheet  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00675890
//
// 00675890  56                   push esi
// 00675891  6a01                 push 1
// 00675893  8bf1                 mov esi, ecx
// 00675895  e850a6fbff           call 0x62feea
// 0067589a  33c0                 xor eax, eax
// 0067589c  398688000000         cmp dword ptr [esi + 0x88], eax
// 006758a2  8bce                 mov ecx, esi
// 006758a4  0f94c0               sete al
// 006758a7  50                   push eax
// 006758a8  6a65                 push 0x65
// 006758aa  e8bbb0fbff           call 0x63096a
// 006758af  8bc8                 mov ecx, eax
// 006758b1  e836aafbff           call 0x6302ec
// 006758b6  8bce                 mov ecx, esi
// 006758b8  e8c3ffffff           call 0x675880
// 006758bd  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 006758c3  8b4874               mov ecx, dword ptr [eax + 0x74]
// 006758c6  895120               mov dword ptr [ecx + 0x20], edx
// 006758c9  5e                   pop esi
// 006758ca  c3                   ret 

struct CXTPCustomizeSheet {
    void sub_62FEEA(int);
    void* sub_63096A(int, int);
    void sub_6302EC();
    void* sub_675880();
    char pad[0x88];
    int field_0x88;
    void func();
};

void CXTPCustomizeSheet::func() {
    sub_62FEEA(1);
    int flag = (field_0x88 == 0) ? 1 : 0;
    void* p = sub_63096A(0x65, flag);
    sub_6302EC();
    void* q = sub_675880();
    int* r = *(int**)((char*)q + 0x74);
    r[0x20 / 4] = field_0x88;
}
