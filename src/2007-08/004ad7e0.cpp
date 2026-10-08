// from server: 66% by colin
// roc 2007-08 004ad7e0  unit: RBX::Network::Replicator::DeleteInstanceItem  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ad7e0
//
// 004ad7e0  8b442408             mov eax, dword ptr [esp + 8]
// 004ad7e4  83f802               cmp eax, 2
// 004ad7e7  7519                 jne 0x4ad802
// 004ad7e9  56                   push esi
// 004ad7ea  8b742408             mov esi, dword ptr [esp + 8]
// 004ad7ee  56                   push esi
// 004ad7ef  b9d0178900           mov ecx, 0x8917d0
// 004ad7f4  ff1508e77700         call dword ptr [0x77e708]
// 004ad7fa  f6d8                 neg al
// 004ad7fc  1bc0                 sbb eax, eax
// 004ad7fe  23c6                 and eax, esi
// 004ad800  5e                   pop esi
// 004ad801  c3                   ret 
// 004ad802  8b542404             mov edx, dword ptr [esp + 4]
// 004ad806  c644240800           mov byte ptr [esp + 8], 0
// 004ad80b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ad80f  51                   push ecx
// 004ad810  50                   push eax
// 004ad811  52                   push edx
// 004ad812  e8d9f2ffff           call 0x4acaf0
// 004ad817  83c40c               add esp, 0xc
// 004ad81a  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" void* __stdcall sub_4acaf0(void*, int, char);

struct DeleteInstanceItem {
    int method(int a, int b);
};

int DeleteInstanceItem::method(int a, int b)
{
    if (b == 2) {
        type_info* t = (type_info*)0x8917d0;
        if (*t == *(type_info*)a)
            return a;
        return 0;
    }
    char c = 0;
    sub_4acaf0((void*)a, b, c);
    return 0;
}
