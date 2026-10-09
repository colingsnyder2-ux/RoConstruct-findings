// roc 2007-03 0041e380  unit: seg_00410000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0041e380
//
// 0041e380  8b442404             mov eax, dword ptr [esp + 4]
// 0041e384  83c174               add ecx, 0x74
// 0041e387  51                   push ecx
// 0041e388  68e8030000           push 0x3e8
// 0041e38d  50                   push eax
// 0041e38e  e82b052000           call 0x61e8be
// 0041e393  c20400               ret 4
// copied from an identical function in another client (function ?fn_ROCX00001e@CInsertObjectDialog@ns_ROCX00001e@@QAEHH@Z)

namespace ns_ROCX00001e {
extern "C" int __stdcall sub_0063042a(int, int, int);

struct CInsertObjectDialog {
    int fn_ROCX00001e(int param);
};

int CInsertObjectDialog::fn_ROCX00001e(int param) {
    return sub_0063042a(param, 0x3e8, (int)((char*)this + 0x74));
}
}
