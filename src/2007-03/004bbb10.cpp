// roc 2007-03 004bbb10  unit: seg_004b0000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004bbb10
//
// 004bbb10  56                   push esi
// 004bbb11  57                   push edi
// 004bbb12  8bf1                 mov esi, ecx
// 004bbb14  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004bbb18  8d44240c             lea eax, [esp + 0xc]
// 004bbb1c  50                   push eax
// 004bbb1d  51                   push ecx
// 004bbb1e  8bce                 mov ecx, esi
// 004bbb20  e88bf1ffff           call 0x4bacb0
// 004bbb25  807c240c00           cmp byte ptr [esp + 0xc], 0
// 004bbb2a  8bf8                 mov edi, eax
// 004bbb2c  7408                 je 0x4bbb36
// 004bbb2e  5f                   pop edi
// 004bbb2f  83c8ff               or eax, 0xffffffff
// 004bbb32  5e                   pop esi
// 004bbb33  c20800               ret 8
// 004bbb36  3b7e04               cmp edi, dword ptr [esi + 4]
// 004bbb39  7219                 jb 0x4bbb54
// 004bbb3b  8b542410             mov edx, dword ptr [esp + 0x10]
// 004bbb3f  8b02                 mov eax, dword ptr [edx]
// 004bbb41  50                   push eax
// 004bbb42  8bce                 mov ecx, esi
// 004bbb44  e8d7f2ffff           call 0x4bae20
// 004bbb49  8b4604               mov eax, dword ptr [esi + 4]
// 004bbb4c  5f                   pop edi
// 004bbb4d  83e801               sub eax, 1
// 004bbb50  5e                   pop esi
// 004bbb51  c20800               ret 8
// 004bbb54  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004bbb58  8b11                 mov edx, dword ptr [ecx]
// 004bbb5a  57                   push edi
// 004bbb5b  52                   push edx
// 004bbb5c  8bce                 mov ecx, esi
// 004bbb5e  e8bdf3ffff           call 0x4baf20
// 004bbb63  8bc7                 mov eax, edi
// 004bbb65  5f                   pop edi
// 004bbb66  5e                   pop esi
// 004bbb67  c20800               ret 8
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
