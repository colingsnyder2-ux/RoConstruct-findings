// from server: 75% by colin
// roc 2007-08 0055cd60  unit: RBX::DataModel  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055cd60
//
// 0055cd60  8b442404             mov eax, dword ptr [esp + 4]
// 0055cd64  56                   push esi
// 0055cd65  50                   push eax
// 0055cd66  8bf1                 mov esi, ecx
// 0055cd68  e8237affff           call 0x554790
// 0055cd6d  8b9660010000         mov edx, dword ptr [esi + 0x160]
// 0055cd73  8d8e60010000         lea ecx, [esi + 0x160]
// 0055cd79  5e                   pop esi
// 0055cd7a  c744240401000000     mov dword ptr [esp + 4], 1
// 0055cd82  8b4204               mov eax, dword ptr [edx + 4]
// 0055cd85  ffe0                 jmp eax

struct DataModel {
    void sub_554790(int);
    void func(int);
};

void DataModel::func(int a) {
    sub_554790(a);
    int* p = (int*)((char*)this + 0x160);
    int* q = *(int**)p;
    *(int*)((char*)this + 0x160) = 1;
    void (*fn)() = (void (*)())*(int*)((char*)q + 4);
    fn();
}
