// from server: 100% by colin
// roc 2007-08 00475880  unit: CInstanceRecord::CNameItem  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00475880
//
// 00475880  8b442404             mov eax, dword ptr [esp + 4]
// 00475884  6a00                 push 0
// 00475886  6a00                 push 0
// 00475888  50                   push eax
// 00475889  e872f4ffff           call 0x474d00
// 0047588e  c20800               ret 8

extern "C" int __stdcall SomeFunction(int, int, int);

struct CInstanceRecord {
    struct CNameItem {
        int f(int a, int b);
    };
};

int CInstanceRecord::CNameItem::f(int a, int b) {
    return SomeFunction(a, 0, 0);
}
