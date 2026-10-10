// from server: 34% by colin
extern "C" __declspec(dllimport) long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct CRobloxTreeCtrlNode {
    char pad[0x0c];
    int field_0c;
    char pad2[0x20];
    void* field_30;
    CRobloxTreeCtrlNode* field_34;
    char pad3[0x0c];
    int field_44;
    void method();
};

void CRobloxTreeCtrlNode::method() {
    if (field_44 == 0)
        return;

    void* vtable = *(void**)field_30;
    typedef int (__thiscall *Fn148)(void*);
    Fn148 fn148 = *(Fn148*)((char*)vtable + 0x148);
    if (fn148(field_30) == 0) {
        void* vt2 = *(void**)field_30;
        typedef void (__thiscall *Fn144)(void*, int, int, int);
        Fn144 fn144 = *(Fn144*)((char*)vt2 + 0x144);
        fn144(field_30, field_44, 0, 2);
        return;
    }

    void* vt3 = *(void**)field_30;
    typedef void* (__thiscall *Fn148b)(void*, int);
    Fn148b fn148b = *(Fn148b*)((char*)vt3 + 0x148);
    void* result = fn148b(field_30, field_0c);

    typedef char (__thiscall *Fn2b60)(void*);
    Fn2b60 fn2b60 = (Fn2b60)0x422b60;
    if (fn2b60(result) == 0) {
        void* vt4 = *(void**)field_30;
        typedef void (__thiscall *Fn144b)(void*, int, int, int);
        Fn144b fn144b = *(Fn144b*)((char*)vt4 + 0x144);
        fn144b(field_30, field_44, 0, 2);
        return;
    }

    CRobloxTreeCtrlNode* node = field_34;
    while (node != 0) {
        char saved = *(char*)((char*)node + 0x2d);
        *(char*)((char*)node + 0x2d) = 1;
        SendMessageA(*(void**)((char*)node + 0x30), 0x1102, 0x4002, node->field_44);
        *(char*)((char*)node + 0x2d) = saved;
        node = node->field_34;
    }

    typedef void (__thiscall *Fn666230)(void*, int, int, int);
    Fn666230 fn666230 = (Fn666230)0x666230;
    fn666230((char*)field_30 + 0x54, field_44, field_44, 0);

    SendMessageA(*(void**)((char*)field_30 + 0x20), 0x1114, 0, field_44);
}
