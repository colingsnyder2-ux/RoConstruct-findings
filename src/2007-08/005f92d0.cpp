// from server: 62% by colin
// roc 2007-08 005f92d0  unit: RBX::VDebrisService::?$FactoryProduct  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f92d0
//
// 005f92d0  8b442408             mov eax, dword ptr [esp + 8]
// 005f92d4  83f802               cmp eax, 2
// 005f92d7  7519                 jne 0x5f92f2
// 005f92d9  56                   push esi
// 005f92da  8b742408             mov esi, dword ptr [esp + 8]
// 005f92de  56                   push esi
// 005f92df  b9c03b8b00           mov ecx, 0x8b3bc0
// 005f92e4  ff1508e77700         call dword ptr [0x77e708]
// 005f92ea  f6d8                 neg al
// 005f92ec  1bc0                 sbb eax, eax
// 005f92ee  23c6                 and eax, esi
// 005f92f0  5e                   pop esi
// 005f92f1  c3                   ret 
// 005f92f2  8b542404             mov edx, dword ptr [esp + 4]
// 005f92f6  c644240800           mov byte ptr [esp + 8], 0
// 005f92fb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f92ff  51                   push ecx
// 005f9300  50                   push eax
// 005f9301  52                   push edx
// 005f9302  e849ffffff           call 0x5f9250
// 005f9307  83c40c               add esp, 0xc
// 005f930a  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct FactoryProduct {
    static type_info typeInfo;
    static void* createInstance(int, void*, int);
    void* createByName(int, void*, int);
};

type_info FactoryProduct::typeInfo;

void* FactoryProduct::createByName(int a, void* b, int c) {
    if (c == 2) {
        void* p = b;
        if (typeInfo == *(type_info*)0x8b3bc0) {
            return p;
        }
        return 0;
    }
    return createInstance(a, b, c);
}
