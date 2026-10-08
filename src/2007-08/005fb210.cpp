// from server: 64% by colin
// roc 2007-08 005fb210  unit: RBX::FlatTool  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fb210
//
// 005fb210  56                   push esi
// 005fb211  8b742408             mov esi, dword ptr [esp + 8]
// 005fb215  8b0e                 mov ecx, dword ptr [esi]
// 005fb217  e8448bf7ff           call 0x573d60
// 005fb21c  8bce                 mov ecx, esi
// 005fb21e  e8fde2fbff           call 0x5b9520
// 005fb223  8b0e                 mov ecx, dword ptr [esi]
// 005fb225  e8568bf7ff           call 0x573d80
// 005fb22a  5e                   pop esi
// 005fb22b  c20400               ret 4

struct FlatTool {
    void construct();
};

struct Sub {
    void method1();
    void method2();
};

struct Holder {
    Sub* ptr;
};

void FlatTool::construct()
{
    Holder* h = *(Holder**)this;
    h->ptr->method1();
    ((Sub*)this)->method2();
    h->ptr->method1();
}
