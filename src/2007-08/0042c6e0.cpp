// from server: 12% by colin
// roc 2007-08 0042c6e0  unit: CLuaHtmlView  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042c6e0
//
// 0042c6e0  ff642404             jmp dword ptr [esp + 4]

struct CLuaHtmlView {
    int f();
};

extern "C" __declspec(dllimport) void __stdcall func_0042c6e0(int);

int CLuaHtmlView::f() {
    func_0042c6e0(*reinterpret_cast<int*>(this));
    return 0;
}
