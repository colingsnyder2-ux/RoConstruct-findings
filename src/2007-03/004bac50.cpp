// roc 2007-03 004bac50  unit: seg_004b0000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004bac50
//
// 004bac50  56                   push esi
// 004bac51  57                   push edi
// 004bac52  8bf1                 mov esi, ecx
// 004bac54  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004bac58  8d44240c             lea eax, [esp + 0xc]
// 004bac5c  50                   push eax
// 004bac5d  51                   push ecx
// 004bac5e  8bce                 mov ecx, esi
// 004bac60  e88bf3ffff           call 0x4b9ff0
// 004bac65  807c240c00           cmp byte ptr [esp + 0xc], 0
// 004bac6a  8bf8                 mov edi, eax
// 004bac6c  7408                 je 0x4bac76
// 004bac6e  5f                   pop edi
// 004bac6f  83c8ff               or eax, 0xffffffff
// 004bac72  5e                   pop esi
// 004bac73  c20800               ret 8
// 004bac76  3b7e04               cmp edi, dword ptr [esi + 4]
// 004bac79  7219                 jb 0x4bac94
// 004bac7b  8b542410             mov edx, dword ptr [esp + 0x10]
// 004bac7f  8b02                 mov eax, dword ptr [edx]
// 004bac81  50                   push eax
// 004bac82  8bce                 mov ecx, esi
// 004bac84  e8f7f4ffff           call 0x4ba180
// 004bac89  8b4604               mov eax, dword ptr [esi + 4]
// 004bac8c  5f                   pop edi
// 004bac8d  83e801               sub eax, 1
// 004bac90  5e                   pop esi
// 004bac91  c20800               ret 8
// 004bac94  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004bac98  8b11                 mov edx, dword ptr [ecx]
// 004bac9a  57                   push edi
// 004bac9b  52                   push edx
// 004bac9c  8bce                 mov ecx, esi
// 004bac9e  e84df5ffff           call 0x4ba1f0
// 004baca3  8bc7                 mov eax, edi
// 004baca5  5f                   pop edi
// 004baca6  5e                   pop esi
// 004baca7  c20800               ret 8
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
