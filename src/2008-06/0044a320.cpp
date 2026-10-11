// from server: 38% by colin
struct CRbxPlayDocTemplate {
    void* field_0;
    char field_4;
    CRbxPlayDocTemplate* init(void* arg);
};

extern "C" {
    void* __stdcall sub_8023C4(void*);
    void __stdcall sub_8023C8(void*);
    bool __stdcall sub_8023B4(void*);
    void* __stdcall sub_8023B8(void*);
    void __stdcall sub_8023BC(void*);
}

CRbxPlayDocTemplate* CRbxPlayDocTemplate::init(void* arg)
{
    field_0 = arg;
    void* v = *(void**)arg;
    void* p = (char*)arg + *(int*)((char*)v + 4);
    void* r = sub_8023C4(p);
    if (r != 0) {
        void* v2 = *(void**)field_0;
        void* p2 = (char*)field_0 + *(int*)((char*)v2 + 4);
        void* r2 = sub_8023C4(p2);
        sub_8023C8(r2);
    }
    void* v3 = *(void**)arg;
    void* p3 = (char*)arg + *(int*)((char*)v3 + 4);
    if (sub_8023B4(p3)) {
        void* v4 = *(void**)arg;
        void* p4 = (char*)arg + *(int*)((char*)v4 + 4);
        void* r4 = sub_8023B8(p4);
        if (r4 != 0) {
            void* v5 = *(void**)arg;
            void* p5 = (char*)arg + *(int*)((char*)v5 + 4);
            void* r5 = sub_8023B8(p5);
            sub_8023BC(r5);
        }
    }
    void* v6 = *(void**)arg;
    void* p6 = (char*)arg + *(int*)((char*)v6 + 4);
    field_4 = (char)sub_8023B4(p6);
    return this;
}
