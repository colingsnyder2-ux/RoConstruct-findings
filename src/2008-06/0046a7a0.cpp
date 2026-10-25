// from server: 100% by atomic.potato
// roc 2008-06 0046a7a0  unit: CWebToolbox  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046a7a0
//
// 0046a7a0  e8c3642300           call 0x6a0c68
// 0046a7a5  8b442404             mov eax, dword ptr [esp + 4]
// 0046a7a9  c7400c32000000       mov dword ptr [eax + 0xc], 0x32
// 0046a7b0  c20400               ret 4

extern "C" void __cdecl func_006a0c68();

struct CWebToolbox
{
    void f(CWebToolbox* value);
};

void CWebToolbox::f(CWebToolbox* value)
{
    func_006a0c68();
    *(int*)((char*)value + 12) = 50;
}
