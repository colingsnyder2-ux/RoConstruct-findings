// from server: 53% by colin
struct InputObject;
struct Instance;

struct MouseCommand {
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
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
};

struct ServiceClientBase {
    void* ptr;
};

struct BoxSelectCommand {
    void* vtable;
    char pad[0x28];
    bool reverseSelecting;
    char pad2[1];
    short mouseDownViewX;
    short mouseDownViewY;
    short mouseCurrentViewX;
    short mouseCurrentViewY;
    char pad3[0x18];
    void* selectionPtr;
    void* setHead;
    int setSize;
    void* setEnd;

    void onMouseDown(InputObject* inputObject);
};

extern "C" void __cdecl func_00669050(void* set, void* item);
extern "C" void* __cdecl func_00581cc0(void* set, int val);
extern "C" void __cdecl func_005675d0(void* node);

void BoxSelectCommand::onMouseDown(InputObject* inputObject) {
    void* sel = *(void**)((char*)this + 0x4c);
    void* item = *(void**)((char*)sel + 4);
    func_00669050((char*)this + 0x34, item);

    void* head = *(void**)((char*)this + 0x34 + 0x18);
    *(void**)((char*)head + 4) = head;
    head = *(void**)((char*)this + 0x34 + 0x18);
    *(int*)((char*)this + 0x34 + 0x1c) = 0;
    *(void**)head = head;
    void* node = *(void**)((char*)this + 0x34 + 0x18);
    *(void**)((char*)node + 8) = node;

    void** vt = *(void***)this;
    void (*fn)(void*) = (void (*)(void*))vt[9];
    fn(this);

    void* input = *(void**)((char*)inputObject + 4);
    void** ivt = *(void***)input;
    bool (*check)(void*, int) = (bool (*)(void*, int))ivt[5];
    bool r = check(input, 0x12f);
    if (!r) {
        r = check(input, 0x130);
    }
    reverseSelecting = r;
    if (!r) {
        void* s = func_00581cc0((char*)this + 0x1c, 1);
        func_005675d0(s);
    }
    int v = *(int*)((char*)inputObject + 8);
    *(int*)((char*)this + 0x2a) = v;
    int v2 = *(int*)((char*)inputObject + 8);
    *(int*)((char*)this + 0x2e) = v2;
}
