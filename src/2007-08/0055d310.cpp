// from server: 57% by colin
// roc 2007-08 0055d310  unit: RBX::DataModel  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055d310
//
// 0055d310  83790402             cmp dword ptr [ecx + 4], 2
// 0055d314  7513                 jne 0x55d329
// 0055d316  8b4108               mov eax, dword ptr [ecx + 8]
// 0055d319  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055d31d  50                   push eax
// 0055d31e  ff1590e67700         call dword ptr [0x77e690]
// 0055d324  b001                 mov al, 1
// 0055d326  c20400               ret 4
// 0055d329  32c0                 xor al, al
// 0055d32b  c20400               ret 4

struct DataModel {
    int field4;
    int field8;
    bool method(int arg);
};

bool DataModel::method(int arg) {
    if (field4 == 2)
        return false;
    extern void __stdcall assign_string(int, int);
    assign_string(field8, arg);
    return true;
}
