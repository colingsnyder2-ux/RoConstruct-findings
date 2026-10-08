// from server: 100% by colin
// roc 2007-08 00656830  unit: CXTPReportRow_Batch  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00656830
//
// 00656830  8b81cc000000         mov eax, dword ptr [ecx + 0xcc]
// 00656836  83f8ff               cmp eax, -1
// 00656839  740f                 je 0x65684a
// 0065683b  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 00656841  8b11                 mov edx, dword ptr [ecx]
// 00656843  50                   push eax
// 00656844  8b425c               mov eax, dword ptr [edx + 0x5c]
// 00656847  ffd0                 call eax
// 00656849  c3                   ret 
// 0065684a  33c0                 xor eax, eax
// 0065684c  c3                   ret 

struct CXTPReportRow_Batch {
    int GetValue();
};

struct Inner {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual int v23(int);
};

int CXTPReportRow_Batch::GetValue() {
    int idx = *(int*)((char*)this + 0xcc);
    if (idx != -1) {
        Inner* p = *(Inner**)((char*)this + 0xa0);
        return p->v23(idx);
    }
    return 0;
}
