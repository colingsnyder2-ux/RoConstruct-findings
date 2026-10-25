// from server: 100% by tester
// roc 2011-06 004e47a0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e47a0
//
// 004e47a0  8b09                 mov ecx, dword ptr [ecx]
// 004e47a2  8b4108               mov eax, dword ptr [ecx + 8]
// 004e47a5  50                   push eax
// 004e47a6  b980b0c100           mov ecx, 0xc1b080
// 004e47ab  ff15500aa400         call dword ptr [0xa40a50]
// 004e47b1  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct holder {
    void* vtable;
    void* pad;
    type_info* info;
};

extern type_info type_info_8827f8;

bool (type_info::*type_info_eq)(const type_info&) const;

struct bad_any_cast {
    holder* h;
    bool matches() const;
};

bool bad_any_cast::matches() const {
    holder* p = h;
    return (type_info_8827f8.*type_info_eq)(*p->info);
}
