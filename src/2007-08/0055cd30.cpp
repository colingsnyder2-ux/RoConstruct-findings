// from server: 100% by colin
// roc 2007-08 0055cd30  unit: RBX::DataModel  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055cd30
//
// 0055cd30  8b442408             mov eax, dword ptr [esp + 8]
// 0055cd34  56                   push esi
// 0055cd35  8bf1                 mov esi, ecx
// 0055cd37  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055cd3b  50                   push eax
// 0055cd3c  51                   push ecx
// 0055cd3d  8bce                 mov ecx, esi
// 0055cd3f  e85c15feff           call 0x53e2a0
// 0055cd44  8b9660010000         mov edx, dword ptr [esi + 0x160]
// 0055cd4a  8b4204               mov eax, dword ptr [edx + 4]
// 0055cd4d  8d8e60010000         lea ecx, [esi + 0x160]
// 0055cd53  6a01                 push 1
// 0055cd55  ffd0                 call eax
// 0055cd57  5e                   pop esi
// 0055cd58  c20800               ret 8

struct DataModel {
    char pad[0x160];
    struct VTableHolder {
        virtual void f(int);
        virtual void g(int);
    } holder;
    void func(int, int);
};

void DataModel::func(int a, int b) {
    this->func(a, b);
    this->holder.g(1);
}
