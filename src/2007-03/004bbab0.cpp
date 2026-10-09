// roc 2007-03 004bbab0  unit: seg_004b0000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004bbab0
//
// 004bbab0  56                   push esi
// 004bbab1  57                   push edi
// 004bbab2  8bf1                 mov esi, ecx
// 004bbab4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004bbab8  8d44240c             lea eax, [esp + 0xc]
// 004bbabc  50                   push eax
// 004bbabd  51                   push ecx
// 004bbabe  8bce                 mov ecx, esi
// 004bbac0  e86bffffff           call 0x4bba30
// 004bbac5  807c240c00           cmp byte ptr [esp + 0xc], 0
// 004bbaca  8bf8                 mov edi, eax
// 004bbacc  7408                 je 0x4bbad6
// 004bbace  5f                   pop edi
// 004bbacf  83c8ff               or eax, 0xffffffff
// 004bbad2  5e                   pop esi
// 004bbad3  c20800               ret 8
// 004bbad6  3b7e04               cmp edi, dword ptr [esi + 4]
// 004bbad9  7219                 jb 0x4bbaf4
// 004bbadb  8b542410             mov edx, dword ptr [esp + 0x10]
// 004bbadf  8b02                 mov eax, dword ptr [edx]
// 004bbae1  50                   push eax
// 004bbae2  8bce                 mov ecx, esi
// 004bbae4  e897e6ffff           call 0x4ba180
// 004bbae9  8b4604               mov eax, dword ptr [esi + 4]
// 004bbaec  5f                   pop edi
// 004bbaed  83e801               sub eax, 1
// 004bbaf0  5e                   pop esi
// 004bbaf1  c20800               ret 8
// 004bbaf4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004bbaf8  8b11                 mov edx, dword ptr [ecx]
// 004bbafa  57                   push edi
// 004bbafb  52                   push edx
// 004bbafc  8bce                 mov ecx, esi
// 004bbafe  e8ede6ffff           call 0x4ba1f0
// 004bbb03  8bc7                 mov eax, edi
// 004bbb05  5f                   pop edi
// 004bbb06  5e                   pop esi
// 004bbb07  c20800               ret 8
// copied from an identical function in another client (function ?fn_ROCX000000@RakPeer@ns_ROCX000000@@QAEHHH@Z)

namespace ns_ROCX000000 {
struct RakPeer {
    int field0;
    unsigned int field4;
    int sub_4c50e0(int, char*);
    int sub_4c5170(int, int);
    int sub_4b92e0(int);
    int fn_ROCX000000(int, int);
};

int RakPeer::fn_ROCX000000(int a1, int a2)
{
    char local;
    int result;
    int idx;

    idx = sub_4c50e0(a1, &local);
    result = idx;
    if (local != 0) {
        return -1;
    }
    if ((unsigned int)result >= field4) {
        sub_4b92e0(*(int*)a2);
        return field4 - 1;
    }
    sub_4c5170(*(int*)a2, result);
    return result;
}
}
