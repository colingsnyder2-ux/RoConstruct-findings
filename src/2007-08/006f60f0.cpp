// from server: 81% by colin
// roc 2007-08 006f60f0  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f60f0
//
// 006f60f0  56                   push esi
// 006f60f1  8bf1                 mov esi, ecx
// 006f60f3  8b4634               mov eax, dword ptr [esi + 0x34]
// 006f60f6  57                   push edi
// 006f60f7  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006f60fb  89472c               mov dword ptr [edi + 0x2c], eax
// 006f60fe  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006f6101  8b91b4000000         mov edx, dword ptr [ecx + 0xb4]
// 006f6107  8d4e20               lea ecx, [esi + 0x20]
// 006f610a  895728               mov dword ptr [edi + 0x28], edx
// 006f610d  8b4108               mov eax, dword ptr [ecx + 8]
// 006f6110  57                   push edi
// 006f6111  50                   push eax
// 006f6112  e8f9c7fdff           call 0x6d2910
// 006f6117  8bce                 mov ecx, esi
// 006f6119  e822ffffff           call 0x6f6040
// 006f611e  8bc7                 mov eax, edi
// 006f6120  5f                   pop edi
// 006f6121  5e                   pop esi
// 006f6122  c20400               ret 4

struct CXTPPropertyGridInplaceButton;

struct Inner {
    char pad[0xb4];
    int field_b4;
};

struct Outer {
    char pad0[0x20];
    int field_20;
    int field_24;
    int field_28;
    char pad2[0x34 - 0x2c];
    Inner* field_34;
    void sub_6f6040();
    CXTPPropertyGridInplaceButton* sub_6f60f0(CXTPPropertyGridInplaceButton* p);
};

struct CXTPPropertyGridInplaceButton {
    char pad0[0x28];
    int field_28;
    int field_2c;
};

extern "C" void __stdcall sub_6d2910(int, CXTPPropertyGridInplaceButton*);

CXTPPropertyGridInplaceButton* Outer::sub_6f60f0(CXTPPropertyGridInplaceButton* p) {
    Inner* inner = this->field_34;
    p->field_2c = (int)inner;
    p->field_28 = this->field_34->field_b4;
    sub_6d2910(this->field_28, p);
    this->sub_6f6040();
    return p;
}
