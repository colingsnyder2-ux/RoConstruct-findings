// from server: 39% by colin
// roc 2007-08 006a6420  unit: IIPAVCXTPMenuBarMDIMenuInfo::?$CMap  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a6420

struct CXTPMenuBarMDIMenus;

struct CXTPMenuBarMDIMenuInfo {
    void construct();
    void init(int, int);
};

struct CXTPMenuBarMDIMenus {
    char pad0[0x20];
    char pad20[0xb4];
    unsigned int flags_d4;
    char pad_d8[0x94];
    void* ptr_16c;
    char pad_170[0xc];
    int field_17c;
    CXTPMenuBarMDIMenuInfo* info;
    void init(int, int);
};

extern "C" void __stdcall sub_77dd6c(void*);
extern "C" void* __cdecl sub_62fef6(unsigned int);
extern "C" void __fastcall sub_670500(CXTPMenuBarMDIMenus*);
extern "C" void __fastcall sub_67a190(CXTPMenuBarMDIMenuInfo*);

void CXTPMenuBarMDIMenus::init(int a, int b) {
    sub_670500(this);
    flags_d4 |= 0x18;
    sub_77dd6c((void*)0x7a0e64);
    field_17c = 0;
    CXTPMenuBarMDIMenuInfo* p = (CXTPMenuBarMDIMenuInfo*)sub_62fef6(0x248);
    if (p) {
        sub_67a190(p);
        *(void**)p = (void*)0x7d3f44;
        *(void**)((char*)p + 0x54) = (void*)0x7d3f34;
        *(void**)((char*)p + 0x5c) = (void*)0x7d3ed4;
    } else {
        p = 0;
    }
    ptr_16c = p;
    void** vt = *(void***)p;
    void (*fn)(CXTPMenuBarMDIMenuInfo*) = (void (*)(CXTPMenuBarMDIMenuInfo*))vt[0x188/4];
    fn(p);
    if (p->construct(), 0) {
    }
    info = p;
    CXTPMenuBarMDIMenuInfo* q = info;
    if (q == 0) {
        *(int*)((char*)p + 0x134) = 0;
    }
    this->init(a, b);
}
