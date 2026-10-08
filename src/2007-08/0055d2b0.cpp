// from server: 29% by colin
// roc 2007-08 0055d2b0  unit: RBX::DataModel  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055d2b0
//
// 0055d2b0  8b4104               mov eax, dword ptr [ecx + 4]
// 0055d2b3  83e801               sub eax, 1
// 0055d2b6  7425                 je 0x55d2dd
// 0055d2b8  83e801               sub eax, 1
// 0055d2bb  7405                 je 0x55d2c2
// 0055d2bd  32c0                 xor al, al
// 0055d2bf  c20400               ret 4
// 0055d2c2  8b4908               mov ecx, dword ptr [ecx + 8]
// 0055d2c5  51                   push ecx
// 0055d2c6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055d2ca  83c104               add ecx, 4
// 0055d2cd  ff1570e67700         call dword ptr [0x77e670]
// 0055d2d3  f7d8                 neg eax
// 0055d2d5  1bc0                 sbb eax, eax
// 0055d2d7  83c001               add eax, 1
// 0055d2da  c20400               ret 4
// 0055d2dd  8b542404             mov edx, dword ptr [esp + 4]
// 0055d2e1  33c0                 xor eax, eax
// 0055d2e3  3b5108               cmp edx, dword ptr [ecx + 8]
// 0055d2e6  0f94c0               sete al
// 0055d2e9  c20400               ret 4

struct DataModel {
    int field4;
    int field8;
    bool compare(const DataModel& other) const;
};

bool DataModel::compare(const DataModel& other) const {
    int v = field4 - 1;
    if (v == 0) {
        return other.field8 == field8;
    }
    v = v - 1;
    if (v == 0) {
        return field8 == other.field8;
    }
    return false;
}
