// from server: 85% by colin
// roc 2007-08 006e25b0  unit: CXTPDockingPaneTabbedContainer  size: 100 bytes

extern "C" int __stdcall GetDlgCtrlID(void*);

struct CXTPDockingPaneTabbedContainer {
    int sub_6e14a0(int, int);
    int sub_6e1f80(int);
    int method(int, int);
};

int CXTPDockingPaneTabbedContainer::method(int a, int b) {
    int edi = *(int*)((char*)this + 0x1a0);
    int v = this->sub_6e14a0((short)a, (short)((unsigned)a >> 16));
    if (v >= 0) {
        edi = this->sub_6e1f80(v);
    }
    if (edi == 0) {
        return 0;
    }
    int eax = *(int*)((char*)edi + 0xe0);
    if (eax == 0) {
        eax = *(int*)((char*)edi + 0xb4);
        if (eax != 0) {
            GetDlgCtrlID((void*)eax);
        }
        eax = *(int*)((char*)edi + 0xb8);
    }
    return eax + 0x20000;
}
