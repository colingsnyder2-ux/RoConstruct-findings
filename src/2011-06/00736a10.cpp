// from server: 89% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

struct VStudioTool_EventDesc {
    void* field0;
};

extern "C" {
    bool __stdcall compare_type_info(const type_info*, const type_info*);
}

extern type_info type_info_placeholder;
extern type_info type_info_CenterDialogType;

VStudioTool_EventDesc* __cdecl func(VStudioTool_EventDesc* p) {
    if (p == 0) return 0;
    type_info* ti;
    if (p->field0 != 0) {
        void** vtbl = *(void***)p->field0;
        typedef type_info* (__fastcall *GetTypeFn)(void*);
        GetTypeFn fn = (GetTypeFn)vtbl[1];
        ti = fn(p->field0);
    } else {
        ti = &type_info_placeholder;
    }
    if (compare_type_info(ti, &type_info_CenterDialogType)) {
        return (VStudioTool_EventDesc*)((char*)p->field0 + 4);
    }
    return 0;
}
