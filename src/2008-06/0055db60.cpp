// from server: 100% by king_originala
// roc 2008-06 0055db60  unit: std::D::DU?$char_traits::V?$basic_string::?$sp_counted_impl_p  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055db60
//
// 0055db60  64a100000000         mov eax, dword ptr fs:[0]
// 0055db66  6aff                 push -1
// 0055db68  6868e97c00           push 0x7ce968
// 0055db6d  50                   push eax
// 0055db6e  64892500000000       mov dword ptr fs:[0], esp
// 0055db75  56                   push esi
// 0055db76  8bf1                 mov esi, ecx
// 0055db78  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0055db7c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0055db84  c70600000000         mov dword ptr [esi], 0
// 0055db8a  85c0                 test eax, eax
// 0055db8c  7418                 je 0x55dba6
// 0055db8e  6a00                 push 0
// 0055db90  8d4e08               lea ecx, [esi + 8]
// 0055db93  51                   push ecx
// 0055db94  8d54242c             lea edx, [esp + 0x2c]
// 0055db98  8906                 mov dword ptr [esi], eax
// 0055db9a  8b00                 mov eax, dword ptr [eax]
// 0055db9c  52                   push edx
// 0055db9d  ffd0                 call eax
// 0055db9f  8b442428             mov eax, dword ptr [esp + 0x28]
// 0055dba3  83c40c               add esp, 0xc
// 0055dba6  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0055dbae  85c0                 test eax, eax
// 0055dbb0  7415                 je 0x55dbc7
// 0055dbb2  8b00                 mov eax, dword ptr [eax]
// 0055dbb4  85c0                 test eax, eax
// 0055dbb6  740f                 je 0x55dbc7
// 0055dbb8  8d4c2424             lea ecx, [esp + 0x24]
// 0055dbbc  6a01                 push 1
// 0055dbbe  51                   push ecx
// 0055dbbf  8bd1                 mov edx, ecx
// 0055dbc1  52                   push edx
// 0055dbc2  ffd0                 call eax
// 0055dbc4  83c40c               add esp, 0xc
// 0055dbc7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055dbcb  8bc6                 mov eax, esi
// 0055dbcd  64890d00000000       mov dword ptr fs:[0], ecx
// 0055dbd4  5e                   pop esi
// 0055dbd5  83c40c               add esp, 0xc
// 0055dbd8  c22800               ret 0x28

struct Table {
    void (__cdecl *manage)(void *, void *, int);
};

struct Argument {
    unsigned char prefix[8];
    Table *table;
    unsigned char padding[4];
    unsigned char data[24];

    ~Argument();
};

inline Argument::~Argument()
{
    if (table) {
        void (__cdecl *fn)(void *, void *, int) = table->manage;
        if (fn)
            fn(data, data, 1);
    }
}

struct S {
    Table *table;
    unsigned char padding[4];
    unsigned char data[24];

    S(Argument arg);
};

S::S(Argument arg)
{
    table = 0;
    if (arg.table) {
        table = arg.table;
        table->manage(arg.data, data, 0);
    }
}
