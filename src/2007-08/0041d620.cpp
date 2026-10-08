// from server: 100% by colin
// roc 2007-08 0041d620  unit: CInsertObjectDialog  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041d620
//
// 0041d620  8b442404             mov eax, dword ptr [esp + 4]
// 0041d624  83c174               add ecx, 0x74
// 0041d627  51                   push ecx
// 0041d628  68e8030000           push 0x3e8
// 0041d62d  50                   push eax
// 0041d62e  e8f72d2100           call 0x63042a
// 0041d633  c20400               ret 4

extern "C" int __stdcall sub_0063042a(int, int, int);

struct CInsertObjectDialog {
    int func_0041d620(int param);
};

int CInsertObjectDialog::func_0041d620(int param) {
    return sub_0063042a(param, 0x3e8, (int)((char*)this + 0x74));
}
