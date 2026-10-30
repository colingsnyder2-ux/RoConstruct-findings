// roc 2009-12 00568960  unit: RakPeer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00568960
//
// 00568960  8b442408             mov eax, dword ptr [esp + 8]
// 00568964  8b542404             mov edx, dword ptr [esp + 4]
// 00568968  6a00                 push 0
// 0056896a  6a00                 push 0
// 0056896c  50                   push eax
// 0056896d  52                   push edx
// 0056896e  e87df4ffff           call 0x567df0
// 00568973  85c0                 test eax, eax
// 00568975  7506                 jne 0x56897d
// 00568977  83c8ff               or eax, 0xffffffff
// 0056897a  c20800               ret 8
// 0056897d  0fb78080130000       movzx eax, word ptr [eax + 0x1380]
// 00568984  c20800               ret 8
// copied from an identical function in another client (function ?func@RakPeer@ns_ROCX000001@@QAEHHH@Z)

namespace ns_ROCX000001 {
// from server: 100% by tester
struct RakPeer {
    int sub_4bcb80(int, int, int, int);
    int func(int, int);
};

int RakPeer::func(int a, int b) {
    int result = sub_4bcb80(a, b, 0, 0);
    if (result == 0) {
        return -1;
    }
    return *(unsigned short*)(result + 0x1380);
}
}
