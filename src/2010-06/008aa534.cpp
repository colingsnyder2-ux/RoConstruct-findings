// from server: 68% by colin
// roc-flags: /O2 /Ob2 /Oy- /hotpatch /GS- /EHsc /MD
extern "C" void __stdcall helper_008aa534(int); extern "C" __declspec(dllimport) void target_008aa534();
void func_008aa534() { helper_008aa534(1); target_008aa534(); }
