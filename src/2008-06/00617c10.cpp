// from server: 77% by colin
struct InputObject;

struct SetNode {
    SetNode* next;
    SetNode* prev;
    SetNode* self;
};

struct Set {
    char pad[0x18];
    SetNode* head;
    int size;
};

struct InputVt;

struct InputObj {
    char pad[4];
    InputVt* vt;
    int val;
};

struct InputVt {
    virtual bool check(int code);
};

struct Unknown1 {
    void func(int);
};

struct Unknown2 {
    void func();
};

extern "C" void __cdecl func_00669050(Set* set, void* item);
extern "C" void* __cdecl func_00581cc0(void* set, int val);
extern "C" void __cdecl func_005675d0(void* node);

struct BoxSelectCommand {
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

    void onMouseDown(InputObject* inputObject);
};

void BoxSelectCommand::onMouseDown(InputObject* inputObject) {
    void* sel = *(void**)((char*)this + 0x4c);
    void* item = *(void**)((char*)sel + 4);
    Set* set = (Set*)((char*)this + 0x34);
    func_00669050(set, item);

    SetNode* head = set->head;
    head->prev = head;
    head = set->head;
    set->size = 0;
    head->next = head;
    SetNode* node = set->head;
    node->self = node;

    void** vt = *(void***)this;
    void (*fn)(void*) = (void (*)(void*))vt[9];
    fn(this);

    InputObj* io = (InputObj*)inputObject;
    InputVt* ivt = io->vt;
    bool r = ivt->check(0x12f);
    if (!r) {
        r = ivt->check(0x130);
    }
    *(bool*)((char*)this + 0x28) = r;
    if (!r) {
        Unknown1* u1 = (Unknown1*)((char*)this + 0x1c);
        u1->func(1);
        Unknown2* u2 = (Unknown2*)u1;
        u2->func();
    }
    int v = io->val;
    *(int*)((char*)this + 0x2a) = v;
    int v2 = io->val;
    *(int*)((char*)this + 0x2e) = v2;
}
