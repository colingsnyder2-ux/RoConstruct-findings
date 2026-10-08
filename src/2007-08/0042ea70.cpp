// from server: 59% by colin
// roc 2007-08 0042ea70  unit: MyXTPCommandBars  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042ea70
//
// 0042ea70  56                   push esi
// 0042ea71  6a00                 push 0
// 0042ea73  8bf1                 mov esi, ecx
// 0042ea75  68b4a77800           push 0x78a7b4
// 0042ea7a  56                   push esi
// 0042ea7b  8d8ef4000000         lea ecx, [esi + 0xf4]
// 0042ea81  e8faf32300           call 0x66de80
// 0042ea86  8b442408             mov eax, dword ptr [esp + 8]
// 0042ea8a  85c0                 test eax, eax
// 0042ea8c  7406                 je 0x42ea94
// 0042ea8e  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0042ea94  50                   push eax
// 0042ea95  8bce                 mov ecx, esi
// 0042ea97  e8ae142000           call 0x62ff4a
// 0042ea9c  f7d8                 neg eax
// 0042ea9e  1bc0                 sbb eax, eax
// 0042eaa0  f7d8                 neg eax
// 0042eaa2  5e                   pop esi
// 0042eaa3  c20400               ret 4

struct MyXTPCommandBars {
    char pad[0xf4];
    int field_f4;
    char pad2[4];
    int field_fc;
    int sub_42ea70(int);
};

extern "C" int __stdcall sub_66de80(int, int, int, int);
extern "C" int __stdcall sub_62ff4a();

int MyXTPCommandBars::sub_42ea70(int a) {
    sub_66de80((int)(this + 0xf4), (int)this, 0x78a7b4, 0);
    int v = a;
    if (v != 0) {
        v = this->field_fc;
    }
    int r = sub_62ff4a();
    return r != 0;
}
