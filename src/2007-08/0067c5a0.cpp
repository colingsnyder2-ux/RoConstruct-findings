// from server: 100% by colin
// roc 2007-08 0067c5a0  unit: CXTPControls  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067c5a0
//
// 0067c5a0  8b442404             mov eax, dword ptr [esp + 4]
// 0067c5a4  6aff                 push -1
// 0067c5a6  50                   push eax
// 0067c5a7  e8b4ffffff           call 0x67c560
// 0067c5ac  c20400               ret 4

struct CXTPControls
{
    void sub_0067C560(int, int);
    void func_0067C5A0(int);
};

void CXTPControls::func_0067C5A0(int a)
{
    sub_0067C560(a, -1);
}
