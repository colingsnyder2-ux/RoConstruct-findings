// from server: 85% by colin
// roc 2007-08 0065e480  unit: CXTPReportControl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065e480
//
// 0065e480  83793400             cmp dword ptr [ecx + 0x34], 0
// 0065e484  7404                 je 0x65e48a
// 0065e486  8d4130               lea eax, [ecx + 0x30]
// 0065e489  c3                   ret 
// 0065e48a  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0065e48d  e8ce4f0700           call 0x6d3460
// 0065e492  8b4024               mov eax, dword ptr [eax + 0x24]
// 0065e495  8b80b0000000         mov eax, dword ptr [eax + 0xb0]
// 0065e49b  83c030               add eax, 0x30
// 0065e49e  c3                   ret 

struct Inner {
    char pad[0x24];
    char* field24;
};

struct Mid {
    char pad[0xb0];
    Inner* fieldb0;
};

struct Other {
    char pad[0x30];
};

struct CXTPReportControl {
    char pad0[0x30];
    int field30;
    int field34;
    char pad38[0x54 - 0x38];
    void* field54;
    Other* getOther();
    Other* getField30();
};

Other* CXTPReportControl::getField30() {
    if (field34 != 0) {
        return (Other*)((char*)this + 0x30);
    }
    Mid* m = (Mid*)getOther();
    return (Other*)((char*)m->fieldb0 + 0x30);
}
