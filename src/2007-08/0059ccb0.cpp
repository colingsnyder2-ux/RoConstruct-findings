// from server: 100% by colin
// roc 2007-08 0059ccb0  unit: RBX::VLegacyHopperService::?$FactoryProduct  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059ccb0
//
// 0059ccb0  56                   push esi
// 0059ccb1  8bf1                 mov esi, ecx
// 0059ccb3  e8983a0600           call 0x600750
// 0059ccb8  c7063c1c7b00         mov dword ptr [esi], 0x7b1c3c
// 0059ccbe  c74604301c7b00       mov dword ptr [esi + 4], 0x7b1c30
// 0059ccc5  c74610281c7b00       mov dword ptr [esi + 0x10], 0x7b1c28
// 0059cccc  c74614181c7b00       mov dword ptr [esi + 0x14], 0x7b1c18
// 0059ccd3  c7462c081c7b00       mov dword ptr [esi + 0x2c], 0x7b1c08
// 0059ccda  c74644f81b7b00       mov dword ptr [esi + 0x44], 0x7b1bf8
// 0059cce1  c7465ce81b7b00       mov dword ptr [esi + 0x5c], 0x7b1be8
// 0059cce8  c74674d81b7b00       mov dword ptr [esi + 0x74], 0x7b1bd8
// 0059ccef  c7868c000000c81b7b00 mov dword ptr [esi + 0x8c], 0x7b1bc8
// 0059ccf9  c786e8000000c01b7b00 mov dword ptr [esi + 0xe8], 0x7b1bc0
// 0059cd03  8bc6                 mov eax, esi
// 0059cd05  5e                   pop esi
// 0059cd06  c3                   ret 

struct Base {
    void construct();
};

struct FactoryProduct : Base {
    FactoryProduct* init();
};

FactoryProduct* FactoryProduct::init() {
    construct();
    *(int*)((char*)this + 0x00) = 0x7b1c3c;
    *(int*)((char*)this + 0x04) = 0x7b1c30;
    *(int*)((char*)this + 0x10) = 0x7b1c28;
    *(int*)((char*)this + 0x14) = 0x7b1c18;
    *(int*)((char*)this + 0x2c) = 0x7b1c08;
    *(int*)((char*)this + 0x44) = 0x7b1bf8;
    *(int*)((char*)this + 0x5c) = 0x7b1be8;
    *(int*)((char*)this + 0x74) = 0x7b1bd8;
    *(int*)((char*)this + 0x8c) = 0x7b1bc8;
    *(int*)((char*)this + 0xe8) = 0x7b1bc0;
    return this;
}
