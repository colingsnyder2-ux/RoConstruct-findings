// from server: 100% by king_originala
// roc 2008-06 00575840  unit: RBX::DataModel  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00575840
//
// 00575840  80796100             cmp byte ptr [ecx + 0x61], 0
// 00575844  7438                 je 0x57587e
// 00575846  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057584a  83e800               sub eax, 0
// 0057584d  7420                 je 0x57586f
// 0057584f  83e801               sub eax, 1
// 00575852  7410                 je 0x575864
// 00575854  83e801               sub eax, 1
// 00575857  7525                 jne 0x57587e
// 00575859  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0057585c  e8ffa90200           call 0x5a0260
// 00575861  c20c00               ret 0xc
// 00575864  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00575867  e874de0200           call 0x5a36e0
// 0057586c  c20c00               ret 0xc
// 0057586f  837c240801           cmp dword ptr [esp + 8], 1
// 00575874  7508                 jne 0x57587e
// 00575876  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00575879  e872b50200           call 0x5a0df0
// 0057587e  c20c00               ret 0xc

struct Worker {
    void finish();
    void clear();
    void update();
};

struct DataModel {
    char padding0[0x0C];
    Worker* worker;
    char padding1[0x51];
    unsigned char enabled;

    void process(int unused, int value, int action);
};

void DataModel::process(int unused, int value, int action)
{
    if (enabled) {
        switch (action) {
        case 0:
            if (value == 1)
                worker->clear();
            break;
        case 1:
            worker->update();
            break;
        case 2:
            worker->finish();
            break;
        }
    }
}
