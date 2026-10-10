// from server: 25% by colin
struct CXTPDockingPaneTabbedContainer_CContainerDropTarget {
    char pad[0x1c4];
    void* construct(unsigned int);
};

extern "C" void* __stdcall sub_62FEF6(unsigned int);
extern "C" void __stdcall sub_77EE14(void*);
extern "C" void __stdcall sub_6D2910(void*, void*);
extern "C" void __stdcall sub_6305DA();
extern "C" void __stdcall sub_71FA90();
extern "C" void __stdcall sub_6FE2E0();
extern "C" void __stdcall sub_672220();
extern "C" void __stdcall sub_68A160();
extern "C" void __stdcall sub_6DF100();
extern "C" void __stdcall sub_738514();
extern "C" void __stdcall sub_738334();

void* CXTPDockingPaneTabbedContainer_CContainerDropTarget::construct(unsigned int arg) {
    sub_6305DA();
    sub_71FA90();
    sub_6FE2E0();
    sub_672220();
    sub_68A160();
    void* p1 = sub_62FEF6(0x14);
    if (p1) {
        sub_6DF100();
    }
    void* p2 = sub_62FEF6(0x24);
    if (p2) {
        *(unsigned int*)((char*)p2 + 0x14) = 0x24f1;
        *(void**)((char*)p2 + 0x10) = (char*)this + 0x54;
        *(unsigned int*)((char*)p2 + 0x1c) = 0;
        *(unsigned int*)((char*)p2 + 0x18) = 0;
        *(unsigned int*)((char*)p2 + 0x20) = 0;
        sub_77EE14(p2);
    }
    void* p3 = sub_62FEF6(0x24);
    if (p3) {
        *(unsigned int*)((char*)p3 + 0x14) = 0x24f2;
        *(void**)((char*)p3 + 0x10) = (char*)this + 0x54;
        *(unsigned int*)((char*)p3 + 0x1c) = 0;
        *(unsigned int*)((char*)p3 + 0x18) = 0;
        *(unsigned int*)((char*)p3 + 0x20) = 0;
        sub_77EE14(p3);
    }
    void* p4 = sub_62FEF6(0x24);
    if (p4) {
        *(unsigned int*)((char*)p4 + 0x14) = 0x24f3;
        *(void**)((char*)p4 + 0x10) = (char*)this + 0x54;
        *(unsigned int*)((char*)p4 + 0x1c) = 0;
        *(unsigned int*)((char*)p4 + 0x18) = 0;
        *(unsigned int*)((char*)p4 + 0x20) = 0;
        sub_77EE14(p4);
    }
    void* p5 = sub_62FEF6(0x24);
    if (p5) {
        *(unsigned int*)((char*)p5 + 0x14) = 0x24f0;
        *(void**)((char*)p5 + 0x10) = (char*)this + 0x54;
        *(unsigned int*)((char*)p5 + 0x1c) = 0;
        *(unsigned int*)((char*)p5 + 0x18) = 0;
        *(unsigned int*)((char*)p5 + 0x20) = 0;
        sub_77EE14(p5);
    }
    void* p6 = sub_62FEF6(0x24);
    if (p6) {
        *(unsigned int*)((char*)p6 + 0x14) = 0x24f4;
        *(void**)((char*)p6 + 0x10) = (char*)this + 0x54;
        *(unsigned int*)((char*)p6 + 0x1c) = 0;
        *(unsigned int*)((char*)p6 + 0x18) = 0;
        *(unsigned int*)((char*)p6 + 0x20) = 0;
        sub_77EE14(p6);
    }
    void* p7 = sub_62FEF6(0x38);
    if (p7) {
        sub_738514();
    }
    sub_738334();
    return this;
}
