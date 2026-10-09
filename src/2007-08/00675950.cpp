// from server: 100% by colin
// roc 2007-08 00675950  unit: CXTPCustomizeSheet  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00675950
//
// 00675950  56                   push esi
// 00675951  6a01                 push 1
// 00675953  8bf1                 mov esi, ecx
// 00675955  e890a5fbff           call 0x62feea
// 0067595a  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00675960  50                   push eax
// 00675961  6a69                 push 0x69
// 00675963  8bce                 mov ecx, esi
// 00675965  e800b0fbff           call 0x63096a
// 0067596a  8bc8                 mov ecx, eax
// 0067596c  e87ba9fbff           call 0x6302ec
// 00675971  8bce                 mov ecx, esi
// 00675973  e808ffffff           call 0x675880
// 00675978  8b9694000000         mov edx, dword ptr [esi + 0x94]
// 0067597e  8b4874               mov ecx, dword ptr [eax + 0x74]
// 00675981  895128               mov dword ptr [ecx + 0x28], edx
// 00675984  5e                   pop esi
// 00675985  c3                   ret 

struct CXTPCustomizeSheet {
    void sub_62FEEA(int);
    int sub_63096A(int, int);
    void sub_6302EC();
    int sub_675880();
    char pad[0x94];
    int field_94;
    void func_00675950();
};

void CXTPCustomizeSheet::func_00675950()
{
    sub_62FEEA(1);
    int v = sub_63096A(0x69, field_94);
    ((CXTPCustomizeSheet *)v)->sub_6302EC();
    int r = sub_675880();
    *(int *)(*(int *)(r + 0x74) + 0x28) = field_94;
}
