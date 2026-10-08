// from server: 82% by colin
// roc 2007-08 006840e0  unit: PAVCXTPPropertyGridVerb::?$CArray  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006840e0
//
// 006840e0  56                   push esi
// 006840e1  8bf1                 mov esi, ecx
// 006840e3  e852420b00           call 0x73833a
// 006840e8  8d4e20               lea ecx, [esi + 0x20]
// 006840eb  c70634f17c00         mov dword ptr [esi], 0x7cf134
// 006840f1  e85affffff           call 0x684050
// 006840f6  c7463400000000       mov dword ptr [esi + 0x34], 0
// 006840fd  8bc6                 mov eax, esi
// 006840ff  5e                   pop esi
// 00684100  c3                   ret 

struct CXTPPropertyGridVerb {
    void Construct();
    void Clear();
    int field34;
    int Construct2();
};

void CXTPPropertyGridVerb::Construct() {
    this->field34 = 0;
}

int CXTPPropertyGridVerb::Construct2() {
    return 0;
}

extern "C" void __stdcall sub_73833A();
extern "C" void __stdcall sub_684050();

struct CArrayBase {
    void Init();
    void Destroy();
    int m_nSize;
};

void CArrayBase::Init() {
    sub_73833A();
}

void CArrayBase::Destroy() {
    sub_684050();
}

struct PAVCXTPPropertyGridVerb_CArray {
    void* vtable;
    char pad[0x1C];
    CArrayBase arr;
    int field34;

    PAVCXTPPropertyGridVerb_CArray* Construct();
};

PAVCXTPPropertyGridVerb_CArray* PAVCXTPPropertyGridVerb_CArray::Construct() {
    sub_73833A();
    this->vtable = (void*)0x7cf134;
    sub_684050();
    this->field34 = 0;
    return this;
}
